// EmuWOW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <stdio.h>
#include <varargs.h>
#include "EmuWoW.h"
#include "ldrapi.h"
#include "thunk.h"
#include "i386.h"
#include "ssdt.h"

HANDLE hHeap;
DWORD dwThreadContextIndex;
PEmuPEB pPeb;

LPWSTR AdjustCommandLine() {
    LPWSTR lpCmdLine = GetCommandLineW();

    if (lpCmdLine[0] == L'"') { //find double quote
        lpCmdLine++;

        while (*(lpCmdLine++) != L'"');

        lpCmdLine++;
    }
    else { //find space
        while (*(lpCmdLine++) != L' ');
    }

    return lpCmdLine;
}

VOID MakeUnicodeString(PUCS2_STRING pString, PWSTR Buffer, USHORT Length, USHORT MaxLength) {
    pString->Buffer = Buffer;
    pString->Length = Length;
    pString->MaximumLength = MaxLength;
}

VOID InitPEB(PVOID ImageBase, DWORD HeapReserve, DWORD HeapCommit) {
    PEmuPEB_LDR_DATA pLdr = malloc(sizeof(EmuPEB_LDR_DATA)); // HeapAlloc(hHeap, 0, sizeof(EmuPEB_LDR_DATA));

    pPeb = malloc(sizeof(PEmuPEB)); //HeapAlloc(hHeap, 0, sizeof(PEmuPEB));
    pPeb->ImageBaseAddress = ImageBase;
    pPeb->ProcessHeap = HeapCreate(0, HeapReserve, HeapCommit);

    //Initialize loader data structures
    pLdr->InLoadOrderModuleList.Blink = &(pLdr->InLoadOrderModuleList);
    pLdr->InLoadOrderModuleList.Flink = &(pLdr->InLoadOrderModuleList);
    pLdr->InMemoryOrderModuleList.Blink = &(pLdr->InMemoryOrderModuleList);
    pLdr->InMemoryOrderModuleList.Flink = &(pLdr->InMemoryOrderModuleList);
    pLdr->InInitializationOrderModuleList.Blink = &(pLdr->InInitializationOrderModuleList);
    pLdr->InInitializationOrderModuleList.Flink = &(pLdr->InInitializationOrderModuleList);
    pPeb->Ldr = pLdr;

    //Process Parameters
}

WNDPROC TestProc;

int main() {
    int i;

    dwThreadContextIndex = TlsAlloc();

    hHeap = HeapCreate(HEAP_CREATE_ENABLE_EXECUTE, 0x10000, 0);

    vtable = i386_vtable;

    /*TestProc = HeapAlloc(hHeap, 0, 40);
    WriteCallbackThunk(TestProc, 0x12345678, 4);

    for (i = 0; i < 36; i++) {
        printf("0x%x, ", ((PBYTE)(TestProc))[i]);
    }

    printf("%d\n", TestProc(8, 9, 10, 11));
    */
    

    InitSSDT();

    LdrLoadEXE(L"REVERSI.EXE");

    HeapDestroy(hHeap);
}