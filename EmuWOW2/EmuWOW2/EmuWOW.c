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
#include "r4000.h"

HANDLE hHeap;
DWORD dwThreadContextIndex;
PEmuPEB pPeb = NULL;

void DisplayLoadedLibs(PEmuPEB_LDR_DATA Ldr) {

    PLIST_ENTRY rootEntry = &(Ldr->InMemoryOrderModuleList);
    PLIST_ENTRY pEntry;
    PBYTE DllBase;

    printf("The loaded libraries were:\n");

    for (pEntry = rootEntry->Flink; pEntry != rootEntry; pEntry = pEntry->Flink) {
        PEmuLDR_DATA_TABLE_ENTRY pDataEntry = pEntry - 1;
        DllBase = pDataEntry->DllBase;
        printf("	%ls: %p (entry point = %p)\n", pDataEntry->BaseDllName.Buffer, DllBase, DllBase + EmuGetNtHeader(DllBase)->OptionalHeader.AddressOfEntryPoint);
    }
}

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
    memset(pPeb, 0, sizeof(PEmuPEB));
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

    printf("pLdr = %p\n", pLdr);

    //Process Parameters
}

WNDPROC TestProc;

int wmain(int argc, wchar_t** argv) {
    int i;
    HRESULT hResult;

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

    hResult = LdrLoadEXE(argv[1]);

    HeapDestroy(hHeap);

    return hResult;
}

/*
TODO LIST
1.) Fix the 386 emulator
2.) Integrate the MIPS emulator
3.) Integrate the Alpha emulator
4.) Add a debugger that isn't total shit
*/