#include "EmuWoW.h"
#include "pe.h"
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define ALIGN(x, y)	(((x % y) == 0) ? x : (x + y) - x % 4)

PBYTE TextSection = NULL;
UCS2_STRING LastImageName;

DWORD dwImageBaseGot, dwImageBaseWanted;

UCS2_STRING AnsiToUnicodeString(char* AnsiString){
	UCS2_STRING uString;
	
	uString.Buffer = malloc(2 * 256);
	uString.Length = 510;
	uString.MaximumLength = 512;
	
	MultiByteToWideChar(CP_ACP, 0, AnsiString, -1, uString.Buffer, 256);
	
	return uString;
}

LPSTR GetFileNameFromPathA(LPSTR lpPath) {
	char* LastSlash = NULL;
	DWORD i;
	for (i = 0; lpPath[i] != NULL; i++)
	{
		if (lpPath[i] == '\\')
			LastSlash = &lpPath[i + 1];
	}
	return LastSlash;
}

LPWSTR GetFileNameFromPathW(LPWSTR lpPath) {
	wchar_t* LastSlash = NULL;
	DWORD i;
	for (i = 0; lpPath[i] != NULL; i++)
	{
		if (lpPath[i] == '\\')
			LastSlash = &lpPath[i + 1];
	}
	return LastSlash;
}

void AddLdrEntry(PEmuPEB_LDR_DATA pLdr, PVOID ImageBase, PUCS2_STRING pFullName){ //put it into the thing
	PEmuLDR_DATA_TABLE_ENTRY pDataEntry = malloc(sizeof(EmuLDR_DATA_TABLE_ENTRY));
	
	pDataEntry->DllBase = ImageBase;
	pDataEntry->EntryPoint = (PBYTE)ImageBase + EmuGetNtHeader(ImageBase)->OptionalHeader.AddressOfEntryPoint;
	pDataEntry->SizeOfImage = EmuGetNtHeader(ImageBase)->OptionalHeader.SizeOfImage;
	pDataEntry->FullDllName = *pFullName;
	pDataEntry->BaseDllName = *pFullName;/* .Buffer = GetFileNameFromPathW(pFullName->Buffer);
	pDataEntry->BaseDllName.Length = wcslen(pDataEntry->BaseDllName.Buffer) * 2;
	pDataEntry->BaseDllName.MaximumLength = wcslen(pDataEntry->BaseDllName.Buffer) * 2 + 2;*/
	
	pDataEntry->InMemoryOrderLinks.Flink = &(pLdr->InMemoryOrderModuleList);
	pDataEntry->InMemoryOrderLinks.Blink = pLdr->InMemoryOrderModuleList.Blink;
	pLdr->InMemoryOrderModuleList.Blink->Flink = &(pDataEntry->InMemoryOrderLinks);
	pLdr->InMemoryOrderModuleList.Blink = &(pDataEntry->InMemoryOrderLinks);
}

void WritePESections(PBYTE ImageBase, PBYTE pData, PIMAGE_SECTION_HEADER sections, WORD nSections) {
	char* addr = NULL;
	int i;

	for (i = 0; i < nSections; i++) {
		addr = ImageBase + sections[i].VirtualAddress;

		if (strcmp(sections[i].Name, ".text") == 0) {
			TextSection = sections[i].VirtualAddress;
		}

		if (sections[i].Characteristics & 0x80) {

		}
		else {
			memcpy(addr, pData + sections[i].PointerToRawData, sections[i].SizeOfRawData);
		}
	}
}

