#pragma once

#include <Windows.h>
#include "EmuWoW.h"

typedef struct _CPUVTable {
	PThreadContext(*Init)(DWORD_PTR sp);
	VOID (*ExtractParams)(PThreadContext pCtx, DWORD_PTR* pDwParamList, DWORD nParams);//extract params
	DWORD_PTR (*ExecuteEmulatedProcedure)(PThreadContext pCtx, FARPROC dwTargetAddress, DWORD_PTR* pDwParamList, DWORD nParams);//execute emulated procedure
	FARPROC (*MakeThunk)(DWORD Index, DWORD dwArgs);

	//debugging stuff
} CPUVTable, *PCPUVTable;

extern CPUVTable vtable;

FARPROC StubExport(DWORD Index);
VOID WriteCallbackThunk(PBYTE pThunk, FARPROC EntryPoint, DWORD dwArgs);
VOID EmuCreate(DWORD dwStackReserve, DWORD dwStackCommit);
DWORD_PTR EmuExecute(FARPROC EntryPoint, DWORD dwNumArgs, ...);
DWORD_PTR CallSystemService(DWORD dwIndex);

