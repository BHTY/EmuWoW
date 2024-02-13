#pragma once

#include <windows.h>
//#include <winternl.h>
//#include <winnt.h>
#include "mips.h"

/*
EmuWoW Todo List (eventually do the FPU)
1.) Detach the program from the MIPS architecture
2.) Debugger
3.) Smarter callback handler (MT-aware and aware of different callback types, like _initterm)
	Should help in getting lots of the sample apps working
4.) Fix module relocator
5.) Fix command line (both for the actual PEB & the MIPS PEB)
6.) DEC Alpha support (post to VirtuallyFun at this point and publish a release on the GitHub repo)

CPU control operations (refactor and reorg)
- Step
- Disassemble
- Dump registers
- Execute Emulated Procedure
- Get arguments for NATIVECALL
  - Set return value
- Set PC and SP

Sample applications (MIPS)
- Clock v3.51: PARTIALLY WORKING
	The text doesn't draw but the analog clock does
- Notepad v4.0: NOT WORKING
	_initterm crash
- Freecell v3.51: WORKING
- Paintbrush v3.51: NOT WORKING
	Crashes when loading OLESVR32
- Reversi: PARTIALLY WORKING (but with rebasing issues)
	The game is buggy when win32emu wasn't
- Sol v3.51: WORKING
- WinMine v3.51: WORKING
- Winver v3.51: WORKING
- Winver v3.10: WORKING
- Command line hello world: UNTESTED
- Menu (Win32 SDK sample): UNTESTED
- SimplePaint: WORKING (but with rebasing issues)

Why do Notepad and Freecell cause FP errors???????????????

The _initterm crash (affects apps with dynamically linked C/C++ runtimes):
	_initterm involves some weirdness with calling function pointers to initialize C++ objects
	It can be avoided by using MIPS versions of CRTDLL.DLL and MSVCRT.DLL

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

Printing options
- Debugger
- Instruction logging
- Function call logging
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
