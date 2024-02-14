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

PEmuTEB FunctionGetTeb(){
	__asm{
		mov eax, fs:[0x18]
	};
}

DWORD ExecuteEmulatedProcedure(MIPS* pCPU, DWORD dwTargetAddress, DWORD* pDwParamList, DWORD nParams) {
	DWORD dwCurrentArg;
	DWORD dwOldRA = pCPU->regs[31];
	
	pCPU->regs[29] -= 16;

	pCPU->regs[31] = 0xFFFFFF00;
	pCPU->pc = dwTargetAddress;

	for (dwCurrentArg = 0; dwCurrentArg < nParams; dwCurrentArg++) {
		if (dwCurrentArg < 4) {
			pCPU->regs[dwCurrentArg + 4] = pDwParamList[dwCurrentArg];
		}
	}

	//printf("Executing callback with parameters (%p, %p, %p, %p)\n", pDwParamList[0], pDwParamList[1], pDwParamList[2], pDwParamList[3]);

	while (pCPU->pc != 0xFFFFFF00) {
		r4000_step(pCPU);
	}

	pCPU->regs[31] = dwOldRA;
	pCPU->regs[29] += 16;

	printf("	<Callback completed with result %p>\n", pCPU->regs[2]);

	return pCPU->regs[2];

}

DWORD WINAPI CallbackExceptionHandler(PEXCEPTION_POINTERS pExceptionInfo) {
	DWORD dwReturnAddress;
	DWORD dwCallbackAddress;
	DWORD *dwEsp;
	DWORD dwArgList[4];
	PThreadContext pContext;
	MIPS* pCPU;

	if (pExceptionInfo->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION){
		
		pContext = TlsGetValue(dwThreadContextIndex);
		pCPU = &(pContext->cpu);
		
		if(pExceptionInfo->ExceptionRecord->ExceptionInformation[0] == 8) {		
			
			dwEsp = pExceptionInfo->ContextRecord->Esp;
			dwCallbackAddress = pExceptionInfo->ContextRecord->Eip;
			dwReturnAddress = *dwEsp;
			
			printf("Access Violation executing %p (return address = %p)\n", dwCallbackAddress, dwReturnAddress);

			dwArgList[0] = dwEsp[1];
			dwArgList[1] = dwEsp[2];
			dwArgList[2] = dwEsp[3];
			dwArgList[3] = dwEsp[4];

			pExceptionInfo->ContextRecord->Eip = dwReturnAddress;
			pExceptionInfo->ContextRecord->Eax = ExecuteEmulatedProcedure(pCPU, dwCallbackAddress, dwArgList, 4); //DefWindowProcA(dwEsp[1], dwEsp[2], dwEsp[3], dwEsp[4]);
			pExceptionInfo->ContextRecord->Esp += 20;

			return EXCEPTION_CONTINUE_EXECUTION;
		}
		
		else{
			if(pCPU->memory_state & READING || pCPU->memory_state & WRITING || pCPU->memory_state & FETCHING){
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

DWORD OriginalImageBase;

int main(int argc, char** argv) {

	PThreadContext pContext;
	LPVOID pExe;
	DWORD dwImageEntryPoint;

	OriginalImageBase = GetModuleHandle(NULL);

	dwThreadContextIndex = TlsAlloc();
	TlsSetValue(dwThreadContextIndex, calloc(1, sizeof(ThreadContext)));
	pContext = TlsGetValue(dwThreadContextIndex);

	pAddVectoredExceptionHandler = GetProcAddress(GetModuleHandleA("KERNEL32.DLL"), "AddVectoredExceptionHandler");
	pAddVectoredExceptionHandler(1, &CallbackExceptionHandler);

	pSetProcessDEPPolicy = GetProcAddress(GetModuleHandleA("KERNEL32.DLL"), "SetProcessDEPPolicy");
	pSetProcessDEPPolicy(1);

	//adjust command line
	
	pExe = EmuLoadModule(argv[1]);

	dwImageEntryPoint = (DWORD)pExe + EmuGetNtHeader(pExe)->OptionalHeader.AddressOfEntryPoint;

	ExecuteEmulatedProcedure(&(pContext->cpu), dwImageEntryPoint, NULL, 0);

}