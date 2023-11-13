global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

global NtCreateFile
extern NtCreateFile
export NtCreateFile

NtCreateFile:
	mov eax, THUNK_NTDLL_NTCREATEFILE
	int SYSCALL_THUNK
	ret 0x2c

THUNK_NTDLL_NTCREATEFILE equ 0x0

SYSCALL_THUNK equ 0x80