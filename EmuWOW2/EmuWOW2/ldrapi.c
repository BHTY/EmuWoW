#include <windows.h>
#include <winnt.h>
#include <winternl.h>
#include "ldrapi.h"
#include "EmuWoW.h"
#include "thunk.h"
#include "ssdt.h"
#include <stdio.h>

IMAGE_NT_HEADERS* EmuGetNtHeader(LPVOID module) {
	return (char*)module + ((IMAGE_DOS_HEADER*)module)->e_lfanew;
}

LPWSTR GetFileNameFromPathW(LPWSTR lpPath) {
	wchar_t* LastSlash = lpPath;
	DWORD i;
	for (i = 0; lpPath[i] != NULL; i++)
	{
		if (lpPath[i] == '\\')
			LastSlash = &lpPath[i + 1];
	}
	return LastSlash;
}

VOID UnicodeStringFromWstr(PUCS2_STRING pString, LPWSTR lpString) {
	USHORT Length = wcslen(lpString) * 2;
	pString->Buffer = malloc(Length + 8); // HeapAlloc(hHeap, 0, Length + 2);
	wcscpy(pString->Buffer, lpString);
	pString->Length = Length;
	pString->MaximumLength = Length;
}

VOID LdrAddEntry(PBYTE ImageBase, LPWSTR lpLibFileName) {
	PEmuLDR_DATA_TABLE_ENTRY pDataEntry = malloc(sizeof(EmuLDR_DATA_TABLE_ENTRY));// HeapAlloc(hHeap, 0, sizeof(EmuLDR_DATA_TABLE_ENTRY));
	PEmuPEB_LDR_DATA pLdr = pPeb->Ldr;

	pDataEntry->DllBase = ImageBase;
	pDataEntry->EntryPoint = (PBYTE)ImageBase + EmuGetNtHeader(ImageBase)->OptionalHeader.AddressOfEntryPoint;
	pDataEntry->SizeOfImage = EmuGetNtHeader(ImageBase)->OptionalHeader.SizeOfImage;
	
	UnicodeStringFromWstr(&(pDataEntry->FullDllName), lpLibFileName);
	UnicodeStringFromWstr(&(pDataEntry->BaseDllName), GetFileNameFromPathW(lpLibFileName));

	//printf("%d\n", _heapchk());

	pDataEntry->InMemoryOrderLinks.Flink = &(pLdr->InMemoryOrderModuleList);
	pDataEntry->InMemoryOrderLinks.Blink = pLdr->InMemoryOrderModuleList.Blink;
	pLdr->InMemoryOrderModuleList.Blink->Flink = &(pDataEntry->InMemoryOrderLinks);
	pLdr->InMemoryOrderModuleList.Blink = &(pDataEntry->InMemoryOrderLinks);

	wprintf(L"Loading image %s (%p)\n", GetFileNameFromPathW(lpLibFileName), ImageBase);
}

