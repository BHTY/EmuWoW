/*Win32 Call Thunks*/

#include "cpu.h"
#include <string.h>
#include <stdio.h>
#include "thunks.h"
#include <windows.h>
//#include <errhandlingapi.h>
#include <winbase.h>

//#define printf(...)

ClassProcMap* classProcMapRoot = NULL;
HWNDProcMap* hwndProcMapRoot = NULL;
TimerProcMap* timerProcMapRoot = NULL;

VOID AddClassProcMapEntry(LPSTR lpClassName, DWORD WndProc) {
	ClassProcMap* classProcMapEntry = malloc(sizeof(ClassProcMap));

	classProcMapEntry->WndProc = WndProc;
	classProcMapEntry->lpClassName = malloc(strlen(lpClassName) + 1);
	strcpy(classProcMapEntry->lpClassName, lpClassName);

	if (classProcMapRoot) {
		classProcMapEntry->next = classProcMapRoot->next;
		classProcMapRoot->next = classProcMapEntry;
	}
	else {
		classProcMapEntry->next = NULL;
		classProcMapRoot = classProcMapEntry;
	}
}

ClassProcMap* FindClassProcMapEntry(LPSTR lpClassName) {
	ClassProcMap* current = classProcMapRoot;

	while (current) {
		if (strcmp(current->lpClassName, lpClassName) == 0) {
			return current;
		}

		current = current->next;
	}

	return NULL;
}

VOID AddHWNDProcMapEntry(HWND hwnd, DWORD WndProc) {
	HWNDProcMap* hwndProcMapEntry = malloc(sizeof(HWNDProcMap));

	hwndProcMapEntry->hwnd = hwnd;
	hwndProcMapEntry->WndProc = WndProc;

	if (hwndProcMapRoot) {
		hwndProcMapEntry->next = hwndProcMapRoot->next;
		hwndProcMapRoot->next = hwndProcMapEntry;
	}
	else {
		hwndProcMapEntry->next = NULL;
		hwndProcMapRoot = hwndProcMapEntry;
	}
}

HWNDProcMap* FindHWNDProcMapEntry(HWND hwnd) {
	HWNDProcMap* current = hwndProcMapRoot;

	while (current) {
		if (current->hwnd == hwnd) {
			return current;
		}

		current = current->next;
	}

	return NULL;
}

VOID AddTimerProcMapEntry(HWND hwnd, int nID, DWORD TimerProc) {
	TimerProcMap* existing_entry = FindTimerProcMapEntry(hwnd, nID);

	if (existing_entry) {
		existing_entry->TimerProc = TimerProc;
	}
	else {
		TimerProcMap* timerProcMapEntry = malloc(sizeof(TimerProcMap));
		timerProcMapEntry->hwnd = hwnd;
		timerProcMapEntry->TimerProc = TimerProc;
		timerProcMapEntry->nIDEvent = nID;

		if (timerProcMapRoot) {
			timerProcMapEntry->next = timerProcMapRoot->next;
			timerProcMapRoot->next = timerProcMapEntry;
		}
		else {
			timerProcMapEntry->next = NULL;
			timerProcMapRoot = timerProcMapEntry;
		}
	}
}

TimerProcMap* FindTimerProcMapEntry(HWND hwnd, int nID) {
	TimerProcMap* current = timerProcMapRoot;

	while (current) {
		if (current->hwnd == hwnd && current->nIDEvent == nID) {
			return current;
		}

		current = current->next;
	}

	return NULL;
}

VOID LockWindowForCPU(HWND hwnd, CPU* cpu) {
	HWNDProcMap* hwndProcMapEntry = FindHWNDProcMapEntry(hwnd);
	if(hwndProcMapEntry) hwndProcMapEntry->cpu = cpu;
}

VOID LockTimerForCPU(HWND hwnd, int nIDEvent, CPU* cpu) {
	TimerProcMap* timerProcMapEntry = FindTimerProcMapEntry(hwnd, nIDEvent);
	if (timerProcMapEntry) timerProcMapEntry->cpu = cpu;
}

