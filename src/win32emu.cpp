#include <stdio.h>
#include <windows.h>
#include <winternl.h>
#include "pe.h"
#include "cpu.h"

/*
To-do List
- Fix up CPU related stuff (errors, breakpoints, debugging, etc)
- EmuLoadLibrary needs to actually put stuff in the PEB data structure

Finish implementing callbacks
1.) Implement AddClassProcMapEntry, FindClassProcMapEntry, AddHWNDProcMapEntry, FindHWNDProcMapEntry, LockWindowForCPU
2.) Call LockWindowForCPU in any functions (i.e. DispatchMessageA) that call the window procedure
3.) Implement the needed CPU functions
4.) Write the escape vector & make the interrupt decrement the callback count
    The escape vector itself can be essentially the same as what we have now.

GetCommandLineA and GetModuleHandleA could each use some work.
*/

UNICODE_STRING MakeUnicodeFromAnsi(LPSTR lpString) {
    UNICODE_STRING string;
    USHORT AllocationSize = strlen(lpString) * 2 + 2;
    USHORT StringLen;
    PWSTR pString = malloc(AllocationSize);
    MultiByteToWideChar(CP_ACP, 0, lpString, -1, pString, AllocationSize);
    StringLen = wcslen(pString);
    string.Buffer = pString;
    string.Length = StringLen;
    string.MaximumLength = AllocationSize;
    return string;
}

CPU* EmuCreateThread(PBYTE lpStartAddress, DWORD dwStackReserve, DWORD dwStackCommit, PEB* peb) {
    CPU* cpu = AllocCPU();
    PTEB pTeb = malloc(sizeof(TEB));
    cpu->set_teb(cpu, pTeb);

    //allocate stack
    dwStackCommit *= 8;

    PBYTE StackBase = VirtualAlloc(NULL, dwStackReserve, MEM_RESERVE, PAGE_READWRITE);
    PBYTE StackTop = StackBase + dwStackReserve;
    PBYTE StackLowestCommitted = VirtualAlloc(StackTop - dwStackCommit, dwStackCommit, MEM_COMMIT, PAGE_READWRITE);

    //stuff stuff into TEB
    pTeb->Reserved1[1] = StackTop; //Highest Address
    pTeb->Reserved1[2] = StackLowestCommitted; //Stack Limit
     
    //put stack pointer into CPU
    cpu->set_sp(cpu, StackTop);

    pTeb->Reserved1[6] = pTeb;
    pTeb->ProcessEnvironmentBlock = peb;

    cpu->set_ip(cpu, lpStartAddress);

    return cpu;
}

VOID EmuInitProcessOld(LPCSTR lpApplicationName, LPSTR lpCommandLine) {
    PEB* peb = malloc(sizeof(PEB));
    memset(peb, 0, sizeof(PEB));
    
    PRTL_USER_PROCESS_PARAMETERS lpProcParams = malloc(sizeof(RTL_USER_PROCESS_PARAMETERS));
    lpProcParams->CommandLine = MakeUnicodeFromAnsi(lpCommandLine);
    lpProcParams->ImagePathName = MakeUnicodeFromAnsi(lpApplicationName);
    peb->ProcessParameters = lpProcParams;

    HMODULE image = EmuLoadLibrary(lpApplicationName, 0, peb, NULL);
    IMAGE_OPTIONAL_HEADER* pImageHdr = &(EmuGetNtHeader(image)->OptionalHeader);
    peb->Reserved3[1] = image; //ImageBaseAddress

    HANDLE hHeap = HeapCreate(0, pImageHdr->SizeOfHeapReserve, pImageHdr->SizeOfHeapCommit);
    peb->Reserved4[1] = hHeap; //ProcessHeap
    peb->Reserved9[16] = pImageHdr->SizeOfHeapReserve; //HeapSegmentReserve
    peb->Reserved9[17] = pImageHdr->SizeOfHeapCommit; //HeapSegmentCommit

    CPU* cpu = EmuCreateThread((PBYTE)image + pImageHdr->AddressOfEntryPoint, pImageHdr->SizeOfStackReserve, pImageHdr->SizeOfStackCommit, peb);

    //while (1);

    while (!(cpu->step(cpu))) {
    }
}

VOID EmuInitProcess(LPCSTR lpApplicationName, LPSTR lpCommandLine) {
    PEB* peb = malloc(sizeof(PEB));
    memset(peb, 0, sizeof(PEB));

    PRTL_USER_PROCESS_PARAMETERS lpProcParams = malloc(sizeof(RTL_USER_PROCESS_PARAMETERS));
    lpProcParams->CommandLine = MakeUnicodeFromAnsi(lpCommandLine);
    lpProcParams->ImagePathName = MakeUnicodeFromAnsi(lpApplicationName);
    peb->ProcessParameters = lpProcParams;

    CPU* cpu = EmuLoadModule(lpApplicationName, peb);

    //while (1);

    while (!(cpu->step(cpu))) {

    }
}

int main(int argc, char** argv)
{
    EmuInitProcess(argv[1], "");

    /*VirtualAlloc(0x400000, 0x100000, MEM_RESERVE, PAGE_READWRITE);

    PEB* peb = NtCurrentTeb()->ProcessEnvironmentBlock;//(PEB*)__readgsdword(0x60);
    HMODULE hKernel32 = GetModuleHandleA("KERNEL32.DLL");
    LPVOID pFn = GetProcAddress(hKernel32, "GetProcAddress");

    printf("KERNEL32 Handle = %p %p\n", hKernel32, EmuGetModuleHandle(L"KERNEL32.DLL", peb));
    printf("KERNEL32:GetProcAddress = %p %p\n", pFn, EmuGetProcAddress(hKernel32, "GetProcAddress"));

    printf("Process Image Base: %p\n\n", GetModuleHandle(NULL));

    VirtualFree(0x400000, 0, MEM_RELEASE);
    LPVOID hGdi = EmuLoadLibrary("c:\\users\\will\\desktop\\pedist\\hello.exe", 0);*/
}

