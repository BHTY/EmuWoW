#pragma once

#include <windows.h>

typedef struct _WOW_THUNK {
	CHAR ModuleName[64];
	CHAR ServiceName[64];
	FARPROC EntryPoint;
	DWORD dwArgs;
} WOW_THUNK;

extern WOW_THUNK WowSystemServiceDispatchTable[];

void InitSSDT();
DWORD LookupSSDT(LPSTR ModuleName, LPSTR ServiceName);
