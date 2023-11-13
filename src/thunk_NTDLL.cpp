#include <windows.h>
#include <winternl.h>
#include "thunk_NTDLL.h"
#include "thunks.h"

NTSTATUS thunk_NtCreateFile(CPU* cpu){
	PHANDLE FileHandle = cpu->fn_arg(cpu, 0);
	ACCESS_MASK DesiredAccess = cpu->fn_arg(cpu, 1);
	POBJECT_ATTRIBUTES ObjectAttributes = cpu->fn_arg(cpu, 2);
	PIO_STATUS_BLOCK IoStatusBlock = cpu->fn_arg(cpu, 3);
	PLARGE_INTEGER AllocationSize = cpu->fn_arg(cpu, 4);
	ULONG FileAttributes = cpu->fn_arg(cpu, 5);
	ULONG ShareAccess = cpu->fn_arg(cpu, 6);
	ULONG CreateDisposition = cpu->fn_arg(cpu, 7);
	ULONG CreateOptions = cpu->fn_arg(cpu, 8);
	PVOID EaBuffer = cpu->fn_arg(cpu, 9);
	ULONG EaLength = cpu->fn_arg(cpu, 10);
	printf("\nCalling NTDLL!NtCreateFile(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", FileHandle, DesiredAccess, ObjectAttributes, IoStatusBlock, AllocationSize, FileAttributes, ShareAccess, CreateDisposition, CreateOptions, EaBuffer, EaLength);
	return NULL;// NtCreateFile(FileHandle, DesiredAccess, ObjectAttributes, IoStatusBlock, AllocationSize, FileAttributes, ShareAccess, CreateDisposition, CreateOptions, EaBuffer, EaLength);
}
