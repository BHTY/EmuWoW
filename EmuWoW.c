#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <winnt.h>
//#include <winternl.h>

#include "EmuWoW.h"
#include "pe.h"
#include "mips.h"
#include "r4000.h"
#include "alpha.h"

PVOID(WINAPI* pAddVectoredExceptionHandler)(ULONG, PVOID) = NULL;
BOOL(WINAPI* pSetProcessDEPPolicy)(DWORD) = NULL;

DWORD dwThreadContextIndex = -1;
CPUVTable vtable;
DWORD OriginalImageBase;

PEmuTEB FunctionGetTeb(){
	__asm{
		mov eax, fs:[0x18]
	};
}

void display_loaded_libs(PEmuPEB_LDR_DATA Ldr){
	
	PLIST_ENTRY rootEntry = &(Ldr->InMemoryOrderModuleList);
	PLIST_ENTRY pEntry;
	PBYTE DllBase;
	
	printf("The loaded libraries were:\n");
	
	for(pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink){
		PEmuLDR_DATA_TABLE_ENTRY pDataEntry = pEntry - 1;
		DllBase = pDataEntry->DllBase;
			printf("	%ls: %p (entry point = %p)\n", pDataEntry->BaseDllName.Buffer, DllBase, DllBase + EmuGetNtHeader(DllBase)->OptionalHeader.AddressOfEntryPoint);
	}
}

void FatalError(PThreadContext pContext, uint32_t error_type, uint32_t info){
	DWORD memory_state = pContext->fn_ptrs->QueryMemoryState(pContext);
	DWORD pc_halted = pContext->fn_ptrs->get_pc(pContext);
	
	printf("\n	HALT! (PC=%p, EmuWOW Image Base = %p)\n", pc_halted, OriginalImageBase);
	printf("	Thread Stack Base: %p Stack Limit: %p\n", pContext->teb.StackBase, pContext->teb.StackLimit);
	
	switch(error_type){
		case SEGFAULT:
			printf("	The memory at address %p could not be ", info);
			
			if(memory_state & READING){
				printf("\"read\"\n");
				
				if (pc_halted != info) {
					printf("%p ", *(uint32_t*)(pc_halted));
					pContext->fn_ptrs->disasm(pc_halted, *(uint32_t*)(pc_halted));
				}
			} else if(memory_state & WRITING){
				printf("\"written\"\n");
				
				if (pc_halted != info) {
					printf("%p ", *(uint32_t*)(pc_halted));
					pContext->fn_ptrs->disasm(pc_halted, *(uint32_t*)(pc_halted));
				}
				
				//dump instruction
			} else if(memory_state & FETCHING){
				printf("\"executed\"\n");
			} 
			
			break;
		case INVINST:
			printf("	Invalid instruction %p\n", *(uint32_t*)(pc_halted));
			break;
		default:
			break;
	}
	
	//dump registers
	pContext->fn_ptrs->dump_regs(pContext);

	//display list of loaded libraries
	display_loaded_libs(pContext->teb.ProcessEnvironmentBlock->Ldr);

	ExitProcess(0);
}

DWORD WINAPI CallbackExceptionHandler(PEXCEPTION_POINTERS pExceptionInfo) {
	DWORD dwReturnAddress;
	DWORD dwCallbackAddress;
	DWORD *dwEsp;
	DWORD dwArgList[4];
	PThreadContext pContext;
	DWORD memory_state;

	if (pExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION){
		
		pContext = TlsGetValue(dwThreadContextIndex);
		memory_state = pContext->fn_ptrs->QueryMemoryState(pContext);
		
		if(pExceptionInfo->ExceptionRecord->ExceptionInformation[0] == 8) {		
			
			dwEsp = pExceptionInfo->ContextRecord->Esp;
			dwCallbackAddress = pExceptionInfo->ContextRecord->Eip;
			dwReturnAddress = *dwEsp;
			
			//printf("Access Violation executing %p (return address = %p)\n", dwCallbackAddress, dwReturnAddress);
			if (pContext->dbg_state.print_functions) {
				printf("	[Callback to address %p, return address = %p]\n", dwCallbackAddress, pContext->fn_ptrs->get_ra(pContext));
			}

			dwArgList[0] = dwEsp[1];
			dwArgList[1] = dwEsp[2];
			dwArgList[2] = dwEsp[3];
			dwArgList[3] = dwEsp[4];

			pExceptionInfo->ContextRecord->Eip = dwReturnAddress;
			pExceptionInfo->ContextRecord->Eax = pContext->fn_ptrs->ExecuteEmulatedProcedure(pContext, dwCallbackAddress, dwArgList, 4); //DefWindowProcA(dwEsp[1], dwEsp[2], dwEsp[3], dwEsp[4]);
			pExceptionInfo->ContextRecord->Esp += 20;

			return EXCEPTION_CONTINUE_EXECUTION;
		}
		
		else{
			if(memory_state & READING || memory_state & WRITING || memory_state & FETCHING){
				FatalError(pContext, SEGFAULT, pExceptionInfo->ExceptionRecord->ExceptionInformation[1]);
			}
		}
	}

	return EXCEPTION_CONTINUE_SEARCH;
}