VOID LdrWriteRelocs(char* ImageBase, PIMAGE_BASE_RELOCATION base_reloc, DWORD_PTR delta) {
	DWORD size_blocks = 0, * patch_addr = NULL, i = 0;
	
	PWORD pwNextValue;
	WORD wExistingValue16;
	PBYTE pCurrRelocTargetPtr;
	DWORD dwBaseDelta;
	PBYTE pCurrRelocEntryPtr;

	while (base_reloc->VirtualAddress) {

		WORD* reloc = (WORD*)(base_reloc + 1);
		size_blocks = ((base_reloc->SizeOfBlock) - sizeof(IMAGE_BASE_RELOCATION)) / 2;

		for (i = 0; i < size_blocks; i++) {
			// 4 first bits is information of type, 12 last bits is the offset
			patch_addr = (PDWORD)(ImageBase + base_reloc->VirtualAddress + (reloc[i] & 0xfff));
			//printf("Relocating address %p (reloc[i] >> 12 = %p) %p (%p -> %p, imm:%04x -> %04x\n", patch_addr, reloc[i] >> 12, delta, *patch_addr, *patch_addr + (delta >> 16), (*patch_addr) & 0xFFFF, (*patch_addr + (delta >> 16)) & 0xFFFF);

			//printf("%p (%p -> %p) Type %d:\n", patch_addr, dwImageBaseWanted, dwImageBaseGot, reloc[i] >> 12);
			//printf("\tBefore: ");
			//pContext->fn_ptrs->disasm(patch_addr, *patch_addr);

			pwNextValue;
			wExistingValue16 = *(WORD*)patch_addr;
			pCurrRelocTargetPtr = patch_addr;
			dwBaseDelta = delta;
			pCurrRelocEntryPtr = (BYTE*)((BYTE*)base_reloc + sizeof(IMAGE_BASE_RELOCATION) + (i * sizeof(WORD)));;

			switch (reloc[i] >> 12) {

			case IMAGE_REL_BASED_HIGHLOW:
				*patch_addr += delta;
				break;
			case IMAGE_REL_BASED_HIGHADJ:
				//*(WORD*)(patch_addr) += (delta >> 16);
				pwNextValue = (WORD*)((BYTE*)pCurrRelocEntryPtr + sizeof(WORD));
				i++;
				*(WORD*)pCurrRelocTargetPtr = (WORD)((((DWORD)wExistingValue16 << 16) + ((DWORD)((short)*pwNextValue)) + dwBaseDelta + 0x8000) >> 16);

				break;
			case IMAGE_REL_BASED_HIGH:
				*(WORD*)(patch_addr) += (delta >> 16);
				break;
			case IMAGE_REL_BASED_LOW:
				*(WORD*)patch_addr += (delta & 0xFFFF);
				break;
			case IMAGE_REL_BASED_MIPS_JMPADDR:
				*patch_addr = (*patch_addr & 0xFC000000) | ((*patch_addr + (delta >> 2)) & 0x3FFFFFF);
				//*patch_addr += (delta >> 2);
				break;
			default:
				break;
			}

			//printf("\tAfter:  ");
			//pContext->fn_ptrs->disasm(patch_addr, *patch_addr);

			//printf("\n");
		}

		base_reloc = (PIMAGE_BASE_RELOCATION)(((DWORD)base_reloc) + base_reloc->SizeOfBlock);
	}
}

VOID LdrResolveImports(PBYTE ImageBase, PIMAGE_IMPORT_DESCRIPTOR import_descriptor) {
	char string[80];
	wchar_t dll_name[80];

	HMODULE lib = NULL;
	IMAGE_THUNK_DATA* HINT_TABLE = NULL, * IAT_TABLE = NULL;
	PIMAGE_IMPORT_BY_NAME by_name = NULL;
	IMAGE_IMPORT_DESCRIPTOR null_desc;
	DWORD function_addr = 0;
	int i;
	HRESULT hResult;
	FARPROC ProcAddr;

	ZeroMemory(&null_desc, sizeof(null_desc));

	if (memcmp(import_descriptor, &null_desc, sizeof(IMAGE_IMPORT_DESCRIPTOR)) == 0) return;

	for (i = 0; import_descriptor[i].OriginalFirstThunk; i++) {
		//printf("IMPORTS FROM %s\n", ImageBase + import_descriptor[i].Name);
		MultiByteToWideChar(CP_ACP, 0, ImageBase + import_descriptor[i].Name, -1, dll_name, 80);

		hResult = LdrLoadDLL(dll_name, &lib);

		if (hResult != ERROR_SUCCESS) {
			ExitProcess(-1);
		}

		HINT_TABLE = ImageBase + (DWORD)import_descriptor[i].OriginalFirstThunk; //IDT
		IAT_TABLE = ImageBase + (DWORD)import_descriptor[i].FirstThunk;

		for (; HINT_TABLE[0].u1.AddressOfData; HINT_TABLE++, IAT_TABLE++) {
			function_addr = HINT_TABLE[0].u1.AddressOfData;
			by_name = (PIMAGE_IMPORT_BY_NAME)(ImageBase + function_addr);

			if (function_addr & IMAGE_ORDINAL_FLAG) {
				ProcAddr = LdrGetProcAddress(lib, (LPSTR)function_addr);

				if (ProcAddr == NULL) {
					sprintf(string, "The ordinal %d could not be located in the dynamic link library %s.", function_addr, ImageBase + import_descriptor[i].Name);
				}
			}
			else {
				ProcAddr = LdrGetProcAddress(lib, (LPSTR)&by_name->Name);

				if (ProcAddr == NULL) {
					sprintf(string, "The procedure entry point %s could not be located in the dynamic link library %s.", &by_name->Name, ImageBase + import_descriptor[i].Name);
				}
				//printf("  (%p) %s (%p)\n", &(IAT_TABLE[0].u1.Function), by_name->Name, IAT_TABLE[0].u1.Function);
			}

			if (ProcAddr == NULL) {
				MessageBoxA(NULL, string, "EmuWOW", MB_OK | MB_ICONERROR);
				/*fprintf(stderr, string);
				getchar();*/
				ExitProcess(-1);
			}

			IAT_TABLE[0].u1.Function = ProcAddr;

		}

	}
}

