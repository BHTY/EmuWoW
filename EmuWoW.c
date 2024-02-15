#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <winnt.h>
//#include <winternl.h>

#include "EmuWoW.h"
#include "pe.h"
#include "mips.h"
#include "r4000.h"

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
	
	printf("The loaded libraries were:\n");
	
	for(pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink){
		PEmuLDR_DATA_TABLE_ENTRY pDataEntry = pEntry - 1;
		printf("	%ls: %p\n", pDataEntry->BaseDllName.Buffer, pDataEntry->DllBase);
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
				
				printf("%p ", *(uint32_t*)(pc_halted));
				mips_disasm(pContext->cpu.pc, *(uint32_t*)(pc_halted));
			} else if(memory_state & WRITING){
				printf("\"written\"\n");
				
				printf("%p ", *(uint32_t*)(pc_halted));
				pContext->fn_ptrs->disasm(pc_halted, *(uint32_t*)(pc_halted));
				
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
			printf("	[Callback to address %p, return address = %p]\n", dwCallbackAddress, pContext->fn_ptrs->get_ra(pContext));

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

PBreakpoint FindBreakpoint(PThreadContext pContext, DWORD addr) {
	PBreakpoint pBP = pContext->dbg_state.bp;

	while (pBP) {
		if (pBP->addr == addr) {
			return pBP;
		}

		pBP = pBP->next;
	}

	return NULL;
}

void ListBreakpoints(PThreadContext pContext) {

}

void RemoveBreakpoint(PThreadContext pContext, DWORD addr) {

}

void SetBreakpoint(PThreadContext pContext, DWORD addr) {
	PBreakpoint pBP = pContext->dbg_state.bp;

	while (pBP) {
		pBP = pBP->next;
	}

	pBP = malloc(sizeof(Breakpoint));
	pBP->addr = addr;
	pBP->og_word = *(DWORD*)addr;
	pBP->next = NULL;

	printf("Set breakpoint at 0x%p\n", addr);
	pContext->fn_ptrs->AddBreakpoint(addr);
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
	printf("P: Toggle instruction printing on/off\n");
	printf("C: Toggle callback/function printing on/off\n");
	printf("?: Help (that's me!)\n");
	printf("Q: Quit\n");
	printf("Commands are case-insensitive. Addresses and constant numbers are given in hex. Most of all, have fun!\n\n");

	//TODO: implement L, B, S, T, G
	//for good measure, also do P and C
	//E can wait
}

INT debug_step(PThreadContext pContext){
	INT (*cpu_step)(PThreadContext) = pContext->fn_ptrs->ExtraData[0];
	char input_string[512];
	char cmd;
	int c, res, i, n, p;
	DWORD arg1, arg2, pc;
	
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
				printf("Not yet implemented!\n");
				break;
			
			case 'c':
			case 'C':
				printf("Not yet implemented!\n");
				break;
			
			case 'u':
			case 'U':
				for (i = 0; i < arg2; i++) {
					printf("%p: %p ", arg1 + i * 4, *(DWORD*)(arg1 + i * 4));
					pContext->fn_ptrs->disasm(arg1 + i * 4, *(DWORD*)(arg1 + i * 4));
				}
				printf("\n");
				break;
			
			case 'd':
			case 'D':
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
				if (pContext->dbg_state.status == 2) {
					//retrieve old value for bp addr
					*(DWORD*)pc = FindBreakpoint(pContext, pc)->og_word;
					//printf("Restored value %p\n", FindBreakpoint(pContext, pc)->og_word);
					//step the cpu
					cpu_step(pContext);
					//restore the BREAK instruction
					pContext->fn_ptrs->AddBreakpoint(pc);
				}
				else {
					cpu_step(pContext);
				}
				break;
				
			case 'g':
			case 'G':			
				if(res == 2){
					pContext->fn_ptrs->set_pc(pContext, arg1);
				}
				
				pContext->dbg_state.status = 0;
				
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
}

int main(int argc, char** argv) {

	PThreadContext pContext;
	LPVOID pExe;
	DWORD dwImageEntryPoint;

	InitializeMIPSCPU(&vtable);
	
	dwThreadContextIndex = TlsAlloc();
	TlsSetValue(dwThreadContextIndex, calloc(1, sizeof(ThreadContext)));
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