DWORD ExecuteNativeFunction(LPVOID pTargetAddress, DWORD* pParamList, DWORD dwParamCount) {
	DWORD old_esp;

	__asm {
		mov old_esp, esp

		mov ecx, dwParamCount
		mov edx, pParamList
		lea eax, [edx + ecx * 4 - 4]

		loop_start:
			cmp eax, edx
			jb call_function
			push dword ptr[eax]
			sub eax, 4
			jmp loop_start

		call_function :
			mov eax, pTargetAddress
			call eax

		mov esp, old_esp
	};
}

void InitializeProcessEnvironment(){
	OriginalImageBase = GetModuleHandle(NULL);
	
	pAddVectoredExceptionHandler = GetProcAddress(GetModuleHandleA("KERNEL32.DLL"), "AddVectoredExceptionHandler");
	pAddVectoredExceptionHandler(1, &CallbackExceptionHandler);

	pSetProcessDEPPolicy = GetProcAddress(GetModuleHandleA("KERNEL32.DLL"), "SetProcessDEPPolicy");
	pSetProcessDEPPolicy(1);
}

PBreakpoint	FindBPBefore(PThreadContext pContext, DWORD dwAddr) {
	PBreakpoint pBP, pOld;
	pBP = &(pContext->dbg_state.bp);
	while (pBP) {
		if (pBP->addr == dwAddr) return pOld;
		pOld = pBP;
		pBP = pBP->next;
	}
	return NULL;
}

void RemoveBreakpoint(PThreadContext pContext, DWORD dwAddr) {
	PBreakpoint pBP = FindBPBefore(pContext, dwAddr);
	PBreakpoint pNext;

	if (pBP) {
		*(PDWORD)dwAddr = pBP->next->og_word;
		pNext = pBP->next->next;
		free(pBP->next);
		pBP->next = pNext;
	}
	else {
		printf("No breakpoint was found at %p\n", dwAddr);
	}
}

void SetBreakpoint(PThreadContext pContext, DWORD dwAddr) {
	PBreakpoint pBP = &(pContext->dbg_state.bp);
	PBreakpoint pOld;

	if (FindBPBefore(pContext, dwAddr)) {
		printf("Breakpoint already exists at %p\n", dwAddr);
		return;
	}

	while (pBP) {
		pOld = pBP; pBP = pBP->next;
	}
	pBP = pOld;
	pBP->next = malloc(sizeof(Breakpoint));
	pBP->next->addr = dwAddr;
	pBP->next->next = NULL;
	pBP->next->og_word = *(PDWORD)dwAddr;
	pContext->fn_ptrs->AddBreakpoint(dwAddr);
	printf("Set breakpoint at %p\n", dwAddr);
}

void ListBreakpoints(PThreadContext pContext) {
	PBreakpoint pBP = &(pContext->dbg_state.bp);
	while (pBP->next) {
		printf("\t%p\n", pBP->next->addr);
		pBP = pBP->next;
	}
	printf("\n");
}