HRESULT LdrAllocSection(LPVOID BaseAddress, SIZE_T dwSize, PBYTE* pAddr) {
	PBYTE Base = VirtualAlloc(BaseAddress, dwSize, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

	if (Base == NULL) {
		Base = VirtualAlloc(NULL, dwSize, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

		if (Base == NULL) return GetLastError();
	}

	*pAddr = Base;
	return ERROR_SUCCESS;
}

HRESULT LdrOpenFile(LPWSTR lpFileName, HANDLE* pHandle) {
	HANDLE hFile = CreateFileW(lpFileName, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	WCHAR TempName[MAX_PATH] = L"C:\\Windows\\SysWoW64\\";

	if (hFile == INVALID_HANDLE_VALUE) {
		wcscat(TempName, lpFileName);
		hFile = CreateFileW(TempName, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

		if (hFile == INVALID_HANDLE_VALUE) {
			return GetLastError();
		}
	}

	*pHandle = hFile;
	return ERROR_SUCCESS;
}

VOID LdrWriteSections(PBYTE ImageBase, PBYTE pData, PIMAGE_SECTION_HEADER sections, WORD nSections) {
	char* addr = NULL;
	int i;

	for (i = 0; i < nSections; i++) {
		addr = ImageBase + sections[i].VirtualAddress;

		if (sections[i].Characteristics & 0x80) {

		}
		else {
			memcpy(addr, pData + sections[i].PointerToRawData, sections[i].SizeOfRawData);
		}
	}
}

HRESULT LdrMapPE(LPWSTR lpLibFileName, HMODULE* pImageBase) { //check to make sure the PE format is correct
	HANDLE hFile;
	HANDLE hMapping;
	HRESULT hResult;
	PBYTE pData;

	PBYTE ImageBase;
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	
	hResult = LdrOpenFile(lpLibFileName, &hFile);
	if (hResult != ERROR_SUCCESS) return hResult;

	hMapping = CreateFileMappingA(hFile, NULL, PAGE_READONLY, 0, 0, NULL);
	if (hMapping == INVALID_HANDLE_VALUE) return GetLastError();

	pData = MapViewOfFile(hMapping, FILE_MAP_READ, 0, 0, 0);
	if (!pData) return GetLastError();

	dos_hdr = pData;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	hResult = LdrAllocSection(nt_hdr->OptionalHeader.ImageBase, nt_hdr->OptionalHeader.SizeOfImage, &ImageBase);
	if (hResult != ERROR_SUCCESS) return hResult;

	ZeroMemory(ImageBase, nt_hdr->OptionalHeader.SizeOfImage);
	CopyMemory(ImageBase, pData, nt_hdr->OptionalHeader.SizeOfHeaders);
	LdrWriteSections(ImageBase, pData, sections, nt_hdr->FileHeader.NumberOfSections);

	UnmapViewOfFile(pData);
	CloseHandle(hMapping);
	CloseHandle(hFile);

	*pImageBase = ImageBase;
	return ERROR_SUCCESS;
}

void PatchModuleFileName(EmuPEB* peb, PVOID NewDllBase) {

	EmuPEB_LDR_DATA* ldr = peb->Ldr;
	LIST_ENTRY* rootEntry = &(ldr->InMemoryOrderModuleList);
	LIST_ENTRY* pEntry;

	for (pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink) {
		EmuLDR_DATA_TABLE_ENTRY* pDataEntry = (BYTE*)(pEntry)-1 * sizeof(LIST_ENTRY);

		if (pDataEntry->DllBase == GetModuleHandle(NULL)) {
			printf("Patching %p to %p\n", pDataEntry->DllBase, NewDllBase);
			pDataEntry->DllBase = NewDllBase;
		}

	}

	return 0x0;

}

HRESULT LdrLoadPE(LPWSTR lpLibFileName, HMODULE* pImageBase) {
	PBYTE ImageBase;
	HRESULT hResult;

	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	PIMAGE_IMPORT_DESCRIPTOR import_descriptor;
	DWORD_PTR delta;

	if (LdrGetModuleHandle(lpLibFileName)) {
		*pImageBase = LdrGetModuleHandle(lpLibFileName);
		return ERROR_SUCCESS;
	}

	hResult = LdrMapPE(lpLibFileName, &ImageBase);
	if (hResult != ERROR_SUCCESS) return hResult;

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	delta = (DWORD_PTR)ImageBase - nt_hdr->OptionalHeader.ImageBase;

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		LdrWriteRelocs(ImageBase, base_reloc, delta);
	}

	LdrAddEntry(ImageBase, lpLibFileName);

	import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { LdrResolveImports(ImageBase, import_descriptor); }

	*pImageBase = ImageBase;
	return ERROR_SUCCESS;
}

BOOL LdrIsKnownDLL(LPWSTR lpLibFileName) {
	if (wcsicmp(lpLibFileName, L"KERNEL32.DLL") == 0 || wcsicmp(lpLibFileName, L"NTDLL.DLL") == 0 || wcsicmp(lpLibFileName, L"GDI32.DLL") == 0 || wcsicmp(lpLibFileName, L"USER32.DLL") == 0 || wcsicmp(lpLibFileName, L"ADVAPI32.DLL") == 0) {
		return TRUE;
	}

	return FALSE;
}

VOID LdrStubExports(PIMAGE_DOS_HEADER pModule, LPSTR DllName) {
	PIMAGE_NT_HEADERS nt_headers = (char*)pModule + pModule->e_lfanew;
	PIMAGE_OPTIONAL_HEADER optional_header = &(nt_headers->OptionalHeader);
	PIMAGE_DATA_DIRECTORY data_dir = &(optional_header->DataDirectory[0]);
	PIMAGE_EXPORT_DIRECTORY imageExportDirectory = (char*)pModule + data_dir->VirtualAddress;
	DWORD* exportAddressTable = (char*)pModule + (DWORD)imageExportDirectory->AddressOfFunctions;
	WORD* nameOrdinalsPointer = (char*)pModule + (DWORD)imageExportDirectory->AddressOfNameOrdinals;
	DWORD* exportNamePointerTable = (char*)pModule + (DWORD)imageExportDirectory->AddressOfNames;

	DWORD i;

	for (i = 0; i < imageExportDirectory->NumberOfNames; i++) {
		WORD ordinalIndex = nameOrdinalsPointer[i];
		BYTE* procName = (char*)pModule + exportNamePointerTable[i];
		DWORD* fncAddress;

		fncAddress = StubExport(LookupSSDT(DllName, procName)); //malloc(sizeof(DWORD) * 3);

		exportAddressTable[ordinalIndex] = (PBYTE)fncAddress - (DWORD)pModule;

		/*if (strcmp(procName, "GetVersion") == 0 || strcmp(procName, "GetCommandLineA") == 0) {

			printf("%s: %p\n", procName, fncAddress);
		}*/
	}
}

HRESULT LdrLoadKnownDLL(LPWSTR lpLibFileName, HMODULE* pImageBase) {
	PBYTE ImageBase;
	HRESULT hResult = LdrMapPE(lpLibFileName, &ImageBase);
	CHAR AnsiLibName[64];
	BOOL flag = FALSE;

	if (hResult != ERROR_SUCCESS) return hResult;

	WideCharToMultiByte(CP_ACP, 0, lpLibFileName, -1, AnsiLibName, 64, NULL, &flag);

	LdrStubExports(ImageBase, AnsiLibName);

	LdrAddEntry(ImageBase, lpLibFileName);

	*pImageBase = ImageBase;
	return ERROR_SUCCESS;
}

HRESULT LdrLoadDLL(LPWSTR lpLibFileName, HMODULE* pImageBase) {
	PBYTE ImageBase;
	HRESULT hResult;
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;

	if (LdrIsKnownDLL(lpLibFileName)) {
		if (LdrGetModuleHandle(lpLibFileName) == NULL) {
			return LdrLoadKnownDLL(lpLibFileName, pImageBase);
		}

		*pImageBase = LdrGetModuleHandle(lpLibFileName);
		return ERROR_SUCCESS;
	}

	hResult = LdrLoadPE(lpLibFileName, &ImageBase);
	if (hResult != ERROR_SUCCESS) return hResult;

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;

	hResult = EmuExecute(ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint, 3, ImageBase, DLL_PROCESS_ATTACH, NULL);

	if (hResult == FALSE) return -1;

	*pImageBase = ImageBase;
	return ERROR_SUCCESS;
}

HRESULT LdrLoadEXE(LPWSTR lpLibFileName) { //PatchModuleFileName and command line?
	//Step 1: Map image & write relocations
	PBYTE ImageBase;
	HRESULT hResult;

	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	PIMAGE_IMPORT_DESCRIPTOR import_descriptor;
	DWORD_PTR delta;
	PIMAGE_OPTIONAL_HEADER pImageHdr;

	hResult = LdrMapPE(lpLibFileName, &ImageBase);
	if (hResult != ERROR_SUCCESS) return hResult;

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	delta = (DWORD_PTR)ImageBase - nt_hdr->OptionalHeader.ImageBase;
	pImageHdr = &(EmuGetNtHeader(ImageBase)->OptionalHeader);

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		LdrWriteRelocs(ImageBase, base_reloc, delta);
	}

	//Step 2: Create & initialize PEB
	InitPEB(ImageBase, nt_hdr->OptionalHeader.SizeOfHeapReserve, nt_hdr->OptionalHeader.SizeOfHeapCommit);

	//Step 3: Add loader entry into PEB
	LdrAddEntry(ImageBase, lpLibFileName);

	//Step 4: Create thread context / init TEB
	EmuCreate(pImageHdr->SizeOfStackReserve, pImageHdr->SizeOfStackCommit);

	PatchModuleFileName(NtCurrentTeb()->ProcessEnvironmentBlock, ImageBase);
	((PEmuPEB)(NtCurrentTeb()->ProcessEnvironmentBlock))->ImageBaseAddress = ImageBase;

	//Step 5: Resolve imports
	import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { LdrResolveImports(ImageBase, import_descriptor); }

	//Step 6: Execute entry point
	return EmuExecute((DWORD_PTR)ImageBase + pImageHdr->AddressOfEntryPoint, 0);
}

HMODULE LdrGetModuleHandle(LPWSTR lpLibFileName) {
	PEmuPEB_LDR_DATA Ldr = pPeb->Ldr;

	PLIST_ENTRY rootEntry = &(Ldr->InMemoryOrderModuleList);
	PLIST_ENTRY pEntry;

	lpLibFileName = GetFileNameFromPathW(lpLibFileName);

	for (pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink) {
		PEmuLDR_DATA_TABLE_ENTRY pDataEntry = pEntry - 1;

		if (_wcsicmp(pDataEntry->BaseDllName.Buffer, lpLibFileName) == 0) {
			return pDataEntry->DllBase;
		}
	}

	return NULL;
}

FARPROC LdrGetProcAddress(HMODULE module, LPCSTR lpProcName) {
	IMAGE_NT_HEADERS* nt_headers = (char*)module + ((IMAGE_DOS_HEADER*)(module))->e_lfanew;
	IMAGE_OPTIONAL_HEADER* optional_header = &(nt_headers->OptionalHeader);
	IMAGE_DATA_DIRECTORY* data_dir = &(optional_header->DataDirectory[0]);
	IMAGE_EXPORT_DIRECTORY* imageExportDirectory = (char*)module + data_dir->VirtualAddress;
	DWORD* exportAddressTable = (char*)module + (DWORD)imageExportDirectory->AddressOfFunctions;
	WORD* nameOrdinalsPointer = (char*)module + (DWORD)imageExportDirectory->AddressOfNameOrdinals;
	DWORD* exportNamePointerTable = (char*)module + (DWORD)imageExportDirectory->AddressOfNames;
	int i;

	if ((DWORD)lpProcName & IMAGE_ORDINAL_FLAG) {
		lpProcName = (DWORD)(lpProcName) & ~IMAGE_ORDINAL_FLAG;
	}

	for (i = 0; i < imageExportDirectory->NumberOfNames; i++) {
		WORD ordinalIndex = nameOrdinalsPointer[i];
		BYTE* procName = (char*)module + exportNamePointerTable[i];
		BYTE* fncAddress = (char*)module + exportAddressTable[ordinalIndex];

		if (0) { //forwarded export
			return 0xDEADBEEF;
		}

		if ((DWORD)lpProcName > 0xFFFF && strcmp(lpProcName, procName) == NULL) {
			/*if (strcmp(lpProcName, "GetVersion") == 0 || strcmp(lpProcName, "GetCommandLineA") == 0) {
				printf("%s: %p %p\n", lpProcName, exportAddressTable[ordinalIndex], fncAddress);
			}*/

			return fncAddress;
		}
		else if ((WORD)lpProcName == ordinalIndex + 1) {
			return fncAddress;
		}
	}

	return NULL;
}