#pragma once

#include <windows.h>

VOID LdrAddEntry(PBYTE ImageBase, LPWSTR lpLibFileName);
VOID LdrWriteRelocs(char* ImageBase, PIMAGE_BASE_RELOCATION base_reloc, DWORD_PTR delta);
VOID LdrResolveImports(PBYTE ImageBase, PIMAGE_IMPORT_DESCRIPTOR import_descriptor);
HRESULT LdrAllocSection(LPVOID BaseAddress, SIZE_T dwSize, PBYTE* pAddr);
HRESULT LdrOpenFile(LPWSTR lpFileName, HANDLE* pHandle);
VOID LdrWriteSections(PBYTE ImageBase, PBYTE pData, PIMAGE_SECTION_HEADER sections, WORD nSections);
HRESULT LdrMapPE(LPWSTR lpLibFileName, HMODULE* pImageBase);
HRESULT LdrLoadPE(LPWSTR lpLibFileName, HMODULE* pImageBase);
BOOL LdrIsKnownDLL(LPWSTR lpLibFileName);
HRESULT LdrLoadKnownDLL(LPWSTR lpLibFileName, HMODULE* pImageBase);
HRESULT LdrLoadDLL(LPWSTR lpLibFileName, HMODULE* pImageBase);
HRESULT LdrLoadEXE(LPWSTR lpLibFileName);
HMODULE LdrGetModuleHandle(LPWSTR lpLibFileName);
FARPROC LdrGetProcAddress(HMODULE hModule, LPCSTR lpProcName);
IMAGE_NT_HEADERS32* EmuGetNtHeader(LPVOID module);