void DisplayDebuggerHelp(){
	printf("\nEmuWoW v0.5 Mini Debugger Help\n");
	printf("By Will Klees aka Captain Will Starblazer\n");
	printf("Current Machine Type: MIPS R4000 32-bit\n");
	printf("U <ADDR> <NUM>: Disassemble NUM instructions from ADDR\n");
	printf("D <ADDR> <NUM>: Dump NUM bytes from ADDR\n");
	printf("W <ADDR> <NUM>: Dump NUM words from ADDR\n");
	printf("E <ADDR> ...: Enter comma-separated words into ADDR *\n");
	printf("R: Dump registers\n");
	printf("L: List breakpoints\n");
	printf("B <ADDR>: Remove breakpoint at ADDR\n");
	printf("S <ADDR>: Set breakpoint at ADDR\n");
	printf("T <ADDR>: Trace/single-step from ADDR (optional; goes from PC if not)\n");
	printf("G <ADDR>: Go from ADDR (optional; goes from PC if not)\n");
	printf("M: List loaded modules\n");
	printf("X <MODNAME> <PROCNAME>: Get address of export from loaded image\n");
	printf("P: Toggle instruction printing on/off\n");
	printf("C: Toggle callback/function printing on/off\n");
	printf("?: Help (that's me!)\n");
	printf("Q: Quit\n");
	printf("Commands are case-insensitive. Addresses and constant numbers are given in hex.\nMost of all, have fun!\n\n");

	//TODO: fully implement T, G
	//for good measure, also do P and C
	//E can wait
}

INT debug_step(PThreadContext pContext){
	INT (*cpu_step)(PThreadContext) = pContext->fn_ptrs->ExtraData[0];
	char input_string[512];
	char module_name[32];
	char proc_name[32];
	char cmd;
	int c, res, i, n, p;
	DWORD arg1, arg2, pc;
	DWORD old_print_functions;
	DWORD old_print_instructions;
	
	if(pContext->dbg_state.status){
		pc = pContext->fn_ptrs->get_pc(pContext);
		printf("(%p) ", pc);
		fgets(input_string, 511, stdin);
		res = sscanf(input_string, "%c %x %x", &cmd, &arg1, &arg2);
		
		switch(cmd){
			case 'Q':
			case 'q':
				ExitProcess(0);
				break;
			
			case 'm':
			case 'M':
				display_loaded_libs(pContext->teb.ProcessEnvironmentBlock->Ldr);
				break;
			
			case 'r':
			case 'R':
				pContext->fn_ptrs->dump_regs(pContext);
				break;
			
			case 'p':
			case 'P':
				if (pContext->dbg_state.print_instructions) {
					printf("No longer printing disassembly.\n");
					pContext->dbg_state.print_instructions = 0;
				}
				else {
					printf("Now printing disassembly.\n");
					pContext->dbg_state.print_instructions = 1;
				}
				break;
			
			case 'c':
			case 'C':
				if (pContext->dbg_state.print_functions) {
					printf("No longer printing function calls.\n");
					pContext->dbg_state.print_functions = 0;
				} else {
					printf("Now printing function calls.\n");
					pContext->dbg_state.print_functions = 1;
				}
				break;
			
			case 'u':
			case 'U':
				if (res < 3) {
					printf("Please input in the correct format.\n");
					break;
				}

				for (i = 0; i < arg2; i++) {
					printf("%p: %p ", arg1 + i * 4, *(DWORD*)(arg1 + i * 4));
					pContext->fn_ptrs->disasm(arg1 + i * 4, *(DWORD*)(arg1 + i * 4));
				}
				printf("\n");
				break;
			
			case 'd':
			case 'D':
				if (res < 3) {
					printf("Please input in the correct format.\n");
					break;
				}

				for (i = 0; i < arg2; i += 16) {
					printf("%p: ", arg1 + i);

					for (p = 0; p < 16; p++) {
						printf("%02x ", *(BYTE*)(arg1 + i + p));
					}

					printf(" | ");

					for (p = 0; p < 16; p++) {
						printf("%c", *(BYTE*)(arg1 + i + p));
					}

					printf("\n");
				}
				break;
				
			case 'w':
			case 'W':
				if (res < 3) {
					printf("Please input in the correct format.\n");
					break;
				}

				for (i = 0; i < arg2; i += 32) {
					printf("%p: ", arg1 + i);

					for (p = 0; p < 32; p+=4) {
						printf("%08x ", *(DWORD*)(arg1 + i + p));
					}

					printf("\n");
				}
				break;
			
			case 'e':
			case 'E':
				printf("Not yet implemented!\n");
				break;
			
			case 'l': //list breakpoints
			case 'L':
				ListBreakpoints(pContext);
				break;
			
			case 'b': //remove breakpoint
			case 'B':
				RemoveBreakpoint(pContext, arg1);
				break;
			
			case 's': //set breakpoint
			case 'S':
				SetBreakpoint(pContext, arg1);
				break;
			
			case 't':
			case 'T':
				old_print_functions = pContext->dbg_state.print_functions;
				old_print_instructions = pContext->dbg_state.print_instructions;
				pContext->dbg_state.print_functions = 1;
				pContext->dbg_state.print_instructions = 1;

				if (pContext->dbg_state.status == 2) { //broken
					//restore word
					*(PDWORD)(pc) = FindBPBefore(pContext, pc)->next->og_word;
					//step
					cpu_step(pContext);
					//reset breakpoint
					pContext->fn_ptrs->AddBreakpoint(pc);
				}
				else {
					if (cpu_step(pContext)) { //we weren't broken, but now we are
						pContext->dbg_state.status = 2;
						printf("Breakpoint hit at address 0x%p\n", pContext->fn_ptrs->get_pc(pContext));
					}
				}
				pContext->dbg_state.print_functions = old_print_functions;
				pContext->dbg_state.print_instructions = old_print_instructions;
				break;
				
			case 'g':
			case 'G':			
				if(res == 2){
					pContext->fn_ptrs->set_pc(pContext, arg1);
					pContext->dbg_state.status = 0;
				}
				else {
					if (pContext->dbg_state.status == 2) {
						//restore word
						*(PDWORD)(pc) = FindBPBefore(pContext, pc)->next->og_word;
						//step once
						n = cpu_step(pContext);
						//reset breakpoint
						pContext->fn_ptrs->AddBreakpoint(pc);

						if (n == 0) {
							pContext->dbg_state.status = 0;
						}
						else {
							printf("Breakpoint hit at address 0x%p\n", pContext->fn_ptrs->get_pc(pContext));
						}
					}
					else {
						pContext->dbg_state.status = 0;
					}
				}
				
				break;

			case 'x':
			case 'X':
				if (sscanf(input_string, "%c %s %s", &cmd, module_name, proc_name) != 3) {
					printf("Please enter commands in the format X KERNEL32.DLL GetProcAddress\n");
				}
				else {
					HMODULE hModule = EmuGetModuleHandle(module_name);
					if (hModule) {
						FARPROC pFn = EmuGetProcAddress(hModule, proc_name);
						printf("%s!%s = %p\n", module_name, proc_name, pFn);
					}
					else {
						printf("Module %s is not loaded into memory\n");
					}
				}

				break;
			
			case '?':
				DisplayDebuggerHelp();
				break;
			
			default:
				break;
		}
	}
	else{	
		n = cpu_step(pContext);

		if (n) {
			pContext->dbg_state.status = 2;
			printf("Breakpoint hit at address 0x%p\n", pContext->fn_ptrs->get_pc(pContext));
		}
	}

	return 0;
}

