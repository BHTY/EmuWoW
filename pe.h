#pragma once

#include <windows.h>
//#include <winnt.h>



typedef struct _SymbolEntry{
	char* image_base;
	DWORD offset;
	char* name;
	struct _SymbolEntry* next;
} SymbolEntry, *PSymbolEntry;

VOID WritePESections(PBYTE ImageBase, PBYTE pData, PIMAGE_SECTION_HEADER sections, WORD nSections);
IMAGE_NT_HEADERS* EmuGetNtHeader(LPVOID module);
LPVOID MapImageIntoMemory(LPCSTR lpLibFileName);
HMODULE LoadNativeLibrary(LPCSTR lpLibFileName);
FARPROC EmuGetProcAddress(LPVOID module, LPCSTR lpProcName);
PVOID EmuLoadModule(LPCSTR lpLibFileName);
HMODULE EmuGetModuleHandle(LPCSTR lpLibFileName);
HMODULE EmuLoadLibrary(LPCSTR lpLibFileName);
void ResolveImports(PBYTE ImageBase, PIMAGE_IMPORT_DESCRIPTOR import_descriptor);
PSymbolEntry ResolveClosestSymbol(char* image_base, DWORD offset);
PSymbolEntry FindSymbol(char* name);

/*
Process of Loading a Library under EmuWoW

EmuLoadLibrary first calls EmuGetModuleHandle() to determine if the module is loaded or not
If it is, its load count is incremented and if not, and the existing image base is returned
If not, a MIPS DLL is first searched for. If found, LoadMIPSLibrary is called, which calls the image
entry point, performs relocations, the whole lot
If not, LoadNativeLibrary is called
In either case, an entry into the PEB module list is made
*/