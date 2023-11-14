#include <windows.h>
#include <winnt.h>
#include <winternl.h>
#include <wchar.h>
#include <stdio.h>
#include "cpu.h"
#include "pe.h"

LPWSTR GetFileNameFromPathW(LPWSTR lpPath) {
	wchar_t* LastSlash = NULL;
	for (DWORD i = 0; lpPath[i] != NULL; i++)
	{
		if (lpPath[i] == '\\')
			LastSlash = &lpPath[i + 1];
	}
	return LastSlash;
}

void resolve_imports(PBYTE ImageBase, PIMAGE_IMPORT_DESCRIPTOR import_descriptor, PPEB pPeb, CPU* pCPU) {
	HMODULE lib = NULL;
	IMAGE_THUNK_DATA* HINT_TABLE = NULL, * IAT_TABLE = NULL;
	PIMAGE_IMPORT_BY_NAME by_name = NULL;
	IMAGE_IMPORT_DESCRIPTOR null_desc;
	DWORD function_addr = 0;

	memset(&null_desc, 0, sizeof(null_desc));

	if (memcmp(import_descriptor, &null_desc, sizeof(IMAGE_IMPORT_DESCRIPTOR)) == 0) return;

	for (int i = 0; import_descriptor[i].OriginalFirstThunk; i++) {
		printf("IMPORTS FROM %s\n", ImageBase + import_descriptor[i].Name);
		lib = EmuLoadLibrary(ImageBase + import_descriptor[i].Name, 0, pPeb, pCPU);//LoadLibraryA(ImageBase + import_descriptor[i].Name);
		
		HINT_TABLE = ImageBase + import_descriptor[i].OriginalFirstThunk; //IDT
		IAT_TABLE = ImageBase + import_descriptor[i].FirstThunk;

		for (; HINT_TABLE[0].u1.AddressOfData; HINT_TABLE++, IAT_TABLE++) {
			function_addr = HINT_TABLE[0].u1.AddressOfData;
			by_name = (PIMAGE_IMPORT_BY_NAME)(ImageBase + function_addr);

			IAT_TABLE[0].u1.Function = (function_addr & IMAGE_ORDINAL_FLAG) ? EmuGetProcAddress(lib, (LPSTR)function_addr) : EmuGetProcAddress(lib, (LPSTR)&by_name->Name);

			printf("  (%p) %s (%p)\n", &(IAT_TABLE[0].u1.Function), by_name->Name, IAT_TABLE[0].u1.Function);
		}
	}
}

void write_sections(PBYTE ImageBase, PBYTE pData, PIMAGE_SECTION_HEADER sections, WORD nSections) {
	char* addr = NULL;

	for (int i = 0; i < nSections; i++) {
		addr = ImageBase + sections[i].VirtualAddress;

		if (sections[i].Characteristics & 0x80) {

		}
		else {
			memcpy(addr, pData + sections[i].PointerToRawData, sections[i].SizeOfRawData);
		}
	}
}

void write_relocations(char* ImageBase, PIMAGE_BASE_RELOCATION base_reloc, DWORD delta)
{
	DWORD size_blocks = 0, * patch_addr = NULL, i = 0;

	while (base_reloc->VirtualAddress) {

		size_blocks = ((base_reloc->SizeOfBlock) - sizeof(IMAGE_BASE_RELOCATION)) / 2;

		WORD* reloc = (WORD*)(base_reloc + 1);

		for (i = 0; i < size_blocks; i++) {
			// 4 first bits is information of type, 12 last bits is the offset
			patch_addr = (PDWORD)(ImageBase + base_reloc->VirtualAddress + (reloc[i] & 0xfff));

			if ((reloc[i] >> 12) == IMAGE_REL_BASED_HIGHLOW)
				*patch_addr += delta;
		}

		base_reloc = (PIMAGE_BASE_RELOCATION)(((DWORD)base_reloc) + base_reloc->SizeOfBlock);
	}
}