void HookDebugger(PThreadContext pContext){
	PCPUVTable pVTable = pContext->fn_ptrs;
	pVTable->ExtraData[0] = pVTable->step;
	pVTable->step = debug_step;
	pContext->dbg_state.status = 1;
	pContext->dbg_state.print_functions = 1;
	pContext->dbg_state.print_instructions = 1;
}

int main(int argc, char** argv) {

	PThreadContext pContext;
	LPVOID pExe;
	DWORD dwImageEntryPoint;

#if defined(ARCH_ALPHA)
	InitializeAlphaCPU(&vtable);
#elif defined(ARCH_MIPS)
	InitializeMIPSCPU(&vtable);
#else
#error "Unsupported Architecture"
#endif
	
	dwThreadContextIndex = TlsAlloc();

#if defined(ARCH_ALPHA)
	TlsSetValue(dwThreadContextIndex, calloc(1, sizeof(ThreadContext_Alpha)));
#elif defined(ARCH_MIPS)
	TlsSetValue(dwThreadContextIndex, calloc(1, sizeof(ThreadContext)));
#else
	#error "Unsupported Architecture"
#endif

	pContext = TlsGetValue(dwThreadContextIndex);
	pContext->fn_ptrs = &vtable;
	HookDebugger(pContext);
	
	printf("Currently, machine type = %x\n", pContext->fn_ptrs->machine_type);
	
	InitializeProcessEnvironment();

	//adjust command line
	
	pExe = EmuLoadModule(argv[1]);

	dwImageEntryPoint = (DWORD)pExe + EmuGetNtHeader(pExe)->OptionalHeader.AddressOfEntryPoint;

	pContext->fn_ptrs->ExecuteEmulatedProcedure(pContext, dwImageEntryPoint, NULL, 0);

}