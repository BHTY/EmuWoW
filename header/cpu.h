#pragma once

#include <stdint.h>
#include <windows.h>
#include <winnt.h>
#include <winternl.h>
#include <varargs.h>

typedef struct __PEB {
	BYTE                          Reserved1[2];
	BYTE                          BeingDebugged;
	BYTE                          Reserved2[1];
	PVOID                         Reserved3[2];
	PPEB_LDR_DATA                 Ldr;
	PRTL_USER_PROCESS_PARAMETERS  ProcessParameters;
	PVOID                         Reserved4[3];
	PVOID                         AtlThunkSListPtr;
	PVOID                         Reserved5;
	ULONG                         Reserved6;
	PVOID                         Reserved7;
	ULONG                         Reserved8;
	ULONG                         AtlThunkSListPtr32;
	PVOID                         Reserved9[45];
	BYTE                          Reserved10[96];
	PPS_POST_PROCESS_INIT_ROUTINE PostProcessInitRoutine;
	BYTE                          Reserved11[128];
	PVOID                         Reserved12[1];
	ULONG                         SessionId;
} __PEB, * _PPEB;

typedef struct __TEB {
	PVOID Reserved1[12];
	_PPEB  ProcessEnvironmentBlock;
	PVOID Reserved2[399];
	BYTE  Reserved3[1952];
	PVOID TlsSlots[64];
	BYTE  Reserved4[8];
	PVOID Reserved5[26];
	PVOID ReservedForOle;
	PVOID Reserved6[4];
	PVOID TlsExpansionSlots;
} __TEB, * _PTEB;

typedef struct CPU {
	INT (*step)(struct CPU*);
	VOID(*set_params)(struct CPU*, INT, ...);
	DWORD_PTR (*fn_arg)(struct CPU*, INT);

	VOID (*set_ret_val)(struct CPU*, DWORD_PTR);
	DWORD_PTR(*get_ret_val)(struct CPU*);

	DWORD_PTR(*syscall_id)(struct CPU*);

	VOID(*set_teb)(struct CPU*, PTEB);
	_PTEB(*get_teb)(struct CPU*);

	VOID (*set_ip)(struct CPU*, DWORD_PTR);
	DWORD_PTR(*get_ip)(struct CPU*);

	VOID (*set_sp)(struct CPU*, DWORD_PTR);
	DWORD_PTR(*get_sp)(struct CPU*);

	DWORD_PTR(*push_ra)(struct CPU*, DWORD_PTR);

	va_list(*get_va_list)(struct CPU*, DWORD_PTR);

	VOID(*dump_regs)(struct CPU*);

	int callback_depth;

} CPU;

extern DWORD_PTR EscapeVector;

//stuff dealing with breakpoints & debugging

CPU* AllocCPU();