LPVOID MapImageIntoMemory(LPCSTR lpLibFileName) {
	PBYTE ImageBase;
	OFSTRUCT fsStruct;
	HFILE hFile = OpenFile(lpLibFileName, &fsStruct, OF_READ);
	HANDLE hMapping;
	PBYTE pData;
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;

	if (!hFile) return NULL;

	hMapping = CreateFileMappingA(hFile, NULL, PAGE_READONLY, 0, 0, NULL);

	if (!hMapping) return NULL;

	pData = MapViewOfFile(hMapping, FILE_MAP_READ, 0, 0, 0);

	if (!pData) return NULL;

	dos_hdr = pData;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	ImageBase = VirtualAlloc(nt_hdr->OptionalHeader.ImageBase, nt_hdr->OptionalHeader.SizeOfImage, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

	if (ImageBase == NULL) {

		ImageBase = VirtualAlloc(NULL, nt_hdr->OptionalHeader.SizeOfImage, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

		if (ImageBase == NULL) {
			fprintf(stderr, "Allocation failed with error %d\n", GetLastError());
			exit(0);
		}

	}

	memset(ImageBase, 0, nt_hdr->OptionalHeader.SizeOfImage);

	printf("Loading PE image %s\n", lpLibFileName);
	printf("  Image Base: %p | Entry Point: %p\n", ImageBase, ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint);
	printf("  Desired Image Base: %p | Has Relocations: %d | Is DLL: %d\n", nt_hdr->OptionalHeader.ImageBase, data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress != 0, (nt_hdr->FileHeader.Characteristics & IMAGE_FILE_DLL) != 0);
	printf("  Stack Size: %d bytes committed (%d bytes reserved)\n", nt_hdr->OptionalHeader.SizeOfStackCommit, nt_hdr->OptionalHeader.SizeOfStackReserve);
	printf("  Heap Size: %d bytes committed (%d bytes reserved)\n", nt_hdr->OptionalHeader.SizeOfHeapCommit, nt_hdr->OptionalHeader.SizeOfHeapReserve);

	memcpy(ImageBase, pData, nt_hdr->OptionalHeader.SizeOfHeaders);

	write_sections(ImageBase, pData, sections, nt_hdr->FileHeader.NumberOfSections);

	UnmapViewOfFile(pData);
	CloseHandle(hMapping);
	CloseHandle(hFile);

	return ImageBase;
}

LPVOID EmuLoadLibrary(LPCSTR lpLibFileName, DWORD dwFlags, PPEB pPeb, CPU* pCPU) {
	PBYTE ImageBase = MapImageIntoMemory(lpLibFileName);
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;

	if (!ImageBase) return NULL;

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	//apply relocations
	DWORD delta = (DWORD)ImageBase - nt_hdr->OptionalHeader.ImageBase;

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		write_relocations(ImageBase, base_reloc, delta);
	}

	PIMAGE_IMPORT_DESCRIPTOR import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { resolve_imports(ImageBase, import_descriptor, pPeb, pCPU); }

	//call DLL entry point
	if (nt_hdr->FileHeader.Characteristics & IMAGE_FILE_DLL && strcmp(lpLibFileName, "win.dll") != 0) {
		//printf("%s: About to call DLLEntry @ %p\n", lpLibFileName, ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint);
		pCPU->set_params(pCPU, 3, NULL, DLL_PROCESS_ATTACH, ImageBase);
		ThunkCallback(pCPU, ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint);
	}

	return ImageBase;
}

CPU* EmuLoadModule(LPCSTR lpLibFileName, _PPEB pPeb) {
	HANDLE hHeap;
	CPU* pCPU;
	PBYTE ImageBase = MapImageIntoMemory(lpLibFileName);
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	PIMAGE_OPTIONAL_HEADER pImageHdr = &(EmuGetNtHeader(ImageBase)->OptionalHeader);

	if (!ImageBase) return NULL;

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	//apply relocations
	DWORD delta = (DWORD)ImageBase - nt_hdr->OptionalHeader.ImageBase;

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		write_relocations(ImageBase, base_reloc, delta);
	}

	//write into PEB
	pPeb->Reserved3[1] = ImageBase; //ImageBaseAddress
	hHeap = HeapCreate(0, pImageHdr->SizeOfHeapReserve, pImageHdr->SizeOfHeapCommit);
	pPeb->Reserved4[1] = hHeap;
	pPeb->Reserved9[16] = pImageHdr->SizeOfHeapReserve; //HeapSegmentReserve
	pPeb->Reserved9[17] = pImageHdr->SizeOfHeapCommit; //HeapSegmentCommit

	//create thread
	pCPU = EmuCreateThread(ImageBase + pImageHdr->AddressOfEntryPoint, pImageHdr->SizeOfStackReserve, pImageHdr->SizeOfStackCommit, pPeb);

	//resolve imports
	PIMAGE_IMPORT_DESCRIPTOR import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { resolve_imports(ImageBase, import_descriptor, pPeb, pCPU); }

	//set pc

	return pCPU;
}

IMAGE_NT_HEADERS* EmuGetNtHeader(LPVOID module) {
	return (char*)module + ((IMAGE_DOS_HEADER*)module)->e_lfanew;
}

LPVOID EmuGetProcAddress(LPVOID module, LPCSTR lpProcName) { //convert "#123" to 123

	IMAGE_NT_HEADERS* nt_headers = (char*)module + ((IMAGE_DOS_HEADER*)(module))->e_lfanew;
	IMAGE_OPTIONAL_HEADER* optional_header = &(nt_headers->OptionalHeader);
	IMAGE_DATA_DIRECTORY* data_dir = &(optional_header->DataDirectory[0]);
	IMAGE_EXPORT_DIRECTORY* imageExportDirectory = (char*)module + data_dir->VirtualAddress;
	DWORD* exportAddressTable = (char*)module + imageExportDirectory->AddressOfFunctions;
	WORD* nameOrdinalsPointer = (char*)module + imageExportDirectory->AddressOfNameOrdinals;
	DWORD* exportNamePointerTable = (char*)module + imageExportDirectory->AddressOfNames;

	for (DWORD i = 0; i < imageExportDirectory->NumberOfFunctions; i++) {
		WORD ordinalIndex = nameOrdinalsPointer[i];
		BYTE* procName = (char*)module + exportNamePointerTable[i];
		BYTE* fncAddress = (char*)module + exportAddressTable[ordinalIndex];

		if (0) { //forwarded export
			return 0xDEADBEEF;
		}

		if ((ULONGLONG)lpProcName > 0xFFFF && strcmp(lpProcName, procName) == NULL) {
			return fncAddress;
		}
		else if ((WORD)lpProcName == ordinalIndex + 1) {
			return fncAddress;
		}
	}

	return NULL;
}

LPVOID EmuGetModuleHandle(LPCWSTR lpModuleName, PEB* peb) {

	PEB_LDR_DATA* ldr = peb->Ldr;
	LIST_ENTRY* rootEntry = &(ldr->InMemoryOrderModuleList);

	for (LIST_ENTRY* pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink) {
		LDR_DATA_TABLE_ENTRY* pDataEntry = (BYTE*)(pEntry)-1 * sizeof(LIST_ENTRY);

		if (_wcsicmp(GetFileNameFromPathW(pDataEntry->FullDllName.Buffer), lpModuleName) == 0) {
			return pDataEntry->DllBase;
		}

	}

	return 0x0;

}