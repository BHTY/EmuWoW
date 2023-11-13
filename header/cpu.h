#pragma once

#include <stdint.h>
#include <windows.h>
#include <winnt.h>
#include <winternl.h>

typedef struct CPU {
	INT (*step)(struct CPU*);
	VOID(*set_params)(struct CPU*, INT, ...);
	DWORD_PTR (*fn_arg)(struct CPU*, DWORD);

	VOID (*set_ret_val)(struct CPU*, DWORD);
	DWORD_PTR(*get_ret_val)(struct CPU*);

	DWORD_PTR(*syscall_id)(struct CPU*);

	VOID(*set_teb)(struct CPU*, PTEB);
	PTEB(*get_teb)(struct CPU*);

	VOID (*set_ip)(struct CPU*, DWORD);
	DWORD_PTR(*get_ip)(struct CPU*);

	VOID (*set_sp)(struct CPU*, DWORD);
	DWORD_PTR(*get_sp)(struct CPU*);

	DWORD_PTR(*push_ra)(struct CPU*, DWORD);

	int callback_depth;

} CPU;

extern DWORD_PTR EscapeVector;

//stuff dealing with breakpoints & debugging

CPU* AllocCPU();