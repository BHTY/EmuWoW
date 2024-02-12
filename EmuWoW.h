#pragma once

#include <windows.h>
//#include <winternl.h>
//#include <winnt.h>
#include "mips.h"

/*
EmuWoW Todo List

Now
1.) Loaded module list (and supporting loading of MIPS DLLs, not double-loading, etc.)

Later
1.) Smarter callback handler (MT-aware and aware of different callback types)
2.) Fix module relocator

Little todos
1.) Fix command line (both for the actual PEB & the MIPS PEB)
2.) 
*/

extern DWORD dwThreadContextIndex;

typedef struct _UCS2_STRING {
	USHORT Length;
	USHORT MaximumLength;
	PWSTR Buffer;
} UCS2_STRING, *PCS2_STRING;

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