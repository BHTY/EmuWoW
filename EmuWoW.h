#pragma once

#include <windows.h>
//#include <winternl.h>
//#include <winnt.h>
#include "mips.h"

/*
EmuWoW Todo List
1.) Detach the program from the MIPS architecture
2.) Debugger
3.) Get FPU support working
4.) Fix module relocator
5.) Fix command line (both for the actual PEB & the MIPS PEB) & hook image loader-related functions
6.) DEC Alpha support (post to VirtuallyFun at this point and publish a release on the GitHub repo)

Later: Smarter, MT-aware callback handler

Sample applications (MIPS)
- Control Panel v3.51: EHHHHHHH
	Seems to launch but crashes immediately
- Clock v3.51: PARTIALLY WORKING
	The text doesn't draw but the analog clock does
- Notepad v3.51: NOT WORKING
	Floating point instructions IN CRTDLL?!?!?!?!?!?!
- Freecell v3.51: PARTIALLY WORKING
	The auto-win dialog has FPU instructions?!?!?!?!?!
- Paintbrush v3.51: MOSTLY WORKING
	Saving breaks everything
	The cursor gets "stuck"
	And there's just some random weirdness
	And what's with colors turning to black when any component >127 the palette slider? (signing issue somewhere?)
- Reversi SDK Sample: PARTIALLY WORKING (but with rebasing issues)
	The game is buggy when win32emu wasn't?!?!?!?!
- Sol v3.51: PARTIALLY WORKING
	Can't test properly since idk how Solitaire works but something is clearly broken
- WinMine v3.51: WORKING
- Winver v3.51: WORKING
- Winver v3.10: WORKING
- Command line hello world: UNTESTED
- SimplePaint: WORKING (but with rebasing issues)

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
- ?: Help
- Q: Quit

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

/*
CPU control operations (refactor and reorg stuff too) -- access via struct of function pointers
- Step
- Disassemble
- Dump registers
- Execute Emulated Procedure
- Get arguments for NATIVECALL
  - Set return value
- Set PC and SP
*/

typedef struct _CPUVTable { //set/get retval
	void(*step)(PThreadContext);
	void(*disasm)(DWORD, DWORD);
	void(*dump_regs)();
	void(*set_pc)(DWORD);
	void(*set_sp)(DWORD);
	DWORD(*ExecuteEmulatedProcedure)(PThreadContext, DWORD, PDWORD, DWORD);
} CPUVTable, *PCPUVTable;

typedef struct _ThreadContext {

	EmuTEB teb;
	PCPUVTable fn_ptrs;
	MIPS cpu;

} ThreadContext, *PThreadContext;

PEmuTEB FunctionGetTeb();
