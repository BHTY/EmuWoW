#pragma once

#include <windows.h>
#include <winnt.h>
#include "cpu.h"

#define CPU_TYPE_X86 0
#define CPU_TYPE_MIPS 1

extern int cpu_type;

LPVOID EmuLoadLibrary(LPCSTR lpLibFileName, DWORD dwFlags, PPEB);
LPVOID EmuGetProcAddress(LPVOID module, LPCSTR lpProcName);
LPVOID EmuGetModuleHandle(LPCWSTR lpModuleName, PEB* peb);
IMAGE_NT_HEADERS* EmuGetNtHeader(LPVOID module);

CPU* EmuCreateThread(PBYTE lpStartAddress, DWORD dwStackReserve, DWORD dwStackCommit, PEB* peb);
CPU* EmuLoadModule(LPCSTR lpLibFileName, PPEB pPeb);