#pragma once

#include <windows.h>
//#include <winternl.h>
//#include <winnt.h>
#include "mips.h"

/*
EmuWoW Todo List
1.) Detach the program from the MIPS architecture
2.) Debugger
3.) Smarter callback handler (MT-aware and aware of different callback types)
4.) Fix module relocator
5.) Fix command line (both for the actual PEB & the MIPS PEB)
6.) DEC Alpha support (post to VirtuallyFun at this point and publish a release on the GitHub repo)

Changes
- Shows 16 bit immediates as hex in disassembler
- Crash screen
- Inserting items into the PEB LDR list, not double-loading, loading MIPS DLLs when available

Mini-Debugger Commands
- U <ADDR> <NUM>: Disassemble NUM instructions from ADDR
- D <ADDR> <NUM>: Dump NUM bytes from ADDR
- W <ADDR> <NUM>: Dump NUM words from ADDR
- E <ADDR> ...: Enter words into ADDR
- R: Dump registers
- L: List breakpoints
- B <ADDR>: Remove breakpoint at ADDR
- S <ADDR>: Set breakpoint at ADDR
- T <ADDR>: Trace/single-step from ADDR (optional; goes from PC if not)
- G <ADDR>: Go from ADDR (optional; goes from PC if not) 
- M: List loaded modules
*/

#define SEGFAULT 1
#define INVINST 2

extern DWORD dwThreadContextIndex;

typedef struct _UCS2_STRING {
	USHORT Length;
	USHORT MaximumLength;
	PWSTR Buffer;
} UCS2_STRING, *PUCS2_STRING;

typedef struct _EmuRTL_USER_PROCESS_PARAMETERS {
	BYTE Padding[0x30];
	UCS2_STRING DllPath;
	UCS2_STRING ImagePathName;
	UCS2_STRING CommandLine;
} EmuRTL_USER_PROCESS_PARAMETERS, *PEmuRTL_USER_PROCESS_PARAMETERS;

typedef struct _EmuLDR_DATA_TABLE_ENTRY {
	LIST_ENTRY InLoadOrderLinks;
	LIST_ENTRY InMemoryOrderLinks;
	LIST_ENTRY InInitializationOrderLinks;
	PVOID DllBase;
	PVOID EntryPoint;
	ULONG SizeOfImage;
	UCS2_STRING FullDllName;
	UCS2_STRING BaseDllName;
	ULONG Flags;
	USHORT LoadCount;
} EmuLDR_DATA_TABLE_ENTRY, *PEmuLDR_DATA_TABLE_ENTRY;

typedef struct _EmuPEB_LDR_DATA {
	ULONG Length;
	BOOLEAN Initialized;
	PVOID SsHandle;
	LIST_ENTRY InLoadOrderModuleList;
	LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
} EmuPEB_LDR_DATA, *PEmuPEB_LDR_DATA;

typedef struct _EmuPEB {
	BOOLEAN Reserved1[2];
	BYTE BeingDebugged;
	BOOLEAN SpareBool;
	HANDLE hMutant;
	PVOID ImageBaseAddress;
	PEmuPEB_LDR_DATA Ldr;
	PEmuRTL_USER_PROCESS_PARAMETERS ProcessParameters;
	PVOID SubsystemData;
	HANDLE ProcessHeap;
} EmuPEB, *PEmuPEB;

typedef struct _EmuTEB {
	PVOID ExceptionList;

	PVOID StackBase; //important
	PVOID StackLimit; //important

	PVOID SSTib;
	ULONG Version;

	PVOID ArbitraryUserPointer;

	struct EmuTEB* Self; //important

	PVOID EnvironmentPointer;

	HANDLE hProcess;
	HANDLE hThread;

	PVOID ActiveRpcHandle;
	PVOID FakeTLSPointer;

	PEmuPEB ProcessEnvironmentBlock; //important

} EmuTEB, *PEmuTEB;

typedef struct _ThreadContext {

	EmuTEB teb;

	MIPS cpu;
} ThreadContext, *PThreadContext;

PEmuTEB FunctionGetTeb();
