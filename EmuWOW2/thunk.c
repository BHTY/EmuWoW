#include "thunk.h"
#include "ssdt.h"

CPUVTable vtable;

FARPROC StubExport(DWORD Index) {
    if (Index != -1) {
        return vtable.MakeThunk(Index, WowSystemServiceDispatchTable[Index].dwArgs);
    }
    return NULL;
}

VOID WriteThreadEntryThunk(PBYTE pThunk, FARPROC EntryPoint, DWORD dwStackSize) {
    if (dwStackSize == 0) {
        dwStackSize = 0x1000;
    }

    *pThunk = 0x55; //PUSH EBP

    *(pThunk + 1) = 0x89; //MOV EBP, ...
    *(pThunk + 2) = 0xE5; //         ESP

    //EmuCreate(dwStackSize, dwStackSize)
    *(pThunk + 3) = 0x68; //PUSH
    *(PDWORD)(pThunk + 4) = dwStackSize;
    
    *(pThunk + 8) = 0x68; //PUSH
    *(PDWORD)(pThunk + 9) = dwStackSize;

    *(pThunk + 13) = 0xB8; //MOV EAX, ...
    *(PDWORD)(pThunk + 14) = EmuCreate;

    *(pThunk + 18) = 0xFF; //CALL ...
    *(pThunk + 19) = 0xD0; //     EAX

    *(pThunk + 20) = 0x83; //ADD
    *(pThunk + 21) = 0xC4; //    ESP, 
    *(pThunk + 22) = 0x08; //         0x08

    //return EmuExecute(EntryPoint, 1, lpParam)
    *(pThunk + 23) = 0xFF; //PUSH DWORD PTR [
    *(pThunk + 24) = 0x75; //                EBP
    *(pThunk + 25) = 0x08; //                    +0x8]

    *(pThunk + 26) = 0x6A; //PUSH ...
    *(pThunk + 27) = 0x01; //     0x1

    *(pThunk + 28) = 0x68; //PUSH
    *(PDWORD)(pThunk + 29) = EntryPoint;

    *(pThunk + 33) = 0xB8; //MOV EAX, ...
    *(PDWORD)(pThunk + 34) = EmuExecute;

    *(pThunk + 38) = 0xFF; //CALL ...
    *(pThunk + 39) = 0xD0; //     EAX

    *(pThunk + 40) = 0x83; //ADD
    *(pThunk + 41) = 0xC4; //    ESP, 
    *(pThunk + 42) = 0x0C; //         0xC

    *(pThunk + 43) = 0x5D; //POP EBP

    *(pThunk + 44) = 0xC2; //RET ...
    *(PWORD)(pThunk + 45) = 0x04; //0x4

}

#ifndef _WIN64

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

#else

char x64callbackthunk[] = { 0x4C, 0x89, 0x4C, 0x24, 0x20, 0x4C, 0x89, 0x44, 0x24, 0x18, 0x89, 0x54, 0x24, 0x10, 0x48, 0x89, 0x4C, 0x24, 0x08, 0x48, 0x83, 0xEC, 0x38, 0x48, 0x8B, 0x44, 0x24, 0x58, 0x48, 0x89, 0x44, 0x24, 0x28, 0x48, 0x8B, 0x44, 0x24, 0x50, 0x48, 0x89, 0x44, 0x24, 0x20, 0x44, 0x8B, 0x4C, 0x24, 0x48, 0x4C, 0x8B, 0x44, 0x24, 0x40, 0xBA, 0x04, 0x00, 0x00, 0x00, 0xB9, 0xEF, 0xBE, 0xAD, 0xDE, 0x48, 0xB8, 0xEF, 0xBE, 0xAD, 0xDE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xD0, 0x48, 0x98, 0x48, 0x83, 0xC4, 0x38, 0xC2, 0x00, 0x00 };

VOID WriteCallbackThunk(PBYTE pThunk, DWORD EntryPoint, DWORD dwArgs) {
    memcpy(pThunk, x64callbackthunk, sizeof(x64callbackthunk));
    *(PDWORD)(pThunk + 0x3B) = EntryPoint;
    *(PULONGLONG)(pThunk + 0x41) = EmuExecute;
}

#endif

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

    printf("NATIVE->EMU CALLBACK THUNK: %p(", EntryPoint);

    for (i = 0; i < dwNumArgs; i++) {
        dwArgList[i] = va_arg(args, DWORD_PTR);

        printf("%p", dwArgList[i]);

        if (i != dwNumArgs - 1) printf(", ");
    }

    printf(")\n");

    return vtable.ExecuteEmulatedProcedure(pContext, EntryPoint, dwArgList, dwNumArgs);
}

#ifdef _WIN64

typedef DWORD_PTR(*__stdcall APIFUNC64)(DWORD_PTR a0, DWORD_PTR a1, DWORD_PTR a2, DWORD_PTR a3, DWORD_PTR a4, DWORD_PTR a5, DWORD_PTR a6, DWORD_PTR a7, DWORD_PTR a8, DWORD_PTR a9, DWORD_PTR a10, DWORD_PTR a11, DWORD_PTR a12, DWORD_PTR a13, DWORD_PTR a14, DWORD_PTR a15);

DWORD_PTR ExecuteNativeFunction(LPVOID pTargetAddress, DWORD_PTR* pParamList, DWORD dwParamCount) {
    return ((APIFUNC64)(pTargetAddress))(pParamList[0], pParamList[1], pParamList[2], pParamList[3], pParamList[4], pParamList[5], pParamList[6], pParamList[7], pParamList[8], pParamList[9], pParamList[10], pParamList[11], pParamList[12], pParamList[13], pParamList[14], pParamList[15]);
}

#else

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

#endif

DWORD_PTR CallSystemService(DWORD dwIndex) {
    PThreadContext pContext = TlsGetValue(dwThreadContextIndex);
    DWORD_PTR dwArgList[16];
    WOW_THUNK WowThunk = WowSystemServiceDispatchTable[dwIndex];
    DWORD_PTR Result;
    INT i;
    DWORD dwArgs = 16; //WowThunk.dwArgs    

    vtable.ExtractParams(pContext, dwArgList, dwArgs);

    printf("Calling %s!%s(", WowThunk.ModuleName, WowThunk.ServiceName);

    for (i = 0; i < WowThunk.dwArgs; i++) {
        printf("%p", dwArgList[i]);
        if (i != WowThunk.dwArgs - 1) printf(", ");
    }

    printf(")\n");

    Result = ExecuteNativeFunction(WowThunk.EntryPoint, dwArgList, dwArgs);

    printf("<%s!%s returned %p!> (error code = %d)\n", WowThunk.ModuleName, WowThunk.ServiceName, Result, GetLastError());

    return Result;
}


