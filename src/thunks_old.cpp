
/*int thunk_MessageBoxA(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPCSTR lpText = cpu->fn_arg(cpu, 1);
	LPCSTR lpCaption = cpu->fn_arg(cpu, 2);
	UINT uType = cpu->fn_arg(cpu, 3);
	printf("\nCalling MessageBoxA(%p, %p, %p, %p)", hWnd, lpText, lpCaption, uType);
	return MessageBoxA(hWnd, lpText, lpCaption, uType);
}

VOID thunk_ExitProcess(CPU* cpu) {
	UINT uExitCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling ExitProcess(%p)", uExitCode);
	return ExitProcess(uExitCode);
}

int thunk_SetBkMode(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int mode = cpu->fn_arg(cpu, 1);
	printf("\nCalling SetBkMode(%p, %p)", hdc, mode);
	return SetBkMode(hdc, mode);
}

HMODULE thunk_GetModuleHandleA(CPU* cpu) {
	LPCSTR lpModuleName = cpu->fn_arg(cpu, 0);

	printf("\nCalling GetModuleHandle(\"%s\")", lpModuleName);

	if (lpModuleName == NULL) {
		return cpu->get_teb(cpu)->ProcessEnvironmentBlock->Reserved3[1];
	}
	while (1);
	return GetModuleHandleA(lpModuleName);
}

HCURSOR thunk_LoadCursorA(CPU* cpu) {
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCSTR lpCursorName = cpu->fn_arg(cpu, 1);
	printf("\nCalling LoadCursorA(%p, %p)", hInstance, lpCursorName);
	return LoadCursorA(hInstance, lpCursorName);
}

HICON thunk_LoadIconA(CPU* cpu) {
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCSTR lpIconName = cpu->fn_arg(cpu, 1);
	printf("\nCalling LoadIconA(%p, %p)", hInstance, lpIconName);
	return LoadIconA(hInstance, lpIconName);
}

ATOM thunk_RegisterClassA(CPU* cpu) {
	WNDCLASSA* lpWndClass = cpu->fn_arg(cpu, 0);
	printf("\nCalling RegisterClassA(%p)", lpWndClass);
	AddClassProcMapEntry(lpWndClass->lpszClassName, lpWndClass->lpfnWndProc);
	lpWndClass->lpfnWndProc = thunkWndProc;
	return RegisterClassA(lpWndClass);
}

HWND thunk_CreateWindowExA(CPU* cpu) {
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

	printf("\nCalling CreateWindowExA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, &initLParam);

	HWND hwnd = CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, &initLParam);

	printf("Done Creating the Window!");

	return hwnd;
}

BOOL thunk_ShowWindow(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	int nCmdShow = cpu->fn_arg(cpu, 1);
	printf("\nCalling ShowWindow(%p, %p)", hWnd, nCmdShow);
	return ShowWindow(hWnd, nCmdShow);
}

BOOL thunk_UpdateWindow(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling UpdateWindow(%p)", hWnd);
	return UpdateWindow(hWnd);
}

LRESULT thunk_DefWindowProcA(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	UINT Msg = cpu->fn_arg(cpu, 1);
	WPARAM wParam = cpu->fn_arg(cpu, 2);
	LPARAM lParam = cpu->fn_arg(cpu, 3);
	printf("\nCalling DefWindowProcA(%p, %p, %p, %p)", hWnd, Msg, wParam, lParam);
	return DefWindowProcA(hWnd, Msg, wParam, lParam);
}

BOOL thunk_PeekMessageA(CPU* cpu) {
	LPMSG lpMsg = cpu->fn_arg(cpu, 0);
	HWND hWnd = cpu->fn_arg(cpu, 1);
	UINT wMsgFilterMin = cpu->fn_arg(cpu, 2);
	UINT wMsgFilterMax = cpu->fn_arg(cpu, 3);
	UINT wRemoveMsg = cpu->fn_arg(cpu, 4);
	printf("\nCalling PeekMessageA(%p, %p, %p, %p, %p)", lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
	return PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}

BOOL thunk_TranslateMessage(CPU* cpu) {
	const MSG* lpMsg = cpu->fn_arg(cpu, 0);
	printf("\nCalling TranslateMessage(%p)", lpMsg);
	return TranslateMessage(lpMsg);
}

LRESULT thunk_DispatchMessageA(CPU* cpu) {
	const MSG* lpMsg = cpu->fn_arg(cpu, 0);
	printf("\nCalling DispatchMessageA(%p)", lpMsg);
	return DispatchMessageA(lpMsg);
}

LPSTR thunk_GetCommandLineA(CPU* cpu) {

	printf("\nCalling GetCommandLineA()");

	return GetCommandLineA();
}

VOID thunk_GetStartupInfoA(CPU* cpu) {
	LPSTARTUPINFOA lpStartupInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetStartupInfoA(%p)", lpStartupInfo);
	return GetStartupInfoA(lpStartupInfo);
}

BOOL thunk_GetMessageA(CPU* cpu) {
	LPMSG lpMsg = cpu->fn_arg(cpu, 0);
	HWND hWnd = cpu->fn_arg(cpu, 1);
	UINT wMsgFilterMin = cpu->fn_arg(cpu, 2);
	UINT wMsgFilterMax = cpu->fn_arg(cpu, 3);
	return GetMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax);
}

HGDIOBJ thunk_GetStockObject(CPU* cpu) {
	int i = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetStockObject(%p)", i);
	return GetStockObject(i);
}

VOID thunk_PostQuitMessage(CPU* cpu) {
	int nExitCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling PostQuitMessage(%p)", nExitCode);
	return PostQuitMessage(nExitCode);
}

BOOL thunk_EndPaint(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	const PAINTSTRUCT* lpPaint = cpu->fn_arg(cpu, 1);
	printf("\nCalling EndPaint(%p, %p)", hWnd, lpPaint);
	return EndPaint(hWnd, lpPaint);
}

int thunk_DrawTextA(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	LPCSTR lpchText = cpu->fn_arg(cpu, 1);
	int cchText = cpu->fn_arg(cpu, 2);
	LPRECT lprc = cpu->fn_arg(cpu, 3);
	UINT format = cpu->fn_arg(cpu, 4);
	printf("\nCalling DrawTextA(%p, %p, %p, %p, %p)", hdc, lpchText, cchText, lprc, format);
	return DrawTextA(hdc, lpchText, cchText, lprc, format);
}

BOOL thunk_GetClientRect(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPRECT lpRect = cpu->fn_arg(cpu, 1);
	printf("\nCalling GetClientRect(%p, %p)", hWnd, lpRect);
	return GetClientRect(hWnd, lpRect);
}

HDC thunk_BeginPaint(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPPAINTSTRUCT lpPaint = cpu->fn_arg(cpu, 1);
	printf("\nCalling BeginPaint(%p, %p)", hWnd, lpPaint);
	return BeginPaint(hWnd, lpPaint);
}

int thunk_GetSystemMetrics(CPU* cpu) {
	int nIndex = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetSystemMetrics(%p)", nIndex);
	return GetSystemMetrics(nIndex);
}

HDC thunk_GetDC(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetDC(%p)", hWnd);
	return GetDC(hWnd);
}

int thunk_ReleaseDC(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	HDC hDC = cpu->fn_arg(cpu, 1);
	printf("\nCalling ReleaseDC(%p, %p)", hWnd, hDC);
	return ReleaseDC(hWnd, hDC);
}

COLORREF thunk_SetPixel(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	COLORREF color = cpu->fn_arg(cpu, 3);
	printf("\nCalling SetPixel(%p, %p, %p, %p)", hdc, x, y, color);
	return SetPixel(hdc, x, y, color);
}

BOOL thunk_InvalidateRect(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	const RECT* lpRect = cpu->fn_arg(cpu, 1);
	BOOL bErase = cpu->fn_arg(cpu, 2);
	printf("\nCalling InvalidateRect(%p, %p, %p)", hWnd, lpRect, bErase);
	return InvalidateRect(hWnd, lpRect, bErase);
}

LPVOID thunk_HeapAlloc(CPU* cpu) {
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	SIZE_T dwBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling HeapAlloc(%p, %p, %p)", hHeap, dwFlags, dwBytes);
	return HeapAlloc(hHeap, dwFlags, dwBytes);
}

HANDLE thunk_HeapCreate(CPU* cpu) {
	DWORD flOptions = cpu->fn_arg(cpu, 0);
	DWORD dwInitialSize = cpu->fn_arg(cpu, 1);
	DWORD dwMaximumSize = cpu->fn_arg(cpu, 2);

	printf("\nCalling HeapCreate(%p, %p, %p)", flOptions, dwInitialSize, dwMaximumSize);

	return HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}

HANDLE thunk_GetStdHandle(CPU* cpu) {
	DWORD nStdHandle = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetStdHandle(%p)", nStdHandle);
	return GetStdHandle(nStdHandle);
}

DWORD thunk_GetFileType(CPU* cpu) {
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetFileType(%p)", hFile);
	return GetFileType(hFile);
}

UINT thunk_SetHandleCount(CPU* cpu) {
	UINT uNumber = cpu->fn_arg(cpu, 0);
	printf("\nCalling SetHandleCount(%p)", uNumber);
	return SetHandleCount(uNumber);
}

UINT thunk_GetACP(CPU* cpu) {
	printf("\nCalling GetACP()");
	return GetACP();
}

BOOL thunk_GetCPInfo(CPU* cpu) {
	UINT CodePage = cpu->fn_arg(cpu, 0);
	LPCPINFO lpCPInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling GetCPInfo(%p, %p)", CodePage, lpCPInfo);
	return GetCPInfo(CodePage, lpCPInfo);
}

LPWCH thunk_GetEnvironmentStringsW(CPU* cpu) {
	printf("\nCalling GetEnvironmentStringsW()");
	return GetEnvironmentStringsW();
}

HDC thunk_CreateCompatibleDC(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling CreateCompatibleDC(%p)", hdc);
	return CreateCompatibleDC(hdc);
}

BOOL thunk_FreeEnvironmentStringsW(CPU* cpu) {
	LPWCH penv = cpu->fn_arg(cpu, 0);
	printf("\nCalling FreeEnvironmentStringsW(%p)", penv);
	return FreeEnvironmentStringsW(penv);
}

int thunk_WideCharToMultiByte(CPU* cpu) {
	UINT CodePage = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCWCH lpWideCharStr = cpu->fn_arg(cpu, 2);
	int cchWideChar = cpu->fn_arg(cpu, 3);
	LPSTR lpMultiByteStr = cpu->fn_arg(cpu, 4);
	int cbMultiByte = cpu->fn_arg(cpu, 5);
	LPCCH lpDefaultChar = cpu->fn_arg(cpu, 6);
	LPBOOL lpUsedDefaultChar = cpu->fn_arg(cpu, 7);
	printf("\nCalling WideCharToMultiByte(%p, %p, %p, %p, %p, %p, %p, %p)", CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
	return WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}

DWORD thunk_GetModuleFileNameA(CPU* cpu) {
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPSTR lpFilename = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);

	printf("\nCalling GetModuleFileNameA(%p, %s, %p)", hModule, lpFilename, nSize);

	return GetModuleFileNameA(hModule, lpFilename, nSize);
}

BOOL thunk_WriteFile(CPU* cpu) {
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToWrite = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfBytesWritten = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 4);
	printf("\nCalling WriteFile(%p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
	return WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}


BOOL thunk_HeapFree(CPU* cpu) {
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPVOID lpMem = cpu->fn_arg(cpu, 2);
	printf("\nCalling HeapFree(%p, %p, %p)", hHeap, dwFlags, lpMem);
	return HeapFree(hHeap, dwFlags, lpMem);
}

int thunk_GetDeviceCaps(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int index = cpu->fn_arg(cpu, 1);
	printf("\nCalling GetDeviceCaps(%p, %p)", hdc, index);
	return GetDeviceCaps(hdc, index);
}

HBRUSH thunk_CreateSolidBrush(CPU* cpu) {
	COLORREF color = cpu->fn_arg(cpu, 0);
	printf("\nCalling CreateSolidBrush(%p)", color);
	return CreateSolidBrush(color);
}

int thunk_LoadStringA(CPU* cpu) {
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	UINT uID = cpu->fn_arg(cpu, 1);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 2);
	int cchBufferMax = cpu->fn_arg(cpu, 3);
	int chars = LoadStringA(hInstance, uID, lpBuffer, cchBufferMax);

	printf("\nLoadStringA returned %d (%s)", chars, lpBuffer);

	return chars;
}

BOOL thunk_GetTextMetricsA(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	LPTEXTMETRICA lptm = cpu->fn_arg(cpu, 1);
	printf("\nCalling GetTextMetricsA(%p, %p)", hdc, lptm);
	return GetTextMetricsA(hdc, lptm);
}

HGDIOBJ thunk_SelectObject(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	HGDIOBJ h = cpu->fn_arg(cpu, 1);
	printf("\nCalling SelectObject(%p, %p)", hdc, h);
	return SelectObject(hdc, h);
}

BOOL thunk_PatBlt(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	int w = cpu->fn_arg(cpu, 3);
	int h = cpu->fn_arg(cpu, 4);
	DWORD rop = cpu->fn_arg(cpu, 5);
	printf("\nCalling PatBlt(%p, %p, %p, %p, %p, %p)", hdc, x, y, w, h, rop);
	return PatBlt(hdc, x, y, w, h, rop);
}

BOOL thunk_SetWindowTextA(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPCSTR lpString = cpu->fn_arg(cpu, 1);
	printf("\nCalling SetWindowTextA(%p, %p)", hWnd, lpString);
	return SetWindowTextA(hWnd, lpString);
}

HMENU thunk_GetMenu(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetMenu(%p)", hWnd);
	return GetMenu(hWnd);
}

BOOL thunk_SetCursorPos(CPU* cpu) {
	int X = cpu->fn_arg(cpu, 0);
	int Y = cpu->fn_arg(cpu, 1);
	printf("\nCalling SetCursorPos(%p, %p)", X, Y);
	return SetCursorPos(X, Y);
}

BOOL thunk_ClientToScreen(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPPOINT lpPoint = cpu->fn_arg(cpu, 1);
	printf("\nCalling ClientToScreen(%p, %p)", hWnd, lpPoint);
	return ClientToScreen(hWnd, lpPoint);
}

BOOL thunk_LineTo(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	printf("\nCalling LineTo(%p, %p, %p)", hdc, x, y);
	return LineTo(hdc, x, y);
}

BOOL thunk_MoveToEx(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	LPPOINT lppt = cpu->fn_arg(cpu, 3);
	printf("\nCalling MoveToEx(%p, %p, %p, %p)", hdc, x, y, lppt);
	return MoveToEx(hdc, x, y, lppt);
}

BOOL thunk_TextOutA(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	LPCSTR lpString = cpu->fn_arg(cpu, 3);
	int c = cpu->fn_arg(cpu, 4);
	printf("\nCalling TextOutA(%p, %p, %p, %p)", hdc, x, y, lpString, c);
	return TextOutA(hdc, x, y, lpString, c);
}

BOOL thunk_GetTextExtentPointA(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	LPCSTR lpString = cpu->fn_arg(cpu, 1);
	int c = cpu->fn_arg(cpu, 2);
	LPSIZE lpsz = cpu->fn_arg(cpu, 3);
	printf("\nCalling GetTextExtentPointA(%p, %p, %p, %p)", hdc, lpString, c, lpsz);
	return GetTextExtentPointA(hdc, lpString, c, lpsz);
}

BOOL thunk_DeleteObject(CPU* cpu) {
	HGDIOBJ ho = cpu->fn_arg(cpu, 0);
	printf("\nCalling DeleteObject(%p)", ho);
	return DeleteObject(ho);
}

HWND thunk_SetCapture(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling SetCapture(%p)", hWnd);
	return SetCapture(hWnd);
}

BOOL thunk_ReleaseCapture(CPU* cpu) {
	printf("\nCalling ReleaseCapture()");
	return ReleaseCapture();
}

int thunk_ShowCursor(CPU* cpu) {
	BOOL bShow = cpu->fn_arg(cpu, 0);
	printf("\nCalling ShowCursor(%p)", bShow);
	return ShowCursor(bShow);
}

DWORD thunk_CheckMenuItem(CPU* cpu) {
	HMENU hMenu = cpu->fn_arg(cpu, 0);
	UINT uIDCheckItem = cpu->fn_arg(cpu, 1);
	UINT uCheck = cpu->fn_arg(cpu, 2);
	printf("\nCalling CheckMenuItem(%p, %p, %p)", hMenu, uIDCheckItem, uCheck);
	return CheckMenuItem(hMenu, uIDCheckItem, uCheck);
}

HCURSOR thunk_SetCursor(CPU* cpu) {
	HCURSOR hCursor = cpu->fn_arg(cpu, 0);
	printf("\nCalling SetCursor(%p)", hCursor);
	return SetCursor(hCursor);
}

HWND thunk_SetFocus(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling SetFocus(%p)", hWnd);
	return SetFocus(hWnd);
}

BOOL thunk_PostMessageA(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	UINT Msg = cpu->fn_arg(cpu, 1);
	WPARAM wParam = cpu->fn_arg(cpu, 2);
	LPARAM lParam = cpu->fn_arg(cpu, 3);
	printf("\nCalling PostMessageA(%p, %p, %p, %p)", hWnd, Msg, wParam, lParam);
	return PostMessageA(hWnd, Msg, wParam, lParam);
}

BOOL thunk_EnableMenuItem(CPU* cpu) {
	HMENU hMenu = cpu->fn_arg(cpu, 0);
	UINT uIDEnableItem = cpu->fn_arg(cpu, 1);
	UINT uEnable = cpu->fn_arg(cpu, 2);
	printf("\nCalling EnableMenuItem(%p, %p, %p)", hMenu, uIDEnableItem, uEnable);
	return EnableMenuItem(hMenu, uIDEnableItem, uEnable);
}

BOOL thunk_Ellipse(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int left = cpu->fn_arg(cpu, 1);
	int top = cpu->fn_arg(cpu, 2);
	int right = cpu->fn_arg(cpu, 3);
	int bottom = cpu->fn_arg(cpu, 4);
	printf("\nCalling Ellipse(%p, %p, %p, %p, %p)", hdc, left, top, right, bottom);
	return Ellipse(hdc, left, top, right, bottom);
}

LPCH thunk_GetEnvironmentStringsA(CPU* cpu) {
	printf("\nCalling GetEnvironmentStringsA()");
	return GetEnvironmentStrings();
}

HPEN thunk_CreatePen(CPU* cpu) {
	int iStyle = cpu->fn_arg(cpu, 0);
	int cWidth = cpu->fn_arg(cpu, 1);
	COLORREF color = cpu->fn_arg(cpu, 2);
	printf("\nCalling CreatePen(%p, %p, %p)", iStyle, cWidth, color);
	return CreatePen(iStyle, cWidth, color);
}

INT_PTR thunk_DialogBoxParamA(CPU* cpu) {
	InitLParam initLParam;
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCSTR lpTemplateName = cpu->fn_arg(cpu, 1);
	HWND hWndParent = cpu->fn_arg(cpu, 2);
	DLGPROC lpDialogFunc = cpu->fn_arg(cpu, 3);
	LPARAM dwInitParam = cpu->fn_arg(cpu, 4);

	initLParam.cpu = cpu;
	initLParam.lpParam = dwInitParam;
	initLParam.WndProc = lpDialogFunc;

	printf("\nCalling DialogBoxParamA(%p, %p, %p, %p, %p)", hInstance, lpTemplateName, hWndParent, lpDialogFunc, &initLParam);
	return DialogBoxParamA(hInstance, lpTemplateName, hWndParent, thunkDlgProc, &initLParam);
}

BOOL thunk_EndDialog(CPU* cpu) {
	HWND hDlg = cpu->fn_arg(cpu, 0);
	INT_PTR nResult = cpu->fn_arg(cpu, 1);
	printf("\nCalling EndDialog(%p, %p)", hDlg, nResult);
	//remove table mapping
	return EndDialog(hDlg, nResult);
}

HANDLE thunk_GetProcessHeap(CPU* cpu) {
	printf("\nCalling GetProcessHeap()");
	return cpu->get_teb(cpu)->ProcessEnvironmentBlock->Reserved4[1];
}

BOOL thunk_ChooseFontA(CPU* cpu) {
	LPCHOOSEFONT lpcf = cpu->fn_arg(cpu, 0);
	printf("\nCalling ChooseFontA(%p)", lpcf);
	return ChooseFontA(lpcf);
}

int thunk_MultiByteToWideChar(CPU* cpu) {
	UINT CodePage = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCCH lpMultiByteStr = cpu->fn_arg(cpu, 2);
	int cbMultiByte = cpu->fn_arg(cpu, 3);
	LPWSTR lpWideCharStr = cpu->fn_arg(cpu, 4);
	int cchWideChar = cpu->fn_arg(cpu, 5);
	printf("\nCalling MultiByteToWideChar(%p, %p, %p, %p, %p, %p)", CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
	return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

VOID thunk_RtlUnwind(CPU* cpu) {
	PVOID TargetFrame = cpu->fn_arg(cpu, 0);
	PVOID TargetIp = cpu->fn_arg(cpu, 1);
	PEXCEPTION_RECORD ExceptionRecord = cpu->fn_arg(cpu, 2);
	PVOID ReturnValue = cpu->fn_arg(cpu, 3);
	printf("\nStubbing RtlUnwind(%p, %p, %p, %p)", TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
	return;
}

LONG thunk_UnhandledExceptionFilter(CPU* cpu) {
	VOID* ExceptionInfo = cpu->fn_arg(cpu, 0);
	printf("\nStubbing UnhandledExceptionFilter(%p)", ExceptionInfo);
	return NULL;// UnhandledExceptionFilter(ExceptionInfo);
}

int thunk_MulDiv(CPU* cpu) {
	int nNumber = cpu->fn_arg(cpu, 0);
	int nNumerator = cpu->fn_arg(cpu, 1);
	int nDenominator = cpu->fn_arg(cpu, 2);
	printf("\nCalling MulDiv(%p, %p, %p)", nNumber, nNumerator, nDenominator);
	return MulDiv(nNumber, nNumerator, nDenominator);
}

BOOL thunk_GetStringTypeW(CPU* cpu) {
	DWORD dwInfoType = cpu->fn_arg(cpu, 0);
	LPCWCH lpSrcStr = cpu->fn_arg(cpu, 1);
	int cchSrc = cpu->fn_arg(cpu, 2);
	LPWORD lpCharType = cpu->fn_arg(cpu, 3);
	printf("\nCalling GetStringTypeW(%p, %p, %p, %p)", dwInfoType, lpSrcStr, cchSrc, lpCharType);
	return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

UINT thunk_GetPrivateProfileIntA(CPU* cpu) {
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling GetPrivateProfileIntA(%p, %p, %p, %p)", lpAppName, lpKeyName, nDefault, lpFileName);
	return GetPrivateProfileIntA(lpAppName, lpKeyName, nDefault, lpFileName);
}

DWORD thunk_GetPrivateProfileStringA(CPU* cpu) {
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 5);
	printf("\nCalling GetPrivateProfileStringA(%p, %p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
	return GetPrivateProfileStringA(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
}

BOOL thunk_WritePrivateProfileStringA(CPU* cpu) {
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpString = cpu->fn_arg(cpu, 2);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling WritePrivateProfileStringA(%p, %p, %p, %p)", lpAppName, lpKeyName, lpString, lpFileName);
	return WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, lpFileName);
}

UINT thunk_GetProfileIntA(CPU* cpu) {
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	printf("\nCalling GetProfileIntA(%p, %p, %p)", lpAppName, lpKeyName, nDefault);
	return GetProfileIntA(lpAppName, lpKeyName, nDefault);
}

DWORD thunk_GetProfileStringA(CPU* cpu) {
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	printf("\nCalling GetProfileStringA(%p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
	return GetProfileStringA(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
}

int thunk_lstrlenA(CPU* cpu) {
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling lstrlenA(%p)", lpString);
	return lstrlenA(lpString);
}

LPSTR thunk_lstrcatA(CPU* cpu) {
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling lstrcatA(%p, %p)", lpString1, lpString2);
	return lstrcatA(lpString1, lpString2);
}

DWORD thunk_GetSysColor(CPU* cpu) {
	int nIndex = cpu->fn_arg(cpu, 0);
	printf("\nCalling GetSysColor(%p)", nIndex);
	return GetSysColor(nIndex);
}

HBITMAP thunk_LoadBitmapA(CPU* cpu) {
	HINSTANCE hInstance = cpu->fn_arg(cpu, 0);
	LPCSTR lpBitmapName = cpu->fn_arg(cpu, 1);
	printf("\nCalling LoadBitmapA(%p, %p)", hInstance, lpBitmapName);
	return LoadBitmapA(hInstance, lpBitmapName);
}

int thunk_MessageBoxW(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	LPCWSTR lpText = cpu->fn_arg(cpu, 1);
	LPCWSTR lpCaption = cpu->fn_arg(cpu, 2);
	UINT uType = cpu->fn_arg(cpu, 3);
	printf("\nCalling MessageBoxW(%p, %p, %p, %p)", hWnd, lpText, lpCaption, uType);
	return MessageBoxW(hWnd, lpText, lpCaption, uType);
}

BOOL thunk_DestroyWindow(CPU* cpu) {
	HWND hWnd = cpu->fn_arg(cpu, 0);
	printf("\nCalling DestroyWindow(%p)", hWnd);
	return DestroyWindow(hWnd);
}

BOOL thunk_AdjustWindowRect(CPU* cpu) {
	LPRECT lpRect = cpu->fn_arg(cpu, 0);
	DWORD dwStyle = cpu->fn_arg(cpu, 1);
	BOOL bMenu = cpu->fn_arg(cpu, 2);
	printf("\nCalling AdjustWindowRect(%p, %p, %p)", lpRect, dwStyle, bMenu);
	return AdjustWindowRect(lpRect, dwStyle, bMenu);
}

BOOL thunk_SwapBuffers(CPU* cpu) {
	HDC unnamedParam1 = cpu->fn_arg(cpu, 0);
	printf("\nCalling SwapBuffers(%p)", unnamedParam1);
	return SwapBuffers(unnamedParam1);
}

HMENU thunk_CreateMenu(CPU* cpu) {
	printf("\nCalling CreateMenu()");
	return CreateMenu();
}

int thunk_StretchDIBits(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int xDest = cpu->fn_arg(cpu, 1);
	int yDest = cpu->fn_arg(cpu, 2);
	int DestWidth = cpu->fn_arg(cpu, 3);
	int DestHeight = cpu->fn_arg(cpu, 4);
	int xSrc = cpu->fn_arg(cpu, 5);
	int ySrc = cpu->fn_arg(cpu, 6);
	int SrcWidth = cpu->fn_arg(cpu, 7);
	int SrcHeight = cpu->fn_arg(cpu, 8);
	const VOID* lpBits = cpu->fn_arg(cpu, 9);
	const BITMAPINFO* lpbmi = cpu->fn_arg(cpu, 10);
	UINT iUsage = cpu->fn_arg(cpu, 11);
	DWORD rop = cpu->fn_arg(cpu, 12);
	printf("\nCalling StretchDIBits(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", hdc, xDest, yDest, DestWidth, DestHeight, xSrc, ySrc, SrcWidth, SrcHeight, lpBits, lpbmi, iUsage, rop);
	return StretchDIBits(hdc, xDest, yDest, DestWidth, DestHeight, xSrc, ySrc, SrcWidth, SrcHeight, lpBits, lpbmi, iUsage, rop);
}

BOOL thunk_AppendMenuA(CPU* cpu) {
	HMENU hMenu = cpu->fn_arg(cpu, 0);
	UINT uFlags = cpu->fn_arg(cpu, 1);
	UINT_PTR uIDNewItem = cpu->fn_arg(cpu, 2);
	LPCSTR lpNewItem = cpu->fn_arg(cpu, 3);
	printf("\nCalling AppendMenuA(%p, %p, %p, %p)", hMenu, uFlags, uIDNewItem, lpNewItem);
	return AppendMenuA(hMenu, uFlags, uIDNewItem, lpNewItem);
}

BOOL thunk_InsertMenuA(CPU* cpu) {
	HMENU hMenu = cpu->fn_arg(cpu, 0);
	UINT uPosition = cpu->fn_arg(cpu, 1);
	UINT uFlags = cpu->fn_arg(cpu, 2);
	UINT_PTR uIDNewItem = cpu->fn_arg(cpu, 3);
	LPCSTR lpNewItem = cpu->fn_arg(cpu, 4);
	printf("\nCalling InsertMenuA(%p, %p, %p, %p, %p)", hMenu, uPosition, uFlags, uIDNewItem, lpNewItem);
	return InsertMenuA(hMenu, uPosition, uFlags, uIDNewItem, lpNewItem);
}

uint32_t(*thunk_table[256])(CPU*) = { thunk_MessageBoxA, //0x0
	thunk_ExitProcess, //0x1
	thunk_SetBkMode, //0x2
	thunk_GetModuleHandleA, //0x3
	thunk_LoadCursorA, //0x4
	thunk_LoadIconA, //0x5
	thunk_RegisterClassA, //0x6
	thunk_CreateWindowExA, //0x7
	thunk_ShowWindow, //0x8
	thunk_UpdateWindow, //0x9
	thunk_DefWindowProcA, //0xa
	thunk_PeekMessageA, //0xb
	thunk_TranslateMessage, //0xc
	thunk_DispatchMessageA, //0xd
	thunk_GetCommandLineA, //0xe
	thunk_GetStartupInfoA, //0xf
	0, //0x10 - RegisterClassExA
	thunk_GetMessageA, //0x11
	thunk_GetStockObject, //0x12
	thunk_PostQuitMessage, //0x13
	thunk_EndPaint, //0x14
	thunk_DrawTextA, //0x15
	thunk_GetClientRect, //0x16
	thunk_BeginPaint, //0x17
	thunk_GetSystemMetrics, //0x18
	0, //0x19 - TranslateAcceleratorA
	thunk_GetDC, //0x1a
	thunk_ReleaseDC, //0x1b
	thunk_SetPixel, //0x1c
	thunk_InvalidateRect, //0x1d
	thunk_HeapAlloc, //0x1e
	thunk_HeapCreate, //0x1f
	thunk_GetStdHandle, //0x20
	thunk_GetFileType, //0x21
	thunk_SetHandleCount, //0x22
	thunk_GetACP, //0x23
	thunk_GetCPInfo, //0x24
	thunk_GetEnvironmentStringsW, //0x25
	thunk_FreeEnvironmentStringsW, //0x26
	thunk_WideCharToMultiByte, //0x27
	thunk_GetModuleFileNameA, //0x28
	thunk_WriteFile, //0x29
	thunk_HeapFree, //0x2a
	thunk_GetDeviceCaps, //0x2b
	thunk_CreateSolidBrush, //0x2c
	thunk_LoadStringA, //0x2d
	thunk_GetTextMetricsA, //0x2e
	thunk_SelectObject, //0x2f
	thunk_PatBlt, //0x30
	thunk_SetWindowTextA, //0x31
	thunk_GetMenu, //0x32
	thunk_CheckMenuItem, //0x33
	thunk_SetCursorPos, //0x34
	thunk_ClientToScreen, //0x35
	thunk_LineTo, //0x36
	thunk_MoveToEx, //0x37
	thunk_TextOutA, //0x38
	thunk_GetTextExtentPointA, //0x39
	thunk_DeleteObject, //0x3a
	thunk_SetCapture, //0x3b
	thunk_ReleaseCapture, //0x3c
	thunk_ShowCursor, //0x3d
	thunk_SetCursor, //0x3e
	thunk_SetFocus, //0x3f
	thunk_PostMessageA, //0x40
	thunk_EnableMenuItem, //0x41
	0, //0x42
	0, //0x43
	0, //0x44
	0, //0x45
	thunk_Ellipse, //0x46
	0, //0x47
	0, //0x48
	0, //0x49
	0, //0x4a
	0, //0x4b
	0, //0x4c
	thunk_GetEnvironmentStringsA, //0x4d
	0, //0x4e
	0, //0x4f
	0, //0x50
	0, //0x51
	thunk_CreateCompatibleDC, //0x52
	0, //0x53
	thunk_CreatePen, //0x54
	0, //0x55
	0, //0x56
	thunk_DialogBoxParamA, //0x57
	thunk_EndDialog, //0x58
	0, //0x59
	0, //0x5a
	0, //0x5b
	thunk_GetProcessHeap, //0x5c
	thunk_ChooseFontA, //0x5d
	thunk_MultiByteToWideChar, //0x5e
	thunk_RtlUnwind, //0x5f
	thunk_UnhandledExceptionFilter, //0x60
	thunk_MulDiv, //0x61
	thunk_GetStringTypeW, //0x62
	thunk_GetPrivateProfileIntA, //0x63
	thunk_GetPrivateProfileStringA, //0x64
	thunk_WritePrivateProfileStringA, //0x65
	thunk_GetProfileIntA, //0x66
	thunk_GetProfileStringA, //0x67
	thunk_lstrlenA, //0x68
	thunk_lstrcatA, //0x69
	thunk_GetSysColor, //0x6a
	thunk_LoadBitmapA, //0x6b
	thunk_MessageBoxW, //0x6c
	thunk_DestroyWindow, //0x6d
	thunk_AdjustWindowRect, //0x6e
	thunk_StretchDIBits, //0x6f
	thunk_SwapBuffers, //0x70
	thunk_CreateMenu, //0x71
	thunk_AppendMenuA, //0x72
	thunk_InsertMenuA, //0x73
	0, //0x74
	0, //0x75
	0, //0x76
	0, //0x77
	0, //0x78
	0, //0x79
	0, //0x7a
	0, //0x7b
	0, //0x7c
	0, //0x7d
	0, //0x7e
	0, //0x7f
	0, //0x80
	0, //0x81
	0, //0x82
	0, //0x83
	0, //0x84
	0, //0x85
	0, //0x86
	0, //0x87
	0, //0x88
	0, //0x89
	0, //0x8a
	0, //0x8b
	0, //0x8c
	0, //0x8d
	0, //0x8e
	0, //0x8f
	0, //0x90
	0, //0x91
	0, //0x92
	0, //0x93
	0, //0x94
	0, //0x95
	0, //0x96
	0, //0x97
	0, //0x98
	0, //0x99
	0, //0x9a
	0, //0x9b
	0, //0x9c
	0, //0x9d
	0, //0x9e
	0, //0x9f
	0, //0xa0
	0, //0xa1
	0, //0xa2
	0, //0xa3
	0, //0xa4
	0, //0xa5
	0, //0xa6
	0, //0xa7
	0, //0xa8
	0, //0xa9
	0, //0xaa
	0, //0xab
	0, //0xac
	0, //0xad
	0, //0xae
	0, //0xaf
	0, //0xb0
	0, //0xb1
	0, //0xb2
	0, //0xb3
	0, //0xb4
	0, //0xb5
	0, //0xb6
	0, //0xb7
	0, //0xb8
	0, //0xb9
	0, //0xba
	0, //0xbb
	0, //0xbc
	0, //0xbd
	0, //0xbe
	0, //0xbf
	0, //0xc0
	0, //0xc1
	0, //0xc2
	0, //0xc3
	0, //0xc4
	0, //0xc5
	0, //0xc6
	0, //0xc7
	0, //0xc8
	0, //0xc9
	0, //0xca
	0, //0xcb
	0, //0xcc
	0, //0xcd
	0, //0xce
	0, //0xcf
	0, //0xd0
	0, //0xd1
	0, //0xd2
	0, //0xd3
	0, //0xd4
	0, //0xd5
	0, //0xd6
	0, //0xd7
	0, //0xd8
	0, //0xd9
	0, //0xda
	0, //0xdb
	0, //0xdc
	0, //0xdd
	0, //0xde
	0, //0xdf
	0, //0xe0
	0, //0xe1
	0, //0xe2
	0, //0xe3
	0, //0xe4
	0, //0xe5
	0, //0xe6
	0, //0xe7
	0, //0xe8
	0, //0xe9
	0, //0xea
	0, //0xeb
	0, //0xec
	0, //0xed
	0, //0xee
	0, //0xef
	0, //0xf0
	0, //0xf1
	0, //0xf2
	0, //0xf3
	0, //0xf4
	0, //0xf5
	0, //0xf6
	0, //0xf7
	0, //0xf8
	0, //0xf9
	0, //0xfa
	0, //0xfb
	0, //0xfc
	0, //0xfd
	0, //0xfe
	0, //0xff
};*/