void WritePERelocs(char* ImageBase, PIMAGE_BASE_RELOCATION base_reloc, DWORD delta)
{
	DWORD size_blocks = 0, * patch_addr = NULL, i = 0;
	PThreadContext pContext = TlsGetValue(dwThreadContextIndex);

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

#pragma pack(push,1)

typedef struct _CoffSymbol{
	char name[4];
	DWORD index;
	DWORD value;
	WORD section_number;
	WORD type;
	BYTE storage_class;
	BYTE number_of_aux_symbols;
} CoffSymbol, *PCoffSymbol;
#pragma pack(pop)

PBYTE GetStringFromStrTable(PBYTE pStrTable, DWORD index){
	PBYTE current_ptr = pStrTable + 4;
	int current_index = 0;

	while(1){
		if(index == current_index) return current_ptr;
		if(*current_ptr == 0){
			current_index++;
		}

		current_ptr++;
	}

	return NULL;
}

/*
	COFF Symbols are magic... when we load debug symbols, we should load them all into a standard data structure

Types
0: Not Function
32: Function

Storage Classes (relevant)
2: External symbol
3: Internal symbol (offset to section)
*/

SymbolEntry root_symbol;

void AddSymbol(char* image_base, DWORD offset, char* name){
	PSymbolEntry pSym = &root_symbol;
	PSymbolEntry pOld;
	
	while (pSym) {
		pOld = pSym; pSym = pSym->next;
	}
	pSym = pOld;
	pSym->next = malloc(sizeof(SymbolEntry));
	pSym->next->image_base = image_base;
	pSym->next->name = name;
	pSym->next->offset = offset;
	pSym->next->next = NULL;
	
	//printf("Adding %p:%p (%s)\n", image_base, offset, name);
}

PSymbolEntry FindSymbol(char* name){
	PSymbolEntry pSym = &root_symbol;

	while(pSym){
		if(pSym->name){
			if(strcmp(pSym->name, name) == 0) return pSym;
		}

		pSym = pSym->next;
	}

	return NULL;
}

PSymbolEntry ResolveClosestSymbol(char* image_base, DWORD offset){ //  ? _ .
	PSymbolEntry pSym = &root_symbol;
	
	PSymbolEntry pCurrentSmallest = NULL;
	
	ULONG LastDelta = -1;
	
	
	while(pSym){
		//printf("Found %p:%p (%s) and looking for %p:%p - last delta = %p and this delta would be %p\n", pSym->image_base, pSym->offset, pSym->name, image_base, offset, LastDelta, offset - pSym->offset);
		
		if(pSym->image_base == image_base && offset >= pSym->offset && ((ULONG)(offset - pSym->offset) < LastDelta)){
			
			pCurrentSmallest = pSym;
			LastDelta = offset - pSym->offset;
		}
		
		pSym = pSym->next;
	}
	
	return pCurrentSmallest;
}

void ParseSymbolTable(PBYTE fPtr, PBYTE ImageBase){
	PIMAGE_DOS_HEADER dos_hdr = fPtr;
	PIMAGE_NT_HEADERS nt_hdr = fPtr + dos_hdr->e_lfanew;
	PIMAGE_DATA_DIRECTORY data_dir = nt_hdr->OptionalHeader.DataDirectory;
	PCoffSymbol pSyms = fPtr + nt_hdr->FileHeader.PointerToSymbolTable;
	PBYTE pStrTable = (PBYTE)pSyms + nt_hdr->FileHeader.NumberOfSymbols * sizeof(CoffSymbol);
	char string[9];
	
	char* temp_str;

	int i;

	string[8] = 0;
	//memset(&root_symbol, 0, sizeof(SymbolEntry));

	if(nt_hdr->FileHeader.NumberOfSymbols && nt_hdr->FileHeader.PointerToSymbolTable){
		printf("This file has %d symbols located at %p\n", nt_hdr->FileHeader.NumberOfSymbols, fPtr + nt_hdr->FileHeader.PointerToSymbolTable);
		
		for(i = 0; i < nt_hdr->FileHeader.NumberOfSymbols; i++){

			if(pSyms[i].name[0] == 0){ //GetStringFromStrTable(pStrTable, pSyms[i].index)
				temp_str = malloc(strlen(pStrTable + pSyms[i].index) + 1);
				strcpy(temp_str, pStrTable + pSyms[i].index);
			
				//printf("#%d %p: %s (str#%d) (type %d SC %d)\n", i, pSyms[i].value, pStrTable + pSyms[i].index, pSyms[i].index, pSyms[i].type, pSyms[i].storage_class);
			}

			else{

				temp_str = malloc(9);
				memcpy(string, pSyms[i].name, 8);
				strcpy(temp_str, string);

				//printf("#%d %p: %s (type %d SC %d) fuck\n", i, pSyms[i].value, string, pSyms[i].type, pSyms[i].storage_class);
			}
			
			if((pSyms[i].storage_class == 3 || pSyms[i].storage_class == 2) && (pSyms[i].type == 32)){
				AddSymbol(ImageBase, pSyms[i].value, temp_str);
			}

		}

		//getchar();
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

		//printf("Forced to try second allocation. Couldn't get image base %p with %d bytes\n", nt_hdr->OptionalHeader.ImageBase, nt_hdr->OptionalHeader.SizeOfImage);

		ImageBase = VirtualAlloc(NULL, nt_hdr->OptionalHeader.SizeOfImage, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

		if (ImageBase == NULL) {
			//fprintf(stderr, "Allocation failed with error %d\n", GetLastError());
			exit(0);
		}

	}

	ParseSymbolTable(pData, ImageBase);
	
	dwImageBaseGot = ImageBase;
	dwImageBaseWanted = nt_hdr->OptionalHeader.ImageBase;

	memset(ImageBase, 0, nt_hdr->OptionalHeader.SizeOfImage);

	printf("Loading PE image %s\n", lpLibFileName);
	printf("  Image Base: %p | Entry Point: %p | Size: %d bytes\n", ImageBase, ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint, nt_hdr->OptionalHeader.SizeOfImage);
	printf("  Desired Image Base: %p | Has Relocations: %d | Is DLL: %d\n", nt_hdr->OptionalHeader.ImageBase, data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress != 0, (nt_hdr->FileHeader.Characteristics & IMAGE_FILE_DLL) != 0);
	printf("  Stack Size: %d bytes committed (%d bytes reserved)\n", nt_hdr->OptionalHeader.SizeOfStackCommit, nt_hdr->OptionalHeader.SizeOfStackReserve);
	printf("  Heap Size: %d bytes committed (%d bytes reserved)\n", nt_hdr->OptionalHeader.SizeOfHeapCommit, nt_hdr->OptionalHeader.SizeOfHeapReserve);

	memcpy(ImageBase, pData, nt_hdr->OptionalHeader.SizeOfHeaders);

	WritePESections(ImageBase, pData, sections, nt_hdr->FileHeader.NumberOfSections);

	UnmapViewOfFile(pData);
	CloseHandle(hMapping);
	CloseHandle(hFile);
	
	LastImageName = AnsiToUnicodeString(lpLibFileName);

	return ImageBase;
}



VOID StubExport(PDWORD pFn, LPVOID pReal, LPSTR pName, LPSTR DllName) {
	pFn[0] = 0x4C000000; //APICALL
	pFn[1] = pReal;
	pFn[2] = pName;
	pFn[3] = DllName;
}


VOID StubExports(PIMAGE_DOS_HEADER pModule, HMODULE hModule, LPSTR DllName) {
	PIMAGE_NT_HEADERS nt_headers = (char*)pModule + pModule->e_lfanew;
	PIMAGE_OPTIONAL_HEADER optional_header = &(nt_headers->OptionalHeader);
	PIMAGE_DATA_DIRECTORY data_dir = &(optional_header->DataDirectory[0]);
	PIMAGE_EXPORT_DIRECTORY imageExportDirectory = (char*)pModule + data_dir->VirtualAddress;
	DWORD* exportAddressTable = (char*)pModule + (DWORD)imageExportDirectory->AddressOfFunctions;
	WORD* nameOrdinalsPointer = (char*)pModule + (DWORD)imageExportDirectory->AddressOfNameOrdinals;
	DWORD* exportNamePointerTable = (char*)pModule + (DWORD)imageExportDirectory->AddressOfNames;
	PThreadContext pContext = TlsGetValue(dwThreadContextIndex);

	DWORD i;

	printf("Start of code section = %p\n", (char*)pModule + (DWORD)TextSection);

	for (i = 0; i < imageExportDirectory->NumberOfNames; i++) {
		WORD ordinalIndex = nameOrdinalsPointer[i];
		BYTE* procName = (char*)pModule + exportNamePointerTable[i];
		DWORD* fncAddress;
		FARPROC pRealFn = GetProcAddress(hModule, procName);

		fncAddress = malloc(sizeof(DWORD) * 3);

		exportAddressTable[ordinalIndex] = (PBYTE)fncAddress - (DWORD)pModule;

		if (strcmp(procName, "GetVersion") == 0 || strcmp(procName, "GetCommandLineA") == 0) {

			printf("%s: %p\n", procName, fncAddress);
		}

		pContext->fn_ptrs->StubExport(fncAddress, pRealFn, procName, DllName);
	}
}

HMODULE LoadMIPSLibrary(LPCSTR lpLibFileName){
	PThreadContext pContext;
	
	DWORD DllMainCRTStartupParams[3];

	DWORD dwStackSpace;
	PBYTE pStack;
	
	HANDLE hHeap;
	//CPU* pCPU;
	PBYTE ImageBase = MapImageIntoMemory(lpLibFileName);
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	PIMAGE_OPTIONAL_HEADER pImageHdr = &(EmuGetNtHeader(ImageBase)->OptionalHeader);
	PIMAGE_IMPORT_DESCRIPTOR import_descriptor;
	DWORD delta;

	if (!ImageBase) return NULL;

	pContext = TlsGetValue(dwThreadContextIndex);

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;
	
	if(nt_hdr->FileHeader.Machine != pContext->fn_ptrs->machine_type){
		printf("This is %s not registering as a valid MIPS lib!\n", lpLibFileName);
		printf("Its machine type is %x and ours is %x and IMAGE_FILE_MACHINE_R4000 is %x\n", nt_hdr->FileHeader.Machine, pContext->fn_ptrs->machine_type, IMAGE_FILE_MACHINE_R4000);
		
		return NULL;
	}

	//apply relocations
	delta = (DWORD)ImageBase - nt_hdr->OptionalHeader.ImageBase;

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		WritePERelocs(ImageBase, base_reloc, delta);
	}
	
	//put DLL into PEB
	AddLdrEntry(pContext->teb.ProcessEnvironmentBlock->Ldr, ImageBase, &LastImageName);

	//resolve imports
	import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { ResolveImports(ImageBase, import_descriptor); }
	
	//call DLL entry point
	DllMainCRTStartupParams[0] = ImageBase;
	DllMainCRTStartupParams[1] = DLL_PROCESS_ATTACH;
	
	pContext->fn_ptrs->ExecuteEmulatedProcedure(pContext, ImageBase + nt_hdr->OptionalHeader.AddressOfEntryPoint, DllMainCRTStartupParams, 3);

	return ImageBase;

}

HMODULE LoadNativeLibrary(LPCSTR lpLibFileName) {
	/*
		Load the actual library using LoadLibrary()
		Map all sections into memory but do not perform relocation or import resolution
		Loop over every export that points into the .text section and overwrite its code with a NATIVECALL stub
	*/

	HMODULE hModule;
	PBYTE ImageBase;
	LPSTR DllName = GetFileNameFromPathA(lpLibFileName);
	PThreadContext pContext = TlsGetValue(dwThreadContextIndex);

	hModule = LoadLibraryA(lpLibFileName);
	ImageBase = MapImageIntoMemory(lpLibFileName);

	StubExports(ImageBase, hModule, lpLibFileName);

	AddLdrEntry(pContext->teb.ProcessEnvironmentBlock->Ldr, ImageBase, &LastImageName);

	return ImageBase;
}

IMAGE_NT_HEADERS* EmuGetNtHeader(LPVOID module) {
	return (char*)module + ((IMAGE_DOS_HEADER*)module)->e_lfanew;
}

void ResolveImports(PBYTE ImageBase, PIMAGE_IMPORT_DESCRIPTOR import_descriptor) {
	HMODULE lib = NULL;
	IMAGE_THUNK_DATA* HINT_TABLE = NULL, * IAT_TABLE = NULL;
	PIMAGE_IMPORT_BY_NAME by_name = NULL;
	IMAGE_IMPORT_DESCRIPTOR null_desc;
	DWORD function_addr = 0;
	int i;

	memset(&null_desc, 0, sizeof(null_desc));

	if (memcmp(import_descriptor, &null_desc, sizeof(IMAGE_IMPORT_DESCRIPTOR)) == 0) return;

	for (i = 0; import_descriptor[i].OriginalFirstThunk; i++) {
		printf("IMPORTS FROM %s\n", ImageBase + import_descriptor[i].Name);
		lib = EmuLoadLibrary(ImageBase + import_descriptor[i].Name);
		
		HINT_TABLE = ImageBase + (DWORD)import_descriptor[i].OriginalFirstThunk; //IDT
		IAT_TABLE = ImageBase + (DWORD)import_descriptor[i].FirstThunk;
		
		for (; HINT_TABLE[0].u1.AddressOfData; HINT_TABLE++, IAT_TABLE++) {
			function_addr = HINT_TABLE[0].u1.AddressOfData;
			by_name = (PIMAGE_IMPORT_BY_NAME)(ImageBase + function_addr);

			if (function_addr & IMAGE_ORDINAL_FLAG) {
				IAT_TABLE[0].u1.Function = EmuGetProcAddress(lib, (LPSTR)function_addr); 
				printf("  (%p) #%d (%p)\n", &(IAT_TABLE[0].u1.Function), (DWORD)function_addr & ~IMAGE_ORDINAL_FLAG, IAT_TABLE[0].u1.Function);
			}
			else {
				IAT_TABLE[0].u1.Function = EmuGetProcAddress(lib, (LPSTR)&by_name->Name);
				printf("  (%p) %s (%p)\n", &(IAT_TABLE[0].u1.Function), by_name->Name, IAT_TABLE[0].u1.Function);
			}
		}
		
	}
}

void PatchModuleFileName(EmuPEB* peb, PVOID NewDllBase) {

	EmuPEB_LDR_DATA* ldr = peb->Ldr;
	LIST_ENTRY* rootEntry = &(ldr->InMemoryOrderModuleList);
	LIST_ENTRY *pEntry;

	for (pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink) {
		EmuLDR_DATA_TABLE_ENTRY* pDataEntry = (BYTE*)(pEntry)-1 * sizeof(LIST_ENTRY);

		if (pDataEntry->DllBase == GetModuleHandle(NULL)) {
			printf("Patching %p to %p\n", pDataEntry->DllBase, NewDllBase);
			pDataEntry->DllBase = NewDllBase;
		}

	}

	return 0x0;

}

void InitPEB(PEmuPEB pPeb, PVOID ImageBase, DWORD HeapReserve, DWORD HeapCommit) {
	PEmuPEB_LDR_DATA pLdr = malloc(sizeof(EmuPEB_LDR_DATA));

	pPeb->ImageBaseAddress = ImageBase;
	pPeb->ProcessHeap = HeapCreate(0, HeapReserve, HeapCommit);

	//initialize DLL loading structures
	pLdr->InLoadOrderModuleList.Blink = &(pLdr->InLoadOrderModuleList);
	pLdr->InLoadOrderModuleList.Flink = &(pLdr->InLoadOrderModuleList);
	pLdr->InMemoryOrderModuleList.Blink = &(pLdr->InMemoryOrderModuleList);
	pLdr->InMemoryOrderModuleList.Flink = &(pLdr->InMemoryOrderModuleList);
	pLdr->InInitializationOrderModuleList.Blink = &(pLdr->InInitializationOrderModuleList);
	pLdr->InInitializationOrderModuleList.Flink = &(pLdr->InInitializationOrderModuleList);

	pPeb->Ldr = pLdr;
}

void InitTEB(PThreadContext pContext, PVOID ImageBase, PVOID StackBase, PVOID StackLimit, DWORD HeapReserve, DWORD HeapCommit) {
	pContext->teb.StackBase = StackBase;
	pContext->teb.StackLimit = StackLimit;
	pContext->teb.Self = &(pContext->teb);
	pContext->teb.ProcessEnvironmentBlock = malloc(sizeof(EmuPEB));

	InitPEB(pContext->teb.ProcessEnvironmentBlock, ImageBase, HeapReserve, HeapCommit);
}

PVOID EmuLoadModule(LPCSTR lpLibFileName) { //loads main EXE file (MIPS) into memory

	PThreadContext pContext;
	DWORD dwStackSpace;
	PBYTE pStack;
	
	HANDLE hHeap;
	//CPU* pCPU;
	PBYTE ImageBase = MapImageIntoMemory(lpLibFileName);
	PIMAGE_DOS_HEADER dos_hdr;
	PIMAGE_NT_HEADERS nt_hdr;
	PIMAGE_SECTION_HEADER sections;
	PIMAGE_DATA_DIRECTORY data_dir;
	PIMAGE_OPTIONAL_HEADER pImageHdr = &(EmuGetNtHeader(ImageBase)->OptionalHeader);
	PIMAGE_IMPORT_DESCRIPTOR import_descriptor;
	PIMAGE_DEBUG_DIRECTORY debug_dir;
	DWORD delta;

	if (!ImageBase) return NULL;

	pContext = TlsGetValue(dwThreadContextIndex);

	dos_hdr = ImageBase;
	nt_hdr = ((PBYTE)dos_hdr) + dos_hdr->e_lfanew;
	sections = (PIMAGE_SECTION_HEADER)(nt_hdr + 1);
	data_dir = nt_hdr->OptionalHeader.DataDirectory;

	//apply relocations
	delta = (DWORD)ImageBase - nt_hdr->OptionalHeader.ImageBase;

	if (delta && data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress) {
		PIMAGE_BASE_RELOCATION base_reloc = ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_BASERELOC].VirtualAddress;
		WritePERelocs(ImageBase, base_reloc, delta);
	}

	//allocate the stack
	if (pImageHdr->SizeOfStackCommit > pImageHdr->SizeOfStackReserve) {
		dwStackSpace = pImageHdr->SizeOfStackCommit;
	}
	else {
		dwStackSpace = pImageHdr->SizeOfStackReserve;
	}

	pStack = VirtualAlloc(NULL, dwStackSpace, MEM_COMMIT, PAGE_READWRITE);

	//set values into TEB
	InitTEB(pContext, ImageBase, pStack + dwStackSpace, pStack, nt_hdr->OptionalHeader.SizeOfHeapReserve, nt_hdr->OptionalHeader.SizeOfHeapCommit);

	//set values into SP
	pContext->fn_ptrs->set_sp(pContext, pStack + dwStackSpace - 256); // - 64

	//patch module filename & real base address
	PatchModuleFileName(NtTeb->ProcessEnvironmentBlock, ImageBase);
	NtTeb->ProcessEnvironmentBlock->ImageBaseAddress = ImageBase;
	
	//put EXE into PEB
	AddLdrEntry(pContext->teb.ProcessEnvironmentBlock->Ldr, ImageBase, &LastImageName);

	//resolve imports
	import_descriptor = (PIMAGE_IMPORT_DESCRIPTOR)(ImageBase + data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);
	if (data_dir[IMAGE_DIRECTORY_ENTRY_IMPORT].Size) { ResolveImports(ImageBase, import_descriptor); }

	return ImageBase;
}