DWORD_PTR ThunkCallback(CPU* cpu, DWORD TargetAddress) {
	DWORD_PTR oldPC = cpu->get_ip(cpu);
	INT callbackDepth = cpu->callback_depth;
	cpu->push_ra(cpu, EscapeVector);
	cpu->set_ip(cpu, TargetAddress);
	cpu->callback_depth++;

	while (cpu->callback_depth > callbackDepth) { //execute until cpu callback depth is back to what it was
		cpu->step(cpu);
	}

	cpu->set_ip(cpu, oldPC);

	return cpu->get_ret_val(cpu);
}

INT_PTR CALLBACK thunkDlgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	DWORD lpfnWndProc;
	HWNDProcMap* hwndProcMapEntry = FindHWNDProcMapEntry(hWnd);
	LPARAM lParamActual;
	CPU* cpu;

	printf("\nWindows called DlgProc(%p, %p, %p, %p)", hWnd, msg, wParam, lParam);

	if (msg == WM_SETFONT) return FALSE;

	if (hwndProcMapEntry) {
		lParamActual = lParam;
		lpfnWndProc = hwndProcMapEntry->WndProc;
		cpu = hwndProcMapEntry->cpu;
	}
	else {
		InitLParam* lpInitLParam = lParam;
		lParamActual = lpInitLParam->lpParam;
		lpfnWndProc = lpInitLParam->WndProc;

		cpu = lpInitLParam->cpu;
		AddHWNDProcMapEntry(hWnd, lpfnWndProc);
		LockWindowForCPU(hWnd, cpu);
	}

	printf("\nThunking to DlgProc (%p) with Msg %p (lParam=%p)", lpfnWndProc, msg, lParam);

	cpu->set_params(cpu, 4, lParamActual, wParam, msg, hWnd);

	return ThunkCallback(cpu, lpfnWndProc);
}

LRESULT CALLBACK thunkWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	DWORD lpfnWndProc;
	LPARAM lParamActual;
	HWNDProcMap* hwndProcMapEntry = FindHWNDProcMapEntry(hWnd);
	CPU* cpu;

	if (msg == WM_GETMINMAXINFO || msg == WM_NCCALCSIZE) return DefWindowProc(hWnd, msg, wParam, lParam);

	if (hwndProcMapEntry) {
		lParamActual = lParam;
		lpfnWndProc = hwndProcMapEntry->WndProc;
		cpu = hwndProcMapEntry->cpu;
	}
	else {
		InitLParam* lpInitLParam = ((CREATESTRUCTA*)lParam)->lpCreateParams;

		lParamActual = lpInitLParam->lpParam;
		((CREATESTRUCTA*)lParam)->lpCreateParams = lParamActual;
		lpfnWndProc = lpInitLParam->WndProc;
		AddHWNDProcMapEntry(hWnd, lpfnWndProc);
		LockWindowForCPU(hWnd, lpInitLParam->cpu);
		cpu = lpInitLParam->cpu;
	}

	printf("\nThunking to WndProc with Msg %p (SP=%p)", msg, cpu->get_sp(cpu));

	cpu->set_params(cpu, 4, lParam, wParam, msg, hWnd);

	return ThunkCallback(cpu, lpfnWndProc);
}

void CALLBACK thunkTimerProc(HWND hwnd, UINT message, UINT_PTR idTimer, DWORD dwTime) {
	TimerProcMap* timerProcMapEntry = FindTimerProcMapEntry(hwnd, idTimer);
	CPU* cpu;

	if (timerProcMapEntry) {
		cpu = timerProcMapEntry->cpu;
		printf("\nThunking to TimerProc");

		cpu->set_params(cpu, 4, dwTime, idTimer, message, hwnd);		

		ThunkCallback(timerProcMapEntry->cpu, timerProcMapEntry->TimerProc);
	}
}

extern DWORD_PTR (*thunk_table[4096])(CPU*);

INT ThunkSyscall(CPU* cpu) {
	INT syscall_id = cpu->syscall_id(cpu);

	if (thunk_table[syscall_id] == 0) {
		printf("\nUnimplemented thunk %x!", syscall_id);
		while (1);
	}
	else {
		DWORD return_value = thunk_table[syscall_id](cpu);
		cpu->set_ret_val(cpu, return_value);
		printf(" and returning %p", return_value);
	}
}