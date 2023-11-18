#pragma once

#include "cpu.h"

#define printf(...)

typedef struct {
	LPVOID lpParam;
	DWORD WndProc;
	CPU* cpu;
} InitLParam;

typedef struct {
	LPSTR lpClassName;
	DWORD WndProc;
	struct ClassProcMap* next;
} ClassProcMap;

typedef struct {
	CPU* cpu;
	HWND hwnd;
	DWORD WndProc;
	struct HWNDProcMap* next;
} HWNDProcMap;

typedef struct {
	CPU* cpu;
	HWND hwnd;
	DWORD TimerProc;
	int nIDEvent;
	struct TimerProcMap* next;
} TimerProcMap;

VOID AddClassProcMapEntry(LPSTR lpClassName, DWORD WndProc);
ClassProcMap* FindClassProcMapEntry(LPSTR lpClassName);
VOID AddHWNDProcMapEntry(HWND hwnd, DWORD WndProc);
HWNDProcMap* FindHWNDProcMapEntry(HWND hwnd);
VOID AddTimerProcMapEntry(HWND hwnd, int nID, DWORD TimerProc);
TimerProcMap* FindTimerProcMapEntry(HWND hwnd, int nID);
VOID LockWindowForCPU(HWND hwnd, CPU* cpu);
VOID LockTimerForCPU(HWND hwnd, int nIDEvent, CPU* cpu);

INT_PTR CALLBACK thunkDlgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK thunkWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void CALLBACK thunkTimerProc(HWND hwnd, UINT message, UINT_PTR idTimer, DWORD dwTime);

/*
When a window class is registered, the RegisterClass thunk also calls a function to register the emulated WndProc with the class
name.

Inside of the CreateWindow thunk, a function is called to retrieve the appropriate emulated WndProc for the class name. An 
InitLParam structure is initialized with members lpParam and the emulated WndProc, and then passed as lpParam to CreateWindow.

Inside of the WndProc thunk, a lookup is made into the HWND->WndProc table. If no such mapping exists (since the window is still
being created), the function will return NULL. This tells the WndProc thunk to treat lParam as a pointer to an InitLParam struct.
An entry will then be made in the lookup table and a WndProc thunk will be made (passing the actual lParam member in lpParam).
*/

INT ThunkSyscall(CPU* cpu);
DWORD ThunkCallback(CPU* cpu, DWORD TargetAddress);