FARPROC EmuGetProcAddress(LPVOID module, LPCSTR lpProcName) { //convert "#123" to 123

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
			if (strcmp(lpProcName, "GetVersion") == 0 || strcmp(lpProcName, "GetCommandLineA") == 0) {
				printf("%s: %p %p\n", lpProcName, exportAddressTable[ordinalIndex], fncAddress);
			}

			return fncAddress;
		}
		else if ((WORD)lpProcName == ordinalIndex + 1) {
			return fncAddress;
		}
	}

	return NULL;
}

HMODULE EmuGetModuleHandle(LPCSTR lpLibFileName){ 
	UCS2_STRING uString = AnsiToUnicodeString(lpLibFileName);
	
	PThreadContext pContext = TlsGetValue(dwThreadContextIndex);
	
	PEmuPEB_LDR_DATA Ldr = pContext->teb.ProcessEnvironmentBlock->Ldr;
	
	PLIST_ENTRY rootEntry = &(Ldr->InMemoryOrderModuleList);
	PLIST_ENTRY pEntry;
	
	for(pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink){
		PEmuLDR_DATA_TABLE_ENTRY pDataEntry = pEntry - 1;
		
		if(_wcsicmp(pDataEntry->BaseDllName.Buffer, uString.Buffer) == 0){
			return pDataEntry->DllBase;
		}
	}

	return NULL;
}	

HMODULE EmuLoadLibrary(LPCSTR lpLibFileName) {
	
	PThreadContext pContext = TlsGetValue(dwThreadContextIndex);
	HMODULE hExistingModule = EmuGetModuleHandle(lpLibFileName);
	PVOID ImageBase;
	
	if(hExistingModule){ //increment load country
		return hExistingModule;
	}
	
	//try to load MIPS library
	ImageBase = LoadMIPSLibrary(lpLibFileName);
	
	if(ImageBase == NULL){ //if not, load native lib
		ImageBase = LoadNativeLibrary(lpLibFileName);
	}
	
	return ImageBase;	
}