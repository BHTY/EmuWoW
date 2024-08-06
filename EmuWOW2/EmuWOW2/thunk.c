#include "thunk.h"
#include "ssdt.h"

CPUVTable vtable;

FARPROC StubExport(DWORD Index) {
    return vtable.MakeThunk(Index, WowSystemServiceDispatchTable[Index].dwArgs);
}

VOID WriteCallbackThunk(PBYTE pThunk, FARPROC EntryPoint, DWORD dwArgs) {
    INT i;

    *pThunk = 0x55;

    *(pThunk + 1) = 0x89; //MOV EBP, ...
    *(pThunk + 2) = 0xE5; //         ESP

    pThunk += 3;

    for (i = dwArgs - 1; i >= 0; i--) {
        *(pThunk) = 0xFF; //PUSH
        *(pThunk + 1) = 0x75; //DWORD PTR [
        *(pThunk + 2) = i * 4 + 8; //arg

        pThunk += 3;
    }

    *(pThunk) = 0x6A;
    *(pThunk + 1) = dwArgs; //nArgs

    *(pThunk + 2) = 0x68; //PUSH
    *(PDWORD)(pThunk + 3) = EntryPoint; //EntryPoint

    *(pThunk + 7) = 0xB8; //MOV EAX, ...
    *(PDWORD)(pThunk + 8) = EmuExecute;

    *(pThunk + 12) = 0xFF; //CALL ...
    *(pThunk + 13) = 0xD0; //     EAX

    *(pThunk + 14) = 0x83; //ADD ...
    *(pThunk + 15) = 0xC4; //    ESP, ...
    *(pThunk + 16) = dwArgs * 4 + 8;

    *(pThunk + 17) = 0x5D; //POP EBP

    *(pThunk + 18) = 0xC2; //RET ...
    *(PWORD)(pThunk + 19) = dwArgs * 4;

}

VOID EmuCreate(DWORD dwStackReserve, DWORD dwStackCommit) {
    PThreadContext pContext;
    DWORD dwStackSpace;
    PBYTE pStack;

    if (dwStackCommit > dwStackReserve) {
        dwStackSpace = dwStackCommit;
    }
    else {
        dwStackSpace = dwStackReserve;
    }

    pStack = VirtualAlloc(NULL, dwStackSpace, MEM_COMMIT, PAGE_READWRITE);

    pContext = vtable.Init(pStack + dwStackSpace);

    pContext->teb.StackBase = pStack + dwStackSpace;
    pContext->teb.StackLimit = pStack;
    pContext->teb.Self = &(pContext->teb);
    pContext->teb.ProcessEnvironmentBlock = pPeb;

    TlsSetValue(dwThreadContextIndex, pContext);
}

DWORD_PTR EmuExecute(FARPROC EntryPoint, DWORD dwNumArgs, ...) {
    PThreadContext pContext = TlsGetValue(dwThreadContextIndex);
    DWORD_PTR dwArgList[16];
    va_list args;
    int i;
    va_start(args, dwNumArgs);

    for (i = 0; i < dwNumArgs; i++) {
        dwArgList[i] = va_arg(args, DWORD_PTR);
    }

    return vtable.ExecuteEmulatedProcedure(pContext, EntryPoint, dwArgList, dwNumArgs);
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

DWORD_PTR CallSystemService(DWORD dwIndex) {
    PThreadContext pContext = TlsGetValue(dwThreadContextIndex);
    DWORD_PTR dwArgList[16];
    WOW_THUNK WowThunk = WowSystemServiceDispatchTable[dwIndex];
    DWORD_PTR Result;
    INT i;

    vtable.ExtractParams(pContext, dwArgList, WowThunk.dwArgs);

    printf("Calling %s!%s(", WowThunk.ModuleName, WowThunk.ServiceName);

    for (i = 0; i < WowThunk.dwArgs; i++) {
        printf("%p", dwArgList[i]);
        if (i != WowThunk.dwArgs - 1) printf(", ");
    }

    printf(")\n");

    Result = ExecuteNativeFunction(WowThunk.EntryPoint, dwArgList, WowThunk.dwArgs);

    printf("<%s!%s returned %p!>\n", WowThunk.ModuleName, WowThunk.ServiceName, Result);

    return Result;
}


