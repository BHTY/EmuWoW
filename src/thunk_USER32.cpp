#include <windows.h>
#include <winternl.h>
#include "thunk_USER32.h"
#include "thunks.h"

LONG thunk_ChangeDisplaySettingsA(CPU* cpu){
	LPDEVMODEA unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ChangeDisplaySettingsA(%p, %p)", unnamedParam0, unnamedParam1);
	return ChangeDisplaySettingsA(unnamedParam0, unnamedParam1);
}
LONG thunk_ChangeDisplaySettingsW(CPU* cpu){
	LPDEVMODEW unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ChangeDisplaySettingsW(%p, %p)", unnamedParam0, unnamedParam1);
	return ChangeDisplaySettingsW(unnamedParam0, unnamedParam1);
}
LONG thunk_ChangeDisplaySettingsExA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDEVMODEA unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPVOID unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ChangeDisplaySettingsExA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ChangeDisplaySettingsExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LONG thunk_ChangeDisplaySettingsExW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDEVMODEW unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPVOID unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ChangeDisplaySettingsExW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ChangeDisplaySettingsExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HDESK thunk_CreateDesktopA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEA unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	ACCESS_MASK unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPSECURITY_ATTRIBUTES unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!CreateDesktopA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return CreateDesktopA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
HDESK thunk_CreateDesktopW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEW unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	ACCESS_MASK unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPSECURITY_ATTRIBUTES unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!CreateDesktopW(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return CreateDesktopW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
LONG thunk_DisplayConfigGetDeviceInfo(CPU* cpu){
	DISPLAYCONFIG_DEVICE_INFO_HEADER * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DisplayConfigGetDeviceInfo(%p)", unnamedParam0);
	return DisplayConfigGetDeviceInfo(unnamedParam0);
}
BOOL thunk_EnumDisplayDevicesA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDISPLAY_DEVICEA unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EnumDisplayDevicesA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumDisplayDevicesA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_EnumDisplayDevicesW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDISPLAY_DEVICEW unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EnumDisplayDevicesW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumDisplayDevicesW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_EnumDisplaySettingsA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEA unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumDisplaySettingsA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumDisplaySettingsA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumDisplaySettingsW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEW unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumDisplaySettingsW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumDisplaySettingsW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumDisplaySettingsExA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEA unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EnumDisplaySettingsExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumDisplaySettingsExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_EnumDisplaySettingsExW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPDEVMODEW unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EnumDisplaySettingsExW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumDisplaySettingsExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LONG thunk_GetDisplayConfigBufferSizes(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetDisplayConfigBufferSizes(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetDisplayConfigBufferSizes(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_UpdateLayeredWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HDC unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	SIZE * unnamedParam3 = cpu->fn_arg(cpu, 3);
	HDC unnamedParam4 = cpu->fn_arg(cpu, 4);
	POINT * unnamedParam5 = cpu->fn_arg(cpu, 5);
	COLORREF unnamedParam6 = cpu->fn_arg(cpu, 6);
	BLENDFUNCTION * unnamedParam7 = cpu->fn_arg(cpu, 7);
	DWORD unnamedParam8 = cpu->fn_arg(cpu, 8);
	printf("\nCalling USER32!UpdateLayeredWindow(%p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
	return UpdateLayeredWindow(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
}
BOOL thunk_UpdateLayeredWindowIndirect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UPDATELAYEREDWINDOWINFO const * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UpdateLayeredWindowIndirect(%p, %p)", unnamedParam0, unnamedParam1);
	return UpdateLayeredWindowIndirect(unnamedParam0, unnamedParam1);
}
HKL thunk_ActivateKeyboardLayout(CPU* cpu){
	HKL unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ActivateKeyboardLayout(%p, %p)", unnamedParam0, unnamedParam1);
	return ActivateKeyboardLayout(unnamedParam0, unnamedParam1);
}
BOOL thunk_AdjustWindowRect(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!AdjustWindowRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return AdjustWindowRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_AdjustWindowRectEx(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!AdjustWindowRectEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return AdjustWindowRectEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_AnyPopup(CPU* cpu){
	printf("\nCalling USER32!AnyPopu)");
	return AnyPopup();
}
BOOL thunk_AppendMenuA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT_PTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!AppendMenuA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return AppendMenuA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_AppendMenuW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT_PTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!AppendMenuW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return AppendMenuW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_ArrangeIconicWindows(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ArrangeIconicWindows(%p)", unnamedParam0);
	return ArrangeIconicWindows(unnamedParam0);
}
BOOL thunk_AttachThreadInput(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!AttachThreadInput(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return AttachThreadInput(unnamedParam0, unnamedParam1, unnamedParam2);
}
HDWP thunk_BeginDeferWindowPos(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!BeginDeferWindowPos(%p)", unnamedParam0);
	return BeginDeferWindowPos(unnamedParam0);
}
HDC thunk_BeginPaint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPAINTSTRUCT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!BeginPaint(%p, %p)", unnamedParam0, unnamedParam1);
	return BeginPaint(unnamedParam0, unnamedParam1);
}
BOOL thunk_BringWindowToTop(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!BringWindowToTop(%p)", unnamedParam0);
	return BringWindowToTop(unnamedParam0);
}
LONG thunk_BroadcastSystemMessage(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!BroadcastSystemMessage(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return BroadcastSystemMessage(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LONG thunk_BroadcastSystemMessageA(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!BroadcastSystemMessageA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return BroadcastSystemMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LONG thunk_BroadcastSystemMessageW(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!BroadcastSystemMessageW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return BroadcastSystemMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_CallMsgFilterA(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CallMsgFilterA(%p, %p)", unnamedParam0, unnamedParam1);
	return CallMsgFilterA(unnamedParam0, unnamedParam1);
}
BOOL thunk_CallMsgFilterW(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CallMsgFilterW(%p, %p)", unnamedParam0, unnamedParam1);
	return CallMsgFilterW(unnamedParam0, unnamedParam1);
}
LRESULT thunk_CallNextHookEx(CPU* cpu){
	HHOOK unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CallNextHookEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CallNextHookEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_CallWindowProcA(CPU* cpu){
	WNDPROC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CallWindowProcA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CallWindowProcA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LRESULT thunk_CallWindowProcW(CPU* cpu){
	WNDPROC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CallWindowProcW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CallWindowProcW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
WORD thunk_CascadeWindows(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const HWND * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CascadeWindows(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CascadeWindows(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_ChangeClipboardChain(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ChangeClipboardChain(%p, %p)", unnamedParam0, unnamedParam1);
	return ChangeClipboardChain(unnamedParam0, unnamedParam1);
}
BOOL thunk_ChangeMenuA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ChangeMenuA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ChangeMenuA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_ChangeMenuW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ChangeMenuW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ChangeMenuW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_ChangeWindowMessageFilter(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ChangeWindowMessageFilter(%p, %p)", unnamedParam0, unnamedParam1);
	return ChangeWindowMessageFilter(unnamedParam0, unnamedParam1);
}
BOOL thunk_ChangeWindowMessageFilterEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	CHANGEFILTERSTRUCT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!ChangeWindowMessageFilterEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return ChangeWindowMessageFilterEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LPSTR thunk_CharLowerA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharLowerA(%p)", unnamedParam0);
	return CharLowerA(unnamedParam0);
}
LPWSTR thunk_CharLowerW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharLowerW(%p)", unnamedParam0);
	return CharLowerW(unnamedParam0);
}
DWORD thunk_CharLowerBuffA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharLowerBuffA(%p, %p)", unnamedParam0, unnamedParam1);
	return CharLowerBuffA(unnamedParam0, unnamedParam1);
}
DWORD thunk_CharLowerBuffW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharLowerBuffW(%p, %p)", unnamedParam0, unnamedParam1);
	return CharLowerBuffW(unnamedParam0, unnamedParam1);
}
LPSTR thunk_CharNextA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharNextA(%p)", unnamedParam0);
	return CharNextA(unnamedParam0);
}
LPWSTR thunk_CharNextW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharNextW(%p)", unnamedParam0);
	return CharNextW(unnamedParam0);
}
LPSTR thunk_CharNextExA(CPU* cpu){
	WORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CharNextExA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CharNextExA(unnamedParam0, unnamedParam1, unnamedParam2);
}
LPSTR thunk_CharPrevA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharPrevA(%p, %p)", unnamedParam0, unnamedParam1);
	return CharPrevA(unnamedParam0, unnamedParam1);
}
LPWSTR thunk_CharPrevW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharPrevW(%p, %p)", unnamedParam0, unnamedParam1);
	return CharPrevW(unnamedParam0, unnamedParam1);
}
LPSTR thunk_CharPrevExA(CPU* cpu){
	WORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CharPrevExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CharPrevExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LPSTR thunk_CharUpperA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharUpperA(%p)", unnamedParam0);
	return CharUpperA(unnamedParam0);
}
LPWSTR thunk_CharUpperW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CharUpperW(%p)", unnamedParam0);
	return CharUpperW(unnamedParam0);
}
DWORD thunk_CharUpperBuffA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharUpperBuffA(%p, %p)", unnamedParam0, unnamedParam1);
	return CharUpperBuffA(unnamedParam0, unnamedParam1);
}
DWORD thunk_CharUpperBuffW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharUpperBuffW(%p, %p)", unnamedParam0, unnamedParam1);
	return CharUpperBuffW(unnamedParam0, unnamedParam1);
}
BOOL thunk_CharToOemA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharToOemA(%p, %p)", unnamedParam0, unnamedParam1);
	return CharToOemA(unnamedParam0, unnamedParam1);
}
BOOL thunk_CharToOemW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CharToOemW(%p, %p)", unnamedParam0, unnamedParam1);
	return CharToOemW(unnamedParam0, unnamedParam1);
}
BOOL thunk_CharToOemBuffA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CharToOemBuffA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CharToOemBuffA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_CharToOemBuffW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CharToOemBuffW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CharToOemBuffW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_CheckDlgButton(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CheckDlgButton(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CheckDlgButton(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_CheckMenuItem(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CheckMenuItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CheckMenuItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_CheckMenuRadioItem(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CheckMenuRadioItem(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CheckMenuRadioItem(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_CheckRadioButton(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	int unnamedParam2 = cpu->fn_arg(cpu, 2);
	int unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CheckRadioButton(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CheckRadioButton(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWND thunk_ChildWindowFromPoint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ChildWindowFromPoint(%p, %p)", unnamedParam0, unnamedParam1);
	return ChildWindowFromPoint(unnamedParam0, *(POINT*)&unnamedParam1);
}
HWND thunk_ChildWindowFromPointEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!ChildWindowFromPointEx(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return ChildWindowFromPointEx(unnamedParam0, *(POINT*)&unnamedParam1, unnamedParam2);
}
BOOL thunk_ClientToScreen(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ClientToScreen(%p, %p)", unnamedParam0, unnamedParam1);
	return ClientToScreen(unnamedParam0, unnamedParam1);
}
BOOL thunk_ClipCursor(CPU* cpu){
	const RECT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ClipCursor(%p)", unnamedParam0);
	return ClipCursor(unnamedParam0);
}
BOOL thunk_CloseClipboard(CPU* cpu){
	printf("\nCalling USER32!CloseClipboar)");
	return CloseClipboard();
}
BOOL thunk_CloseDesktop(CPU* cpu){
	HDESK unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CloseDesktop(%p)", unnamedParam0);
	return CloseDesktop(unnamedParam0);
}
BOOL thunk_CloseTouchInputHandle(CPU* cpu){
	HTOUCHINPUT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CloseTouchInputHandle(%p)", unnamedParam0);
	return CloseTouchInputHandle(unnamedParam0);
}
BOOL thunk_CloseGestureInfoHandle(CPU* cpu){
	HGESTUREINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CloseGestureInfoHandle(%p)", unnamedParam0);
	return CloseGestureInfoHandle(unnamedParam0);
}
BOOL thunk_CloseWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CloseWindow(%p)", unnamedParam0);
	return CloseWindow(unnamedParam0);
}
BOOL thunk_CloseWindowStation(CPU* cpu){
	HWINSTA unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CloseWindowStation(%p)", unnamedParam0);
	return CloseWindowStation(unnamedParam0);
}
INT thunk_CopyAcceleratorTableA(CPU* cpu){
	HACCEL unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPACCEL unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CopyAcceleratorTableA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CopyAcceleratorTableA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_CopyAcceleratorTableW(CPU* cpu){
	HACCEL unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPACCEL unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CopyAcceleratorTableW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CopyAcceleratorTableW(unnamedParam0, unnamedParam1, unnamedParam2);
}
HICON thunk_CopyIcon(CPU* cpu){
	HICON unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CopyIcon(%p)", unnamedParam0);
	return CopyIcon(unnamedParam0);
}
HANDLE thunk_CopyImage(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CopyImage(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CopyImage(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_CopyRect(CPU* cpu){
	RECT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CopyRect(%p, %p)", unnamedParam0, unnamedParam1);
	return CopyRect(unnamedParam0, unnamedParam1);
}
INT thunk_CountClipboardFormats(CPU* cpu){
	printf("\nCalling USER32!CountClipboardFormat)");
	return CountClipboardFormats();
}
HACCEL thunk_CreateAcceleratorTableA(CPU* cpu){
	LPACCEL unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CreateAcceleratorTableA(%p, %p)", unnamedParam0, unnamedParam1);
	return CreateAcceleratorTableA(unnamedParam0, unnamedParam1);
}
HACCEL thunk_CreateAcceleratorTableW(CPU* cpu){
	LPACCEL unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!CreateAcceleratorTableW(%p, %p)", unnamedParam0, unnamedParam1);
	return CreateAcceleratorTableW(unnamedParam0, unnamedParam1);
}
HICON thunk_CreateIconIndirect(CPU* cpu){
	PICONINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!CreateIconIndirect(%p)", unnamedParam0);
	return CreateIconIndirect(unnamedParam0);
}
BOOL thunk_CreateCaret(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBITMAP unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CreateCaret(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateCaret(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HCURSOR thunk_CreateCursor(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPCVOID unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPCVOID unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!CreateCursor(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return CreateCursor(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
HWND thunk_CreateDialogIndirectParamA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCDLGTEMPLATEA unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CreateDialogIndirectParamA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CreateDialogIndirectParamA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HWND thunk_CreateDialogIndirectParamW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCDLGTEMPLATEW unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CreateDialogIndirectParamW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CreateDialogIndirectParamW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HWND thunk_CreateDialogParamA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CreateDialogParamA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CreateDialogParamA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HWND thunk_CreateDialogParamW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!CreateDialogParamW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return CreateDialogParamW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HICON thunk_CreateIcon(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	BYTE unnamedParam3 = cpu->fn_arg(cpu, 3);
	BYTE unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPCVOID unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPCVOID unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!CreateIcon(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return CreateIcon(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
HICON thunk_CreateIconFromResource(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CreateIconFromResource(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateIconFromResource(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HICON thunk_CreateIconFromResourceEx(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!CreateIconFromResourceEx(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return CreateIconFromResourceEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
HMENU thunk_CreateMenu(CPU* cpu){
	printf("\nCalling USER32!CreateMen)");
	return CreateMenu();
}
HMENU thunk_CreatePopupMenu(CPU* cpu){
	printf("\nCalling USER32!CreatePopupMen)");
	return CreatePopupMenu();
}
HWND thunk_CreateWindowExA(CPU* cpu){
	InitLParam initLParam;

	DWORD dwExStyle = cpu->fn_arg(cpu, 0);
	LPCSTR lpClassName = cpu->fn_arg(cpu, 1);
	LPCSTR lpWindowName = cpu->fn_arg(cpu, 2);
	DWORD dwStyle = cpu->fn_arg(cpu, 3);
	int X = cpu->fn_arg(cpu, 4);
	int Y = cpu->fn_arg(cpu, 5);
	int nWidth = cpu->fn_arg(cpu, 6);
	int nHeight = cpu->fn_arg(cpu, 7);
	HWND hWndParent = cpu->fn_arg(cpu, 8);
	HMENU hMenu = cpu->fn_arg(cpu, 9);
	HINSTANCE hInstance = cpu->fn_arg(cpu, 10);
	LPVOID lpParam = cpu->fn_arg(cpu, 11);

	initLParam.lpParam = lpParam;
	initLParam.WndProc = FindClassProcMapEntry(lpClassName)->WndProc;
	initLParam.cpu = cpu;

	printf("\nCalling USER32!CreateWindowExA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, &initLParam);

	HWND hwnd = CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, &initLParam);

	return hwnd;
}
HWND thunk_CreateWindowExW(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	HWND unnamedParam8 = cpu->fn_arg(cpu, 8);
	HMENU unnamedParam9 = cpu->fn_arg(cpu, 9);
	HINSTANCE unnamedParam10 = cpu->fn_arg(cpu, 10);
	LPVOID unnamedParam11 = cpu->fn_arg(cpu, 11);
	printf("\nCalling USER32!CreateWindowExW(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
	return CreateWindowExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
}
HWINSTA thunk_CreateWindowStationA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	ACCESS_MASK unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CreateWindowStationA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateWindowStationA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWINSTA thunk_CreateWindowStationW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	ACCESS_MASK unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!CreateWindowStationW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateWindowStationW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWND thunk_CreateMDIWindowA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	HWND unnamedParam7 = cpu->fn_arg(cpu, 7);
	HINSTANCE unnamedParam8 = cpu->fn_arg(cpu, 8);
	LPARAM unnamedParam9 = cpu->fn_arg(cpu, 9);
	printf("\nCalling USER32!CreateMDIWindowA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
	return CreateMDIWindowA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
}
HWND thunk_CreateMDIWindowW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	HWND unnamedParam7 = cpu->fn_arg(cpu, 7);
	HINSTANCE unnamedParam8 = cpu->fn_arg(cpu, 8);
	LPARAM unnamedParam9 = cpu->fn_arg(cpu, 9);
	printf("\nCalling USER32!CreateMDIWindowW(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
	return CreateMDIWindowW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
}
HSYNTHETICPOINTERDEVICE thunk_CreateSyntheticPointerDevice(CPU* cpu){
	POINTER_INPUT_TYPE unnamedParam0 = cpu->fn_arg(cpu, 0);
	ULONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_FEEDBACK_MODE unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!CreateSyntheticPointerDevice(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CreateSyntheticPointerDevice(unnamedParam0, unnamedParam1, unnamedParam2);
}
LRESULT thunk_DefDlgProcA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefDlgProcA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefDlgProcA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_DefDlgProcW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefDlgProcW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefDlgProcW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HDWP thunk_DeferWindowPos(CPU* cpu){
	HDWP unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	UINT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!DeferWindowPos(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return DeferWindowPos(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
LRESULT thunk_DefFrameProcA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DefFrameProcA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DefFrameProcA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LRESULT thunk_DefFrameProcW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DefFrameProcW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DefFrameProcW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LRESULT thunk_DefMDIChildProcA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefMDIChildProcA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefMDIChildProcA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_DefMDIChildProcW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefMDIChildProcW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefMDIChildProcW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_DefRawInputProc(CPU* cpu){
	PRAWINPUT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!DefRawInputProc(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return DefRawInputProc(unnamedParam0, unnamedParam1, unnamedParam2);
}
LRESULT thunk_DefWindowProcA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefWindowProcA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefWindowProcA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_DefWindowProcW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DefWindowProcW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DefWindowProcW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DeleteMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!DeleteMenu(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return DeleteMenu(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_DeregisterShellHookWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DeregisterShellHookWindow(%p)", unnamedParam0);
	return DeregisterShellHookWindow(unnamedParam0);
}
BOOL thunk_DestroyAcceleratorTable(CPU* cpu){
	HACCEL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroyAcceleratorTable(%p)", unnamedParam0);
	return DestroyAcceleratorTable(unnamedParam0);
}
BOOL thunk_DestroyCaret(CPU* cpu){
	printf("\nCalling USER32!DestroyCare)");
	return DestroyCaret();
}
BOOL thunk_DestroyCursor(CPU* cpu){
	HCURSOR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroyCursor(%p)", unnamedParam0);
	return DestroyCursor(unnamedParam0);
}
BOOL thunk_DestroyIcon(CPU* cpu){
	HICON unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroyIcon(%p)", unnamedParam0);
	return DestroyIcon(unnamedParam0);
}
BOOL thunk_DestroyMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroyMenu(%p)", unnamedParam0);
	return DestroyMenu(unnamedParam0);
}
VOID thunk_DestroySyntheticPointerDevice(CPU* cpu){
	HSYNTHETICPOINTERDEVICE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroySyntheticPointerDevice(%p)", unnamedParam0);
	return DestroySyntheticPointerDevice(unnamedParam0);
}
BOOL thunk_DestroyWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DestroyWindow(%p)", unnamedParam0);
	return DestroyWindow(unnamedParam0);
}
INT_PTR thunk_DialogBoxIndirectParamA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCDLGTEMPLATEA unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DialogBoxIndirectParamA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DialogBoxIndirectParamA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT_PTR thunk_DialogBoxIndirectParamW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCDLGTEMPLATEW unnamedParam1 = cpu->fn_arg(cpu, 1);
	HWND unnamedParam2 = cpu->fn_arg(cpu, 2);
	DLGPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DialogBoxIndirectParamW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DialogBoxIndirectParamW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT_PTR thunk_DialogBoxParamA(CPU* cpu){
	InitLParam initLParam;
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCSTR lpTemplateName = cpu->fn_arg(cpu, 1);
	HWND hWndParent = cpu->fn_arg(cpu, 2);
	DLGPROC lpDialogFunc = cpu->fn_arg(cpu, 3);
	LPARAM dwInitParam = cpu->fn_arg(cpu, 4);

	initLParam.cpu = cpu;
	initLParam.lpParam = dwInitParam;
	initLParam.WndProc = lpDialogFunc;

	printf("\nCalling USER32!DialogBoxParamA(%p, %p, %p, %p, %p)", hInstance, lpTemplateName, hWndParent, lpDialogFunc, &initLParam);
	return DialogBoxParamA(hInstance, lpTemplateName, hWndParent, thunkDlgProc, &initLParam);
}

INT_PTR thunk_DialogBoxParamW(CPU* cpu){
	InitLParam initLParam;
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCWSTR lpTemplateName = cpu->fn_arg(cpu, 1);
	HWND hWndParent = cpu->fn_arg(cpu, 2);
	DLGPROC lpDialogFunc = cpu->fn_arg(cpu, 3);
	LPARAM dwInitParam = cpu->fn_arg(cpu, 4);

	initLParam.cpu = cpu;
	initLParam.lpParam = dwInitParam;
	initLParam.WndProc = lpDialogFunc;

	printf("\nCalling USER32!DialogBoxParamW(%p, %p, %p, %p, %p)", hInstance, lpTemplateName, hWndParent, lpDialogFunc, &initLParam);
	return DialogBoxParamW(hInstance, lpTemplateName, hWndParent, thunkDlgProc, &initLParam);
}


VOID thunk_DisableProcessWindowsGhosting(CPU* cpu){
	printf("\nCalling USER32!DisableProcessWindowsGhostin)");
	return DisableProcessWindowsGhosting();
}
LRESULT thunk_DispatchMessageA(CPU* cpu){
	const MSG * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DispatchMessageA(%p)", unnamedParam0);
	return DispatchMessageA(unnamedParam0);
}
LRESULT thunk_DispatchMessageW(CPU* cpu){
	const MSG * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DispatchMessageW(%p)", unnamedParam0);
	return DispatchMessageW(unnamedParam0);
}
INT thunk_DlgDirListA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DlgDirListA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DlgDirListA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_DlgDirListW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DlgDirListW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DlgDirListW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_DlgDirListComboBoxA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DlgDirListComboBoxA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DlgDirListComboBoxA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_DlgDirListComboBoxW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DlgDirListComboBoxW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DlgDirListComboBoxW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_DlgDirSelectComboBoxExA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DlgDirSelectComboBoxExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DlgDirSelectComboBoxExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DlgDirSelectComboBoxExW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DlgDirSelectComboBoxExW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DlgDirSelectComboBoxExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DlgDirSelectExA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DlgDirSelectExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DlgDirSelectExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DlgDirSelectExW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DlgDirSelectExW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DlgDirSelectExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DragDetect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!DragDetect(%p, %p)", unnamedParam0, unnamedParam1);
	return DragDetect(unnamedParam0, *(POINT*)&unnamedParam1);
}
DWORD thunk_DragObject(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	ULONG_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	HCURSOR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DragObject(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DragObject(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_DrawAnimatedRects(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	const RECT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DrawAnimatedRects(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawAnimatedRects(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DrawCaption(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HDC unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DrawCaption(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawCaption(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DrawEdge(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DrawEdge(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawEdge(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DrawFocusRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!DrawFocusRect(%p, %p)", unnamedParam0, unnamedParam1);
	return DrawFocusRect(unnamedParam0, unnamedParam1);
}
BOOL thunk_DrawFrameControl(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DrawFrameControl(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawFrameControl(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DrawIcon(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	HICON unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!DrawIcon(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawIcon(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_DrawIconEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	HICON unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	HBRUSH unnamedParam7 = cpu->fn_arg(cpu, 7);
	UINT unnamedParam8 = cpu->fn_arg(cpu, 8);
	printf("\nCalling USER32!DrawIconEx(%p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
	return DrawIconEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
}
BOOL thunk_DrawMenuBar(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!DrawMenuBar(%p)", unnamedParam0);
	return DrawMenuBar(unnamedParam0);
}
BOOL thunk_DrawStateA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBRUSH unnamedParam1 = cpu->fn_arg(cpu, 1);
	DRAWSTATEPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	WPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	UINT unnamedParam9 = cpu->fn_arg(cpu, 9);
	printf("\nCalling USER32!DrawStateA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
	return DrawStateA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
}
BOOL thunk_DrawStateW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBRUSH unnamedParam1 = cpu->fn_arg(cpu, 1);
	DRAWSTATEPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	WPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	UINT unnamedParam9 = cpu->fn_arg(cpu, 9);
	printf("\nCalling USER32!DrawStateW(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
	return DrawStateW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
}
INT thunk_DrawTextA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPRECT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DrawTextA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DrawTextA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_DrawTextW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPRECT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!DrawTextW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return DrawTextW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_DrawTextExA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPRECT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPDRAWTEXTPARAMS unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!DrawTextExA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return DrawTextExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
INT thunk_DrawTextExW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPRECT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPDRAWTEXTPARAMS unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!DrawTextExW(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return DrawTextExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_EmptyClipboard(CPU* cpu){
	printf("\nCalling USER32!EmptyClipboar)");
	return EmptyClipboard();
}
BOOL thunk_EnableMenuItem(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnableMenuItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnableMenuItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnableMouseInPointer(CPU* cpu){
	BOOL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!EnableMouseInPointer(%p)", unnamedParam0);
	return EnableMouseInPointer(unnamedParam0);
}
BOOL thunk_EnableNonClientDpiScaling(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!EnableNonClientDpiScaling(%p)", unnamedParam0);
	return EnableNonClientDpiScaling(unnamedParam0);
}
BOOL thunk_EnableScrollBar(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnableScrollBar(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnableScrollBar(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnableWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnableWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return EnableWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_EndDeferWindowPos(CPU* cpu){
	HDWP unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!EndDeferWindowPos(%p)", unnamedParam0);
	return EndDeferWindowPos(unnamedParam0);
}
BOOL thunk_EndDialog(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EndDialog(%p, %p)", unnamedParam0, unnamedParam1);
	return EndDialog(unnamedParam0, unnamedParam1);
}
BOOL thunk_EndMenu(CPU* cpu){
	printf("\nCalling USER32!EndMen)");
	return EndMenu();
}
BOOL thunk_EndPaint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	const PAINTSTRUCT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EndPaint(%p, %p)", unnamedParam0, unnamedParam1);
	return EndPaint(unnamedParam0, unnamedParam1);
}
BOOL thunk_EnumChildWindows(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	WNDENUMPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumChildWindows(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumChildWindows(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_EnumClipboardFormats(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!EnumClipboardFormats(%p)", unnamedParam0);
	return EnumClipboardFormats(unnamedParam0);
}
BOOL thunk_EnumDesktopsA(CPU* cpu){
	HWINSTA unnamedParam0 = cpu->fn_arg(cpu, 0);
	DESKTOPENUMPROCA unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumDesktopsA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumDesktopsA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumDesktopsW(CPU* cpu){
	HWINSTA unnamedParam0 = cpu->fn_arg(cpu, 0);
	DESKTOPENUMPROCW unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumDesktopsW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumDesktopsW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumDesktopWindows(CPU* cpu){
	HDESK unnamedParam0 = cpu->fn_arg(cpu, 0);
	WNDENUMPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumDesktopWindows(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumDesktopWindows(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumDisplayMonitors(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	MONITORENUMPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EnumDisplayMonitors(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumDisplayMonitors(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumPropsA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PROPENUMPROCA unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnumPropsA(%p, %p)", unnamedParam0, unnamedParam1);
	return EnumPropsA(unnamedParam0, unnamedParam1);
}
INT thunk_EnumPropsW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PROPENUMPROCW unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnumPropsW(%p, %p)", unnamedParam0, unnamedParam1);
	return EnumPropsW(unnamedParam0, unnamedParam1);
}
INT thunk_EnumPropsExA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PROPENUMPROCEXA unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumPropsExA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumPropsExA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_EnumPropsExW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PROPENUMPROCEXW unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumPropsExW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumPropsExW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumThreadWindows(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	WNDENUMPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EnumThreadWindows(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumThreadWindows(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumWindows(CPU* cpu){
	WNDENUMPROC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPARAM unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnumWindows(%p, %p)", unnamedParam0, unnamedParam1);
	return EnumWindows(unnamedParam0, unnamedParam1);
}
BOOL thunk_EnumWindowStationsA(CPU* cpu){
	WINSTAENUMPROCA unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPARAM unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnumWindowStationsA(%p, %p)", unnamedParam0, unnamedParam1);
	return EnumWindowStationsA(unnamedParam0, unnamedParam1);
}
BOOL thunk_EnumWindowStationsW(CPU* cpu){
	WINSTAENUMPROCW unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPARAM unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!EnumWindowStationsW(%p, %p)", unnamedParam0, unnamedParam1);
	return EnumWindowStationsW(unnamedParam0, unnamedParam1);
}
BOOL thunk_EvaluateProximityToRect(CPU* cpu){
	const RECT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	const TOUCH_HIT_TESTING_INPUT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	TOUCH_HIT_TESTING_PROXIMITY_EVALUATION * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!EvaluateProximityToRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EvaluateProximityToRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EvaluateProximityToPolygon(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const TOUCH_HIT_TESTING_INPUT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	TOUCH_HIT_TESTING_PROXIMITY_EVALUATION * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!EvaluateProximityToPolygon(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EvaluateProximityToPolygon(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_ExcludeUpdateRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ExcludeUpdateRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return ExcludeUpdateRgn(unnamedParam0, unnamedParam1);
}
BOOL thunk_ExitWindowsEx(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ExitWindowsEx(%p, %p)", unnamedParam0, unnamedParam1);
	return ExitWindowsEx(unnamedParam0, unnamedParam1);
}
INT thunk_FillRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	HBRUSH unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!FillRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return FillRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_FindWindowA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!FindWindowA(%p, %p)", unnamedParam0, unnamedParam1);
	return FindWindowA(unnamedParam0, unnamedParam1);
}
HWND thunk_FindWindowW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!FindWindowW(%p, %p)", unnamedParam0, unnamedParam1);
	return FindWindowW(unnamedParam0, unnamedParam1);
}
HWND thunk_FindWindowExA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!FindWindowExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return FindWindowExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWND thunk_FindWindowExW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!FindWindowExW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return FindWindowExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_FlashWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!FlashWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return FlashWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_FlashWindowEx(CPU* cpu){
	PFLASHWINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!FlashWindowEx(%p)", unnamedParam0);
	return FlashWindowEx(unnamedParam0);
}
INT thunk_FrameRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	HBRUSH unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!FrameRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return FrameRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_GetActiveWindow(CPU* cpu){
	printf("\nCalling USER32!GetActiveWindo)");
	return GetActiveWindow();
}
BOOL thunk_GetAltTabInfoA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	PALTTABINFO unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetAltTabInfoA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetAltTabInfoA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetAltTabInfoW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	PALTTABINFO unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetAltTabInfoW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetAltTabInfoW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HWND thunk_GetAncestor(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetAncestor(%p, %p)", unnamedParam0, unnamedParam1);
	return GetAncestor(unnamedParam0, unnamedParam1);
}
SHORT thunk_GetAsyncKeyState(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetAsyncKeyState(%p)", unnamedParam0);
	return GetAsyncKeyState(unnamedParam0);
}
BOOL thunk_GetAutoRotationState(CPU* cpu){
	AR_STATE * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetAutoRotationState(%p)", unnamedParam0);
	return GetAutoRotationState(unnamedParam0);
}
DPI_AWARENESS thunk_GetAwarenessFromDpiAwarenessContext(CPU* cpu){
	DPI_AWARENESS_CONTEXT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetAwarenessFromDpiAwarenessContext(%p)", unnamedParam0);
	return GetAwarenessFromDpiAwarenessContext(unnamedParam0);
}
HWND thunk_GetCapture(CPU* cpu){
	printf("\nCalling USER32!GetCaptur)");
	return GetCapture();
}
UINT thunk_GetCaretBlinkTime(CPU* cpu){
	printf("\nCalling USER32!GetCaretBlinkTim)");
	return GetCaretBlinkTime();
}
BOOL thunk_GetCaretPos(CPU* cpu){
	LPPOINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetCaretPos(%p)", unnamedParam0);
	return GetCaretPos(unnamedParam0);
}
BOOL thunk_GetClassInfoA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	WNDCLASSA * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassInfoA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassInfoA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetClassInfoW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	WNDCLASSW * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassInfoW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassInfoW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetClassInfoExA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	WNDCLASSEXA * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassInfoExA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassInfoExA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetClassInfoExW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	WNDCLASSEXW * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassInfoExW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassInfoExW(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_GetClassLongA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetClassLongA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClassLongA(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetClassLongW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetClassLongW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClassLongW(unnamedParam0, unnamedParam1);
}
INT thunk_GetClassNameA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassNameA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassNameA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetClassNameW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClassNameW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClassNameW(unnamedParam0, unnamedParam1, unnamedParam2);
}
WORD thunk_GetClassWord(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetClassWord(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClassWord(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetClientRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetClientRect(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClientRect(unnamedParam0, unnamedParam1);
}
HANDLE thunk_GetClipboardData(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetClipboardData(%p)", unnamedParam0);
	return GetClipboardData(unnamedParam0);
}
INT thunk_GetClipboardFormatNameA(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClipboardFormatNameA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClipboardFormatNameA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetClipboardFormatNameW(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetClipboardFormatNameW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetClipboardFormatNameW(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_GetClipboardOwner(CPU* cpu){
	printf("\nCalling USER32!GetClipboardOwne)");
	return GetClipboardOwner();
}
DWORD thunk_GetClipboardSequenceNumber(CPU* cpu){
	printf("\nCalling USER32!GetClipboardSequenceNumbe)");
	return GetClipboardSequenceNumber();
}
HWND thunk_GetClipboardViewer(CPU* cpu){
	printf("\nCalling USER32!GetClipboardViewe)");
	return GetClipboardViewer();
}
BOOL thunk_GetClipCursor(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetClipCursor(%p)", unnamedParam0);
	return GetClipCursor(unnamedParam0);
}
BOOL thunk_GetComboBoxInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PCOMBOBOXINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetComboBoxInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetComboBoxInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetCurrentInputMessageSource(CPU* cpu){
	INPUT_MESSAGE_SOURCE * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetCurrentInputMessageSource(%p)", unnamedParam0);
	return GetCurrentInputMessageSource(unnamedParam0);
}
HCURSOR thunk_GetCursor(CPU* cpu){
	printf("\nCalling USER32!GetCurso)");
	return GetCursor();
}
BOOL thunk_GetCursorInfo(CPU* cpu){
	PCURSORINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetCursorInfo(%p)", unnamedParam0);
	return GetCursorInfo(unnamedParam0);
}
BOOL thunk_GetCursorPos(CPU* cpu){
	LPPOINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetCursorPos(%p)", unnamedParam0);
	return GetCursorPos(unnamedParam0);
}
HDC thunk_GetDC(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetDC(%p)", unnamedParam0);
	return GetDC(unnamedParam0);
}
HDC thunk_GetDCEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetDCEx(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetDCEx(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_GetDesktopWindow(CPU* cpu){
	printf("\nCalling USER32!GetDesktopWindo)");
	return GetDesktopWindow();
}
DWORD thunk_GetDialogBaseUnits(CPU* cpu){
	printf("\nCalling USER32!GetDialogBaseUnit)");
	return GetDialogBaseUnits();
}
BOOL thunk_GetDisplayAutoRotationPreferences(CPU* cpu){
	ORIENTATION_PREFERENCE * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetDisplayAutoRotationPreferences(%p)", unnamedParam0);
	return GetDisplayAutoRotationPreferences(unnamedParam0);
}
INT thunk_GetDlgCtrlID(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetDlgCtrlID(%p)", unnamedParam0);
	return GetDlgCtrlID(unnamedParam0);
}
HWND thunk_GetDlgItem(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetDlgItem(%p, %p)", unnamedParam0, unnamedParam1);
	return GetDlgItem(unnamedParam0, unnamedParam1);
}
UINT thunk_GetDlgItemInt(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL * unnamedParam2 = cpu->fn_arg(cpu, 2);
	BOOL unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetDlgItemInt(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetDlgItemInt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetDlgItemTextA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetDlgItemTextA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetDlgItemTextA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetDlgItemTextW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetDlgItemTextW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetDlgItemTextW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetDoubleClickTime(CPU* cpu){
	printf("\nCalling USER32!GetDoubleClickTim)");
	return GetDoubleClickTime();
}
UINT thunk_GetDpiForWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetDpiForWindow(%p)", unnamedParam0);
	return GetDpiForWindow(unnamedParam0);
}
UINT thunk_GetDpiForSystem(CPU* cpu){
	printf("\nCalling USER32!GetDpiForSyste)");
	return GetDpiForSystem();
}
HWND thunk_GetFocus(CPU* cpu){
	printf("\nCalling USER32!GetFocu)");
	return GetFocus();
}
HWND thunk_GetForegroundWindow(CPU* cpu){
	printf("\nCalling USER32!GetForegroundWindo)");
	return GetForegroundWindow();
}
BOOL thunk_GetGestureConfig(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	GESTURECONFIG * unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!GetGestureConfig(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return GetGestureConfig(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_GetGestureExtraArgs(CPU* cpu){
	HGESTUREINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetGestureExtraArgs(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetGestureExtraArgs(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetGestureInfo(CPU* cpu){
	HGESTUREINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	PGESTUREINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetGestureInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetGestureInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetGUIThreadInfo(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	GUITHREADINFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetGUIThreadInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetGUIThreadInfo(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetGuiResources(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetGuiResources(%p, %p)", unnamedParam0, unnamedParam1);
	return GetGuiResources(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetIconInfo(CPU* cpu){
	HICON unnamedParam0 = cpu->fn_arg(cpu, 0);
	PICONINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetIconInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetIconInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetIconInfoExA(CPU* cpu){
	HICON unnamedParam0 = cpu->fn_arg(cpu, 0);
	ICONINFOEXA * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetIconInfoExA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetIconInfoExA(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetIconInfoExW(CPU* cpu){
	HICON unnamedParam0 = cpu->fn_arg(cpu, 0);
	ICONINFOEXW * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetIconInfoExW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetIconInfoExW(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetInputState(CPU* cpu){
	printf("\nCalling USER32!GetInputStat)");
	return GetInputState();
}
UINT thunk_GetKBCodePage(CPU* cpu){
	printf("\nCalling USER32!GetKBCodePag)");
	return GetKBCodePage();
}
HKL thunk_GetKeyboardLayout(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyboardLayout(%p)", unnamedParam0);
	return GetKeyboardLayout(unnamedParam0);
}
UINT thunk_GetKeyboardLayoutList(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HKL * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetKeyboardLayoutList(%p, %p)", unnamedParam0, unnamedParam1);
	return GetKeyboardLayoutList(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetKeyboardState(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyboardState(%p)", unnamedParam0);
	return GetKeyboardState(unnamedParam0);
}
INT thunk_GetKeyboardType(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyboardType(%p)", unnamedParam0);
	return GetKeyboardType(unnamedParam0);
}
INT thunk_GetKeyNameTextA(CPU* cpu){
	LONG unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetKeyNameTextA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetKeyNameTextA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetKeyNameTextW(CPU* cpu){
	LONG unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetKeyNameTextW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetKeyNameTextW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetKeyboardLayoutNameA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyboardLayoutNameA(%p)", unnamedParam0);
	return GetKeyboardLayoutNameA(unnamedParam0);
}
BOOL thunk_GetKeyboardLayoutNameW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyboardLayoutNameW(%p)", unnamedParam0);
	return GetKeyboardLayoutNameW(unnamedParam0);
}
SHORT thunk_GetKeyState(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetKeyState(%p)", unnamedParam0);
	return GetKeyState(unnamedParam0);
}
HWND thunk_GetLastActivePopup(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetLastActivePopup(%p)", unnamedParam0);
	return GetLastActivePopup(unnamedParam0);
}
BOOL thunk_GetLastInputInfo(CPU* cpu){
	PLASTINPUTINFO unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetLastInputInfo(%p)", unnamedParam0);
	return GetLastInputInfo(unnamedParam0);
}
DWORD thunk_GetListBoxInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetListBoxInfo(%p)", unnamedParam0);
	return GetListBoxInfo(unnamedParam0);
}
UINT thunk_GetRawInputBuffer(CPU* cpu){
	PRAWINPUT unnamedParam0 = cpu->fn_arg(cpu, 0);
	PUINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetRawInputBuffer(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetRawInputBuffer(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetRawInputData(CPU* cpu){
	HRAWINPUT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	PUINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetRawInputData(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetRawInputData(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
UINT thunk_GetRawInputDeviceInfoA(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	PUINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetRawInputDeviceInfoA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetRawInputDeviceInfoA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetRawInputDeviceInfoW(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	PUINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetRawInputDeviceInfoW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetRawInputDeviceInfoW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetRawInputDeviceList(CPU* cpu){
	PRAWINPUTDEVICELIST unnamedParam0 = cpu->fn_arg(cpu, 0);
	PUINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetRawInputDeviceList(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetRawInputDeviceList(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetRegisteredRawInputDevices(CPU* cpu){
	PRAWINPUTDEVICE unnamedParam0 = cpu->fn_arg(cpu, 0);
	PUINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetRegisteredRawInputDevices(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetRegisteredRawInputDevices(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetLayeredWindowAttributes(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF * unnamedParam1 = cpu->fn_arg(cpu, 1);
	BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetLayeredWindowAttributes(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetLayeredWindowAttributes(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HMENU thunk_GetMenu(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetMenu(%p)", unnamedParam0);
	return GetMenu(unnamedParam0);
}
BOOL thunk_GetMenuBarInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	PMENUBARINFO unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMenuBarInfo(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMenuBarInfo(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
DWORD thunk_GetMenuCheckMarkDimensions(CPU* cpu){
	printf("\nCalling USER32!GetMenuCheckMarkDimension)");
	return GetMenuCheckMarkDimensions();
}
DWORD thunk_GetMenuContextHelpId(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetMenuContextHelpId(%p)", unnamedParam0);
	return GetMenuContextHelpId(unnamedParam0);
}
UINT thunk_GetMenuDefaultItem(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetMenuDefaultItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetMenuDefaultItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetMenuInfo(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMENUINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetMenuInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMenuInfo(unnamedParam0, unnamedParam1);
}
INT thunk_GetMenuItemCount(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetMenuItemCount(%p)", unnamedParam0);
	return GetMenuItemCount(unnamedParam0);
}
UINT thunk_GetMenuItemID(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetMenuItemID(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMenuItemID(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetMenuItemInfoA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	MENUITEMINFOA * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMenuItemInfoA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMenuItemInfoA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetMenuItemInfoW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	MENUITEMINFOW * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMenuItemInfoW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMenuItemInfoW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetMenuItemRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMENU unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPRECT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMenuItemRect(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMenuItemRect(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetMenuState(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetMenuState(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetMenuState(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetMenuStringA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetMenuStringA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetMenuStringA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_GetMenuStringW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetMenuStringW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetMenuStringW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetMessageA(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMessageA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetMessageW(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetMessageW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LPARAM thunk_GetMessageExtraInfo(CPU* cpu){
	printf("\nCalling USER32!GetMessageExtraInf)");
	return GetMessageExtraInfo();
}
DWORD thunk_GetMessagePos(CPU* cpu){
	printf("\nCalling USER32!GetMessagePo)");
	return GetMessagePos();
}
LONG thunk_GetMessageTime(CPU* cpu){
	printf("\nCalling USER32!GetMessageTim)");
	return GetMessageTime();
}
BOOL thunk_GetMonitorInfoA(CPU* cpu){
	HMONITOR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMONITORINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetMonitorInfoA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMonitorInfoA(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetMonitorInfoW(CPU* cpu){
	HMONITOR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMONITORINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetMonitorInfoW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMonitorInfoW(unnamedParam0, unnamedParam1);
}
HWND thunk_GetNextDlgGroupItem(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetNextDlgGroupItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetNextDlgGroupItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_GetNextDlgTabItem(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetNextDlgTabItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetNextDlgTabItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWND thunk_GetOpenClipboardWindow(CPU* cpu){
	printf("\nCalling USER32!GetOpenClipboardWindo)");
	return GetOpenClipboardWindow();
}
HWND thunk_GetParent(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetParent(%p)", unnamedParam0);
	return GetParent(unnamedParam0);
}
BOOL thunk_GetPhysicalCursorPos(CPU* cpu){
	POINT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetPhysicalCursorPos(%p)", unnamedParam0);
	return GetPhysicalCursorPos(unnamedParam0);
}
BOOL thunk_GetPointerDevice(CPU* cpu){
	HANDLE device = cpu->fn_arg(cpu, 0);
	POINTER_DEVICE_INFO * unnamedParam0 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerDevice(%p, %p)", device, unnamedParam0);
	return GetPointerDevice(device, unnamedParam0);
}
BOOL thunk_GetPointerDeviceCursors(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_DEVICE_CURSOR_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerDeviceCursors(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerDeviceCursors(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerDeviceProperties(CPU* cpu){
	HANDLE device = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam0 = cpu->fn_arg(cpu, 1);
	POINTER_DEVICE_PROPERTY * unnamedParam1 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerDeviceProperties(%p, %p, %p)", device, unnamedParam0, unnamedParam1);
	return GetPointerDeviceProperties(device, unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerDeviceRects(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerDeviceRects(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerDeviceRects(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerDevices(CPU* cpu){
	UINT32 * unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_DEVICE_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerDevices(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerDevices(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerInputTransform(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 unnamedParam1 = cpu->fn_arg(cpu, 1);
	INPUT_TRANSFORM * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerInputTransform(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerInputTransform(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerPenInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_PEN_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerPenInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerPenInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerPenInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_PEN_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerPenInfoHistory(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerPenInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFramePenInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_PEN_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerFramePenInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerFramePenInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFramePenInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 * unnamedParam2 = cpu->fn_arg(cpu, 2);
	POINTER_PEN_INFO * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetPointerFramePenInfoHistory(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetPointerFramePenInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetPointerType(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INPUT_TYPE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerType(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerType(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerCursorId(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerCursorId(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerCursorId(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerInfoHistory(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFrameInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerFrameInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerFrameInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFrameInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 * unnamedParam2 = cpu->fn_arg(cpu, 2);
	POINTER_INFO * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetPointerFrameInfoHistory(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetPointerFrameInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetPointerTouchInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_TOUCH_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPointerTouchInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPointerTouchInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetPointerTouchInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_TOUCH_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerTouchInfoHistory(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerTouchInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFrameTouchInfo(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	POINTER_TOUCH_INFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetPointerFrameTouchInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPointerFrameTouchInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetPointerFrameTouchInfoHistory(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 * unnamedParam2 = cpu->fn_arg(cpu, 2);
	POINTER_TOUCH_INFO * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetPointerFrameTouchInfoHistory(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetPointerFrameTouchInfoHistory(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_GetPriorityClipboardFormat(CPU* cpu){
	UINT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPriorityClipboardFormat(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPriorityClipboardFormat(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetProcessDefaultLayout(CPU* cpu){
	DWORD * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetProcessDefaultLayout(%p)", unnamedParam0);
	return GetProcessDefaultLayout(unnamedParam0);
}
HANDLE thunk_GetPropA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPropA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPropA(unnamedParam0, unnamedParam1);
}
HANDLE thunk_GetPropW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetPropW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetPropW(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetQueueStatus(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetQueueStatus(%p)", unnamedParam0);
	return GetQueueStatus(unnamedParam0);
}
BOOL thunk_GetRawPointerDeviceData(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT32 unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 unnamedParam2 = cpu->fn_arg(cpu, 2);
	POINTER_DEVICE_PROPERTY * unnamedParam3 = cpu->fn_arg(cpu, 3);
	LONG * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetRawPointerDeviceData(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetRawPointerDeviceData(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetScrollInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSCROLLINFO unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetScrollInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetScrollInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetScrollBarInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSCROLLBARINFO unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetScrollBarInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetScrollBarInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetScrollPos(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetScrollPos(%p, %p)", unnamedParam0, unnamedParam1);
	return GetScrollPos(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetScrollRange(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetScrollRange(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetScrollRange(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWND thunk_GetShellWindow(CPU* cpu){
	printf("\nCalling USER32!GetShellWindo)");
	return GetShellWindow();
}
HMENU thunk_GetSubMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetSubMenu(%p, %p)", unnamedParam0, unnamedParam1);
	return GetSubMenu(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetSysColor(CPU* cpu) {
	int nIndex = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetSysColor(%p)", nIndex);
	return GetSysColor(nIndex);
}
HBRUSH thunk_GetSysColorBrush(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetSysColorBrush(%p)", unnamedParam0);
	return GetSysColorBrush(unnamedParam0);
}
HMENU thunk_GetSystemMenu(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetSystemMenu(%p, %p)", unnamedParam0, unnamedParam1);
	return GetSystemMenu(unnamedParam0, unnamedParam1);
}
INT thunk_GetSystemMetrics(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetSystemMetrics(%p)", unnamedParam0);
	return GetSystemMetrics(unnamedParam0);
}
INT thunk_GetSystemMetricsForDpi(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetSystemMetricsForDpi(%p, %p)", unnamedParam0, unnamedParam1);
	return GetSystemMetricsForDpi(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetTabbedTextExtentA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const INT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetTabbedTextExtentA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetTabbedTextExtentA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
DWORD thunk_GetTabbedTextExtentW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const INT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetTabbedTextExtentW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetTabbedTextExtentW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetTitleBarInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PTITLEBARINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetTitleBarInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetTitleBarInfo(unnamedParam0, unnamedParam1);
}
HDESK thunk_GetThreadDesktop(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetThreadDesktop(%p)", unnamedParam0);
	return GetThreadDesktop(unnamedParam0);
}
DPI_AWARENESS_CONTEXT thunk_GetThreadDpiAwarenessContext(CPU* cpu){
	printf("\nCalling USER32!GetThreadDpiAwarenessContex)");
	return GetThreadDpiAwarenessContext();
}
HWND thunk_GetTopWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetTopWindow(%p)", unnamedParam0);
	return GetTopWindow(unnamedParam0);
}
BOOL thunk_GetTouchInputInfo(CPU* cpu){
	HTOUCHINPUT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	TOUCHINPUT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	int unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!GetTouchInputInfo(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetTouchInputInfo(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetUpdateRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetUpdateRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetUpdateRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetUpdateRgn(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetUpdateRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetUpdateRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetUpdatedClipboardFormats(CPU* cpu){
	UINT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetUpdatedClipboardFormats(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetUpdatedClipboardFormats(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetUserObjectInformationA(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPDWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetUserObjectInformationA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetUserObjectInformationA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetUserObjectInformationW(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPDWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetUserObjectInformationW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetUserObjectInformationW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetUserObjectSecurity(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	PSECURITY_INFORMATION unnamedParam1 = cpu->fn_arg(cpu, 1);
	PSECURITY_DESCRIPTOR unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPDWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetUserObjectSecurity(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetUserObjectSecurity(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HWND thunk_GetWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindow(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetWindowContextHelpId(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetWindowContextHelpId(%p)", unnamedParam0);
	return GetWindowContextHelpId(unnamedParam0);
}
HDC thunk_GetWindowDC(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetWindowDC(%p)", unnamedParam0);
	return GetWindowDC(unnamedParam0);
}
BOOL thunk_GetWindowDisplayAffinity(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowDisplayAffinity(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowDisplayAffinity(unnamedParam0, unnamedParam1);
}
DPI_AWARENESS_CONTEXT thunk_GetWindowDpiAwarenessContext(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetWindowDpiAwarenessContext(%p)", unnamedParam0);
	return GetWindowDpiAwarenessContext(unnamedParam0);
}
BOOL thunk_GetWindowFeedbackSetting(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	FEEDBACK_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT32 * unnamedParam3 = cpu->fn_arg(cpu, 3);
	void * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!GetWindowFeedbackSetting(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetWindowFeedbackSetting(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetWindowInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PWINDOWINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowInfo(unnamedParam0, unnamedParam1);
}
LONG thunk_GetWindowLongA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowLongA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowLongA(unnamedParam0, unnamedParam1);
}
LONG thunk_GetWindowLongW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowLongW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowLongW(unnamedParam0, unnamedParam1);
}
UINT thunk_GetWindowModuleFileNameA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetWindowModuleFileNameA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetWindowModuleFileNameA(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetWindowModuleFileNameW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetWindowModuleFileNameW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetWindowModuleFileNameW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetWindowPlacement(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWINDOWPLACEMENT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowPlacement(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowPlacement(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetWindowRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowRect(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowRect(unnamedParam0, unnamedParam1);
}
INT thunk_GetWindowRgnBox(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowRgnBox(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowRgnBox(unnamedParam0, unnamedParam1);
}
INT thunk_GetWindowRgn(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowRgn(unnamedParam0, unnamedParam1);
}
HWINSTA thunk_GetProcessWindowStation(CPU* cpu){
	printf("\nCalling USER32!GetProcessWindowStatio)");
	return GetProcessWindowStation();
}
INT thunk_GetWindowTextA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetWindowTextA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetWindowTextA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetWindowTextW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!GetWindowTextW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetWindowTextW(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetWindowTextLengthA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetWindowTextLengthA(%p)", unnamedParam0);
	return GetWindowTextLengthA(unnamedParam0);
}
INT thunk_GetWindowTextLengthW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!GetWindowTextLengthW(%p)", unnamedParam0);
	return GetWindowTextLengthW(unnamedParam0);
}
DWORD thunk_GetWindowThreadProcessId(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowThreadProcessId(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowThreadProcessId(unnamedParam0, unnamedParam1);
}
WORD thunk_GetWindowWord(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!GetWindowWord(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowWord(unnamedParam0, unnamedParam1);
}
BOOL thunk_GrayStringA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBRUSH unnamedParam1 = cpu->fn_arg(cpu, 1);
	GRAYSTRINGPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	printf("\nCalling USER32!GrayStringA(%p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
	return GrayStringA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
}
BOOL thunk_GrayStringW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBRUSH unnamedParam1 = cpu->fn_arg(cpu, 1);
	GRAYSTRINGPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	printf("\nCalling USER32!GrayStringW(%p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
	return GrayStringW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
}
BOOL thunk_HideCaret(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!HideCaret(%p)", unnamedParam0);
	return HideCaret(unnamedParam0);
}
BOOL thunk_HiliteMenuItem(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMENU unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!HiliteMenuItem(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return HiliteMenuItem(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_InitializeTouchInjection(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!InitializeTouchInjection(%p, %p)", unnamedParam0, unnamedParam1);
	return InitializeTouchInjection(unnamedParam0, unnamedParam1);
}
BOOL thunk_InjectSyntheticPointerInput(CPU* cpu){
	HSYNTHETICPOINTERDEVICE unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINTER_TYPE_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT32 unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!InjectSyntheticPointerInput(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return InjectSyntheticPointerInput(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_InjectTouchInput(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINTER_TOUCH_INFO * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!InjectTouchInput(%p, %p)", unnamedParam0, unnamedParam1);
	return InjectTouchInput(unnamedParam0, unnamedParam1);
}
BOOL thunk_InSendMessage(CPU* cpu){
	printf("\nCalling USER32!InSendMessag)");
	return InSendMessage();
}
DWORD thunk_InSendMessageEx(CPU* cpu){
	LPVOID unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!InSendMessageEx(%p)", unnamedParam0);
	return InSendMessageEx(unnamedParam0);
}
BOOL thunk_InsertMenuA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPCSTR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!InsertMenuA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return InsertMenuA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_InsertMenuW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPCWSTR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!InsertMenuW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return InsertMenuW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_InsertMenuItemA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	const MENUITEMINFOA * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!InsertMenuItemA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return InsertMenuItemA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_InsertMenuItemW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	const MENUITEMINFOW * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!InsertMenuItemW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return InsertMenuItemW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_InternalGetWindowText(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!InternalGetWindowText(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return InternalGetWindowText(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_IntersectRect(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!IntersectRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return IntersectRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_InvalidateRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!InvalidateRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return InvalidateRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_InvalidateRgn(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!InvalidateRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return InvalidateRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_InvertRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!InvertRect(%p, %p)", unnamedParam0, unnamedParam1);
	return InvertRect(unnamedParam0, unnamedParam1);
}
BOOL thunk_IsCharAlphaA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharAlphaA(%p)", unnamedParam0);
	return IsCharAlphaA(unnamedParam0);
}
BOOL thunk_IsCharAlphaW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharAlphaW(%p)", unnamedParam0);
	return IsCharAlphaW(unnamedParam0);
}
BOOL thunk_IsCharAlphaNumericA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharAlphaNumericA(%p)", unnamedParam0);
	return IsCharAlphaNumericA(unnamedParam0);
}
BOOL thunk_IsCharAlphaNumericW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharAlphaNumericW(%p)", unnamedParam0);
	return IsCharAlphaNumericW(unnamedParam0);
}
BOOL thunk_IsCharLowerA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharLowerA(%p)", unnamedParam0);
	return IsCharLowerA(unnamedParam0);
}
BOOL thunk_IsCharLowerW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharLowerW(%p)", unnamedParam0);
	return IsCharLowerW(unnamedParam0);
}
BOOL thunk_IsCharUpperA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharUpperA(%p)", unnamedParam0);
	return IsCharUpperA(unnamedParam0);
}
BOOL thunk_IsCharUpperW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsCharUpperW(%p)", unnamedParam0);
	return IsCharUpperW(unnamedParam0);
}
BOOL thunk_IsChild(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!IsChild(%p, %p)", unnamedParam0, unnamedParam1);
	return IsChild(unnamedParam0, unnamedParam1);
}
BOOL thunk_IsClipboardFormatAvailable(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsClipboardFormatAvailable(%p)", unnamedParam0);
	return IsClipboardFormatAvailable(unnamedParam0);
}
BOOL thunk_IsDialogMessageA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMSG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!IsDialogMessageA(%p, %p)", unnamedParam0, unnamedParam1);
	return IsDialogMessageA(unnamedParam0, unnamedParam1);
}
BOOL thunk_IsDialogMessageW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMSG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!IsDialogMessageW(%p, %p)", unnamedParam0, unnamedParam1);
	return IsDialogMessageW(unnamedParam0, unnamedParam1);
}
UINT thunk_IsDlgButtonChecked(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!IsDlgButtonChecked(%p, %p)", unnamedParam0, unnamedParam1);
	return IsDlgButtonChecked(unnamedParam0, unnamedParam1);
}
BOOL thunk_IsGUIThread(CPU* cpu){
	BOOL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsGUIThread(%p)", unnamedParam0);
	return IsGUIThread(unnamedParam0);
}
BOOL thunk_IsHungAppWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsHungAppWindow(%p)", unnamedParam0);
	return IsHungAppWindow(unnamedParam0);
}
BOOL thunk_IsIconic(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsIconic(%p)", unnamedParam0);
	return IsIconic(unnamedParam0);
}
BOOL thunk_IsMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsMenu(%p)", unnamedParam0);
	return IsMenu(unnamedParam0);
}
BOOL thunk_IsMouseInPointerEnabled(CPU* cpu){
	printf("\nCalling USER32!IsMouseInPointerEnable)");
	return IsMouseInPointerEnabled();
}
BOOL thunk_IsProcessDPIAware(CPU* cpu){
	printf("\nCalling USER32!IsProcessDPIAwar)");
	return IsProcessDPIAware();
}
BOOL thunk_IsTouchWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	PULONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!IsTouchWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return IsTouchWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_IsValidDpiAwarenessContext(CPU* cpu){
	DPI_AWARENESS_CONTEXT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsValidDpiAwarenessContext(%p)", unnamedParam0);
	return IsValidDpiAwarenessContext(unnamedParam0);
}
BOOL thunk_IsWinEventHookInstalled(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsWinEventHookInstalled(%p)", unnamedParam0);
	return IsWinEventHookInstalled(unnamedParam0);
}
BOOL thunk_IsWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsWindow(%p)", unnamedParam0);
	return IsWindow(unnamedParam0);
}
BOOL thunk_IsWindowEnabled(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsWindowEnabled(%p)", unnamedParam0);
	return IsWindowEnabled(unnamedParam0);
}
BOOL thunk_IsWindowUnicode(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsWindowUnicode(%p)", unnamedParam0);
	return IsWindowUnicode(unnamedParam0);
}
BOOL thunk_IsWindowVisible(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsWindowVisible(%p)", unnamedParam0);
	return IsWindowVisible(unnamedParam0);
}
BOOL thunk_IsZoomed(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!IsZoomed(%p)", unnamedParam0);
	return IsZoomed(unnamedParam0);
}
BOOL thunk_KillTimer(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!KillTimer(%p, %p)", unnamedParam0, unnamedParam1);
	return KillTimer(unnamedParam0, unnamedParam1);
}
HACCEL thunk_LoadAcceleratorsA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadAcceleratorsA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadAcceleratorsA(unnamedParam0, unnamedParam1);
}
HACCEL thunk_LoadAcceleratorsW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadAcceleratorsW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadAcceleratorsW(unnamedParam0, unnamedParam1);
}
HBITMAP thunk_LoadBitmapA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadBitmapA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadBitmapA(unnamedParam0, unnamedParam1);
}
HBITMAP thunk_LoadBitmapW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadBitmapW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadBitmapW(unnamedParam0, unnamedParam1);
}
HCURSOR thunk_LoadCursorA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadCursorA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadCursorA(unnamedParam0, unnamedParam1);
}
HCURSOR thunk_LoadCursorW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadCursorW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadCursorW(unnamedParam0, unnamedParam1);
}
HCURSOR thunk_LoadCursorFromFileA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LoadCursorFromFileA(%p)", unnamedParam0);
	return LoadCursorFromFileA(unnamedParam0);
}
HCURSOR thunk_LoadCursorFromFileW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LoadCursorFromFileW(%p)", unnamedParam0);
	return LoadCursorFromFileW(unnamedParam0);
}
HICON thunk_LoadIconA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadIconA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadIconA(unnamedParam0, unnamedParam1);
}
HICON thunk_LoadIconW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadIconW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadIconW(unnamedParam0, unnamedParam1);
}
HANDLE thunk_LoadImageA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!LoadImageA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return LoadImageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
HANDLE thunk_LoadImageW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!LoadImageW(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return LoadImageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
HKL thunk_LoadKeyboardLayoutA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadKeyboardLayoutA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadKeyboardLayoutA(unnamedParam0, unnamedParam1);
}
HKL thunk_LoadKeyboardLayoutW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadKeyboardLayoutW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadKeyboardLayoutW(unnamedParam0, unnamedParam1);
}
HMENU thunk_LoadMenuA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadMenuA(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadMenuA(unnamedParam0, unnamedParam1);
}
HMENU thunk_LoadMenuW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LoadMenuW(%p, %p)", unnamedParam0, unnamedParam1);
	return LoadMenuW(unnamedParam0, unnamedParam1);
}
HMENU thunk_LoadMenuIndirectA(CPU* cpu){
	LPCVOID unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LoadMenuIndirectA(%p)", unnamedParam0);
	return LoadMenuIndirectA(unnamedParam0);
}
HMENU thunk_LoadMenuIndirectW(CPU* cpu){
	LPCVOID unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LoadMenuIndirectW(%p)", unnamedParam0);
	return LoadMenuIndirectW(unnamedParam0);
}
INT thunk_LoadStringA(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!LoadStringA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return LoadStringA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_LoadStringW(CPU* cpu){
	HINSTANCE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!LoadStringW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return LoadStringW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_LogicalToPhysicalPoint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LogicalToPhysicalPoint(%p, %p)", unnamedParam0, unnamedParam1);
	return LogicalToPhysicalPoint(unnamedParam0, unnamedParam1);
}
BOOL thunk_LogicalToPhysicalPointForPerMonitorDPI(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LogicalToPhysicalPointForPerMonitorDPI(%p, %p)", unnamedParam0, unnamedParam1);
	return LogicalToPhysicalPointForPerMonitorDPI(unnamedParam0, unnamedParam1);
}
BOOL thunk_LockSetForegroundWindow(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LockSetForegroundWindow(%p)", unnamedParam0);
	return LockSetForegroundWindow(unnamedParam0);
}
BOOL thunk_LockWindowUpdate(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!LockWindowUpdate(%p)", unnamedParam0);
	return LockWindowUpdate(unnamedParam0);
}
BOOL thunk_LockWorkStation(CPU* cpu){
	printf("\nCalling USER32!LockWorkStatio)");
	return LockWorkStation();
}
INT thunk_LookupIconIdFromDirectory(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!LookupIconIdFromDirectory(%p, %p)", unnamedParam0, unnamedParam1);
	return LookupIconIdFromDirectory(unnamedParam0, unnamedParam1);
}
INT thunk_LookupIconIdFromDirectoryEx(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!LookupIconIdFromDirectoryEx(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return LookupIconIdFromDirectoryEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
UINT thunk_MapVirtualKeyA(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MapVirtualKeyA(%p, %p)", unnamedParam0, unnamedParam1);
	return MapVirtualKeyA(unnamedParam0, unnamedParam1);
}
UINT thunk_MapVirtualKeyW(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MapVirtualKeyW(%p, %p)", unnamedParam0, unnamedParam1);
	return MapVirtualKeyW(unnamedParam0, unnamedParam1);
}
UINT thunk_MapVirtualKeyExA(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	HKL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!MapVirtualKeyExA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return MapVirtualKeyExA(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_MapVirtualKeyExW(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	HKL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!MapVirtualKeyExW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return MapVirtualKeyExW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_MapDialogRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MapDialogRect(%p, %p)", unnamedParam0, unnamedParam1);
	return MapDialogRect(unnamedParam0, unnamedParam1);
}
INT thunk_MapWindowPoints(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPPOINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!MapWindowPoints(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return MapWindowPoints(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_MenuItemFromPoint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMENU unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD_PTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!MenuItemFromPoint(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return MenuItemFromPoint(unnamedParam0, unnamedParam1, *(POINT*)&unnamedParam2);
}
BOOL thunk_MessageBeep(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!MessageBeep(%p)", unnamedParam0);
	return MessageBeep(unnamedParam0);
}
INT thunk_MessageBoxA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!MessageBoxA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return MessageBoxA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_MessageBoxW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!MessageBoxW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return MessageBoxW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_MessageBoxExA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	WORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!MessageBoxExA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return MessageBoxExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_MessageBoxExW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	WORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!MessageBoxExW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return MessageBoxExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_MessageBoxIndirectA(CPU* cpu){
	LPMSGBOXPARAMSA unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!MessageBoxIndirectA(%p)", unnamedParam0);
	return MessageBoxIndirectA(unnamedParam0);
}
INT thunk_MessageBoxIndirectW(CPU* cpu){
	LPMSGBOXPARAMSW unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!MessageBoxIndirectW(%p)", unnamedParam0);
	return MessageBoxIndirectW(unnamedParam0);
}
BOOL thunk_ModifyMenuA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPCSTR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ModifyMenuA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ModifyMenuA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_ModifyMenuW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPCWSTR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ModifyMenuW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ModifyMenuW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HMONITOR thunk_MonitorFromPoint(CPU* cpu){
	DWORD_PTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MonitorFromPoint(%p, %p)", unnamedParam0, unnamedParam1);
	return MonitorFromPoint(*(POINT*)&unnamedParam0, unnamedParam1);
}
HMONITOR thunk_MonitorFromRect(CPU* cpu){
	const RECT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MonitorFromRect(%p, %p)", unnamedParam0, unnamedParam1);
	return MonitorFromRect(unnamedParam0, unnamedParam1);
}
HMONITOR thunk_MonitorFromWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!MonitorFromWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return MonitorFromWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_MoveWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	BOOL unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!MoveWindow(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return MoveWindow(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
DWORD thunk_MsgWaitForMultipleObjects(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	const HANDLE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!MsgWaitForMultipleObjects(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return MsgWaitForMultipleObjects(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
DWORD thunk_MsgWaitForMultipleObjectsEx(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	const HANDLE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!MsgWaitForMultipleObjectsEx(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return MsgWaitForMultipleObjectsEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
VOID thunk_NotifyWinEvent(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	LONG unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!NotifyWinEvent(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return NotifyWinEvent(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
DWORD thunk_OemKeyScan(CPU* cpu){
	WORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!OemKeyScan(%p)", unnamedParam0);
	return OemKeyScan(unnamedParam0);
}
BOOL thunk_OemToCharA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!OemToCharA(%p, %p)", unnamedParam0, unnamedParam1);
	return OemToCharA(unnamedParam0, unnamedParam1);
}
BOOL thunk_OemToCharW(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!OemToCharW(%p, %p)", unnamedParam0, unnamedParam1);
	return OemToCharW(unnamedParam0, unnamedParam1);
}
BOOL thunk_OemToCharBuffA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!OemToCharBuffA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OemToCharBuffA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_OemToCharBuffW(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!OemToCharBuffW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OemToCharBuffW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_OpenClipboard(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!OpenClipboard(%p)", unnamedParam0);
	return OpenClipboard(unnamedParam0);
}
HDESK thunk_OpenDesktopA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	ACCESS_MASK unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!OpenDesktopA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return OpenDesktopA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HDESK thunk_OpenDesktopW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	ACCESS_MASK unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!OpenDesktopW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return OpenDesktopW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_OpenIcon(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!OpenIcon(%p)", unnamedParam0);
	return OpenIcon(unnamedParam0);
}
HDESK thunk_OpenInputDesktop(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	ACCESS_MASK unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!OpenInputDesktop(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OpenInputDesktop(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWINSTA thunk_OpenWindowStationA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	ACCESS_MASK unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!OpenWindowStationA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OpenWindowStationA(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWINSTA thunk_OpenWindowStationW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	ACCESS_MASK unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!OpenWindowStationW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OpenWindowStationW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PaintDesktop(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!PaintDesktop(%p)", unnamedParam0);
	return PaintDesktop(unnamedParam0);
}
LRESULT thunk_PackTouchHitTestingProximityEvaluation(CPU* cpu){
	const TOUCH_HIT_TESTING_INPUT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	const TOUCH_HIT_TESTING_PROXIMITY_EVALUATION * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!PackTouchHitTestingProximityEvaluation(%p, %p)", unnamedParam0, unnamedParam1);
	return PackTouchHitTestingProximityEvaluation(unnamedParam0, unnamedParam1);
}
BOOL thunk_PeekMessageA(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!PeekMessageA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return PeekMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_PeekMessageW(CPU* cpu){
	LPMSG unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!PeekMessageW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return PeekMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_PhysicalToLogicalPoint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!PhysicalToLogicalPoint(%p, %p)", unnamedParam0, unnamedParam1);
	return PhysicalToLogicalPoint(unnamedParam0, unnamedParam1);
}
BOOL thunk_PhysicalToLogicalPointForPerMonitorDPI(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!PhysicalToLogicalPointForPerMonitorDPI(%p, %p)", unnamedParam0, unnamedParam1);
	return PhysicalToLogicalPointForPerMonitorDPI(unnamedParam0, unnamedParam1);
}
BOOL thunk_PostMessageA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!PostMessageA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PostMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PostMessageW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!PostMessageW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PostMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
VOID thunk_PostQuitMessage(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!PostQuitMessage(%p)", unnamedParam0);
	return PostQuitMessage(unnamedParam0);
}
BOOL thunk_PostThreadMessageA(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!PostThreadMessageA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PostThreadMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PostThreadMessageW(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!PostThreadMessageW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PostThreadMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PrintWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HDC unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!PrintWindow(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PrintWindow(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_PrivateExtractIconsA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	int unnamedParam2 = cpu->fn_arg(cpu, 2);
	int unnamedParam3 = cpu->fn_arg(cpu, 3);
	HICON * unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT * unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	UINT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!PrivateExtractIconsA(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return PrivateExtractIconsA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
UINT thunk_PrivateExtractIconsW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	int unnamedParam2 = cpu->fn_arg(cpu, 2);
	int unnamedParam3 = cpu->fn_arg(cpu, 3);
	HICON * unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT * unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	UINT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!PrivateExtractIconsW(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return PrivateExtractIconsW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
HWND thunk_RealChildWindowFromPoint(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RealChildWindowFromPoint(%p, %p)", unnamedParam0, unnamedParam1);
	return RealChildWindowFromPoint(unnamedParam0, *(POINT*)&unnamedParam1);
}
UINT thunk_RealGetWindowClassA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RealGetWindowClassA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RealGetWindowClassA(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_RealGetWindowClassW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RealGetWindowClassW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RealGetWindowClassW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_RedrawWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	HRGN unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!RedrawWindow(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return RedrawWindow(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
ATOM thunk_RegisterClassA(CPU* cpu){
	WNDCLASSA* lpWndClass = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClassA(%p)", lpWndClass);
	AddClassProcMapEntry(lpWndClass->lpszClassName, lpWndClass->lpfnWndProc);
	lpWndClass->lpfnWndProc = thunkWndProc;
	return RegisterClassA(lpWndClass);
}
ATOM thunk_RegisterClassW(CPU* cpu){
	const WNDCLASSW * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClassW(%p)", unnamedParam0);
	return RegisterClassW(unnamedParam0);
}
ATOM thunk_RegisterClassExA(CPU* cpu){
	const WNDCLASSEXA * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClassExA(%p)", unnamedParam0);
	return RegisterClassExA(unnamedParam0);
}
ATOM thunk_RegisterClassExW(CPU* cpu){
	const WNDCLASSEXW * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClassExW(%p)", unnamedParam0);
	return RegisterClassExW(unnamedParam0);
}
UINT thunk_RegisterClipboardFormatA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClipboardFormatA(%p)", unnamedParam0);
	return RegisterClipboardFormatA(unnamedParam0);
}
UINT thunk_RegisterClipboardFormatW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterClipboardFormatW(%p)", unnamedParam0);
	return RegisterClipboardFormatW(unnamedParam0);
}
HDEVNOTIFY thunk_RegisterDeviceNotificationA(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPVOID unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RegisterDeviceNotificationA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RegisterDeviceNotificationA(unnamedParam0, unnamedParam1, unnamedParam2);
}
HDEVNOTIFY thunk_RegisterDeviceNotificationW(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPVOID unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RegisterDeviceNotificationW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RegisterDeviceNotificationW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_RegisterHotKey(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!RegisterHotKey(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return RegisterHotKey(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_RegisterPointerDeviceNotifications(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RegisterPointerDeviceNotifications(%p, %p)", unnamedParam0, unnamedParam1);
	return RegisterPointerDeviceNotifications(unnamedParam0, unnamedParam1);
}
BOOL thunk_RegisterPointerInputTarget(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INPUT_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RegisterPointerInputTarget(%p, %p)", unnamedParam0, unnamedParam1);
	return RegisterPointerInputTarget(unnamedParam0, unnamedParam1);
}
BOOL thunk_RegisterPointerInputTargetEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INPUT_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RegisterPointerInputTargetEx(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RegisterPointerInputTargetEx(unnamedParam0, unnamedParam1, unnamedParam2);
}
HPOWERNOTIFY thunk_RegisterPowerSettingNotification(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCGUID unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RegisterPowerSettingNotification(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RegisterPowerSettingNotification(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_RegisterRawInputDevices(CPU* cpu){
	const RAWINPUTDEVICE * unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RegisterRawInputDevices(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RegisterRawInputDevices(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_RegisterShellHookWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterShellHookWindow(%p)", unnamedParam0);
	return RegisterShellHookWindow(unnamedParam0);
}
HPOWERNOTIFY thunk_RegisterSuspendResumeNotification(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RegisterSuspendResumeNotification(%p, %p)", unnamedParam0, unnamedParam1);
	return RegisterSuspendResumeNotification(unnamedParam0, unnamedParam1);
}
BOOL thunk_RegisterTouchHitTestingWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	ULONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RegisterTouchHitTestingWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return RegisterTouchHitTestingWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_RegisterTouchWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	ULONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RegisterTouchWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return RegisterTouchWindow(unnamedParam0, unnamedParam1);
}
UINT thunk_RegisterWindowMessageA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterWindowMessageA(%p)", unnamedParam0);
	return RegisterWindowMessageA(unnamedParam0);
}
UINT thunk_RegisterWindowMessageW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RegisterWindowMessageW(%p)", unnamedParam0);
	return RegisterWindowMessageW(unnamedParam0);
}
BOOL thunk_ReleaseCapture(CPU* cpu){
	printf("\nCalling USER32!ReleaseCaptur)");
	return ReleaseCapture();
}
INT thunk_ReleaseDC(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HDC unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ReleaseDC(%p, %p)", unnamedParam0, unnamedParam1);
	return ReleaseDC(unnamedParam0, unnamedParam1);
}
BOOL thunk_RemoveClipboardFormatListener(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!RemoveClipboardFormatListener(%p)", unnamedParam0);
	return RemoveClipboardFormatListener(unnamedParam0);
}
BOOL thunk_RemoveMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!RemoveMenu(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RemoveMenu(unnamedParam0, unnamedParam1, unnamedParam2);
}
HANDLE thunk_RemovePropA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RemovePropA(%p, %p)", unnamedParam0, unnamedParam1);
	return RemovePropA(unnamedParam0, unnamedParam1);
}
HANDLE thunk_RemovePropW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!RemovePropW(%p, %p)", unnamedParam0, unnamedParam1);
	return RemovePropW(unnamedParam0, unnamedParam1);
}
BOOL thunk_ReplyMessage(CPU* cpu){
	LRESULT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ReplyMessage(%p)", unnamedParam0);
	return ReplyMessage(unnamedParam0);
}
BOOL thunk_ScreenToClient(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ScreenToClient(%p, %p)", unnamedParam0, unnamedParam1);
	return ScreenToClient(unnamedParam0, unnamedParam1);
}
BOOL thunk_ScrollDC(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	const RECT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	HRGN unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPRECT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!ScrollDC(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return ScrollDC(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_ScrollWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	const RECT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ScrollWindow(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ScrollWindow(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_ScrollWindowEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	const RECT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	HRGN unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPRECT unnamedParam6 = cpu->fn_arg(cpu, 6);
	UINT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!ScrollWindowEx(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return ScrollWindowEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
LRESULT thunk_SendDlgItemMessageA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SendDlgItemMessageA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SendDlgItemMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LRESULT thunk_SendDlgItemMessageW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	WPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPARAM unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SendDlgItemMessageW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SendDlgItemMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
UINT thunk_SendInput(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPINPUT unnamedParam1 = cpu->fn_arg(cpu, 1);
	int unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SendInput(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SendInput(unnamedParam0, unnamedParam1, unnamedParam2);
}
LRESULT thunk_SendMessageA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SendMessageA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SendMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LRESULT thunk_SendMessageW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SendMessageW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SendMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SendMessageCallbackA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	SENDASYNCPROC unnamedParam4 = cpu->fn_arg(cpu, 4);
	ULONG_PTR unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!SendMessageCallbackA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return SendMessageCallbackA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_SendMessageCallbackW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	SENDASYNCPROC unnamedParam4 = cpu->fn_arg(cpu, 4);
	ULONG_PTR unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!SendMessageCallbackW(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return SendMessageCallbackW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
LRESULT thunk_SendMessageTimeoutA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	PDWORD_PTR unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!SendMessageTimeoutA(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return SendMessageTimeoutA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
LRESULT thunk_SendMessageTimeoutW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	PDWORD_PTR unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!SendMessageTimeoutW(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return SendMessageTimeoutW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_SendNotifyMessageA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SendNotifyMessageA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SendNotifyMessageA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SendNotifyMessageW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SendNotifyMessageW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SendNotifyMessageW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HWND thunk_SetActiveWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetActiveWindow(%p)", unnamedParam0);
	return SetActiveWindow(unnamedParam0);
}
HWND thunk_SetCapture(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetCapture(%p)", unnamedParam0);
	return SetCapture(unnamedParam0);
}
BOOL thunk_SetCaretBlinkTime(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetCaretBlinkTime(%p)", unnamedParam0);
	return SetCaretBlinkTime(unnamedParam0);
}
BOOL thunk_SetCaretPos(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetCaretPos(%p, %p)", unnamedParam0, unnamedParam1);
	return SetCaretPos(unnamedParam0, unnamedParam1);
}
DWORD thunk_SetClassLongA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetClassLongA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetClassLongA(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_SetClassLongW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetClassLongW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetClassLongW(unnamedParam0, unnamedParam1, unnamedParam2);
}
WORD thunk_SetClassWord(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetClassWord(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetClassWord(unnamedParam0, unnamedParam1, unnamedParam2);
}
HANDLE thunk_SetClipboardData(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HANDLE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetClipboardData(%p, %p)", unnamedParam0, unnamedParam1);
	return SetClipboardData(unnamedParam0, unnamedParam1);
}
HWND thunk_SetClipboardViewer(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetClipboardViewer(%p)", unnamedParam0);
	return SetClipboardViewer(unnamedParam0);
}
UINT_PTR thunk_SetCoalescableTimer(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	TIMERPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	ULONG unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetCoalescableTimer(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetCoalescableTimer(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HCURSOR thunk_SetCursor(CPU* cpu){
	HCURSOR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetCursor(%p)", unnamedParam0);
	return SetCursor(unnamedParam0);
}
BOOL thunk_SetCursorPos(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetCursorPos(%p, %p)", unnamedParam0, unnamedParam1);
	return SetCursorPos(unnamedParam0, unnamedParam1);
}
VOID thunk_SetDebugErrorLevel(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetDebugErrorLevel(%p)", unnamedParam0);
	return SetDebugErrorLevel(unnamedParam0);
}
BOOL thunk_SetDlgItemInt(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	BOOL unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetDlgItemInt(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetDlgItemInt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetDlgItemTextA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetDlgItemTextA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetDlgItemTextA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetDlgItemTextW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetDlgItemTextW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetDlgItemTextW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetDoubleClickTime(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetDoubleClickTime(%p)", unnamedParam0);
	return SetDoubleClickTime(unnamedParam0);
}
HWND thunk_SetFocus(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetFocus(%p)", unnamedParam0);
	return SetFocus(unnamedParam0);
}
BOOL thunk_SetForegroundWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetForegroundWindow(%p)", unnamedParam0);
	return SetForegroundWindow(unnamedParam0);
}
BOOL thunk_SetGestureConfig(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	PGESTURECONFIG unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetGestureConfig(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetGestureConfig(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_SetKeyboardState(CPU* cpu){
	LPBYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetKeyboardState(%p)", unnamedParam0);
	return SetKeyboardState(unnamedParam0);
}
VOID thunk_SetLastErrorEx(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetLastErrorEx(%p, %p)", unnamedParam0, unnamedParam1);
	return SetLastErrorEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetLayeredWindowAttributes(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	BYTE unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetLayeredWindowAttributes(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetLayeredWindowAttributes(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetMenu(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMENU unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetMenu(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMenu(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetMenuContextHelpId(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetMenuContextHelpId(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMenuContextHelpId(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetMenuDefaultItem(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetMenuDefaultItem(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetMenuDefaultItem(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetMenuInfo(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCMENUINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetMenuInfo(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMenuInfo(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetMenuItemBitmaps(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	HBITMAP unnamedParam3 = cpu->fn_arg(cpu, 3);
	HBITMAP unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetMenuItemBitmaps(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetMenuItemBitmaps(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_SetMenuItemInfoA(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	const MENUITEMINFOA * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetMenuItemInfoA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetMenuItemInfoA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetMenuItemInfoW(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	const MENUITEMINFOW * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetMenuItemInfoW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetMenuItemInfoW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
LPARAM thunk_SetMessageExtraInfo(CPU* cpu){
	LPARAM unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetMessageExtraInfo(%p)", unnamedParam0);
	return SetMessageExtraInfo(unnamedParam0);
}
BOOL thunk_SetMessageQueue(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetMessageQueue(%p)", unnamedParam0);
	return SetMessageQueue(unnamedParam0);
}
HWND thunk_SetParent(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetParent(%p, %p)", unnamedParam0, unnamedParam1);
	return SetParent(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetPhysicalCursorPos(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetPhysicalCursorPos(%p, %p)", unnamedParam0, unnamedParam1);
	return SetPhysicalCursorPos(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetProcessDPIAware(CPU* cpu){
	printf("\nCalling USER32!SetProcessDPIAwar)");
	return SetProcessDPIAware();
}
BOOL thunk_SetProcessDefaultLayout(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetProcessDefaultLayout(%p)", unnamedParam0);
	return SetProcessDefaultLayout(unnamedParam0);
}
BOOL thunk_SetProcessDpiAwarenessContext(CPU* cpu){
	DPI_AWARENESS_CONTEXT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetProcessDpiAwarenessContext(%p)", unnamedParam0);
	return SetProcessDpiAwarenessContext(unnamedParam0);
}
BOOL thunk_SetProcessWindowStation(CPU* cpu){
	HWINSTA unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetProcessWindowStation(%p)", unnamedParam0);
	return SetProcessWindowStation(unnamedParam0);
}
BOOL thunk_SetPropA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	HANDLE unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetPropA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetPropA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetPropW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	HANDLE unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetPropW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetPropW(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_SetScrollInfo(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const SCROLLINFO * unnamedParam2 = cpu->fn_arg(cpu, 2);
	BOOL unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetScrollInfo(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetScrollInfo(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_SetScrollPos(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	BOOL unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetScrollPos(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetScrollPos(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetScrollRange(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	BOOL unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetScrollRange(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetScrollRange(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_SetSystemCursor(CPU* cpu){
	HCURSOR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetSystemCursor(%p, %p)", unnamedParam0, unnamedParam1);
	return SetSystemCursor(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetThreadDesktop(CPU* cpu){
	HDESK unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetThreadDesktop(%p)", unnamedParam0);
	return SetThreadDesktop(unnamedParam0);
}
DPI_AWARENESS_CONTEXT thunk_SetThreadDpiAwarenessContext(CPU* cpu){
	DPI_AWARENESS_CONTEXT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SetThreadDpiAwarenessContext(%p)", unnamedParam0);
	return SetThreadDpiAwarenessContext(unnamedParam0);
}
UINT_PTR thunk_SetTimer(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT_PTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	TIMERPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetTimer(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);

	if (unnamedParam3) { //there is a timer proc
		AddTimerProcMapEntry(unnamedParam0, unnamedParam1, unnamedParam3);
		LockTimerForCPU(unnamedParam0, unnamedParam1, cpu);
		return SetTimer(unnamedParam0, unnamedParam1, unnamedParam2, thunkTimerProc);
	}
	else {
		return SetTimer(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	}
}
BOOL thunk_SetUserObjectInformationA(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetUserObjectInformationA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetUserObjectInformationA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetUserObjectInformationW(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetUserObjectInformationW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetUserObjectInformationW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetUserObjectSecurity(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	PSECURITY_INFORMATION unnamedParam1 = cpu->fn_arg(cpu, 1);
	PSECURITY_DESCRIPTOR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetUserObjectSecurity(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetUserObjectSecurity(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetWindowContextHelpId(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowContextHelpId(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowContextHelpId(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetWindowDisplayAffinity(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowDisplayAffinity(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowDisplayAffinity(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetWindowFeedbackSetting(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	FEEDBACK_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT32 unnamedParam3 = cpu->fn_arg(cpu, 3);
	const void * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetWindowFeedbackSetting(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetWindowFeedbackSetting(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LONG thunk_SetWindowLongA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetWindowLongA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetWindowLongA(unnamedParam0, unnamedParam1, unnamedParam2);
}
LONG thunk_SetWindowLongW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LONG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetWindowLongW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetWindowLongW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetWindowPlacement(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	const WINDOWPLACEMENT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowPlacement(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowPlacement(unnamedParam0, unnamedParam1);
}
HHOOK thunk_SetWindowsHookA(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HOOKPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowsHookA(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowsHookA(unnamedParam0, unnamedParam1);
}
HHOOK thunk_SetWindowsHookW(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HOOKPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowsHookW(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowsHookW(unnamedParam0, unnamedParam1);
}
HHOOK thunk_SetWindowsHookExA(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HOOKPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	HINSTANCE unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetWindowsHookExA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetWindowsHookExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HHOOK thunk_SetWindowsHookExW(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HOOKPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	HINSTANCE unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SetWindowsHookExW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetWindowsHookExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetWindowPos(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HWND unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!SetWindowPos(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return SetWindowPos(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
INT thunk_SetWindowRgn(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetWindowRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetWindowRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetWindowTextA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowTextA(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowTextA(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetWindowTextW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SetWindowTextW(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWindowTextW(unnamedParam0, unnamedParam1);
}
WORD thunk_SetWindowWord(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	WORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SetWindowWord(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetWindowWord(unnamedParam0, unnamedParam1, unnamedParam2);
}
HWINEVENTHOOK thunk_SetWinEventHook(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	HMODULE unnamedParam2 = cpu->fn_arg(cpu, 2);
	WINEVENTPROC unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	DWORD unnamedParam5 = cpu->fn_arg(cpu, 5);
	DWORD unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!SetWinEventHook(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return SetWinEventHook(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_ShowCaret(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ShowCaret(%p)", unnamedParam0);
	return ShowCaret(unnamedParam0);
}
INT thunk_ShowCursor(CPU* cpu){
	BOOL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ShowCursor(%p)", unnamedParam0);
	return ShowCursor(unnamedParam0);
}
BOOL thunk_ShowScrollBar(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!ShowScrollBar(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return ShowScrollBar(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_ShowOwnedPopups(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ShowOwnedPopups(%p, %p)", unnamedParam0, unnamedParam1);
	return ShowOwnedPopups(unnamedParam0, unnamedParam1);
}
BOOL thunk_ShowWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ShowWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return ShowWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_ShowWindowAsync(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ShowWindowAsync(%p, %p)", unnamedParam0, unnamedParam1);
	return ShowWindowAsync(unnamedParam0, unnamedParam1);
}
BOOL thunk_ShutdownBlockReasonCreate(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ShutdownBlockReasonCreate(%p, %p)", unnamedParam0, unnamedParam1);
	return ShutdownBlockReasonCreate(unnamedParam0, unnamedParam1);
}
BOOL thunk_ShutdownBlockReasonDestroy(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!ShutdownBlockReasonDestroy(%p)", unnamedParam0);
	return ShutdownBlockReasonDestroy(unnamedParam0);
}
BOOL thunk_SkipPointerFrameMessages(CPU* cpu){
	UINT32 unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SkipPointerFrameMessages(%p)", unnamedParam0);
	return SkipPointerFrameMessages(unnamedParam0);
}
BOOL thunk_SubtractRect(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!SubtractRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SubtractRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SwapMouseButton(CPU* cpu){
	BOOL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SwapMouseButton(%p)", unnamedParam0);
	return SwapMouseButton(unnamedParam0);
}
BOOL thunk_SwitchDesktop(CPU* cpu){
	HDESK unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!SwitchDesktop(%p)", unnamedParam0);
	return SwitchDesktop(unnamedParam0);
}
VOID thunk_SwitchToThisWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	BOOL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!SwitchToThisWindow(%p, %p)", unnamedParam0, unnamedParam1);
	return SwitchToThisWindow(unnamedParam0, unnamedParam1);
}
BOOL thunk_SystemParametersInfoA(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SystemParametersInfoA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SystemParametersInfoA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SystemParametersInfoW(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!SystemParametersInfoW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SystemParametersInfoW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SystemParametersInfoForDpi(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	void * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SystemParametersInfoForDpi(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SystemParametersInfoForDpi(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
LONG thunk_TabbedTextOutA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	const INT * unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!TabbedTextOutA(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return TabbedTextOutA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
LONG thunk_TabbedTextOutW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	const INT * unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling USER32!TabbedTextOutW(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return TabbedTextOutW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
WORD thunk_TileWindows(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const HWND * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!TileWindows(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return TileWindows(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_ToAscii(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!ToAscii(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ToAscii(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_ToAsciiEx(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	HKL unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!ToAsciiEx(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return ToAsciiEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
INT thunk_ToUnicode(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	int unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!ToUnicode(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return ToUnicode(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
INT thunk_ToUnicodeEx(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	const BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	int unnamedParam4 = cpu->fn_arg(cpu, 4);
	UINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	HKL unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!ToUnicodeEx(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return ToUnicodeEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_TrackMouseEvent(CPU* cpu){
	LPTRACKMOUSEEVENT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!TrackMouseEvent(%p)", unnamedParam0);
	return TrackMouseEvent(unnamedParam0);
}
BOOL thunk_TrackPopupMenu(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	HWND unnamedParam5 = cpu->fn_arg(cpu, 5);
	const RECT * unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling USER32!TrackPopupMenu(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return TrackPopupMenu(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_TrackPopupMenuEx(CPU* cpu){
	HMENU unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	HWND unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPTPMPARAMS unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling USER32!TrackPopupMenuEx(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return TrackPopupMenuEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
INT thunk_TranslateAcceleratorA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HACCEL unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPMSG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!TranslateAcceleratorA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return TranslateAcceleratorA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_TranslateAcceleratorW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HACCEL unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPMSG unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!TranslateAcceleratorW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return TranslateAcceleratorW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_TranslateMDISysAccel(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPMSG unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!TranslateMDISysAccel(%p, %p)", unnamedParam0, unnamedParam1);
	return TranslateMDISysAccel(unnamedParam0, unnamedParam1);
}
BOOL thunk_TranslateMessage(CPU* cpu){
	const MSG * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!TranslateMessage(%p)", unnamedParam0);
	return TranslateMessage(unnamedParam0);
}
BOOL thunk_UnhookWinEvent(CPU* cpu){
	HWINEVENTHOOK unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnhookWinEvent(%p)", unnamedParam0);
	return UnhookWinEvent(unnamedParam0);
}
BOOL thunk_UnhookWindowsHook(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	HOOKPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnhookWindowsHook(%p, %p)", unnamedParam0, unnamedParam1);
	return UnhookWindowsHook(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnhookWindowsHookEx(CPU* cpu){
	HHOOK unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnhookWindowsHookEx(%p)", unnamedParam0);
	return UnhookWindowsHookEx(unnamedParam0);
}
BOOL thunk_UnloadKeyboardLayout(CPU* cpu){
	HKL unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnloadKeyboardLayout(%p)", unnamedParam0);
	return UnloadKeyboardLayout(unnamedParam0);
}
BOOL thunk_UnionRect(CPU* cpu){
	LPRECT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!UnionRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return UnionRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_UnregisterClassA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	HINSTANCE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnregisterClassA(%p, %p)", unnamedParam0, unnamedParam1);
	return UnregisterClassA(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnregisterClassW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	HINSTANCE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnregisterClassW(%p, %p)", unnamedParam0, unnamedParam1);
	return UnregisterClassW(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnregisterDeviceNotification(CPU* cpu){
	HDEVNOTIFY unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnregisterDeviceNotification(%p)", unnamedParam0);
	return UnregisterDeviceNotification(unnamedParam0);
}
BOOL thunk_UnregisterHotKey(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnregisterHotKey(%p, %p)", unnamedParam0, unnamedParam1);
	return UnregisterHotKey(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnregisterPointerInputTarget(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INPUT_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnregisterPointerInputTarget(%p, %p)", unnamedParam0, unnamedParam1);
	return UnregisterPointerInputTarget(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnregisterPointerInputTargetEx(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	POINTER_INPUT_TYPE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!UnregisterPointerInputTargetEx(%p, %p)", unnamedParam0, unnamedParam1);
	return UnregisterPointerInputTargetEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_UnregisterPowerSettingNotification(CPU* cpu){
	HPOWERNOTIFY unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnregisterPowerSettingNotification(%p)", unnamedParam0);
	return UnregisterPowerSettingNotification(unnamedParam0);
}
BOOL thunk_UnregisterSuspendResumeNotification(CPU* cpu){
	HPOWERNOTIFY unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnregisterSuspendResumeNotification(%p)", unnamedParam0);
	return UnregisterSuspendResumeNotification(unnamedParam0);
}
BOOL thunk_UnregisterTouchWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UnregisterTouchWindow(%p)", unnamedParam0);
	return UnregisterTouchWindow(unnamedParam0);
}
BOOL thunk_UpdateWindow(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!UpdateWindow(%p)", unnamedParam0);
	return UpdateWindow(unnamedParam0);
}
BOOL thunk_UserHandleGrantAccess(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	HANDLE unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling USER32!UserHandleGrantAccess(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return UserHandleGrantAccess(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_ValidateRect(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ValidateRect(%p, %p)", unnamedParam0, unnamedParam1);
	return ValidateRect(unnamedParam0, unnamedParam1);
}
BOOL thunk_ValidateRgn(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!ValidateRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return ValidateRgn(unnamedParam0, unnamedParam1);
}
SHORT thunk_VkKeyScanA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!VkKeyScanA(%p)", unnamedParam0);
	return VkKeyScanA(unnamedParam0);
}
SHORT thunk_VkKeyScanW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!VkKeyScanW(%p)", unnamedParam0);
	return VkKeyScanW(unnamedParam0);
}
WORD thunk_VkKeyScanExA(CPU* cpu){
	CHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	HKL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!VkKeyScanExA(%p, %p)", unnamedParam0, unnamedParam1);
	return VkKeyScanExA(unnamedParam0, unnamedParam1);
}
WORD thunk_VkKeyScanExW(CPU* cpu){
	WCHAR unnamedParam0 = cpu->fn_arg(cpu, 0);
	HKL unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!VkKeyScanExW(%p, %p)", unnamedParam0, unnamedParam1);
	return VkKeyScanExW(unnamedParam0, unnamedParam1);
}
DWORD thunk_WaitForInputIdle(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!WaitForInputIdle(%p, %p)", unnamedParam0, unnamedParam1);
	return WaitForInputIdle(unnamedParam0, unnamedParam1);
}
BOOL thunk_WaitMessage(CPU* cpu){
	printf("\nCalling USER32!WaitMessag)");
	return WaitMessage();
}
HWND thunk_WindowFromDC(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!WindowFromDC(%p)", unnamedParam0);
	return WindowFromDC(unnamedParam0);
}
HWND thunk_WindowFromPoint(CPU* cpu){
	DWORD_PTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling USER32!WindowFromPoint(%p)", unnamedParam0);
	return WindowFromPoint(*(POINT*)&unnamedParam0);
}
BOOL thunk_WinHelpA(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	ULONG_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!WinHelpA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return WinHelpA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_WinHelpW(CPU* cpu){
	HWND unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	ULONG_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!WinHelpW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return WinHelpW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
VOID thunk_keybd_event(CPU* cpu){
	BYTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	BYTE unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	ULONG_PTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling USER32!keybd_event(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return keybd_event(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
VOID thunk_mouse_event(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	ULONG_PTR unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!mouse_event(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return mouse_event(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_wsprintfA(CPU* cpu){
	LPSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!wsprintfA(%p, %p)", unnamedParam0, unnamedParam1);
	return wsprintfA(unnamedParam0, unnamedParam1);
}
INT thunk_wsprintfW(CPU* cpu){
	LPWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!wsprintfW(%p, %p)", unnamedParam0, unnamedParam1);

	return wvsprintfW(unnamedParam0, unnamedParam1, cpu->get_sp(cpu) + 4 + 8);//wsprintfW(unnamedParam0, unnamedParam1);
}

BOOL thunk_SetRect(CPU* cpu) {
	LPRECT lprc = cpu->fn_arg(cpu, 0);
	int xLeft = cpu->fn_arg(cpu, 1);
	int yTop = cpu->fn_arg(cpu, 2);
	int xRight = cpu->fn_arg(cpu, 3);
	int yBottom = cpu->fn_arg(cpu, 4);
	printf("\nCalling USER32!SetRect(%p, %p, %p, %p, %p)", lprc, xLeft, yTop, xRight, yBottom);
	return SetRect(lprc, xLeft, yTop, xRight, yBottom);
}
BOOL thunk_PtInRect(CPU* cpu) {
	const RECT* lprc = cpu->fn_arg(cpu, 0);
	DWORD_PTR pt = cpu->fn_arg(cpu, 1);
	printf("\nCalling USER32!PtInRect(%p, %p)", lprc, pt);
	return PtInRect(lprc, *(POINT*)&pt);
}
