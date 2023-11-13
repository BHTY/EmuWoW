#include <windows.h>
#include <winternl.h>
#include "thunk_KERNEL32.h"
#include "thunks.h"

ATOM thunk_AddAtomA(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!AddAtomA(%p)", lpString);
	return AddAtomA(lpString);
}
ATOM thunk_AddAtomW(CPU* cpu){
	LPCWSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!AddAtomW(%p)", lpString);
	return AddAtomW(lpString);
}
BOOL thunk_AddConsoleAliasA(CPU* cpu){
	LPCSTR Source = cpu->fn_arg(cpu, 0);
	LPCSTR Target = cpu->fn_arg(cpu, 1);
	LPCSTR ExeName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!AddConsoleAliasA(%p, %p, %p)", Source, Target, ExeName);
	return AddConsoleAliasA(Source, Target, ExeName);
}
BOOL thunk_AddConsoleAliasW(CPU* cpu){
	LPCWSTR Source = cpu->fn_arg(cpu, 0);
	LPCWSTR Target = cpu->fn_arg(cpu, 1);
	LPCWSTR ExeName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!AddConsoleAliasW(%p, %p, %p)", Source, Target, ExeName);
	return AddConsoleAliasW(Source, Target, ExeName);
}
BOOL thunk_AllocConsole(CPU* cpu){
	printf("\nCalling KERNEL32!AllocConsol)");
	return AllocConsole();
}
BOOL thunk_AreFileApisANSI(CPU* cpu){
	printf("\nCalling KERNEL32!AreFileApisANS)");
	return AreFileApisANSI();
}
BOOL thunk_BackupRead(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPBYTE lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToRead = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfBytesRead = cpu->fn_arg(cpu, 3);
	BOOL bAbort = cpu->fn_arg(cpu, 4);
	BOOL bProcessSecurity = cpu->fn_arg(cpu, 5);
	LPVOID * lpContext = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!BackupRead(%p, %p, %p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, bAbort, bProcessSecurity, lpContext);
	return BackupRead(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, bAbort, bProcessSecurity, lpContext);
}
BOOL thunk_BackupSeek(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwLowBytesToSeek = cpu->fn_arg(cpu, 1);
	DWORD dwHighBytesToSeek = cpu->fn_arg(cpu, 2);
	LPDWORD lpdwLowByteSeeked = cpu->fn_arg(cpu, 3);
	LPDWORD lpdwHighByteSeeked = cpu->fn_arg(cpu, 4);
	LPVOID * lpContext = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!BackupSeek(%p, %p, %p, %p, %p, %p)", hFile, dwLowBytesToSeek, dwHighBytesToSeek, lpdwLowByteSeeked, lpdwHighByteSeeked, lpContext);
	return BackupSeek(hFile, dwLowBytesToSeek, dwHighBytesToSeek, lpdwLowByteSeeked, lpdwHighByteSeeked, lpContext);
}
BOOL thunk_BackupWrite(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPBYTE lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToWrite = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfBytesWritten = cpu->fn_arg(cpu, 3);
	BOOL bAbort = cpu->fn_arg(cpu, 4);
	BOOL bProcessSecurity = cpu->fn_arg(cpu, 5);
	LPVOID * lpContext = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!BackupWrite(%p, %p, %p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, bAbort, bProcessSecurity, lpContext);
	return BackupWrite(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, bAbort, bProcessSecurity, lpContext);
}
BOOL thunk_Beep(CPU* cpu){
	DWORD dwFreq = cpu->fn_arg(cpu, 0);
	DWORD dwDuration = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!Beep(%p, %p)", dwFreq, dwDuration);
	return Beep(dwFreq, dwDuration);
}
HANDLE thunk_BeginUpdateResourceA(CPU* cpu){
	LPCSTR pFileName = cpu->fn_arg(cpu, 0);
	BOOL bDeleteExistingResources = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!BeginUpdateResourceA(%p, %p)", pFileName, bDeleteExistingResources);
	return BeginUpdateResourceA(pFileName, bDeleteExistingResources);
}
HANDLE thunk_BeginUpdateResourceW(CPU* cpu){
	LPCWSTR pFileName = cpu->fn_arg(cpu, 0);
	BOOL bDeleteExistingResources = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!BeginUpdateResourceW(%p, %p)", pFileName, bDeleteExistingResources);
	return BeginUpdateResourceW(pFileName, bDeleteExistingResources);
}
BOOL thunk_BuildCommDCBA(CPU* cpu){
	LPCSTR lpDef = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!BuildCommDCBA(%p, %p)", lpDef, lpDCB);
	return BuildCommDCBA(lpDef, lpDCB);
}
BOOL thunk_BuildCommDCBAndTimeoutsA(CPU* cpu){
	LPCSTR lpDef = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	LPCOMMTIMEOUTS lpCommTimeouts = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!BuildCommDCBAndTimeoutsA(%p, %p, %p)", lpDef, lpDCB, lpCommTimeouts);
	return BuildCommDCBAndTimeoutsA(lpDef, lpDCB, lpCommTimeouts);
}
BOOL thunk_BuildCommDCBAndTimeoutsW(CPU* cpu){
	LPCWSTR lpDef = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	LPCOMMTIMEOUTS lpCommTimeouts = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!BuildCommDCBAndTimeoutsW(%p, %p, %p)", lpDef, lpDCB, lpCommTimeouts);
	return BuildCommDCBAndTimeoutsW(lpDef, lpDCB, lpCommTimeouts);
}
BOOL thunk_BuildCommDCBW(CPU* cpu){
	LPCWSTR lpDef = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!BuildCommDCBW(%p, %p)", lpDef, lpDCB);
	return BuildCommDCBW(lpDef, lpDCB);
}
BOOL thunk_CallNamedPipeA(CPU* cpu){
	LPCSTR lpNamedPipeName = cpu->fn_arg(cpu, 0);
	LPVOID lpInBuffer = cpu->fn_arg(cpu, 1);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 2);
	LPVOID lpOutBuffer = cpu->fn_arg(cpu, 3);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 4);
	LPDWORD lpBytesRead = cpu->fn_arg(cpu, 5);
	DWORD nTimeOut = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!CallNamedPipeA(%p, %p, %p, %p, %p, %p, %p)", lpNamedPipeName, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, nTimeOut);
	return CallNamedPipeA(lpNamedPipeName, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, nTimeOut);
}
BOOL thunk_CallNamedPipeW(CPU* cpu){
	LPCWSTR lpNamedPipeName = cpu->fn_arg(cpu, 0);
	LPVOID lpInBuffer = cpu->fn_arg(cpu, 1);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 2);
	LPVOID lpOutBuffer = cpu->fn_arg(cpu, 3);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 4);
	LPDWORD lpBytesRead = cpu->fn_arg(cpu, 5);
	DWORD nTimeOut = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!CallNamedPipeW(%p, %p, %p, %p, %p, %p, %p)", lpNamedPipeName, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, nTimeOut);
	return CallNamedPipeW(lpNamedPipeName, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, nTimeOut);
}
BOOL thunk_ClearCommBreak(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ClearCommBreak(%p)", hFile);
	return ClearCommBreak(hFile);
}
BOOL thunk_ClearCommError(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDWORD lpErrors = cpu->fn_arg(cpu, 1);
	LPCOMSTAT lpStat = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!ClearCommError(%p, %p, %p)", hFile, lpErrors, lpStat);
	return ClearCommError(hFile, lpErrors, lpStat);
}
BOOL thunk_CloseHandle(CPU* cpu){
	HANDLE hObject = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!CloseHandle(%p)", hObject);
	return CloseHandle(hObject);
}
BOOL thunk_CommConfigDialogA(CPU* cpu){
	LPCSTR lpszName = cpu->fn_arg(cpu, 0);
	HWND hWnd = cpu->fn_arg(cpu, 1);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CommConfigDialogA(%p, %p, %p)", lpszName, hWnd, lpCC);
	return CommConfigDialogA(lpszName, hWnd, lpCC);
}
BOOL thunk_CommConfigDialogW(CPU* cpu){
	LPCWSTR lpszName = cpu->fn_arg(cpu, 0);
	HWND hWnd = cpu->fn_arg(cpu, 1);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CommConfigDialogW(%p, %p, %p)", lpszName, hWnd, lpCC);
	return CommConfigDialogW(lpszName, hWnd, lpCC);
}
LONG thunk_CompareFileTime(CPU* cpu){
	const FILETIME * lpFileTime1 = cpu->fn_arg(cpu, 0);
	const FILETIME * lpFileTime2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!CompareFileTime(%p, %p)", lpFileTime1, lpFileTime2);
	return CompareFileTime(lpFileTime1, lpFileTime2);
}
int thunk_CompareStringA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwCmpFlags = cpu->fn_arg(cpu, 1);
	PCNZCH lpString1 = cpu->fn_arg(cpu, 2);
	int cchCount1 = cpu->fn_arg(cpu, 3);
	PCNZCH lpString2 = cpu->fn_arg(cpu, 4);
	int cchCount2 = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!CompareStringA(%p, %p, %p, %p, %p, %p)", Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
	return CompareStringA(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
int thunk_CompareStringW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwCmpFlags = cpu->fn_arg(cpu, 1);
	PCNZWCH lpString1 = cpu->fn_arg(cpu, 2);
	int cchCount1 = cpu->fn_arg(cpu, 3);
	PCNZWCH lpString2 = cpu->fn_arg(cpu, 4);
	int cchCount2 = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!CompareStringW(%p, %p, %p, %p, %p, %p)", Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
	return CompareStringW(Locale, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
BOOL thunk_ConnectNamedPipe(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!ConnectNamedPipe(%p, %p)", hNamedPipe, lpOverlapped);
	return ConnectNamedPipe(hNamedPipe, lpOverlapped);
}
BOOL thunk_ContinueDebugEvent(CPU* cpu){
	DWORD dwProcessId = cpu->fn_arg(cpu, 0);
	DWORD dwThreadId = cpu->fn_arg(cpu, 1);
	DWORD dwContinueStatus = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!ContinueDebugEvent(%p, %p, %p)", dwProcessId, dwThreadId, dwContinueStatus);
	return ContinueDebugEvent(dwProcessId, dwThreadId, dwContinueStatus);
}
LCID thunk_ConvertDefaultLocale(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ConvertDefaultLocale(%p)", Locale);
	return ConvertDefaultLocale(Locale);
}
BOOL thunk_CopyFileA(CPU* cpu){
	LPCSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	BOOL bFailIfExists = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CopyFileA(%p, %p, %p)", lpExistingFileName, lpNewFileName, bFailIfExists);
	return CopyFileA(lpExistingFileName, lpNewFileName, bFailIfExists);
}
BOOL thunk_CopyFileW(CPU* cpu){
	LPCWSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	BOOL bFailIfExists = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CopyFileW(%p, %p, %p)", lpExistingFileName, lpNewFileName, bFailIfExists);
	return CopyFileW(lpExistingFileName, lpNewFileName, bFailIfExists);
}
HANDLE thunk_CreateConsoleScreenBuffer(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	DWORD dwShareMode = cpu->fn_arg(cpu, 1);
	const SECURITY_ATTRIBUTES * lpSecurityAttributes = cpu->fn_arg(cpu, 2);
	DWORD dwFlags = cpu->fn_arg(cpu, 3);
	LPVOID lpScreenBufferData = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!CreateConsoleScreenBuffer(%p, %p, %p, %p, %p)", dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwFlags, lpScreenBufferData);
	return CreateConsoleScreenBuffer(dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwFlags, lpScreenBufferData);
}
BOOL thunk_CreateDirectoryA(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!CreateDirectoryA(%p, %p)", lpPathName, lpSecurityAttributes);
	return CreateDirectoryA(lpPathName, lpSecurityAttributes);
}
BOOL thunk_CreateDirectoryExA(CPU* cpu){
	LPCSTR lpTemplateDirectory = cpu->fn_arg(cpu, 0);
	LPCSTR lpNewDirectory = cpu->fn_arg(cpu, 1);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CreateDirectoryExA(%p, %p, %p)", lpTemplateDirectory, lpNewDirectory, lpSecurityAttributes);
	return CreateDirectoryExA(lpTemplateDirectory, lpNewDirectory, lpSecurityAttributes);
}
BOOL thunk_CreateDirectoryExW(CPU* cpu){
	LPCWSTR lpTemplateDirectory = cpu->fn_arg(cpu, 0);
	LPCWSTR lpNewDirectory = cpu->fn_arg(cpu, 1);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CreateDirectoryExW(%p, %p, %p)", lpTemplateDirectory, lpNewDirectory, lpSecurityAttributes);
	return CreateDirectoryExW(lpTemplateDirectory, lpNewDirectory, lpSecurityAttributes);
}
BOOL thunk_CreateDirectoryW(CPU* cpu){
	LPCWSTR lpPathName = cpu->fn_arg(cpu, 0);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!CreateDirectoryW(%p, %p)", lpPathName, lpSecurityAttributes);
	return CreateDirectoryW(lpPathName, lpSecurityAttributes);
}
HANDLE thunk_CreateEventA(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpEventAttributes = cpu->fn_arg(cpu, 0);
	BOOL bManualReset = cpu->fn_arg(cpu, 1);
	BOOL bInitialState = cpu->fn_arg(cpu, 2);
	LPCSTR lpName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateEventA(%p, %p, %p, %p)", lpEventAttributes, bManualReset, bInitialState, lpName);
	return CreateEventA(lpEventAttributes, bManualReset, bInitialState, lpName);
}
HANDLE thunk_CreateEventW(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpEventAttributes = cpu->fn_arg(cpu, 0);
	BOOL bManualReset = cpu->fn_arg(cpu, 1);
	BOOL bInitialState = cpu->fn_arg(cpu, 2);
	LPCWSTR lpName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateEventW(%p, %p, %p, %p)", lpEventAttributes, bManualReset, bInitialState, lpName);
	return CreateEventW(lpEventAttributes, bManualReset, bInitialState, lpName);
}
HANDLE thunk_CreateFileA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 1);
	DWORD dwShareMode = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 3);
	DWORD dwCreationDisposition = cpu->fn_arg(cpu, 4);
	DWORD dwFlagsAndAttributes = cpu->fn_arg(cpu, 5);
	HANDLE hTemplateFile = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!CreateFileA(%p, %p, %p, %p, %p, %p, %p)", lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
	return CreateFileA(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}
HANDLE thunk_CreateFileMappingA(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPSECURITY_ATTRIBUTES lpFileMappingAttributes = cpu->fn_arg(cpu, 1);
	DWORD flProtect = cpu->fn_arg(cpu, 2);
	DWORD dwMaximumSizeHigh = cpu->fn_arg(cpu, 3);
	DWORD dwMaximumSizeLow = cpu->fn_arg(cpu, 4);
	LPCSTR lpName = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!CreateFileMappingA(%p, %p, %p, %p, %p, %p)", hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
	return CreateFileMappingA(hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
}
HANDLE thunk_CreateFileMappingW(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPSECURITY_ATTRIBUTES lpFileMappingAttributes = cpu->fn_arg(cpu, 1);
	DWORD flProtect = cpu->fn_arg(cpu, 2);
	DWORD dwMaximumSizeHigh = cpu->fn_arg(cpu, 3);
	DWORD dwMaximumSizeLow = cpu->fn_arg(cpu, 4);
	LPCWSTR lpName = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!CreateFileMappingW(%p, %p, %p, %p, %p, %p)", hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
	return CreateFileMappingW(hFile, lpFileMappingAttributes, flProtect, dwMaximumSizeHigh, dwMaximumSizeLow, lpName);
}
HANDLE thunk_CreateFileW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 1);
	DWORD dwShareMode = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 3);
	DWORD dwCreationDisposition = cpu->fn_arg(cpu, 4);
	DWORD dwFlagsAndAttributes = cpu->fn_arg(cpu, 5);
	HANDLE hTemplateFile = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!CreateFileW(%p, %p, %p, %p, %p, %p, %p)", lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
	return CreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
}
HANDLE thunk_CreateIoCompletionPort(CPU* cpu){
	HANDLE FileHandle = cpu->fn_arg(cpu, 0);
	HANDLE ExistingCompletionPort = cpu->fn_arg(cpu, 1);
	ULONG_PTR CompletionKey = cpu->fn_arg(cpu, 2);
	DWORD NumberOfConcurrentThreads = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateIoCompletionPort(%p, %p, %p, %p)", FileHandle, ExistingCompletionPort, CompletionKey, NumberOfConcurrentThreads);
	return CreateIoCompletionPort(FileHandle, ExistingCompletionPort, CompletionKey, NumberOfConcurrentThreads);
}
HANDLE thunk_CreateMailslotA(CPU* cpu){
	LPCSTR lpName = cpu->fn_arg(cpu, 0);
	DWORD nMaxMessageSize = cpu->fn_arg(cpu, 1);
	DWORD lReadTimeout = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateMailslotA(%p, %p, %p, %p)", lpName, nMaxMessageSize, lReadTimeout, lpSecurityAttributes);
	return CreateMailslotA(lpName, nMaxMessageSize, lReadTimeout, lpSecurityAttributes);
}
HANDLE thunk_CreateMailslotW(CPU* cpu){
	LPCWSTR lpName = cpu->fn_arg(cpu, 0);
	DWORD nMaxMessageSize = cpu->fn_arg(cpu, 1);
	DWORD lReadTimeout = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateMailslotW(%p, %p, %p, %p)", lpName, nMaxMessageSize, lReadTimeout, lpSecurityAttributes);
	return CreateMailslotW(lpName, nMaxMessageSize, lReadTimeout, lpSecurityAttributes);
}
HANDLE thunk_CreateMutexA(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpMutexAttributes = cpu->fn_arg(cpu, 0);
	BOOL bInitialOwner = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CreateMutexA(%p, %p, %p)", lpMutexAttributes, bInitialOwner, lpName);
	return CreateMutexA(lpMutexAttributes, bInitialOwner, lpName);
}
HANDLE thunk_CreateMutexW(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpMutexAttributes = cpu->fn_arg(cpu, 0);
	BOOL bInitialOwner = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!CreateMutexW(%p, %p, %p)", lpMutexAttributes, bInitialOwner, lpName);
	return CreateMutexW(lpMutexAttributes, bInitialOwner, lpName);
}
HANDLE thunk_CreateNamedPipeA(CPU* cpu){
	LPCSTR lpName = cpu->fn_arg(cpu, 0);
	DWORD dwOpenMode = cpu->fn_arg(cpu, 1);
	DWORD dwPipeMode = cpu->fn_arg(cpu, 2);
	DWORD nMaxInstances = cpu->fn_arg(cpu, 3);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 4);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 5);
	DWORD nDefaultTimeOut = cpu->fn_arg(cpu, 6);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!CreateNamedPipeA(%p, %p, %p, %p, %p, %p, %p, %p)", lpName, dwOpenMode, dwPipeMode, nMaxInstances, nOutBufferSize, nInBufferSize, nDefaultTimeOut, lpSecurityAttributes);
	return CreateNamedPipeA(lpName, dwOpenMode, dwPipeMode, nMaxInstances, nOutBufferSize, nInBufferSize, nDefaultTimeOut, lpSecurityAttributes);
}
HANDLE thunk_CreateNamedPipeW(CPU* cpu){
	LPCWSTR lpName = cpu->fn_arg(cpu, 0);
	DWORD dwOpenMode = cpu->fn_arg(cpu, 1);
	DWORD dwPipeMode = cpu->fn_arg(cpu, 2);
	DWORD nMaxInstances = cpu->fn_arg(cpu, 3);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 4);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 5);
	DWORD nDefaultTimeOut = cpu->fn_arg(cpu, 6);
	LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!CreateNamedPipeW(%p, %p, %p, %p, %p, %p, %p, %p)", lpName, dwOpenMode, dwPipeMode, nMaxInstances, nOutBufferSize, nInBufferSize, nDefaultTimeOut, lpSecurityAttributes);
	return CreateNamedPipeW(lpName, dwOpenMode, dwPipeMode, nMaxInstances, nOutBufferSize, nInBufferSize, nDefaultTimeOut, lpSecurityAttributes);
}
BOOL thunk_CreatePipe(CPU* cpu){
	PHANDLE hReadPipe = cpu->fn_arg(cpu, 0);
	PHANDLE hWritePipe = cpu->fn_arg(cpu, 1);
	LPSECURITY_ATTRIBUTES lpPipeAttributes = cpu->fn_arg(cpu, 2);
	DWORD nSize = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreatePipe(%p, %p, %p, %p)", hReadPipe, hWritePipe, lpPipeAttributes, nSize);
	return CreatePipe(hReadPipe, hWritePipe, lpPipeAttributes, nSize);
}
BOOL thunk_CreateProcessA(CPU* cpu){
	LPCSTR lpApplicationName = cpu->fn_arg(cpu, 0);
	LPSTR lpCommandLine = cpu->fn_arg(cpu, 1);
	LPSECURITY_ATTRIBUTES lpProcessAttributes = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpThreadAttributes = cpu->fn_arg(cpu, 3);
	BOOL bInheritHandles = cpu->fn_arg(cpu, 4);
	DWORD dwCreationFlags = cpu->fn_arg(cpu, 5);
	LPVOID lpEnvironment = cpu->fn_arg(cpu, 6);
	LPCSTR lpCurrentDirectory = cpu->fn_arg(cpu, 7);
	LPSTARTUPINFOA lpStartupInfo = cpu->fn_arg(cpu, 8);
	LPPROCESS_INFORMATION lpProcessInformation = cpu->fn_arg(cpu, 9);
	printf("\nCalling KERNEL32!CreateProcessA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles, dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
	return CreateProcessA(lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles, dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
}
BOOL thunk_CreateProcessW(CPU* cpu){
	LPCWSTR lpApplicationName = cpu->fn_arg(cpu, 0);
	LPWSTR lpCommandLine = cpu->fn_arg(cpu, 1);
	LPSECURITY_ATTRIBUTES lpProcessAttributes = cpu->fn_arg(cpu, 2);
	LPSECURITY_ATTRIBUTES lpThreadAttributes = cpu->fn_arg(cpu, 3);
	BOOL bInheritHandles = cpu->fn_arg(cpu, 4);
	DWORD dwCreationFlags = cpu->fn_arg(cpu, 5);
	LPVOID lpEnvironment = cpu->fn_arg(cpu, 6);
	LPCWSTR lpCurrentDirectory = cpu->fn_arg(cpu, 7);
	LPSTARTUPINFOW lpStartupInfo = cpu->fn_arg(cpu, 8);
	LPPROCESS_INFORMATION lpProcessInformation = cpu->fn_arg(cpu, 9);
	printf("\nCalling KERNEL32!CreateProcessW(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles, dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
	return CreateProcessW(lpApplicationName, lpCommandLine, lpProcessAttributes, lpThreadAttributes, bInheritHandles, dwCreationFlags, lpEnvironment, lpCurrentDirectory, lpStartupInfo, lpProcessInformation);
}
HANDLE thunk_CreateRemoteThread(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPSECURITY_ATTRIBUTES lpThreadAttributes = cpu->fn_arg(cpu, 1);
	SIZE_T dwStackSize = cpu->fn_arg(cpu, 2);
	LPTHREAD_START_ROUTINE lpStartAddress = cpu->fn_arg(cpu, 3);
	LPVOID lpParameter = cpu->fn_arg(cpu, 4);
	DWORD dwCreationFlags = cpu->fn_arg(cpu, 5);
	LPDWORD lpThreadId = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!CreateRemoteThread(%p, %p, %p, %p, %p, %p, %p)", hProcess, lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
	return CreateRemoteThread(hProcess, lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}
HANDLE thunk_CreateSemaphoreA(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpSemaphoreAttributes = cpu->fn_arg(cpu, 0);
	LONG lInitialCount = cpu->fn_arg(cpu, 1);
	LONG lMaximumCount = cpu->fn_arg(cpu, 2);
	LPCSTR lpName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateSemaphoreA(%p, %p, %p, %p)", lpSemaphoreAttributes, lInitialCount, lMaximumCount, lpName);
	return CreateSemaphoreA(lpSemaphoreAttributes, lInitialCount, lMaximumCount, lpName);
}
HANDLE thunk_CreateSemaphoreW(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpSemaphoreAttributes = cpu->fn_arg(cpu, 0);
	LONG lInitialCount = cpu->fn_arg(cpu, 1);
	LONG lMaximumCount = cpu->fn_arg(cpu, 2);
	LPCWSTR lpName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateSemaphoreW(%p, %p, %p, %p)", lpSemaphoreAttributes, lInitialCount, lMaximumCount, lpName);
	return CreateSemaphoreW(lpSemaphoreAttributes, lInitialCount, lMaximumCount, lpName);
}
DWORD thunk_CreateTapePartition(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwPartitionMethod = cpu->fn_arg(cpu, 1);
	DWORD dwCount = cpu->fn_arg(cpu, 2);
	DWORD dwSize = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!CreateTapePartition(%p, %p, %p, %p)", hDevice, dwPartitionMethod, dwCount, dwSize);
	return CreateTapePartition(hDevice, dwPartitionMethod, dwCount, dwSize);
}
HANDLE thunk_CreateThread(CPU* cpu){
	LPSECURITY_ATTRIBUTES lpThreadAttributes = cpu->fn_arg(cpu, 0);
	SIZE_T dwStackSize = cpu->fn_arg(cpu, 1);
	LPTHREAD_START_ROUTINE lpStartAddress = cpu->fn_arg(cpu, 2);
	LPVOID lpParameter = cpu->fn_arg(cpu, 3);
	DWORD dwCreationFlags = cpu->fn_arg(cpu, 4);
	LPDWORD lpThreadId = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!CreateThread(%p, %p, %p, %p, %p, %p)", lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
	return CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}
BOOL thunk_DebugActiveProcess(CPU* cpu){
	DWORD dwProcessId = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DebugActiveProcess(%p)", dwProcessId);
	return DebugActiveProcess(dwProcessId);
}
VOID thunk_DebugBreak(CPU* cpu){
	printf("\nCalling KERNEL32!DebugBrea)");
	return DebugBreak();
}
BOOL thunk_DefineDosDeviceA(CPU* cpu){
	DWORD dwFlags = cpu->fn_arg(cpu, 0);
	LPCSTR lpDeviceName = cpu->fn_arg(cpu, 1);
	LPCSTR lpTargetPath = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!DefineDosDeviceA(%p, %p, %p)", dwFlags, lpDeviceName, lpTargetPath);
	return DefineDosDeviceA(dwFlags, lpDeviceName, lpTargetPath);
}
BOOL thunk_DefineDosDeviceW(CPU* cpu){
	DWORD dwFlags = cpu->fn_arg(cpu, 0);
	LPCWSTR lpDeviceName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpTargetPath = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!DefineDosDeviceW(%p, %p, %p)", dwFlags, lpDeviceName, lpTargetPath);
	return DefineDosDeviceW(dwFlags, lpDeviceName, lpTargetPath);
}
ATOM thunk_DeleteAtom(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DeleteAtom(%p)", nAtom);
	return DeleteAtom(nAtom);
}
VOID thunk_DeleteCriticalSection(CPU* cpu){
	LPCRITICAL_SECTION lpCriticalSection = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DeleteCriticalSection(%p)", lpCriticalSection);
	return DeleteCriticalSection(lpCriticalSection);
}
BOOL thunk_DeleteFileA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DeleteFileA(%p)", lpFileName);
	return DeleteFileA(lpFileName);
}
BOOL thunk_DeleteFileW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DeleteFileW(%p)", lpFileName);
	return DeleteFileW(lpFileName);
}
BOOL thunk_DeviceIoControl(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwIoControlCode = cpu->fn_arg(cpu, 1);
	LPVOID lpInBuffer = cpu->fn_arg(cpu, 2);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 3);
	LPVOID lpOutBuffer = cpu->fn_arg(cpu, 4);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 5);
	LPDWORD lpBytesReturned = cpu->fn_arg(cpu, 6);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!DeviceIoControl(%p, %p, %p, %p, %p, %p, %p, %p)", hDevice, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped);
	return DeviceIoControl(hDevice, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped);
}
BOOL thunk_DisableThreadLibraryCalls(CPU* cpu){
	HMODULE hLibModule = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DisableThreadLibraryCalls(%p)", hLibModule);
	return DisableThreadLibraryCalls(hLibModule);
}
BOOL thunk_DisconnectNamedPipe(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!DisconnectNamedPipe(%p)", hNamedPipe);
	return DisconnectNamedPipe(hNamedPipe);
}
BOOL thunk_DosDateTimeToFileTime(CPU* cpu){
	WORD wFatDate = cpu->fn_arg(cpu, 0);
	WORD wFatTime = cpu->fn_arg(cpu, 1);
	LPFILETIME lpFileTime = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!DosDateTimeToFileTime(%p, %p, %p)", wFatDate, wFatTime, lpFileTime);
	return DosDateTimeToFileTime(wFatDate, wFatTime, lpFileTime);
}
BOOL thunk_DuplicateHandle(CPU* cpu){
	HANDLE hSourceProcessHandle = cpu->fn_arg(cpu, 0);
	HANDLE hSourceHandle = cpu->fn_arg(cpu, 1);
	HANDLE hTargetProcessHandle = cpu->fn_arg(cpu, 2);
	LPHANDLE lpTargetHandle = cpu->fn_arg(cpu, 3);
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 4);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 5);
	DWORD dwOptions = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!DuplicateHandle(%p, %p, %p, %p, %p, %p, %p)", hSourceProcessHandle, hSourceHandle, hTargetProcessHandle, lpTargetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
	return DuplicateHandle(hSourceProcessHandle, hSourceHandle, hTargetProcessHandle, lpTargetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
}
BOOL thunk_EndUpdateResourceA(CPU* cpu){
	HANDLE hUpdate = cpu->fn_arg(cpu, 0);
	BOOL fDiscard = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EndUpdateResourceA(%p, %p)", hUpdate, fDiscard);
	return EndUpdateResourceA(hUpdate, fDiscard);
}
BOOL thunk_EndUpdateResourceW(CPU* cpu){
	HANDLE hUpdate = cpu->fn_arg(cpu, 0);
	BOOL fDiscard = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EndUpdateResourceW(%p, %p)", hUpdate, fDiscard);
	return EndUpdateResourceW(hUpdate, fDiscard);
}
VOID thunk_EnterCriticalSection(CPU* cpu){
	LPCRITICAL_SECTION lpCriticalSection = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!EnterCriticalSection(%p)", lpCriticalSection);
	return EnterCriticalSection(lpCriticalSection);
}
BOOL thunk_EnumCalendarInfoA(CPU* cpu){
	CALINFO_ENUMPROCA lpCalInfoEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	CALID Calendar = cpu->fn_arg(cpu, 2);
	CALTYPE CalType = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!EnumCalendarInfoA(%p, %p, %p, %p)", lpCalInfoEnumProc, Locale, Calendar, CalType);
	return EnumCalendarInfoA(lpCalInfoEnumProc, Locale, Calendar, CalType);
}
BOOL thunk_EnumCalendarInfoW(CPU* cpu){
	CALINFO_ENUMPROCW lpCalInfoEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	CALID Calendar = cpu->fn_arg(cpu, 2);
	CALTYPE CalType = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!EnumCalendarInfoW(%p, %p, %p, %p)", lpCalInfoEnumProc, Locale, Calendar, CalType);
	return EnumCalendarInfoW(lpCalInfoEnumProc, Locale, Calendar, CalType);
}
BOOL thunk_EnumDateFormatsA(CPU* cpu){
	DATEFMT_ENUMPROCA lpDateFmtEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumDateFormatsA(%p, %p, %p)", lpDateFmtEnumProc, Locale, dwFlags);
	return EnumDateFormatsA(lpDateFmtEnumProc, Locale, dwFlags);
}
BOOL thunk_EnumDateFormatsW(CPU* cpu){
	DATEFMT_ENUMPROCW lpDateFmtEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumDateFormatsW(%p, %p, %p)", lpDateFmtEnumProc, Locale, dwFlags);
	return EnumDateFormatsW(lpDateFmtEnumProc, Locale, dwFlags);
}
BOOL thunk_EnumResourceLanguagesA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCSTR lpType = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	ENUMRESLANGPROCA lpEnumFunc = cpu->fn_arg(cpu, 3);
	LONG_PTR lParam = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!EnumResourceLanguagesA(%p, %p, %p, %p, %p)", hModule, lpType, lpName, lpEnumFunc, lParam);
	return EnumResourceLanguagesA(hModule, lpType, lpName, lpEnumFunc, lParam);
}
BOOL thunk_EnumResourceLanguagesW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCWSTR lpType = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	ENUMRESLANGPROCW lpEnumFunc = cpu->fn_arg(cpu, 3);
	LONG_PTR lParam = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!EnumResourceLanguagesW(%p, %p, %p, %p, %p)", hModule, lpType, lpName, lpEnumFunc, lParam);
	return EnumResourceLanguagesW(hModule, lpType, lpName, lpEnumFunc, lParam);
}
BOOL thunk_EnumResourceNamesA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCSTR lpType = cpu->fn_arg(cpu, 1);
	ENUMRESNAMEPROCA lpEnumFunc = cpu->fn_arg(cpu, 2);
	LONG_PTR lParam = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!EnumResourceNamesA(%p, %p, %p, %p)", hModule, lpType, lpEnumFunc, lParam);
	return EnumResourceNamesA(hModule, lpType, lpEnumFunc, lParam);
}
BOOL thunk_EnumResourceNamesW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCWSTR lpType = cpu->fn_arg(cpu, 1);
	ENUMRESNAMEPROCW lpEnumFunc = cpu->fn_arg(cpu, 2);
	LONG_PTR lParam = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!EnumResourceNamesW(%p, %p, %p, %p)", hModule, lpType, lpEnumFunc, lParam);
	return EnumResourceNamesW(hModule, lpType, lpEnumFunc, lParam);
}
BOOL thunk_EnumResourceTypesA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	ENUMRESTYPEPROCA lpEnumFunc = cpu->fn_arg(cpu, 1);
	LONG_PTR lParam = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumResourceTypesA(%p, %p, %p)", hModule, lpEnumFunc, lParam);
	return EnumResourceTypesA(hModule, lpEnumFunc, lParam);
}
BOOL thunk_EnumResourceTypesW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	ENUMRESTYPEPROCW lpEnumFunc = cpu->fn_arg(cpu, 1);
	LONG_PTR lParam = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumResourceTypesW(%p, %p, %p)", hModule, lpEnumFunc, lParam);
	return EnumResourceTypesW(hModule, lpEnumFunc, lParam);
}
BOOL thunk_EnumSystemCodePagesA(CPU* cpu){
	CODEPAGE_ENUMPROCA lpCodePageEnumProc = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EnumSystemCodePagesA(%p, %p)", lpCodePageEnumProc, dwFlags);
	return EnumSystemCodePagesA(lpCodePageEnumProc, dwFlags);
}
BOOL thunk_EnumSystemCodePagesW(CPU* cpu){
	CODEPAGE_ENUMPROCW lpCodePageEnumProc = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EnumSystemCodePagesW(%p, %p)", lpCodePageEnumProc, dwFlags);
	return EnumSystemCodePagesW(lpCodePageEnumProc, dwFlags);
}
BOOL thunk_EnumSystemLocalesA(CPU* cpu){
	LOCALE_ENUMPROCA lpLocaleEnumProc = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EnumSystemLocalesA(%p, %p)", lpLocaleEnumProc, dwFlags);
	return EnumSystemLocalesA(lpLocaleEnumProc, dwFlags);
}
BOOL thunk_EnumSystemLocalesW(CPU* cpu){
	LOCALE_ENUMPROCW lpLocaleEnumProc = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EnumSystemLocalesW(%p, %p)", lpLocaleEnumProc, dwFlags);
	return EnumSystemLocalesW(lpLocaleEnumProc, dwFlags);
}
BOOL thunk_EnumTimeFormatsA(CPU* cpu){
	TIMEFMT_ENUMPROCA lpTimeFmtEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumTimeFormatsA(%p, %p, %p)", lpTimeFmtEnumProc, Locale, dwFlags);
	return EnumTimeFormatsA(lpTimeFmtEnumProc, Locale, dwFlags);
}
BOOL thunk_EnumTimeFormatsW(CPU* cpu){
	TIMEFMT_ENUMPROCW lpTimeFmtEnumProc = cpu->fn_arg(cpu, 0);
	LCID Locale = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EnumTimeFormatsW(%p, %p, %p)", lpTimeFmtEnumProc, Locale, dwFlags);
	return EnumTimeFormatsW(lpTimeFmtEnumProc, Locale, dwFlags);
}
DWORD thunk_EraseTape(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwEraseType = cpu->fn_arg(cpu, 1);
	BOOL bImmediate = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!EraseTape(%p, %p, %p)", hDevice, dwEraseType, bImmediate);
	return EraseTape(hDevice, dwEraseType, bImmediate);
}
BOOL thunk_EscapeCommFunction(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwFunc = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!EscapeCommFunction(%p, %p)", hFile, dwFunc);
	return EscapeCommFunction(hFile, dwFunc);
}
VOID thunk_ExitProcess(CPU* cpu){
	UINT uExitCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ExitProcess(%p)", uExitCode);
	return ExitProcess(uExitCode);
}
VOID thunk_ExitThread(CPU* cpu){
	DWORD dwExitCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ExitThread(%p)", dwExitCode);
	return ExitThread(dwExitCode);
}
DWORD thunk_ExpandEnvironmentStringsA(CPU* cpu){
	LPCSTR lpSrc = cpu->fn_arg(cpu, 0);
	LPSTR lpDst = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!ExpandEnvironmentStringsA(%p, %p, %p)", lpSrc, lpDst, nSize);
	return ExpandEnvironmentStringsA(lpSrc, lpDst, nSize);
}
DWORD thunk_ExpandEnvironmentStringsW(CPU* cpu){
	LPCWSTR lpSrc = cpu->fn_arg(cpu, 0);
	LPWSTR lpDst = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!ExpandEnvironmentStringsW(%p, %p, %p)", lpSrc, lpDst, nSize);
	return ExpandEnvironmentStringsW(lpSrc, lpDst, nSize);
}
VOID thunk_FatalAppExitA(CPU* cpu){
	UINT uAction = cpu->fn_arg(cpu, 0);
	LPCSTR lpMessageText = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FatalAppExitA(%p, %p)", uAction, lpMessageText);
	return FatalAppExitA(uAction, lpMessageText);
}
VOID thunk_FatalAppExitW(CPU* cpu){
	UINT uAction = cpu->fn_arg(cpu, 0);
	LPCWSTR lpMessageText = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FatalAppExitW(%p, %p)", uAction, lpMessageText);
	return FatalAppExitW(uAction, lpMessageText);
}
VOID thunk_FatalExit(CPU* cpu){
	int ExitCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FatalExit(%p)", ExitCode);
	return FatalExit(ExitCode);
}
BOOL thunk_FileTimeToDosDateTime(CPU* cpu){
	const FILETIME * lpFileTime = cpu->fn_arg(cpu, 0);
	LPWORD lpFatDate = cpu->fn_arg(cpu, 1);
	LPWORD lpFatTime = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FileTimeToDosDateTime(%p, %p, %p)", lpFileTime, lpFatDate, lpFatTime);
	return FileTimeToDosDateTime(lpFileTime, lpFatDate, lpFatTime);
}
BOOL thunk_FileTimeToLocalFileTime(CPU* cpu){
	const FILETIME * lpFileTime = cpu->fn_arg(cpu, 0);
	LPFILETIME lpLocalFileTime = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FileTimeToLocalFileTime(%p, %p)", lpFileTime, lpLocalFileTime);
	return FileTimeToLocalFileTime(lpFileTime, lpLocalFileTime);
}
BOOL thunk_FileTimeToSystemTime(CPU* cpu){
	const FILETIME * lpFileTime = cpu->fn_arg(cpu, 0);
	LPSYSTEMTIME lpSystemTime = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FileTimeToSystemTime(%p, %p)", lpFileTime, lpSystemTime);
	return FileTimeToSystemTime(lpFileTime, lpSystemTime);
}
BOOL thunk_FillConsoleOutputAttribute(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	WORD wAttribute = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwWriteCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfAttrsWritten = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!FillConsoleOutputAttribute(%p, %p, %p, %p, %p)", hConsoleOutput, wAttribute, nLength, dwWriteCoord, lpNumberOfAttrsWritten);
	return FillConsoleOutputAttribute(hConsoleOutput, wAttribute, nLength, *(COORD*)&dwWriteCoord, lpNumberOfAttrsWritten);
}
BOOL thunk_FillConsoleOutputCharacterA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	CHAR cCharacter = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwWriteCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfCharsWritten = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!FillConsoleOutputCharacterA(%p, %p, %p, %p, %p)", hConsoleOutput, cCharacter, nLength, dwWriteCoord, lpNumberOfCharsWritten);
	return FillConsoleOutputCharacterA(hConsoleOutput, cCharacter, nLength, *(COORD*)&dwWriteCoord, lpNumberOfCharsWritten);
}
BOOL thunk_FillConsoleOutputCharacterW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	WCHAR cCharacter = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwWriteCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfCharsWritten = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!FillConsoleOutputCharacterW(%p, %p, %p, %p, %p)", hConsoleOutput, cCharacter, nLength, dwWriteCoord, lpNumberOfCharsWritten);
	return FillConsoleOutputCharacterW(hConsoleOutput, cCharacter, nLength, *(COORD*)&dwWriteCoord, lpNumberOfCharsWritten);
}
ATOM thunk_FindAtomA(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FindAtomA(%p)", lpString);
	return FindAtomA(lpString);
}
ATOM thunk_FindAtomW(CPU* cpu){
	LPCWSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FindAtomW(%p)", lpString);
	return FindAtomW(lpString);
}
BOOL thunk_FindClose(CPU* cpu){
	HANDLE hFindFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FindClose(%p)", hFindFile);
	return FindClose(hFindFile);
}
BOOL thunk_FindCloseChangeNotification(CPU* cpu){
	HANDLE hChangeHandle = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FindCloseChangeNotification(%p)", hChangeHandle);
	return FindCloseChangeNotification(hChangeHandle);
}
HANDLE thunk_FindFirstChangeNotificationA(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	BOOL bWatchSubtree = cpu->fn_arg(cpu, 1);
	DWORD dwNotifyFilter = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FindFirstChangeNotificationA(%p, %p, %p)", lpPathName, bWatchSubtree, dwNotifyFilter);
	return FindFirstChangeNotificationA(lpPathName, bWatchSubtree, dwNotifyFilter);
}
HANDLE thunk_FindFirstChangeNotificationW(CPU* cpu){
	LPCWSTR lpPathName = cpu->fn_arg(cpu, 0);
	BOOL bWatchSubtree = cpu->fn_arg(cpu, 1);
	DWORD dwNotifyFilter = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FindFirstChangeNotificationW(%p, %p, %p)", lpPathName, bWatchSubtree, dwNotifyFilter);
	return FindFirstChangeNotificationW(lpPathName, bWatchSubtree, dwNotifyFilter);
}
HANDLE thunk_FindFirstFileA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	LPWIN32_FIND_DATAA lpFindFileData = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FindFirstFileA(%p, %p)", lpFileName, lpFindFileData);
	return FindFirstFileA(lpFileName, lpFindFileData);
}
HANDLE thunk_FindFirstFileW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	LPWIN32_FIND_DATAW lpFindFileData = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FindFirstFileW(%p, %p)", lpFileName, lpFindFileData);
	return FindFirstFileW(lpFileName, lpFindFileData);
}
BOOL thunk_FindNextChangeNotification(CPU* cpu){
	HANDLE hChangeHandle = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FindNextChangeNotification(%p)", hChangeHandle);
	return FindNextChangeNotification(hChangeHandle);
}
BOOL thunk_FindNextFileA(CPU* cpu){
	HANDLE hFindFile = cpu->fn_arg(cpu, 0);
	LPWIN32_FIND_DATAA lpFindFileData = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FindNextFileA(%p, %p)", hFindFile, lpFindFileData);
	return FindNextFileA(hFindFile, lpFindFileData);
}
BOOL thunk_FindNextFileW(CPU* cpu){
	HANDLE hFindFile = cpu->fn_arg(cpu, 0);
	LPWIN32_FIND_DATAW lpFindFileData = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FindNextFileW(%p, %p)", hFindFile, lpFindFileData);
	return FindNextFileW(hFindFile, lpFindFileData);
}
HRSRC thunk_FindResourceA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCSTR lpName = cpu->fn_arg(cpu, 1);
	LPCSTR lpType = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FindResourceA(%p, %p, %p)", hModule, lpName, lpType);
	return FindResourceA(hModule, lpName, lpType);
}
HRSRC thunk_FindResourceExA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCSTR lpType = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	WORD wLanguage = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!FindResourceExA(%p, %p, %p, %p)", hModule, lpType, lpName, wLanguage);
	return FindResourceExA(hModule, lpType, lpName, wLanguage);
}
HRSRC thunk_FindResourceExW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCWSTR lpType = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	WORD wLanguage = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!FindResourceExW(%p, %p, %p, %p)", hModule, lpType, lpName, wLanguage);
	return FindResourceExW(hModule, lpType, lpName, wLanguage);
}
HRSRC thunk_FindResourceW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCWSTR lpName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpType = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FindResourceW(%p, %p, %p)", hModule, lpName, lpType);
	return FindResourceW(hModule, lpName, lpType);
}
BOOL thunk_FlushConsoleInputBuffer(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FlushConsoleInputBuffer(%p)", hConsoleInput);
	return FlushConsoleInputBuffer(hConsoleInput);
}
BOOL thunk_FlushFileBuffers(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FlushFileBuffers(%p)", hFile);
	return FlushFileBuffers(hFile);
}
BOOL thunk_FlushInstructionCache(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPCVOID lpBaseAddress = cpu->fn_arg(cpu, 1);
	SIZE_T dwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!FlushInstructionCache(%p, %p, %p)", hProcess, lpBaseAddress, dwSize);
	return FlushInstructionCache(hProcess, lpBaseAddress, dwSize);
}
BOOL thunk_FlushViewOfFile(CPU* cpu){
	LPCVOID lpBaseAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwNumberOfBytesToFlush = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FlushViewOfFile(%p, %p)", lpBaseAddress, dwNumberOfBytesToFlush);
	return FlushViewOfFile(lpBaseAddress, dwNumberOfBytesToFlush);
}
int thunk_FoldStringA(CPU* cpu){
	DWORD dwMapFlags = cpu->fn_arg(cpu, 0);
	LPCSTR lpSrcStr = cpu->fn_arg(cpu, 1);
	int cchSrc = cpu->fn_arg(cpu, 2);
	LPSTR lpDestStr = cpu->fn_arg(cpu, 3);
	int cchDest = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!FoldStringA(%p, %p, %p, %p, %p)", dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
	return FoldStringA(dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
int thunk_FoldStringW(CPU* cpu){
	DWORD dwMapFlags = cpu->fn_arg(cpu, 0);
	LPCWCH lpSrcStr = cpu->fn_arg(cpu, 1);
	int cchSrc = cpu->fn_arg(cpu, 2);
	LPWSTR lpDestStr = cpu->fn_arg(cpu, 3);
	int cchDest = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!FoldStringW(%p, %p, %p, %p, %p)", dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
	return FoldStringW(dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
DWORD thunk_FormatMessageA(CPU* cpu){
	DWORD dwFlags = cpu->fn_arg(cpu, 0);
	LPCVOID lpSource = cpu->fn_arg(cpu, 1);
	DWORD dwMessageId = cpu->fn_arg(cpu, 2);
	DWORD dwLanguageId = cpu->fn_arg(cpu, 3);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 4);
	DWORD nSize = cpu->fn_arg(cpu, 5);
	va_list * Arguments = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!FormatMessageA(%p, %p, %p, %p, %p, %p, %p)", dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
	return FormatMessageA(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
DWORD thunk_FormatMessageW(CPU* cpu){
	DWORD dwFlags = cpu->fn_arg(cpu, 0);
	LPCVOID lpSource = cpu->fn_arg(cpu, 1);
	DWORD dwMessageId = cpu->fn_arg(cpu, 2);
	DWORD dwLanguageId = cpu->fn_arg(cpu, 3);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 4);
	DWORD nSize = cpu->fn_arg(cpu, 5);
	va_list * Arguments = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!FormatMessageW(%p, %p, %p, %p, %p, %p, %p)", dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
	return FormatMessageW(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
BOOL thunk_FreeConsole(CPU* cpu){
	printf("\nCalling KERNEL32!FreeConsol)");
	return FreeConsole();
}
BOOL thunk_FreeEnvironmentStringsA(CPU* cpu){
	LPCH penv = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FreeEnvironmentStringsA(%p)", penv);
	return FreeEnvironmentStringsA(penv);
}
BOOL thunk_FreeEnvironmentStrings(CPU* cpu){
	LPCH penv = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FreeEnvironmentStrings(%p)", penv);
	return FreeEnvironmentStrings(penv);
}
BOOL thunk_FreeEnvironmentStringsW(CPU* cpu){
	LPWCH penv = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FreeEnvironmentStringsW(%p)", penv);
	return FreeEnvironmentStringsW(penv);
}
BOOL thunk_FreeLibrary(CPU* cpu){
	HMODULE hLibModule = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FreeLibrary(%p)", hLibModule);
	return FreeLibrary(hLibModule);
}
VOID thunk_FreeLibraryAndExitThread(CPU* cpu){
	HMODULE hLibModule = cpu->fn_arg(cpu, 0);
	DWORD dwExitCode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!FreeLibraryAndExitThread(%p, %p)", hLibModule, dwExitCode);
	return FreeLibraryAndExitThread(hLibModule, dwExitCode);
}
BOOL thunk_FreeResource(CPU* cpu){
	HGLOBAL hResData = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!FreeResource(%p)", hResData);
	return FreeResource(hResData);
}
BOOL thunk_GenerateConsoleCtrlEvent(CPU* cpu){
	DWORD dwCtrlEvent = cpu->fn_arg(cpu, 0);
	DWORD dwProcessGroupId = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GenerateConsoleCtrlEvent(%p, %p)", dwCtrlEvent, dwProcessGroupId);
	return GenerateConsoleCtrlEvent(dwCtrlEvent, dwProcessGroupId);
}
UINT thunk_GetACP(CPU* cpu){
	printf("\nCalling KERNEL32!GetAC)");
	return GetACP();
}
UINT thunk_GetAtomNameA(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 1);
	int nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetAtomNameA(%p, %p, %p)", nAtom, lpBuffer, nSize);
	return GetAtomNameA(nAtom, lpBuffer, nSize);
}
UINT thunk_GetAtomNameW(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 1);
	int nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetAtomNameW(%p, %p, %p)", nAtom, lpBuffer, nSize);
	return GetAtomNameW(nAtom, lpBuffer, nSize);
}
BOOL thunk_GetBinaryTypeA(CPU* cpu){
	LPCSTR lpApplicationName = cpu->fn_arg(cpu, 0);
	LPDWORD lpBinaryType = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetBinaryTypeA(%p, %p)", lpApplicationName, lpBinaryType);
	return GetBinaryTypeA(lpApplicationName, lpBinaryType);
}
BOOL thunk_GetBinaryType(CPU* cpu){
	LPCSTR lpApplicationName = cpu->fn_arg(cpu, 0);
	LPDWORD lpBinaryType = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetBinaryType(%p, %p)", lpApplicationName, lpBinaryType);
	return GetBinaryType(lpApplicationName, lpBinaryType);
}
BOOL thunk_GetBinaryTypeW(CPU* cpu){
	LPCWSTR lpApplicationName = cpu->fn_arg(cpu, 0);
	LPDWORD lpBinaryType = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetBinaryTypeW(%p, %p)", lpApplicationName, lpBinaryType);
	return GetBinaryTypeW(lpApplicationName, lpBinaryType);
}
BOOL thunk_GetCPInfo(CPU* cpu){
	UINT CodePage = cpu->fn_arg(cpu, 0);
	LPCPINFO lpCPInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCPInfo(%p, %p)", CodePage, lpCPInfo);
	return GetCPInfo(CodePage, lpCPInfo);
}
BOOL thunk_GetCommConfig(CPU* cpu){
	HANDLE hCommDev = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	LPDWORD lpdwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetCommConfig(%p, %p, %p)", hCommDev, lpCC, lpdwSize);
	return GetCommConfig(hCommDev, lpCC, lpdwSize);
}
BOOL thunk_GetCommMask(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDWORD lpEvtMask = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCommMask(%p, %p)", hFile, lpEvtMask);
	return GetCommMask(hFile, lpEvtMask);
}
BOOL thunk_GetCommModemStatus(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDWORD lpModemStat = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCommModemStatus(%p, %p)", hFile, lpModemStat);
	return GetCommModemStatus(hFile, lpModemStat);
}
BOOL thunk_GetCommProperties(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCOMMPROP lpCommProp = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCommProperties(%p, %p)", hFile, lpCommProp);
	return GetCommProperties(hFile, lpCommProp);
}
BOOL thunk_GetCommState(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCommState(%p, %p)", hFile, lpDCB);
	return GetCommState(hFile, lpDCB);
}
BOOL thunk_GetCommTimeouts(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCOMMTIMEOUTS lpCommTimeouts = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCommTimeouts(%p, %p)", hFile, lpCommTimeouts);
	return GetCommTimeouts(hFile, lpCommTimeouts);
}
LPSTR thunk_GetCommandLineA(CPU* cpu){
	printf("\nCalling KERNEL32!GetCommandLine)");
	return GetCommandLineA();
}
LPWSTR thunk_GetCommandLineW(CPU* cpu){
	printf("\nCalling KERNEL32!GetCommandLine)");
	return GetCommandLineW();
}
DWORD thunk_GetCompressedFileSizeA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	LPDWORD lpFileSizeHigh = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCompressedFileSizeA(%p, %p)", lpFileName, lpFileSizeHigh);
	return GetCompressedFileSizeA(lpFileName, lpFileSizeHigh);
}
DWORD thunk_GetCompressedFileSizeW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	LPDWORD lpFileSizeHigh = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCompressedFileSizeW(%p, %p)", lpFileName, lpFileSizeHigh);
	return GetCompressedFileSizeW(lpFileName, lpFileSizeHigh);
}
BOOL thunk_GetComputerNameA(CPU* cpu){
	LPSTR lpBuffer = cpu->fn_arg(cpu, 0);
	LPDWORD nSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetComputerNameA(%p, %p)", lpBuffer, nSize);
	return GetComputerNameA(lpBuffer, nSize);
}
BOOL thunk_GetComputerNameW(CPU* cpu){
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 0);
	LPDWORD nSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetComputerNameW(%p, %p)", lpBuffer, nSize);
	return GetComputerNameW(lpBuffer, nSize);
}
DWORD thunk_GetConsoleAliasA(CPU* cpu){
	LPSTR lpSource = cpu->fn_arg(cpu, 0);
	LPSTR lpTargetBuffer = cpu->fn_arg(cpu, 1);
	DWORD TargetBufferLength = cpu->fn_arg(cpu, 2);
	LPSTR lpExeName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetConsoleAliasA(%p, %p, %p, %p)", lpSource, lpTargetBuffer, TargetBufferLength, lpExeName);
	return GetConsoleAliasA(lpSource, lpTargetBuffer, TargetBufferLength, lpExeName);
}
DWORD thunk_GetConsoleAliasW(CPU* cpu){
	LPWSTR lpSource = cpu->fn_arg(cpu, 0);
	LPWSTR lpTargetBuffer = cpu->fn_arg(cpu, 1);
	DWORD TargetBufferLength = cpu->fn_arg(cpu, 2);
	LPWSTR lpExeName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetConsoleAliasW(%p, %p, %p, %p)", lpSource, lpTargetBuffer, TargetBufferLength, lpExeName);
	return GetConsoleAliasW(lpSource, lpTargetBuffer, TargetBufferLength, lpExeName);
}
DWORD thunk_GetConsoleAliasExesA(CPU* cpu){
	LPSTR lpExeNameBuffer = cpu->fn_arg(cpu, 0);
	DWORD ExeNameBufferLength = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleAliasExesA(%p, %p)", lpExeNameBuffer, ExeNameBufferLength);
	return GetConsoleAliasExesA(lpExeNameBuffer, ExeNameBufferLength);
}
DWORD thunk_GetConsoleAliasExesW(CPU* cpu){
	LPWSTR lpExeNameBuffer = cpu->fn_arg(cpu, 0);
	DWORD ExeNameBufferLength = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleAliasExesW(%p, %p)", lpExeNameBuffer, ExeNameBufferLength);
	return GetConsoleAliasExesW(lpExeNameBuffer, ExeNameBufferLength);
}
DWORD thunk_GetConsoleAliasExesLengthA(CPU* cpu){
	printf("\nCalling KERNEL32!GetConsoleAliasExesLength)");
	return GetConsoleAliasExesLengthA();
}
DWORD thunk_GetConsoleAliasExesLengthW(CPU* cpu){
	printf("\nCalling KERNEL32!GetConsoleAliasExesLength)");
	return GetConsoleAliasExesLengthW();
}
DWORD thunk_GetConsoleAliasesA(CPU* cpu){
	LPSTR lpAliasBuffer = cpu->fn_arg(cpu, 0);
	DWORD AliasBufferLength = cpu->fn_arg(cpu, 1);
	LPSTR lpExeName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetConsoleAliasesA(%p, %p, %p)", lpAliasBuffer, AliasBufferLength, lpExeName);
	return GetConsoleAliasesA(lpAliasBuffer, AliasBufferLength, lpExeName);
}
DWORD thunk_GetConsoleAliasesW(CPU* cpu){
	LPWSTR lpAliasBuffer = cpu->fn_arg(cpu, 0);
	DWORD AliasBufferLength = cpu->fn_arg(cpu, 1);
	LPWSTR lpExeName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetConsoleAliasesW(%p, %p, %p)", lpAliasBuffer, AliasBufferLength, lpExeName);
	return GetConsoleAliasesW(lpAliasBuffer, AliasBufferLength, lpExeName);
}
DWORD thunk_GetConsoleAliasesLengthA(CPU* cpu){
	LPSTR lpExeName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetConsoleAliasesLengthA(%p)", lpExeName);
	return GetConsoleAliasesLengthA(lpExeName);
}
DWORD thunk_GetConsoleAliasesLengthW(CPU* cpu){
	LPWSTR lpExeName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetConsoleAliasesLengthW(%p)", lpExeName);
	return GetConsoleAliasesLengthW(lpExeName);
}
UINT thunk_GetConsoleCP(CPU* cpu){
	printf("\nCalling KERNEL32!GetConsoleC)");
	return GetConsoleCP();
}
BOOL thunk_GetConsoleCursorInfo(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	PCONSOLE_CURSOR_INFO lpConsoleCursorInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleCursorInfo(%p, %p)", hConsoleOutput, lpConsoleCursorInfo);
	return GetConsoleCursorInfo(hConsoleOutput, lpConsoleCursorInfo);
}
BOOL thunk_GetConsoleDisplayMode(CPU* cpu){
	LPDWORD lpModeFlags = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetConsoleDisplayMode(%p)", lpModeFlags);
	return GetConsoleDisplayMode(lpModeFlags);
}
COORD thunk_GetConsoleFontSize(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	DWORD nFont = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleFontSize(%p, %p)", hConsoleOutput, nFont);
	return GetConsoleFontSize(hConsoleOutput, nFont);
}
BOOL thunk_GetConsoleMode(CPU* cpu){
	HANDLE hConsoleHandle = cpu->fn_arg(cpu, 0);
	LPDWORD lpMode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleMode(%p, %p)", hConsoleHandle, lpMode);
	return GetConsoleMode(hConsoleHandle, lpMode);
}
UINT thunk_GetConsoleOutputCP(CPU* cpu){
	printf("\nCalling KERNEL32!GetConsoleOutputC)");
	return GetConsoleOutputCP();
}
BOOL thunk_GetConsoleScreenBufferInfo(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleScreenBufferInfo(%p, %p)", hConsoleOutput, lpConsoleScreenBufferInfo);
	return GetConsoleScreenBufferInfo(hConsoleOutput, lpConsoleScreenBufferInfo);
}
DWORD thunk_GetConsoleTitleA(CPU* cpu){
	LPSTR lpConsoleTitle = cpu->fn_arg(cpu, 0);
	DWORD nSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleTitleA(%p, %p)", lpConsoleTitle, nSize);
	return GetConsoleTitleA(lpConsoleTitle, nSize);
}
DWORD thunk_GetConsoleTitleW(CPU* cpu){
	LPWSTR lpConsoleTitle = cpu->fn_arg(cpu, 0);
	DWORD nSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetConsoleTitleW(%p, %p)", lpConsoleTitle, nSize);
	return GetConsoleTitleW(lpConsoleTitle, nSize);
}
BOOL thunk_GetCurrentConsoleFont(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	BOOL bMaximumWindow = cpu->fn_arg(cpu, 1);
	PCONSOLE_FONT_INFO lpConsoleCurrentFont = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetCurrentConsoleFont(%p, %p, %p)", hConsoleOutput, bMaximumWindow, lpConsoleCurrentFont);
	return GetCurrentConsoleFont(hConsoleOutput, bMaximumWindow, lpConsoleCurrentFont);
}
DWORD thunk_GetCurrentDirectoryA(CPU* cpu){
	DWORD nBufferLength = cpu->fn_arg(cpu, 0);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCurrentDirectoryA(%p, %p)", nBufferLength, lpBuffer);
	return GetCurrentDirectoryA(nBufferLength, lpBuffer);
}
DWORD thunk_GetCurrentDirectoryW(CPU* cpu){
	DWORD nBufferLength = cpu->fn_arg(cpu, 0);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetCurrentDirectoryW(%p, %p)", nBufferLength, lpBuffer);
	return GetCurrentDirectoryW(nBufferLength, lpBuffer);
}
HANDLE thunk_GetCurrentProcess(CPU* cpu){
	printf("\nCalling KERNEL32!GetCurrentProces)");
	return GetCurrentProcess();
}
DWORD thunk_GetCurrentProcessId(CPU* cpu){
	printf("\nCalling KERNEL32!GetCurrentProcessI)");
	return GetCurrentProcessId();
}
HANDLE thunk_GetCurrentThread(CPU* cpu){
	printf("\nCalling KERNEL32!GetCurrentThrea)");
	return GetCurrentThread();
}
DWORD thunk_GetCurrentThreadId(CPU* cpu){
	printf("\nCalling KERNEL32!GetCurrentThreadI)");
	return GetCurrentThreadId();
}
int thunk_GetDateFormatA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	const SYSTEMTIME * lpDate = cpu->fn_arg(cpu, 2);
	LPCSTR lpFormat = cpu->fn_arg(cpu, 3);
	LPSTR lpDateStr = cpu->fn_arg(cpu, 4);
	int cchDate = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetDateFormatA(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
	return GetDateFormatA(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}
int thunk_GetDateFormatW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	const SYSTEMTIME * lpDate = cpu->fn_arg(cpu, 2);
	LPCWSTR lpFormat = cpu->fn_arg(cpu, 3);
	LPWSTR lpDateStr = cpu->fn_arg(cpu, 4);
	int cchDate = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetDateFormatW(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
	return GetDateFormatW(Locale, dwFlags, lpDate, lpFormat, lpDateStr, cchDate);
}
BOOL thunk_GetDefaultCommConfigA(CPU* cpu){
	LPCSTR lpszName = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	LPDWORD lpdwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetDefaultCommConfigA(%p, %p, %p)", lpszName, lpCC, lpdwSize);
	return GetDefaultCommConfigA(lpszName, lpCC, lpdwSize);
}
BOOL thunk_GetDefaultCommConfigW(CPU* cpu){
	LPCWSTR lpszName = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	LPDWORD lpdwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetDefaultCommConfigW(%p, %p, %p)", lpszName, lpCC, lpdwSize);
	return GetDefaultCommConfigW(lpszName, lpCC, lpdwSize);
}
BOOL thunk_GetDiskFreeSpaceA(CPU* cpu){
	LPCSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPDWORD lpSectorsPerCluster = cpu->fn_arg(cpu, 1);
	LPDWORD lpBytesPerSector = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfFreeClusters = cpu->fn_arg(cpu, 3);
	LPDWORD lpTotalNumberOfClusters = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetDiskFreeSpaceA(%p, %p, %p, %p, %p)", lpRootPathName, lpSectorsPerCluster, lpBytesPerSector, lpNumberOfFreeClusters, lpTotalNumberOfClusters);
	return GetDiskFreeSpaceA(lpRootPathName, lpSectorsPerCluster, lpBytesPerSector, lpNumberOfFreeClusters, lpTotalNumberOfClusters);
}
BOOL thunk_GetDiskFreeSpaceW(CPU* cpu){
	LPCWSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPDWORD lpSectorsPerCluster = cpu->fn_arg(cpu, 1);
	LPDWORD lpBytesPerSector = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfFreeClusters = cpu->fn_arg(cpu, 3);
	LPDWORD lpTotalNumberOfClusters = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetDiskFreeSpaceW(%p, %p, %p, %p, %p)", lpRootPathName, lpSectorsPerCluster, lpBytesPerSector, lpNumberOfFreeClusters, lpTotalNumberOfClusters);
	return GetDiskFreeSpaceW(lpRootPathName, lpSectorsPerCluster, lpBytesPerSector, lpNumberOfFreeClusters, lpTotalNumberOfClusters);
}
UINT thunk_GetDriveTypeA(CPU* cpu){
	LPCSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetDriveTypeA(%p)", lpRootPathName);
	return GetDriveTypeA(lpRootPathName);
}
UINT thunk_GetDriveTypeW(CPU* cpu){
	LPCWSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetDriveTypeW(%p)", lpRootPathName);
	return GetDriveTypeW(lpRootPathName);
}
LPCH thunk_GetEnvironmentStrings(CPU* cpu){
	printf("\nCalling KERNEL32!GetEnvironmentStrings()");
	return GetEnvironmentStrings();
}
LPWCH thunk_GetEnvironmentStringsW(CPU* cpu){
	printf("\nCalling KERNEL32!GetEnvironmentStrings)");
	return GetEnvironmentStringsW();
}
DWORD thunk_GetEnvironmentVariableA(CPU* cpu){
	LPCSTR lpName = cpu->fn_arg(cpu, 0);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetEnvironmentVariableA(%p, %p, %p)", lpName, lpBuffer, nSize);
	return GetEnvironmentVariableA(lpName, lpBuffer, nSize);
}
DWORD thunk_GetEnvironmentVariableW(CPU* cpu){
	LPCWSTR lpName = cpu->fn_arg(cpu, 0);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetEnvironmentVariableW(%p, %p, %p)", lpName, lpBuffer, nSize);
	return GetEnvironmentVariableW(lpName, lpBuffer, nSize);
}
BOOL thunk_GetExitCodeProcess(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPDWORD lpExitCode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetExitCodeProcess(%p, %p)", hProcess, lpExitCode);
	return GetExitCodeProcess(hProcess, lpExitCode);
}
BOOL thunk_GetExitCodeThread(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	LPDWORD lpExitCode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetExitCodeThread(%p, %p)", hThread, lpExitCode);
	return GetExitCodeThread(hThread, lpExitCode);
}
DWORD thunk_GetFileAttributesA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetFileAttributesA(%p)", lpFileName);
	return GetFileAttributesA(lpFileName);
}
DWORD thunk_GetFileAttributesW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetFileAttributesW(%p)", lpFileName);
	return GetFileAttributesW(lpFileName);
}
BOOL thunk_GetFileInformationByHandle(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPBY_HANDLE_FILE_INFORMATION lpFileInformation = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetFileInformationByHandle(%p, %p)", hFile, lpFileInformation);
	return GetFileInformationByHandle(hFile, lpFileInformation);
}
DWORD thunk_GetFileSize(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDWORD lpFileSizeHigh = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetFileSize(%p, %p)", hFile, lpFileSizeHigh);
	return GetFileSize(hFile, lpFileSizeHigh);
}
BOOL thunk_GetFileTime(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPFILETIME lpCreationTime = cpu->fn_arg(cpu, 1);
	LPFILETIME lpLastAccessTime = cpu->fn_arg(cpu, 2);
	LPFILETIME lpLastWriteTime = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetFileTime(%p, %p, %p, %p)", hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
DWORD thunk_GetFileType(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetFileType(%p)", hFile);
	return GetFileType(hFile);
}
DWORD thunk_GetFullPathNameA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD nBufferLength = cpu->fn_arg(cpu, 1);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 2);
	LPSTR * lpFilePart = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetFullPathNameA(%p, %p, %p, %p)", lpFileName, nBufferLength, lpBuffer, lpFilePart);
	return GetFullPathNameA(lpFileName, nBufferLength, lpBuffer, lpFilePart);
}
DWORD thunk_GetFullPathNameW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD nBufferLength = cpu->fn_arg(cpu, 1);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 2);
	LPWSTR * lpFilePart = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetFullPathNameW(%p, %p, %p, %p)", lpFileName, nBufferLength, lpBuffer, lpFilePart);
	return GetFullPathNameW(lpFileName, nBufferLength, lpBuffer, lpFilePart);
}
BOOL thunk_GetHandleInformation(CPU* cpu){
	HANDLE hObject = cpu->fn_arg(cpu, 0);
	LPDWORD lpdwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetHandleInformation(%p, %p)", hObject, lpdwFlags);
	return GetHandleInformation(hObject, lpdwFlags);
}
COORD thunk_GetLargestConsoleWindowSize(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetLargestConsoleWindowSize(%p)", hConsoleOutput);
	return GetLargestConsoleWindowSize(hConsoleOutput);
}
DWORD thunk_GetLastError(CPU* cpu){
	printf("\nCalling KERNEL32!GetLastErro)");
	return GetLastError();
}
VOID thunk_GetLocalTime(CPU* cpu){
	LPSYSTEMTIME lpSystemTime = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetLocalTime(%p)", lpSystemTime);
	return GetLocalTime(lpSystemTime);
}
int thunk_GetLocaleInfoA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	LCTYPE LCType = cpu->fn_arg(cpu, 1);
	LPSTR lpLCData = cpu->fn_arg(cpu, 2);
	int cchData = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetLocaleInfoA(%p, %p, %p, %p)", Locale, LCType, lpLCData, cchData);
	return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
}
int thunk_GetLocaleInfoW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	LCTYPE LCType = cpu->fn_arg(cpu, 1);
	LPWSTR lpLCData = cpu->fn_arg(cpu, 2);
	int cchData = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetLocaleInfoW(%p, %p, %p, %p)", Locale, LCType, lpLCData, cchData);
	return GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
}
DWORD thunk_GetLogicalDriveStringsA(CPU* cpu){
	DWORD nBufferLength = cpu->fn_arg(cpu, 0);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetLogicalDriveStringsA(%p, %p)", nBufferLength, lpBuffer);
	return GetLogicalDriveStringsA(nBufferLength, lpBuffer);
}
DWORD thunk_GetLogicalDriveStringsW(CPU* cpu){
	DWORD nBufferLength = cpu->fn_arg(cpu, 0);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetLogicalDriveStringsW(%p, %p)", nBufferLength, lpBuffer);
	return GetLogicalDriveStringsW(nBufferLength, lpBuffer);
}
BOOL thunk_GetMailslotInfo(CPU* cpu){
	HANDLE hMailslot = cpu->fn_arg(cpu, 0);
	LPDWORD lpMaxMessageSize = cpu->fn_arg(cpu, 1);
	LPDWORD lpNextSize = cpu->fn_arg(cpu, 2);
	LPDWORD lpMessageCount = cpu->fn_arg(cpu, 3);
	LPDWORD lpReadTimeout = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetMailslotInfo(%p, %p, %p, %p, %p)", hMailslot, lpMaxMessageSize, lpNextSize, lpMessageCount, lpReadTimeout);
	return GetMailslotInfo(hMailslot, lpMaxMessageSize, lpNextSize, lpMessageCount, lpReadTimeout);
}
DWORD thunk_GetModuleFileNameA(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPSTR lpFilename = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetModuleFileNameA(%p, %p, %p)", hModule, lpFilename, nSize);
	return GetModuleFileNameA(hModule, lpFilename, nSize);
}
DWORD thunk_GetModuleFileNameW(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPWSTR lpFilename = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetModuleFileNameW(%p, %p, %p)", hModule, lpFilename, nSize);
	return GetModuleFileNameW(hModule, lpFilename, nSize);
}
HMODULE thunk_GetModuleHandleA(CPU* cpu){
	LPCSTR lpModuleName = cpu->fn_arg(cpu, 0);

	printf("\nCalling KERNEL32!GetModuleHandleA(\"%s\")", lpModuleName);

	if (lpModuleName == NULL) {
		return cpu->get_teb(cpu)->ProcessEnvironmentBlock->Reserved3[1];
	}
	while (1);
	return GetModuleHandleA(lpModuleName);
}
HMODULE thunk_GetModuleHandleW(CPU* cpu){
	LPCWSTR lpModuleName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetModuleHandleW(%p)", lpModuleName);
	return GetModuleHandleW(lpModuleName);
}
BOOL thunk_GetNamedPipeHandleStateA(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPDWORD lpState = cpu->fn_arg(cpu, 1);
	LPDWORD lpCurInstances = cpu->fn_arg(cpu, 2);
	LPDWORD lpMaxCollectionCount = cpu->fn_arg(cpu, 3);
	LPDWORD lpCollectDataTimeout = cpu->fn_arg(cpu, 4);
	LPSTR lpUserName = cpu->fn_arg(cpu, 5);
	DWORD nMaxUserNameSize = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!GetNamedPipeHandleStateA(%p, %p, %p, %p, %p, %p, %p)", hNamedPipe, lpState, lpCurInstances, lpMaxCollectionCount, lpCollectDataTimeout, lpUserName, nMaxUserNameSize);
	return GetNamedPipeHandleStateA(hNamedPipe, lpState, lpCurInstances, lpMaxCollectionCount, lpCollectDataTimeout, lpUserName, nMaxUserNameSize);
}
BOOL thunk_GetNamedPipeHandleStateW(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPDWORD lpState = cpu->fn_arg(cpu, 1);
	LPDWORD lpCurInstances = cpu->fn_arg(cpu, 2);
	LPDWORD lpMaxCollectionCount = cpu->fn_arg(cpu, 3);
	LPDWORD lpCollectDataTimeout = cpu->fn_arg(cpu, 4);
	LPWSTR lpUserName = cpu->fn_arg(cpu, 5);
	DWORD nMaxUserNameSize = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!GetNamedPipeHandleStateW(%p, %p, %p, %p, %p, %p, %p)", hNamedPipe, lpState, lpCurInstances, lpMaxCollectionCount, lpCollectDataTimeout, lpUserName, nMaxUserNameSize);
	return GetNamedPipeHandleStateW(hNamedPipe, lpState, lpCurInstances, lpMaxCollectionCount, lpCollectDataTimeout, lpUserName, nMaxUserNameSize);
}
BOOL thunk_GetNamedPipeInfo(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPDWORD lpFlags = cpu->fn_arg(cpu, 1);
	LPDWORD lpOutBufferSize = cpu->fn_arg(cpu, 2);
	LPDWORD lpInBufferSize = cpu->fn_arg(cpu, 3);
	LPDWORD lpMaxInstances = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetNamedPipeInfo(%p, %p, %p, %p, %p)", hNamedPipe, lpFlags, lpOutBufferSize, lpInBufferSize, lpMaxInstances);
	return GetNamedPipeInfo(hNamedPipe, lpFlags, lpOutBufferSize, lpInBufferSize, lpMaxInstances);
}
int thunk_GetNumberFormatA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCSTR lpValue = cpu->fn_arg(cpu, 2);
	const NUMBERFMTA * lpFormat = cpu->fn_arg(cpu, 3);
	LPSTR lpNumberStr = cpu->fn_arg(cpu, 4);
	int cchNumber = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetNumberFormatA(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpValue, lpFormat, lpNumberStr, cchNumber);
	return GetNumberFormatA(Locale, dwFlags, lpValue, lpFormat, lpNumberStr, cchNumber);
}
int thunk_GetNumberFormatW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCWSTR lpValue = cpu->fn_arg(cpu, 2);
	const NUMBERFMTW * lpFormat = cpu->fn_arg(cpu, 3);
	LPWSTR lpNumberStr = cpu->fn_arg(cpu, 4);
	int cchNumber = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetNumberFormatW(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpValue, lpFormat, lpNumberStr, cchNumber);
	return GetNumberFormatW(Locale, dwFlags, lpValue, lpFormat, lpNumberStr, cchNumber);
}
BOOL thunk_GetNumberOfConsoleInputEvents(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	LPDWORD lpcNumberOfEvents = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetNumberOfConsoleInputEvents(%p, %p)", hConsoleInput, lpcNumberOfEvents);
	return GetNumberOfConsoleInputEvents(hConsoleInput, lpcNumberOfEvents);
}
BOOL thunk_GetNumberOfConsoleMouseButtons(CPU* cpu){
	LPDWORD lpNumberOfMouseButtons = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetNumberOfConsoleMouseButtons(%p)", lpNumberOfMouseButtons);
	return GetNumberOfConsoleMouseButtons(lpNumberOfMouseButtons);
}
UINT thunk_GetOEMCP(CPU* cpu){
	printf("\nCalling KERNEL32!GetOEMC)");
	return GetOEMCP();
}
BOOL thunk_GetOverlappedResult(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 1);
	LPDWORD lpNumberOfBytesTransferred = cpu->fn_arg(cpu, 2);
	BOOL bWait = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetOverlappedResult(%p, %p, %p, %p)", hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
	return GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}
DWORD thunk_GetPriorityClass(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetPriorityClass(%p)", hProcess);
	return GetPriorityClass(hProcess);
}
UINT thunk_GetPrivateProfileIntA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetPrivateProfileIntA(%p, %p, %p, %p)", lpAppName, lpKeyName, nDefault, lpFileName);
	return GetPrivateProfileIntA(lpAppName, lpKeyName, nDefault, lpFileName);
}
UINT thunk_GetPrivateProfileIntW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetPrivateProfileIntW(%p, %p, %p, %p)", lpAppName, lpKeyName, nDefault, lpFileName);
	return GetPrivateProfileIntW(lpAppName, lpKeyName, nDefault, lpFileName);
}
DWORD thunk_GetPrivateProfileSectionA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetPrivateProfileSectionA(%p, %p, %p, %p)", lpAppName, lpReturnedString, nSize, lpFileName);
	return GetPrivateProfileSectionA(lpAppName, lpReturnedString, nSize, lpFileName);
}
DWORD thunk_GetPrivateProfileSectionW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPWSTR lpReturnedString = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetPrivateProfileSectionW(%p, %p, %p, %p)", lpAppName, lpReturnedString, nSize, lpFileName);
	return GetPrivateProfileSectionW(lpAppName, lpReturnedString, nSize, lpFileName);
}
DWORD thunk_GetPrivateProfileSectionNamesA(CPU* cpu){
	LPSTR lpszReturnBuffer = cpu->fn_arg(cpu, 0);
	DWORD nSize = cpu->fn_arg(cpu, 1);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetPrivateProfileSectionNamesA(%p, %p, %p)", lpszReturnBuffer, nSize, lpFileName);
	return GetPrivateProfileSectionNamesA(lpszReturnBuffer, nSize, lpFileName);
}
DWORD thunk_GetPrivateProfileSectionNamesW(CPU* cpu){
	LPWSTR lpszReturnBuffer = cpu->fn_arg(cpu, 0);
	DWORD nSize = cpu->fn_arg(cpu, 1);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetPrivateProfileSectionNamesW(%p, %p, %p)", lpszReturnBuffer, nSize, lpFileName);
	return GetPrivateProfileSectionNamesW(lpszReturnBuffer, nSize, lpFileName);
}
DWORD thunk_GetPrivateProfileStringA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetPrivateProfileStringA(%p, %p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
	return GetPrivateProfileStringA(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
}
DWORD thunk_GetPrivateProfileStringW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPWSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetPrivateProfileStringW(%p, %p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
	return GetPrivateProfileStringW(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize, lpFileName);
}
BOOL thunk_GetPrivateProfileStructA(CPU* cpu){
	LPCSTR lpszSection = cpu->fn_arg(cpu, 0);
	LPCSTR lpszKey = cpu->fn_arg(cpu, 1);
	LPVOID lpStruct = cpu->fn_arg(cpu, 2);
	UINT uSizeStruct = cpu->fn_arg(cpu, 3);
	LPCSTR szFile = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetPrivateProfileStructA(%p, %p, %p, %p, %p)", lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
	return GetPrivateProfileStructA(lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
}
BOOL thunk_GetPrivateProfileStructW(CPU* cpu){
	LPCWSTR lpszSection = cpu->fn_arg(cpu, 0);
	LPCWSTR lpszKey = cpu->fn_arg(cpu, 1);
	LPVOID lpStruct = cpu->fn_arg(cpu, 2);
	UINT uSizeStruct = cpu->fn_arg(cpu, 3);
	LPCWSTR szFile = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetPrivateProfileStructW(%p, %p, %p, %p, %p)", lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
	return GetPrivateProfileStructW(lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
}
FARPROC thunk_GetProcAddress(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	LPCSTR lpProcName = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetProcAddress(%p, %p)", hModule, lpProcName);
	return GetProcAddress(hModule, lpProcName);
}
BOOL thunk_GetProcessAffinityMask(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	PDWORD_PTR lpProcessAffinityMask = cpu->fn_arg(cpu, 1);
	PDWORD_PTR lpSystemAffinityMask = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProcessAffinityMask(%p, %p, %p)", hProcess, lpProcessAffinityMask, lpSystemAffinityMask);
	return GetProcessAffinityMask(hProcess, lpProcessAffinityMask, lpSystemAffinityMask);
}
HANDLE thunk_GetProcessHeap(CPU* cpu){
	printf("\nCalling KERNEL32!GetProcessHea)");
	return GetProcessHeap();
}
DWORD thunk_GetProcessHeaps(CPU* cpu){
	DWORD NumberOfHeaps = cpu->fn_arg(cpu, 0);
	PHANDLE ProcessHeaps = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetProcessHeaps(%p, %p)", NumberOfHeaps, ProcessHeaps);
	return GetProcessHeaps(NumberOfHeaps, ProcessHeaps);
}
BOOL thunk_GetProcessShutdownParameters(CPU* cpu){
	LPDWORD lpdwLevel = cpu->fn_arg(cpu, 0);
	LPDWORD lpdwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetProcessShutdownParameters(%p, %p)", lpdwLevel, lpdwFlags);
	return GetProcessShutdownParameters(lpdwLevel, lpdwFlags);
}
BOOL thunk_GetProcessTimes(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPFILETIME lpCreationTime = cpu->fn_arg(cpu, 1);
	LPFILETIME lpExitTime = cpu->fn_arg(cpu, 2);
	LPFILETIME lpKernelTime = cpu->fn_arg(cpu, 3);
	LPFILETIME lpUserTime = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetProcessTimes(%p, %p, %p, %p, %p)", hProcess, lpCreationTime, lpExitTime, lpKernelTime, lpUserTime);
	return GetProcessTimes(hProcess, lpCreationTime, lpExitTime, lpKernelTime, lpUserTime);
}
DWORD thunk_GetProcessVersion(CPU* cpu){
	DWORD ProcessId = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetProcessVersion(%p)", ProcessId);
	return GetProcessVersion(ProcessId);
}
BOOL thunk_GetProcessWorkingSetSize(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	PSIZE_T lpMinimumWorkingSetSize = cpu->fn_arg(cpu, 1);
	PSIZE_T lpMaximumWorkingSetSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProcessWorkingSetSize(%p, %p, %p)", hProcess, lpMinimumWorkingSetSize, lpMaximumWorkingSetSize);
	return GetProcessWorkingSetSize(hProcess, lpMinimumWorkingSetSize, lpMaximumWorkingSetSize);
}
UINT thunk_GetProfileIntA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProfileIntA(%p, %p, %p)", lpAppName, lpKeyName, nDefault);
	return GetProfileIntA(lpAppName, lpKeyName, nDefault);
}
UINT thunk_GetProfileIntW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	INT nDefault = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProfileIntW(%p, %p, %p)", lpAppName, lpKeyName, nDefault);
	return GetProfileIntW(lpAppName, lpKeyName, nDefault);
}
DWORD thunk_GetProfileSectionA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProfileSectionA(%p, %p, %p)", lpAppName, lpReturnedString, nSize);
	return GetProfileSectionA(lpAppName, lpReturnedString, nSize);
}
DWORD thunk_GetProfileSectionW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPWSTR lpReturnedString = cpu->fn_arg(cpu, 1);
	DWORD nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetProfileSectionW(%p, %p, %p)", lpAppName, lpReturnedString, nSize);
	return GetProfileSectionW(lpAppName, lpReturnedString, nSize);
}
DWORD thunk_GetProfileStringA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetProfileStringA(%p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
	return GetProfileStringA(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
}
DWORD thunk_GetProfileStringW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpDefault = cpu->fn_arg(cpu, 2);
	LPWSTR lpReturnedString = cpu->fn_arg(cpu, 3);
	DWORD nSize = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetProfileStringW(%p, %p, %p, %p, %p)", lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
	return GetProfileStringW(lpAppName, lpKeyName, lpDefault, lpReturnedString, nSize);
}
BOOL thunk_GetQueuedCompletionStatus(CPU* cpu){
	HANDLE CompletionPort = cpu->fn_arg(cpu, 0);
	LPDWORD lpNumberOfBytesTransferred = cpu->fn_arg(cpu, 1);
	PULONG_PTR lpCompletionKey = cpu->fn_arg(cpu, 2);
	LPOVERLAPPED * lpOverlapped = cpu->fn_arg(cpu, 3);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetQueuedCompletionStatus(%p, %p, %p, %p, %p)", CompletionPort, lpNumberOfBytesTransferred, lpCompletionKey, lpOverlapped, dwMilliseconds);
	return GetQueuedCompletionStatus(CompletionPort, lpNumberOfBytesTransferred, lpCompletionKey, lpOverlapped, dwMilliseconds);
}
DWORD thunk_GetShortPathNameA(CPU* cpu){
	LPCSTR lpszLongPath = cpu->fn_arg(cpu, 0);
	LPSTR lpszShortPath = cpu->fn_arg(cpu, 1);
	DWORD cchBuffer = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetShortPathNameA(%p, %p, %p)", lpszLongPath, lpszShortPath, cchBuffer);
	return GetShortPathNameA(lpszLongPath, lpszShortPath, cchBuffer);
}
DWORD thunk_GetShortPathNameW(CPU* cpu){
	LPCWSTR lpszLongPath = cpu->fn_arg(cpu, 0);
	LPWSTR lpszShortPath = cpu->fn_arg(cpu, 1);
	DWORD cchBuffer = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetShortPathNameW(%p, %p, %p)", lpszLongPath, lpszShortPath, cchBuffer);
	return GetShortPathNameW(lpszLongPath, lpszShortPath, cchBuffer);
}
VOID thunk_GetStartupInfo(CPU* cpu){
	LPSTARTUPINFOA lpStartupInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetStartupInfo(%p)", lpStartupInfo);
	return GetStartupInfo(lpStartupInfo);
}
VOID thunk_GetStartupInfoA(CPU* cpu){
	LPSTARTUPINFOA lpStartupInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetStartupInfoA(%p)", lpStartupInfo);
	return GetStartupInfoA(lpStartupInfo);
}
VOID thunk_GetStartupInfoW(CPU* cpu){
	LPSTARTUPINFOW lpStartupInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetStartupInfoW(%p)", lpStartupInfo);
	return GetStartupInfoW(lpStartupInfo);
}
HANDLE thunk_GetStdHandle(CPU* cpu){
	DWORD nStdHandle = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetStdHandle(%p)", nStdHandle);
	return GetStdHandle(nStdHandle);
}
BOOL thunk_GetStringTypeA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwInfoType = cpu->fn_arg(cpu, 1);
	LPCSTR lpSrcStr = cpu->fn_arg(cpu, 2);
	int cchSrc = cpu->fn_arg(cpu, 3);
	LPWORD lpCharType = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetStringTypeA(%p, %p, %p, %p, %p)", Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
	return GetStringTypeA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
BOOL thunk_GetStringTypeExW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwInfoType = cpu->fn_arg(cpu, 1);
	LPCWCH lpSrcStr = cpu->fn_arg(cpu, 2);
	int cchSrc = cpu->fn_arg(cpu, 3);
	LPWORD lpCharType = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetStringTypeExW(%p, %p, %p, %p, %p)", Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
	return GetStringTypeExW(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
BOOL thunk_GetStringTypeExA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwInfoType = cpu->fn_arg(cpu, 1);
	LPCCH lpSrcStr = cpu->fn_arg(cpu, 2);
	int cchSrc = cpu->fn_arg(cpu, 3);
	LPWORD lpCharType = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetStringTypeExA(%p, %p, %p, %p, %p)", Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
	return GetStringTypeExA(Locale, dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
BOOL thunk_GetStringTypeW(CPU* cpu){
	DWORD dwInfoType = cpu->fn_arg(cpu, 0);
	LPCWCH lpSrcStr = cpu->fn_arg(cpu, 1);
	int cchSrc = cpu->fn_arg(cpu, 2);
	LPWORD lpCharType = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetStringTypeW(%p, %p, %p, %p)", dwInfoType, lpSrcStr, cchSrc, lpCharType);
	return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
LCID thunk_GetSystemDefaultLCID(CPU* cpu){
	printf("\nCalling KERNEL32!GetSystemDefaultLCI)");
	return GetSystemDefaultLCID();
}
LANGID thunk_GetSystemDefaultLangID(CPU* cpu){
	printf("\nCalling KERNEL32!GetSystemDefaultLangI)");
	return GetSystemDefaultLangID();
}
UINT thunk_GetSystemDirectoryA(CPU* cpu){
	LPSTR lpBuffer = cpu->fn_arg(cpu, 0);
	UINT uSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetSystemDirectoryA(%p, %p)", lpBuffer, uSize);
	return GetSystemDirectoryA(lpBuffer, uSize);
}
UINT thunk_GetSystemDirectoryW(CPU* cpu){
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 0);
	UINT uSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetSystemDirectoryW(%p, %p)", lpBuffer, uSize);
	return GetSystemDirectoryW(lpBuffer, uSize);
}
VOID thunk_GetSystemInfo(CPU* cpu){
	LPSYSTEM_INFO lpSystemInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetSystemInfo(%p)", lpSystemInfo);
	return GetSystemInfo(lpSystemInfo);
}
BOOL thunk_GetSystemPowerStatus(CPU* cpu){
	LPSYSTEM_POWER_STATUS lpSystemPowerStatus = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetSystemPowerStatus(%p)", lpSystemPowerStatus);
	return GetSystemPowerStatus(lpSystemPowerStatus);
}
VOID thunk_GetSystemTime(CPU* cpu){
	LPSYSTEMTIME lpSystemTime = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetSystemTime(%p)", lpSystemTime);
	return GetSystemTime(lpSystemTime);
}
BOOL thunk_GetSystemTimeAdjustment(CPU* cpu){
	PDWORD lpTimeAdjustment = cpu->fn_arg(cpu, 0);
	PDWORD lpTimeIncrement = cpu->fn_arg(cpu, 1);
	PBOOL lpTimeAdjustmentDisabled = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetSystemTimeAdjustment(%p, %p, %p)", lpTimeAdjustment, lpTimeIncrement, lpTimeAdjustmentDisabled);
	return GetSystemTimeAdjustment(lpTimeAdjustment, lpTimeIncrement, lpTimeAdjustmentDisabled);
}
VOID thunk_GetSystemTimeAsFileTime(CPU* cpu){
	LPFILETIME lpSystemTimeAsFileTime = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetSystemTimeAsFileTime(%p)", lpSystemTimeAsFileTime);
	return GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}
UINT thunk_GetTempFileNameA(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	LPCSTR lpPrefixString = cpu->fn_arg(cpu, 1);
	UINT uUnique = cpu->fn_arg(cpu, 2);
	LPSTR lpTempFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetTempFileNameA(%p, %p, %p, %p)", lpPathName, lpPrefixString, uUnique, lpTempFileName);
	return GetTempFileNameA(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}
UINT thunk_GetTempFileNameW(CPU* cpu){
	LPCWSTR lpPathName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpPrefixString = cpu->fn_arg(cpu, 1);
	UINT uUnique = cpu->fn_arg(cpu, 2);
	LPWSTR lpTempFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!GetTempFileNameW(%p, %p, %p, %p)", lpPathName, lpPrefixString, uUnique, lpTempFileName);
	return GetTempFileNameW(lpPathName, lpPrefixString, uUnique, lpTempFileName);
}
BOOL thunk_GetThreadContext(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	LPCONTEXT lpContext = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetThreadContext(%p, %p)", hThread, lpContext);
	return GetThreadContext(hThread, lpContext);
}
LCID thunk_GetThreadLocale(CPU* cpu){
	printf("\nCalling KERNEL32!GetThreadLocal)");
	return GetThreadLocale();
}
int thunk_GetThreadPriority(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetThreadPriority(%p)", hThread);
	return GetThreadPriority(hThread);
}
BOOL thunk_GetThreadSelectorEntry(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	DWORD dwSelector = cpu->fn_arg(cpu, 1);
	LPLDT_ENTRY lpSelectorEntry = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GetThreadSelectorEntry(%p, %p, %p)", hThread, dwSelector, lpSelectorEntry);
	return GetThreadSelectorEntry(hThread, dwSelector, lpSelectorEntry);
}
BOOL thunk_GetThreadTimes(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	LPFILETIME lpCreationTime = cpu->fn_arg(cpu, 1);
	LPFILETIME lpExitTime = cpu->fn_arg(cpu, 2);
	LPFILETIME lpKernelTime = cpu->fn_arg(cpu, 3);
	LPFILETIME lpUserTime = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!GetThreadTimes(%p, %p, %p, %p, %p)", hThread, lpCreationTime, lpExitTime, lpKernelTime, lpUserTime);
	return GetThreadTimes(hThread, lpCreationTime, lpExitTime, lpKernelTime, lpUserTime);
}
DWORD thunk_GetTickCount(CPU* cpu){
	printf("\nCalling KERNEL32!GetTickCoun)");
	return GetTickCount();
}
int thunk_GetTimeFormatA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	const SYSTEMTIME * lpTime = cpu->fn_arg(cpu, 2);
	LPCSTR lpFormat = cpu->fn_arg(cpu, 3);
	LPSTR lpTimeStr = cpu->fn_arg(cpu, 4);
	int cchTime = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetTimeFormatA(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
	return GetTimeFormatA(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}
int thunk_GetTimeFormatW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	const SYSTEMTIME * lpTime = cpu->fn_arg(cpu, 2);
	LPCWSTR lpFormat = cpu->fn_arg(cpu, 3);
	LPWSTR lpTimeStr = cpu->fn_arg(cpu, 4);
	int cchTime = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!GetTimeFormatW(%p, %p, %p, %p, %p, %p)", Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
	return GetTimeFormatW(Locale, dwFlags, lpTime, lpFormat, lpTimeStr, cchTime);
}
DWORD thunk_GetTimeZoneInformation(CPU* cpu){
	LPTIME_ZONE_INFORMATION lpTimeZoneInformation = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetTimeZoneInformation(%p)", lpTimeZoneInformation);
	return GetTimeZoneInformation(lpTimeZoneInformation);
}
LCID thunk_GetUserDefaultLCID(CPU* cpu){
	printf("\nCalling KERNEL32!GetUserDefaultLCI)");
	return GetUserDefaultLCID();
}
LANGID thunk_GetUserDefaultLangID(CPU* cpu){
	printf("\nCalling KERNEL32!GetUserDefaultLangI)");
	return GetUserDefaultLangID();
}
DWORD thunk_GetVersion(CPU* cpu){
	printf("\nCalling KERNEL32!GetVersio)");
	return GetVersion();
}
BOOL thunk_GetVersionExA(CPU* cpu){
	LPOSVERSIONINFOA lpVersionInformation = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetVersionExA(%p)", lpVersionInformation);
	return GetVersionExA(lpVersionInformation);
}
BOOL thunk_GetVersionExW(CPU* cpu){
	LPOSVERSIONINFOW lpVersionInformation = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GetVersionExW(%p)", lpVersionInformation);
	return GetVersionExW(lpVersionInformation);
}
BOOL thunk_GetVolumeInformationA(CPU* cpu){
	LPCSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPSTR lpVolumeNameBuffer = cpu->fn_arg(cpu, 1);
	DWORD nVolumeNameSize = cpu->fn_arg(cpu, 2);
	LPDWORD lpVolumeSerialNumber = cpu->fn_arg(cpu, 3);
	LPDWORD lpMaximumComponentLength = cpu->fn_arg(cpu, 4);
	LPDWORD lpFileSystemFlags = cpu->fn_arg(cpu, 5);
	LPSTR lpFileSystemNameBuffer = cpu->fn_arg(cpu, 6);
	DWORD nFileSystemNameSize = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!GetVolumeInformationA(%p, %p, %p, %p, %p, %p, %p, %p)", lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
	return GetVolumeInformationA(lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
}
BOOL thunk_GetVolumeInformationW(CPU* cpu){
	LPCWSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPWSTR lpVolumeNameBuffer = cpu->fn_arg(cpu, 1);
	DWORD nVolumeNameSize = cpu->fn_arg(cpu, 2);
	LPDWORD lpVolumeSerialNumber = cpu->fn_arg(cpu, 3);
	LPDWORD lpMaximumComponentLength = cpu->fn_arg(cpu, 4);
	LPDWORD lpFileSystemFlags = cpu->fn_arg(cpu, 5);
	LPWSTR lpFileSystemNameBuffer = cpu->fn_arg(cpu, 6);
	DWORD nFileSystemNameSize = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!GetVolumeInformationW(%p, %p, %p, %p, %p, %p, %p, %p)", lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
	return GetVolumeInformationW(lpRootPathName, lpVolumeNameBuffer, nVolumeNameSize, lpVolumeSerialNumber, lpMaximumComponentLength, lpFileSystemFlags, lpFileSystemNameBuffer, nFileSystemNameSize);
}
UINT thunk_GetWindowsDirectoryA(CPU* cpu){
	LPSTR lpBuffer = cpu->fn_arg(cpu, 0);
	UINT uSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetWindowsDirectoryA(%p, %p)", lpBuffer, uSize);
	return GetWindowsDirectoryA(lpBuffer, uSize);
}
UINT thunk_GetWindowsDirectoryW(CPU* cpu){
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 0);
	UINT uSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GetWindowsDirectoryW(%p, %p)", lpBuffer, uSize);
	return GetWindowsDirectoryW(lpBuffer, uSize);
}
ATOM thunk_GlobalAddAtomA(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalAddAtomA(%p)", lpString);
	return GlobalAddAtomA(lpString);
}
ATOM thunk_GlobalAddAtomW(CPU* cpu){
	LPCWSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalAddAtomW(%p)", lpString);
	return GlobalAddAtomW(lpString);
}
HGLOBAL thunk_GlobalAlloc(CPU* cpu){
	UINT uFlags = cpu->fn_arg(cpu, 0);
	SIZE_T dwBytes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!GlobalAlloc(%p, %p)", uFlags, dwBytes);
	return GlobalAlloc(uFlags, dwBytes);
}
ATOM thunk_GlobalDeleteAtom(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalDeleteAtom(%p)", nAtom);
	return GlobalDeleteAtom(nAtom);
}
ATOM thunk_GlobalFindAtomA(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalFindAtomA(%p)", lpString);
	return GlobalFindAtomA(lpString);
}
ATOM thunk_GlobalFindAtomW(CPU* cpu){
	LPCWSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalFindAtomW(%p)", lpString);
	return GlobalFindAtomW(lpString);
}
UINT thunk_GlobalFlags(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalFlags(%p)", hMem);
	return GlobalFlags(hMem);
}
HGLOBAL thunk_GlobalFree(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalFree(%p)", hMem);
	return GlobalFree(hMem);
}
UINT thunk_GlobalGetAtomNameA(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 1);
	int nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GlobalGetAtomNameA(%p, %p, %p)", nAtom, lpBuffer, nSize);
	return GlobalGetAtomNameA(nAtom, lpBuffer, nSize);
}
UINT thunk_GlobalGetAtomNameW(CPU* cpu){
	ATOM nAtom = cpu->fn_arg(cpu, 0);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 1);
	int nSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GlobalGetAtomNameW(%p, %p, %p)", nAtom, lpBuffer, nSize);
	return GlobalGetAtomNameW(nAtom, lpBuffer, nSize);
}
HGLOBAL thunk_GlobalHandle(CPU* cpu){
	LPCVOID pMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalHandle(%p)", pMem);
	return GlobalHandle(pMem);
}
LPVOID thunk_GlobalLock(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalLock(%p)", hMem);
	return GlobalLock(hMem);
}
VOID thunk_GlobalMemoryStatus(CPU* cpu){
	LPMEMORYSTATUS lpBuffer = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalMemoryStatus(%p)", lpBuffer);
	return GlobalMemoryStatus(lpBuffer);
}
HGLOBAL thunk_GlobalReAlloc(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	SIZE_T dwBytes = cpu->fn_arg(cpu, 1);
	UINT uFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!GlobalReAlloc(%p, %p, %p)", hMem, dwBytes, uFlags);
	return GlobalReAlloc(hMem, dwBytes, uFlags);
}
SIZE_T thunk_GlobalSize(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalSize(%p)", hMem);
	return GlobalSize(hMem);
}
BOOL thunk_GlobalUnlock(CPU* cpu){
	HGLOBAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!GlobalUnlock(%p)", hMem);
	return GlobalUnlock(hMem);
}
LPVOID thunk_HeapAlloc(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	SIZE_T dwBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapAlloc(%p, %p, %p)", hHeap, dwFlags, dwBytes);
	return HeapAlloc(hHeap, dwFlags, dwBytes);
}
SIZE_T thunk_HeapCompact(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!HeapCompact(%p, %p)", hHeap, dwFlags);
	return HeapCompact(hHeap, dwFlags);
}
HANDLE thunk_HeapCreate(CPU* cpu){
	DWORD flOptions = cpu->fn_arg(cpu, 0);
	SIZE_T dwInitialSize = cpu->fn_arg(cpu, 1);
	SIZE_T dwMaximumSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapCreate(%p, %p, %p)", flOptions, dwInitialSize, dwMaximumSize);
	return HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}
BOOL thunk_HeapDestroy(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!HeapDestroy(%p)", hHeap);
	return HeapDestroy(hHeap);
}
BOOL thunk_HeapFree(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPVOID lpMem = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapFree(%p, %p, %p)", hHeap, dwFlags, lpMem);
	return HeapFree(hHeap, dwFlags, lpMem);
}
BOOL thunk_HeapLock(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!HeapLock(%p)", hHeap);
	return HeapLock(hHeap);
}
LPVOID thunk_HeapReAlloc(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPVOID lpMem = cpu->fn_arg(cpu, 2);
	SIZE_T dwBytes = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!HeapReAlloc(%p, %p, %p, %p)", hHeap, dwFlags, lpMem, dwBytes);
	return HeapReAlloc(hHeap, dwFlags, lpMem, dwBytes);
}
SIZE_T thunk_HeapSize(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCVOID lpMem = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapSize(%p, %p, %p)", hHeap, dwFlags, lpMem);
	return HeapSize(hHeap, dwFlags, lpMem);
}
BOOL thunk_HeapSummary(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPHEAP_SUMMARY lpSummary = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapSummary(%p, %p, %p)", hHeap, dwFlags, lpSummary);
	return HeapSummary(hHeap, dwFlags, lpSummary);
}
BOOL thunk_HeapUnlock(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!HeapUnlock(%p)", hHeap);
	return HeapUnlock(hHeap);
}
BOOL thunk_HeapValidate(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCVOID lpMem = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!HeapValidate(%p, %p, %p)", hHeap, dwFlags, lpMem);
	return HeapValidate(hHeap, dwFlags, lpMem);
}
BOOL thunk_HeapWalk(CPU* cpu){
	HANDLE hHeap = cpu->fn_arg(cpu, 0);
	LPPROCESS_HEAP_ENTRY lpEntry = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!HeapWalk(%p, %p)", hHeap, lpEntry);
	return HeapWalk(hHeap, lpEntry);
}
BOOL thunk_InitAtomTable(CPU* cpu){
	DWORD nSize = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!InitAtomTable(%p)", nSize);
	return InitAtomTable(nSize);
}
VOID thunk_InitializeCriticalSection(CPU* cpu){
	LPCRITICAL_SECTION lpCriticalSection = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!InitializeCriticalSection(%p)", lpCriticalSection);
	return InitializeCriticalSection(lpCriticalSection);
}
LONG thunk_InterlockedDecrement(CPU* cpu){
	LONG volatile * Addend = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!InterlockedDecrement(%p)", Addend);
	return InterlockedDecrement(Addend);
}
LONG thunk_InterlockedExchange(CPU* cpu){
	LONG volatile * Target = cpu->fn_arg(cpu, 0);
	LONG Value = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!InterlockedExchange(%p, %p)", Target, Value);
	return InterlockedExchange(Target, Value);
}
LONG thunk_InterlockedIncrement(CPU* cpu){
	LONG volatile * Addend = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!InterlockedIncrement(%p)", Addend);
	return InterlockedIncrement(Addend);
}
BOOL thunk_IsBadCodePtr(CPU* cpu){
	FARPROC lpfn = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!IsBadCodePtr(%p)", lpfn);
	return IsBadCodePtr(lpfn);
}
BOOL thunk_IsBadHugeReadPtr(CPU* cpu){
	LPCVOID ptr = cpu->fn_arg(cpu, 0);
	UINT_PTR size = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadHugeReadPtr(%p, %p)", ptr, size);
	return IsBadHugeReadPtr(ptr, size);
}
BOOL thunk_IsBadHugeWritePtr(CPU* cpu){
	LPVOID lp = cpu->fn_arg(cpu, 0);
	UINT ucb = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadHugeWritePtr(%p, %p)", lp, ucb);
	return IsBadHugeWritePtr(lp, ucb);
}
BOOL thunk_IsBadReadPtr(CPU* cpu){
	const VOID * lp = cpu->fn_arg(cpu, 0);
	UINT_PTR ucb = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadReadPtr(%p, %p)", lp, ucb);
	return IsBadReadPtr(lp, ucb);
}
BOOL thunk_IsBadStringPtrA(CPU* cpu){
	LPCSTR lpsz = cpu->fn_arg(cpu, 0);
	UINT_PTR ucchMax = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadStringPtrA(%p, %p)", lpsz, ucchMax);
	return IsBadStringPtrA(lpsz, ucchMax);
}
BOOL thunk_IsBadStringPtrW(CPU* cpu){
	LPCWSTR lpsz = cpu->fn_arg(cpu, 0);
	UINT_PTR ucchMax = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadStringPtrW(%p, %p)", lpsz, ucchMax);
	return IsBadStringPtrW(lpsz, ucchMax);
}
BOOL thunk_IsBadWritePtr(CPU* cpu){
	LPVOID lp = cpu->fn_arg(cpu, 0);
	UINT_PTR ucb = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsBadWritePtr(%p, %p)", lp, ucb);
	return IsBadWritePtr(lp, ucb);
}
BOOL thunk_IsDBCSLeadByte(CPU* cpu){
	BYTE TestChar = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!IsDBCSLeadByte(%p)", TestChar);
	return IsDBCSLeadByte(TestChar);
}
BOOL thunk_IsDBCSLeadByteEx(CPU* cpu){
	UINT CodePage = cpu->fn_arg(cpu, 0);
	BYTE TestChar = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsDBCSLeadByteEx(%p, %p)", CodePage, TestChar);
	return IsDBCSLeadByteEx(CodePage, TestChar);
}
BOOL thunk_IsDebuggerPresent(CPU* cpu){
	printf("\nCalling KERNEL32!IsDebuggerPresen)");
	return IsDebuggerPresent();
}
BOOL thunk_IsValidCodePage(CPU* cpu){
	UINT CodePage = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!IsValidCodePage(%p)", CodePage);
	return IsValidCodePage(CodePage);
}
BOOL thunk_IsValidLocale(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!IsValidLocale(%p, %p)", Locale, dwFlags);
	return IsValidLocale(Locale, dwFlags);
}
int thunk_LCMapStringA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwMapFlags = cpu->fn_arg(cpu, 1);
	LPCSTR lpSrcStr = cpu->fn_arg(cpu, 2);
	int cchSrc = cpu->fn_arg(cpu, 3);
	LPSTR lpDestStr = cpu->fn_arg(cpu, 4);
	int cchDest = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!LCMapStringA(%p, %p, %p, %p, %p, %p)", Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
	return LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
int thunk_LCMapStringW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	DWORD dwMapFlags = cpu->fn_arg(cpu, 1);
	LPCWSTR lpSrcStr = cpu->fn_arg(cpu, 2);
	int cchSrc = cpu->fn_arg(cpu, 3);
	LPWSTR lpDestStr = cpu->fn_arg(cpu, 4);
	int cchDest = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!LCMapStringW(%p, %p, %p, %p, %p, %p)", Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
	return LCMapStringW(Locale, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
VOID thunk_LeaveCriticalSection(CPU* cpu){
	LPCRITICAL_SECTION lpCriticalSection = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LeaveCriticalSection(%p)", lpCriticalSection);
	return LeaveCriticalSection(lpCriticalSection);
}
HMODULE thunk_LoadLibraryA(CPU* cpu){
	LPCSTR lpLibFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LoadLibraryA(%p)", lpLibFileName);
	return LoadLibraryA(lpLibFileName);
}
HMODULE thunk_LoadLibraryExA(CPU* cpu){
	LPCSTR lpLibFileName = cpu->fn_arg(cpu, 0);
	HANDLE hFile = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!LoadLibraryExA(%p, %p, %p)", lpLibFileName, hFile, dwFlags);
	return LoadLibraryExA(lpLibFileName, hFile, dwFlags);
}
HMODULE thunk_LoadLibraryExW(CPU* cpu){
	LPCWSTR lpLibFileName = cpu->fn_arg(cpu, 0);
	HANDLE hFile = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!LoadLibraryExW(%p, %p, %p)", lpLibFileName, hFile, dwFlags);
	return LoadLibraryExW(lpLibFileName, hFile, dwFlags);
}
HMODULE thunk_LoadLibraryW(CPU* cpu){
	LPCWSTR lpLibFileName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LoadLibraryW(%p)", lpLibFileName);
	return LoadLibraryW(lpLibFileName);
}
DWORD thunk_LoadModule(CPU* cpu){
	LPCSTR lpModuleName = cpu->fn_arg(cpu, 0);
	LPVOID lpParameterBlock = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!LoadModule(%p, %p)", lpModuleName, lpParameterBlock);
	return LoadModule(lpModuleName, lpParameterBlock);
}
HGLOBAL thunk_LoadResource(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	HRSRC hResInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!LoadResource(%p, %p)", hModule, hResInfo);
	return LoadResource(hModule, hResInfo);
}
HLOCAL thunk_LocalAlloc(CPU* cpu){
	UINT uFlags = cpu->fn_arg(cpu, 0);
	SIZE_T uBytes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!LocalAlloc(%p, %p)", uFlags, uBytes);
	return LocalAlloc(uFlags, uBytes);
}
SIZE_T thunk_LocalCompact(CPU* cpu){
	UINT minfree = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalCompact(%p)", minfree);
	return LocalCompact(minfree);
}
BOOL thunk_LocalFileTimeToFileTime(CPU* cpu){
	const FILETIME * lpLocalFileTime = cpu->fn_arg(cpu, 0);
	LPFILETIME lpFileTime = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!LocalFileTimeToFileTime(%p, %p)", lpLocalFileTime, lpFileTime);
	return LocalFileTimeToFileTime(lpLocalFileTime, lpFileTime);
}
UINT thunk_LocalFlags(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalFlags(%p)", hMem);
	return LocalFlags(hMem);
}
HLOCAL thunk_LocalFree(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalFree(%p)", hMem);
	return LocalFree(hMem);
}
HLOCAL thunk_LocalHandle(CPU* cpu){
	LPCVOID pMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalHandle(%p)", pMem);
	return LocalHandle(pMem);
}
LPVOID thunk_LocalLock(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalLock(%p)", hMem);
	return LocalLock(hMem);
}
HLOCAL thunk_LocalReAlloc(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	SIZE_T uBytes = cpu->fn_arg(cpu, 1);
	UINT uFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!LocalReAlloc(%p, %p, %p)", hMem, uBytes, uFlags);
	return LocalReAlloc(hMem, uBytes, uFlags);
}
SIZE_T thunk_LocalSize(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalSize(%p)", hMem);
	return LocalSize(hMem);
}
BOOL thunk_LocalUnlock(CPU* cpu){
	HLOCAL hMem = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LocalUnlock(%p)", hMem);
	return LocalUnlock(hMem);
}
BOOL thunk_LockFile(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwFileOffsetLow = cpu->fn_arg(cpu, 1);
	DWORD dwFileOffsetHigh = cpu->fn_arg(cpu, 2);
	DWORD nNumberOfBytesToLockLow = cpu->fn_arg(cpu, 3);
	DWORD nNumberOfBytesToLockHigh = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!LockFile(%p, %p, %p, %p, %p)", hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh);
	return LockFile(hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh);
}
BOOL thunk_LockFileEx(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	DWORD dwReserved = cpu->fn_arg(cpu, 2);
	DWORD nNumberOfBytesToLockLow = cpu->fn_arg(cpu, 3);
	DWORD nNumberOfBytesToLockHigh = cpu->fn_arg(cpu, 4);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!LockFileEx(%p, %p, %p, %p, %p, %p)", hFile, dwFlags, dwReserved, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh, lpOverlapped);
	return LockFileEx(hFile, dwFlags, dwReserved, nNumberOfBytesToLockLow, nNumberOfBytesToLockHigh, lpOverlapped);
}
LPVOID thunk_LockResource(CPU* cpu){
	HGLOBAL hResData = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!LockResource(%p)", hResData);
	return LockResource(hResData);
}
LPVOID thunk_MapViewOfFile(CPU* cpu){
	HANDLE hFileMappingObject = cpu->fn_arg(cpu, 0);
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 1);
	DWORD dwFileOffsetHigh = cpu->fn_arg(cpu, 2);
	DWORD dwFileOffsetLow = cpu->fn_arg(cpu, 3);
	SIZE_T dwNumberOfBytesToMap = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!MapViewOfFile(%p, %p, %p, %p, %p)", hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
	return MapViewOfFile(hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap);
}
LPVOID thunk_MapViewOfFileEx(CPU* cpu){
	HANDLE hFileMappingObject = cpu->fn_arg(cpu, 0);
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 1);
	DWORD dwFileOffsetHigh = cpu->fn_arg(cpu, 2);
	DWORD dwFileOffsetLow = cpu->fn_arg(cpu, 3);
	SIZE_T dwNumberOfBytesToMap = cpu->fn_arg(cpu, 4);
	LPVOID lpBaseAddress = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!MapViewOfFileEx(%p, %p, %p, %p, %p, %p)", hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap, lpBaseAddress);
	return MapViewOfFileEx(hFileMappingObject, dwDesiredAccess, dwFileOffsetHigh, dwFileOffsetLow, dwNumberOfBytesToMap, lpBaseAddress);
}
BOOL thunk_MoveFileA(CPU* cpu){
	LPCSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!MoveFileA(%p, %p)", lpExistingFileName, lpNewFileName);
	return MoveFileA(lpExistingFileName, lpNewFileName);
}
BOOL thunk_MoveFileExA(CPU* cpu){
	LPCSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!MoveFileExA(%p, %p, %p)", lpExistingFileName, lpNewFileName, dwFlags);
	return MoveFileExA(lpExistingFileName, lpNewFileName, dwFlags);
}
BOOL thunk_MoveFileExW(CPU* cpu){
	LPCWSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!MoveFileExW(%p, %p, %p)", lpExistingFileName, lpNewFileName, dwFlags);
	return MoveFileExW(lpExistingFileName, lpNewFileName, dwFlags);
}
BOOL thunk_MoveFileW(CPU* cpu){
	LPCWSTR lpExistingFileName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpNewFileName = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!MoveFileW(%p, %p)", lpExistingFileName, lpNewFileName);
	return MoveFileW(lpExistingFileName, lpNewFileName);
}
int thunk_MulDiv(CPU* cpu){
	int nNumber = cpu->fn_arg(cpu, 0);
	int nNumerator = cpu->fn_arg(cpu, 1);
	int nDenominator = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!MulDiv(%p, %p, %p)", nNumber, nNumerator, nDenominator);
	return MulDiv(nNumber, nNumerator, nDenominator);
}
int thunk_MultiByteToWideChar(CPU* cpu){
	UINT CodePage = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCCH lpMultiByteStr = cpu->fn_arg(cpu, 2);
	int cbMultiByte = cpu->fn_arg(cpu, 3);
	LPWSTR lpWideCharStr = cpu->fn_arg(cpu, 4);
	int cchWideChar = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!MultiByteToWideChar(%p, %p, %p, %p, %p, %p)", CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
	return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}
HANDLE thunk_OpenEventA(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenEventA(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenEventA(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenEventW(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenEventW(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenEventW(dwDesiredAccess, bInheritHandle, lpName);
}
HFILE thunk_OpenFile(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	LPOFSTRUCT lpReOpenBuff = cpu->fn_arg(cpu, 1);
	UINT uStyle = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenFile(%p, %p, %p)", lpFileName, lpReOpenBuff, uStyle);
	return OpenFile(lpFileName, lpReOpenBuff, uStyle);
}
HANDLE thunk_OpenFileMappingA(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenFileMappingA(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenFileMappingA(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenFileMappingW(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenFileMappingW(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenFileMappingW(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenMutexA(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenMutexA(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenMutexA(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenMutexW(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenMutexW(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenMutexW(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenProcess(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	DWORD dwProcessId = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenProcess(%p, %p, %p)", dwDesiredAccess, bInheritHandle, dwProcessId);
	return OpenProcess(dwDesiredAccess, bInheritHandle, dwProcessId);
}
HANDLE thunk_OpenSemaphoreA(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenSemaphoreA(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenSemaphoreA(dwDesiredAccess, bInheritHandle, lpName);
}
HANDLE thunk_OpenSemaphoreW(CPU* cpu){
	DWORD dwDesiredAccess = cpu->fn_arg(cpu, 0);
	BOOL bInheritHandle = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!OpenSemaphoreW(%p, %p, %p)", dwDesiredAccess, bInheritHandle, lpName);
	return OpenSemaphoreW(dwDesiredAccess, bInheritHandle, lpName);
}
VOID thunk_OutputDebugStringA(CPU* cpu){
	LPCSTR lpOutputString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!OutputDebugStringA(%p)", lpOutputString);
	return OutputDebugStringA(lpOutputString);
}
VOID thunk_OutputDebugStringW(CPU* cpu){
	LPCWSTR lpOutputString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!OutputDebugStringW(%p)", lpOutputString);
	return OutputDebugStringW(lpOutputString);
}
BOOL thunk_PeekConsoleInputA(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	PINPUT_RECORD lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsRead = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!PeekConsoleInputA(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
	return PeekConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
BOOL thunk_PeekConsoleInputW(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	PINPUT_RECORD lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsRead = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!PeekConsoleInputW(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
	return PeekConsoleInputW(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
BOOL thunk_PeekNamedPipe(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nBufferSize = cpu->fn_arg(cpu, 2);
	LPDWORD lpBytesRead = cpu->fn_arg(cpu, 3);
	LPDWORD lpTotalBytesAvail = cpu->fn_arg(cpu, 4);
	LPDWORD lpBytesLeftThisMessage = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!PeekNamedPipe(%p, %p, %p, %p, %p, %p)", hNamedPipe, lpBuffer, nBufferSize, lpBytesRead, lpTotalBytesAvail, lpBytesLeftThisMessage);
	return PeekNamedPipe(hNamedPipe, lpBuffer, nBufferSize, lpBytesRead, lpTotalBytesAvail, lpBytesLeftThisMessage);
}
BOOL thunk_PostQueuedCompletionStatus(CPU* cpu){
	HANDLE CompletionPort = cpu->fn_arg(cpu, 0);
	DWORD dwNumberOfBytesTransferred = cpu->fn_arg(cpu, 1);
	ULONG_PTR dwCompletionKey = cpu->fn_arg(cpu, 2);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!PostQueuedCompletionStatus(%p, %p, %p, %p)", CompletionPort, dwNumberOfBytesTransferred, dwCompletionKey, lpOverlapped);
	return PostQueuedCompletionStatus(CompletionPort, dwNumberOfBytesTransferred, dwCompletionKey, lpOverlapped);
}
DWORD thunk_PrepareTape(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwOperation = cpu->fn_arg(cpu, 1);
	BOOL bImmediate = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!PrepareTape(%p, %p, %p)", hDevice, dwOperation, bImmediate);
	return PrepareTape(hDevice, dwOperation, bImmediate);
}
BOOL thunk_PulseEvent(CPU* cpu){
	HANDLE hEvent = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!PulseEvent(%p)", hEvent);
	return PulseEvent(hEvent);
}
BOOL thunk_PurgeComm(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!PurgeComm(%p, %p)", hFile, dwFlags);
	return PurgeComm(hFile, dwFlags);
}
DWORD thunk_QueryDosDeviceA(CPU* cpu){
	LPCSTR lpDeviceName = cpu->fn_arg(cpu, 0);
	LPSTR lpTargetPath = cpu->fn_arg(cpu, 1);
	DWORD ucchMax = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!QueryDosDeviceA(%p, %p, %p)", lpDeviceName, lpTargetPath, ucchMax);
	return QueryDosDeviceA(lpDeviceName, lpTargetPath, ucchMax);
}
DWORD thunk_QueryDosDeviceW(CPU* cpu){
	LPCWSTR lpDeviceName = cpu->fn_arg(cpu, 0);
	LPWSTR lpTargetPath = cpu->fn_arg(cpu, 1);
	DWORD ucchMax = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!QueryDosDeviceW(%p, %p, %p)", lpDeviceName, lpTargetPath, ucchMax);
	return QueryDosDeviceW(lpDeviceName, lpTargetPath, ucchMax);
}
BOOL thunk_QueryPerformanceCounter(CPU* cpu){
	LARGE_INTEGER * lpPerformanceCount = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!QueryPerformanceCounter(%p)", lpPerformanceCount);
	return QueryPerformanceCounter(lpPerformanceCount);
}
BOOL thunk_QueryPerformanceFrequency(CPU* cpu){
	LARGE_INTEGER * lpFrequency = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!QueryPerformanceFrequency(%p)", lpFrequency);
	return QueryPerformanceFrequency(lpFrequency);
}
VOID thunk_RaiseException(CPU* cpu){
	DWORD dwExceptionCode = cpu->fn_arg(cpu, 0);
	DWORD dwExceptionFlags = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfArguments = cpu->fn_arg(cpu, 2);
	const ULONG_PTR * lpArguments = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!RaiseException(%p, %p, %p, %p)", dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
	return RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
}
BOOL thunk_ReadConsoleA(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfCharsToRead = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfCharsRead = cpu->fn_arg(cpu, 3);
	LPVOID pInputControl = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleA(%p, %p, %p, %p, %p)", hConsoleInput, lpBuffer, nNumberOfCharsToRead, lpNumberOfCharsRead, pInputControl);
	return ReadConsoleA(hConsoleInput, lpBuffer, nNumberOfCharsToRead, lpNumberOfCharsRead, pInputControl);
}
BOOL thunk_ReadConsoleW(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfCharsToRead = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfCharsRead = cpu->fn_arg(cpu, 3);
	LPVOID pInputControl = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleW(%p, %p, %p, %p, %p)", hConsoleInput, lpBuffer, nNumberOfCharsToRead, lpNumberOfCharsRead, pInputControl);
	return ReadConsoleW(hConsoleInput, lpBuffer, nNumberOfCharsToRead, lpNumberOfCharsRead, pInputControl);
}
BOOL thunk_ReadConsoleInputA(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	PINPUT_RECORD lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsRead = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!ReadConsoleInputA(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
	return ReadConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
BOOL thunk_ReadConsoleInputW(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	PINPUT_RECORD lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsRead = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!ReadConsoleInputW(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
	return ReadConsoleInputW(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsRead);
}
BOOL thunk_ReadConsoleOutputA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	PCHAR_INFO lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD_PTR dwBufferSize = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwBufferCoord = cpu->fn_arg(cpu, 3);
	PSMALL_RECT lpReadRegion = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleOutputA(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, dwBufferSize, dwBufferCoord, lpReadRegion);
	return ReadConsoleOutputA(hConsoleOutput, lpBuffer, *(COORD*)&dwBufferSize, *(COORD*)&dwBufferCoord, lpReadRegion);
}
BOOL thunk_ReadConsoleOutputW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	PCHAR_INFO lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD_PTR dwBufferSize = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwBufferCoord = cpu->fn_arg(cpu, 3);
	PSMALL_RECT lpReadRegion = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleOutputW(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, dwBufferSize, dwBufferCoord, lpReadRegion);
	return ReadConsoleOutputW(hConsoleOutput, lpBuffer, *(COORD*)&dwBufferSize, *(COORD*)&dwBufferCoord, lpReadRegion);
}
BOOL thunk_ReadConsoleOutputAttribute(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	LPWORD lpAttribute = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwReadCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfAttrsRead = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleOutputAttribute(%p, %p, %p, %p, %p)", hConsoleOutput, lpAttribute, nLength, dwReadCoord, lpNumberOfAttrsRead);
	return ReadConsoleOutputAttribute(hConsoleOutput, lpAttribute, nLength, *(COORD*)&dwReadCoord, lpNumberOfAttrsRead);
}
BOOL thunk_ReadConsoleOutputCharacterA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	LPSTR lpCharacter = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwReadCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfCharsRead = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleOutputCharacterA(%p, %p, %p, %p, %p)", hConsoleOutput, lpCharacter, nLength, dwReadCoord, lpNumberOfCharsRead);
	return ReadConsoleOutputCharacterA(hConsoleOutput, lpCharacter, nLength, *(COORD*)&dwReadCoord, lpNumberOfCharsRead);
}
BOOL thunk_ReadConsoleOutputCharacterW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	LPWSTR lpCharacter = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwReadCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfCharsRead = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadConsoleOutputCharacterW(%p, %p, %p, %p, %p)", hConsoleOutput, lpCharacter, nLength, dwReadCoord, lpNumberOfCharsRead);
	return ReadConsoleOutputCharacterW(hConsoleOutput, lpCharacter, nLength, *(COORD*)&dwReadCoord, lpNumberOfCharsRead);
}
BOOL thunk_ReadFile(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToRead = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfBytesRead = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadFile(%p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
	return ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}
BOOL thunk_ReadFileEx(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToRead = cpu->fn_arg(cpu, 2);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadFileEx(%p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToRead, lpOverlapped, lpCompletionRoutine);
	return ReadFileEx(hFile, lpBuffer, nNumberOfBytesToRead, lpOverlapped, lpCompletionRoutine);
}
BOOL thunk_ReadProcessMemory(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPCVOID lpBaseAddress = cpu->fn_arg(cpu, 1);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 2);
	SIZE_T nSize = cpu->fn_arg(cpu, 3);
	SIZE_T * lpNumberOfBytesRead = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ReadProcessMemory(%p, %p, %p, %p, %p)", hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesRead);
	return ReadProcessMemory(hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesRead);
}
BOOL thunk_ReleaseMutex(CPU* cpu){
	HANDLE hMutex = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ReleaseMutex(%p)", hMutex);
	return ReleaseMutex(hMutex);
}
BOOL thunk_ReleaseSemaphore(CPU* cpu){
	HANDLE hSemaphore = cpu->fn_arg(cpu, 0);
	LONG lReleaseCount = cpu->fn_arg(cpu, 1);
	LPLONG lpPreviousCount = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!ReleaseSemaphore(%p, %p, %p)", hSemaphore, lReleaseCount, lpPreviousCount);
	return ReleaseSemaphore(hSemaphore, lReleaseCount, lpPreviousCount);
}
BOOL thunk_RemoveDirectoryA(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!RemoveDirectoryA(%p)", lpPathName);
	return RemoveDirectoryA(lpPathName);
}
BOOL thunk_RemoveDirectoryW(CPU* cpu){
	LPCWSTR lpPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!RemoveDirectoryW(%p)", lpPathName);
	return RemoveDirectoryW(lpPathName);
}
BOOL thunk_ResetEvent(CPU* cpu){
	HANDLE hEvent = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ResetEvent(%p)", hEvent);
	return ResetEvent(hEvent);
}
DWORD thunk_ResumeThread(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!ResumeThread(%p)", hThread);
	return ResumeThread(hThread);
}
VOID thunk_RtlFillMemory(CPU* cpu){
	void * Destination = cpu->fn_arg(cpu, 0);
	size_t Length = cpu->fn_arg(cpu, 1);
	int Fill = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!RtlFillMemory(%p, %p, %p)", Destination, Length, Fill);
	return RtlFillMemory(Destination, Length, Fill);
}
VOID thunk_RtlMoveMemory(CPU* cpu){
	VOID UNALIGNED * Destination = cpu->fn_arg(cpu, 0);
	const VOID UNALIGNED * Source = cpu->fn_arg(cpu, 1);
	SIZE_T Length = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!RtlMoveMemory(%p, %p, %p)", Destination, Source, Length);
	return RtlMoveMemory(Destination, Source, Length);
}
VOID thunk_RtlUnwind(CPU* cpu){
	PVOID TargetFrame = cpu->fn_arg(cpu, 0);
	PVOID TargetIp = cpu->fn_arg(cpu, 1);
	PEXCEPTION_RECORD ExceptionRecord = cpu->fn_arg(cpu, 2);
	PVOID ReturnValue = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!RtlUnwind(%p, %p, %p, %p)", TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
	return RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}
VOID thunk_RtlZeroMemory(CPU* cpu){
	void * Destination = cpu->fn_arg(cpu, 0);
	size_t Length = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!RtlZeroMemory(%p, %p)", Destination, Length);
	return RtlZeroMemory(Destination, Length);
}
BOOL thunk_ScrollConsoleScreenBuffer(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const SMALL_RECT * lpScrollRectangle = cpu->fn_arg(cpu, 1);
	const SMALL_RECT * lpClipRectangle = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwDestinationOrigin = cpu->fn_arg(cpu, 3);
	const CHAR_INFO * lpFill = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ScrollConsoleScreenBuffer(%p, %p, %p, %p, %p)", hConsoleOutput, lpScrollRectangle, lpClipRectangle, dwDestinationOrigin, lpFill);
	return ScrollConsoleScreenBuffer(hConsoleOutput, lpScrollRectangle, lpClipRectangle, *(COORD*)&dwDestinationOrigin, lpFill);
}
BOOL thunk_ScrollConsoleScreenBufferA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const SMALL_RECT * lpScrollRectangle = cpu->fn_arg(cpu, 1);
	const SMALL_RECT * lpClipRectangle = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwDestinationOrigin = cpu->fn_arg(cpu, 3);
	const CHAR_INFO * lpFill = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ScrollConsoleScreenBufferA(%p, %p, %p, %p, %p)", hConsoleOutput, lpScrollRectangle, lpClipRectangle, dwDestinationOrigin, lpFill);
	return ScrollConsoleScreenBufferA(hConsoleOutput, lpScrollRectangle, lpClipRectangle, *(COORD*)&dwDestinationOrigin, lpFill);
}
BOOL thunk_ScrollConsoleScreenBufferW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const SMALL_RECT * lpScrollRectangle = cpu->fn_arg(cpu, 1);
	const SMALL_RECT * lpClipRectangle = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwDestinationOrigin = cpu->fn_arg(cpu, 3);
	const CHAR_INFO * lpFill = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!ScrollConsoleScreenBufferW(%p, %p, %p, %p, %p)", hConsoleOutput, lpScrollRectangle, lpClipRectangle, dwDestinationOrigin, lpFill);
	return ScrollConsoleScreenBufferW(hConsoleOutput, lpScrollRectangle, lpClipRectangle, *(COORD*)&dwDestinationOrigin, lpFill);
}
DWORD thunk_SearchPathA(CPU* cpu){
	LPCSTR lpPath = cpu->fn_arg(cpu, 0);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 1);
	LPCSTR lpExtension = cpu->fn_arg(cpu, 2);
	DWORD nBufferLength = cpu->fn_arg(cpu, 3);
	LPSTR lpBuffer = cpu->fn_arg(cpu, 4);
	LPSTR * lpFilePart = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!SearchPathA(%p, %p, %p, %p, %p, %p)", lpPath, lpFileName, lpExtension, nBufferLength, lpBuffer, lpFilePart);
	return SearchPathA(lpPath, lpFileName, lpExtension, nBufferLength, lpBuffer, lpFilePart);
}
DWORD thunk_SearchPathW(CPU* cpu){
	LPCWSTR lpPath = cpu->fn_arg(cpu, 0);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpExtension = cpu->fn_arg(cpu, 2);
	DWORD nBufferLength = cpu->fn_arg(cpu, 3);
	LPWSTR lpBuffer = cpu->fn_arg(cpu, 4);
	LPWSTR * lpFilePart = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!SearchPathW(%p, %p, %p, %p, %p, %p)", lpPath, lpFileName, lpExtension, nBufferLength, lpBuffer, lpFilePart);
	return SearchPathW(lpPath, lpFileName, lpExtension, nBufferLength, lpBuffer, lpFilePart);
}
BOOL thunk_SetCommBreak(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetCommBreak(%p)", hFile);
	return SetCommBreak(hFile);
}
BOOL thunk_SetCommConfig(CPU* cpu){
	HANDLE hCommDev = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	DWORD dwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetCommConfig(%p, %p, %p)", hCommDev, lpCC, dwSize);
	return SetCommConfig(hCommDev, lpCC, dwSize);
}
BOOL thunk_SetCommMask(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwEvtMask = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetCommMask(%p, %p)", hFile, dwEvtMask);
	return SetCommMask(hFile, dwEvtMask);
}
BOOL thunk_SetCommState(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDCB lpDCB = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetCommState(%p, %p)", hFile, lpDCB);
	return SetCommState(hFile, lpDCB);
}
BOOL thunk_SetCommTimeouts(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCOMMTIMEOUTS lpCommTimeouts = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetCommTimeouts(%p, %p)", hFile, lpCommTimeouts);
	return SetCommTimeouts(hFile, lpCommTimeouts);
}
BOOL thunk_SetComputerNameA(CPU* cpu){
	LPCSTR lpComputerName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetComputerNameA(%p)", lpComputerName);
	return SetComputerNameA(lpComputerName);
}
BOOL thunk_SetComputerNameW(CPU* cpu){
	LPCWSTR lpComputerName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetComputerNameW(%p)", lpComputerName);
	return SetComputerNameW(lpComputerName);
}
BOOL thunk_SetConsoleActiveScreenBuffer(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetConsoleActiveScreenBuffer(%p)", hConsoleOutput);
	return SetConsoleActiveScreenBuffer(hConsoleOutput);
}
BOOL thunk_SetConsoleCP(CPU* cpu){
	UINT wCodePageID = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetConsoleCP(%p)", wCodePageID);
	return SetConsoleCP(wCodePageID);
}
BOOL thunk_SetConsoleCtrlHandler(CPU* cpu){
	PHANDLER_ROUTINE HandlerRoutine = cpu->fn_arg(cpu, 0);
	BOOL Add = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleCtrlHandler(%p, %p)", HandlerRoutine, Add);
	return SetConsoleCtrlHandler(HandlerRoutine, Add);
}
BOOL thunk_SetConsoleCursorInfo(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const CONSOLE_CURSOR_INFO * lpConsoleCursorInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleCursorInfo(%p, %p)", hConsoleOutput, lpConsoleCursorInfo);
	return SetConsoleCursorInfo(hConsoleOutput, lpConsoleCursorInfo);
}
BOOL thunk_SetConsoleCursorPosition(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	DWORD_PTR dwCursorPosition = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleCursorPosition(%p, %p)", hConsoleOutput, dwCursorPosition);
	return SetConsoleCursorPosition(hConsoleOutput, *(COORD*)&dwCursorPosition);
}
BOOL thunk_SetConsoleDisplayMode(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	PCOORD lpNewScreenBufferDimensions = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetConsoleDisplayMode(%p, %p, %p)", hConsoleOutput, dwFlags, lpNewScreenBufferDimensions);
	return SetConsoleDisplayMode(hConsoleOutput, dwFlags, lpNewScreenBufferDimensions);
}
BOOL thunk_SetConsoleMode(CPU* cpu){
	HANDLE hConsoleHandle = cpu->fn_arg(cpu, 0);
	DWORD dwMode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleMode(%p, %p)", hConsoleHandle, dwMode);
	return SetConsoleMode(hConsoleHandle, dwMode);
}
BOOL thunk_SetConsoleOutputCP(CPU* cpu){
	UINT wCodePageID = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetConsoleOutputCP(%p)", wCodePageID);
	return SetConsoleOutputCP(wCodePageID);
}
BOOL thunk_SetConsoleScreenBufferSize(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	DWORD_PTR dwSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleScreenBufferSize(%p, %p)", hConsoleOutput, dwSize);
	return SetConsoleScreenBufferSize(hConsoleOutput, *(COORD*)&dwSize);
}
BOOL thunk_SetConsoleTextAttribute(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	WORD wAttributes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetConsoleTextAttribute(%p, %p)", hConsoleOutput, wAttributes);
	return SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
BOOL thunk_SetConsoleTitleA(CPU* cpu){
	LPCSTR lpConsoleTitle = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetConsoleTitleA(%p)", lpConsoleTitle);
	return SetConsoleTitleA(lpConsoleTitle);
}
BOOL thunk_SetConsoleTitleW(CPU* cpu){
	LPCWSTR lpConsoleTitle = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetConsoleTitleW(%p)", lpConsoleTitle);
	return SetConsoleTitleW(lpConsoleTitle);
}
BOOL thunk_SetConsoleWindowInfo(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	BOOL bAbsolute = cpu->fn_arg(cpu, 1);
	const SMALL_RECT * lpConsoleWindow = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetConsoleWindowInfo(%p, %p, %p)", hConsoleOutput, bAbsolute, lpConsoleWindow);
	return SetConsoleWindowInfo(hConsoleOutput, bAbsolute, lpConsoleWindow);
}
BOOL thunk_SetCurrentDirectoryA(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetCurrentDirectoryA(%p)", lpPathName);
	return SetCurrentDirectoryA(lpPathName);
}
BOOL thunk_SetCurrentDirectoryW(CPU* cpu){
	LPCWSTR lpPathName = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetCurrentDirectoryW(%p)", lpPathName);
	return SetCurrentDirectoryW(lpPathName);
}
BOOL thunk_SetDefaultCommConfigA(CPU* cpu){
	LPCSTR lpszName = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	DWORD dwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetDefaultCommConfigA(%p, %p, %p)", lpszName, lpCC, dwSize);
	return SetDefaultCommConfigA(lpszName, lpCC, dwSize);
}
BOOL thunk_SetDefaultCommConfigW(CPU* cpu){
	LPCWSTR lpszName = cpu->fn_arg(cpu, 0);
	LPCOMMCONFIG lpCC = cpu->fn_arg(cpu, 1);
	DWORD dwSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetDefaultCommConfigW(%p, %p, %p)", lpszName, lpCC, dwSize);
	return SetDefaultCommConfigW(lpszName, lpCC, dwSize);
}
BOOL thunk_SetEndOfFile(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetEndOfFile(%p)", hFile);
	return SetEndOfFile(hFile);
}
BOOL thunk_SetEnvironmentVariableA(CPU* cpu){
	LPCSTR lpName = cpu->fn_arg(cpu, 0);
	LPCSTR lpValue = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetEnvironmentVariableA(%p, %p)", lpName, lpValue);
	return SetEnvironmentVariableA(lpName, lpValue);
}
BOOL thunk_SetEnvironmentVariableW(CPU* cpu){
	LPCWSTR lpName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpValue = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetEnvironmentVariableW(%p, %p)", lpName, lpValue);
	return SetEnvironmentVariableW(lpName, lpValue);
}
UINT thunk_SetErrorMode(CPU* cpu){
	UINT uMode = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetErrorMode(%p)", uMode);
	return SetErrorMode(uMode);
}
BOOL thunk_SetEvent(CPU* cpu){
	HANDLE hEvent = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetEvent(%p)", hEvent);
	return SetEvent(hEvent);
}
VOID thunk_SetFileApisToANSI(CPU* cpu){
	printf("\nCalling KERNEL32!SetFileApisToANS)");
	return SetFileApisToANSI();
}
VOID thunk_SetFileApisToOEM(CPU* cpu){
	printf("\nCalling KERNEL32!SetFileApisToOE)");
	return SetFileApisToOEM();
}
BOOL thunk_SetFileAttributesA(CPU* cpu){
	LPCSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD dwFileAttributes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetFileAttributesA(%p, %p)", lpFileName, dwFileAttributes);
	return SetFileAttributesA(lpFileName, dwFileAttributes);
}
BOOL thunk_SetFileAttributesW(CPU* cpu){
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 0);
	DWORD dwFileAttributes = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetFileAttributesW(%p, %p)", lpFileName, dwFileAttributes);
	return SetFileAttributesW(lpFileName, dwFileAttributes);
}
DWORD thunk_SetFilePointer(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LONG lDistanceToMove = cpu->fn_arg(cpu, 1);
	PLONG lpDistanceToMoveHigh = cpu->fn_arg(cpu, 2);
	DWORD dwMoveMethod = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!SetFilePointer(%p, %p, %p, %p)", hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
	return SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}
BOOL thunk_SetFileTime(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	const FILETIME * lpCreationTime = cpu->fn_arg(cpu, 1);
	const FILETIME * lpLastAccessTime = cpu->fn_arg(cpu, 2);
	const FILETIME * lpLastWriteTime = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!SetFileTime(%p, %p, %p, %p)", hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
	return SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
UINT thunk_SetHandleCount(CPU* cpu){
	UINT uNumber = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetHandleCount(%p)", uNumber);
	return SetHandleCount(uNumber);
}
BOOL thunk_SetHandleInformation(CPU* cpu){
	HANDLE hObject = cpu->fn_arg(cpu, 0);
	DWORD dwMask = cpu->fn_arg(cpu, 1);
	DWORD dwFlags = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetHandleInformation(%p, %p, %p)", hObject, dwMask, dwFlags);
	return SetHandleInformation(hObject, dwMask, dwFlags);
}
VOID thunk_SetLastError(CPU* cpu){
	DWORD dwErrCode = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetLastError(%p)", dwErrCode);
	return SetLastError(dwErrCode);
}
BOOL thunk_SetLocalTime(CPU* cpu){
	const SYSTEMTIME * lpSystemTime = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetLocalTime(%p)", lpSystemTime);
	return SetLocalTime(lpSystemTime);
}
BOOL thunk_SetLocaleInfoA(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	LCTYPE LCType = cpu->fn_arg(cpu, 1);
	LPCSTR lpLCData = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetLocaleInfoA(%p, %p, %p)", Locale, LCType, lpLCData);
	return SetLocaleInfoA(Locale, LCType, lpLCData);
}
BOOL thunk_SetLocaleInfoW(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	LCTYPE LCType = cpu->fn_arg(cpu, 1);
	LPCWSTR lpLCData = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetLocaleInfoW(%p, %p, %p)", Locale, LCType, lpLCData);
	return SetLocaleInfoW(Locale, LCType, lpLCData);
}
BOOL thunk_SetMailslotInfo(CPU* cpu){
	HANDLE hMailslot = cpu->fn_arg(cpu, 0);
	DWORD lReadTimeout = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetMailslotInfo(%p, %p)", hMailslot, lReadTimeout);
	return SetMailslotInfo(hMailslot, lReadTimeout);
}
BOOL thunk_SetNamedPipeHandleState(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPDWORD lpMode = cpu->fn_arg(cpu, 1);
	LPDWORD lpMaxCollectionCount = cpu->fn_arg(cpu, 2);
	LPDWORD lpCollectDataTimeout = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!SetNamedPipeHandleState(%p, %p, %p, %p)", hNamedPipe, lpMode, lpMaxCollectionCount, lpCollectDataTimeout);
	return SetNamedPipeHandleState(hNamedPipe, lpMode, lpMaxCollectionCount, lpCollectDataTimeout);
}
BOOL thunk_SetPriorityClass(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	DWORD dwPriorityClass = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetPriorityClass(%p, %p)", hProcess, dwPriorityClass);
	return SetPriorityClass(hProcess, dwPriorityClass);
}
BOOL thunk_SetProcessShutdownParameters(CPU* cpu){
	DWORD dwLevel = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetProcessShutdownParameters(%p, %p)", dwLevel, dwFlags);
	return SetProcessShutdownParameters(dwLevel, dwFlags);
}
BOOL thunk_SetProcessWorkingSetSize(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	SIZE_T dwMinimumWorkingSetSize = cpu->fn_arg(cpu, 1);
	SIZE_T dwMaximumWorkingSetSize = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetProcessWorkingSetSize(%p, %p, %p)", hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize);
	return SetProcessWorkingSetSize(hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize);
}
BOOL thunk_SetStdHandle(CPU* cpu){
	DWORD nStdHandle = cpu->fn_arg(cpu, 0);
	HANDLE hHandle = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetStdHandle(%p, %p)", nStdHandle, hHandle);
	return SetStdHandle(nStdHandle, hHandle);
}
BOOL thunk_SetSystemPowerState(CPU* cpu){
	BOOL fSuspend = cpu->fn_arg(cpu, 0);
	BOOL fForce = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetSystemPowerState(%p, %p)", fSuspend, fForce);
	return SetSystemPowerState(fSuspend, fForce);
}
BOOL thunk_SetSystemTime(CPU* cpu){
	const SYSTEMTIME * lpSystemTime = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetSystemTime(%p)", lpSystemTime);
	return SetSystemTime(lpSystemTime);
}
BOOL thunk_SetSystemTimeAdjustment(CPU* cpu){
	DWORD dwTimeAdjustment = cpu->fn_arg(cpu, 0);
	BOOL bTimeAdjustmentDisabled = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetSystemTimeAdjustment(%p, %p)", dwTimeAdjustment, bTimeAdjustmentDisabled);
	return SetSystemTimeAdjustment(dwTimeAdjustment, bTimeAdjustmentDisabled);
}
DWORD thunk_SetTapeParameters(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwOperation = cpu->fn_arg(cpu, 1);
	LPVOID lpTapeInformation = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetTapeParameters(%p, %p, %p)", hDevice, dwOperation, lpTapeInformation);
	return SetTapeParameters(hDevice, dwOperation, lpTapeInformation);
}
DWORD thunk_SetTapePosition(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwPositionMethod = cpu->fn_arg(cpu, 1);
	DWORD dwPartition = cpu->fn_arg(cpu, 2);
	DWORD dwOffsetLow = cpu->fn_arg(cpu, 3);
	DWORD dwOffsetHigh = cpu->fn_arg(cpu, 4);
	BOOL bImmediate = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!SetTapePosition(%p, %p, %p, %p, %p, %p)", hDevice, dwPositionMethod, dwPartition, dwOffsetLow, dwOffsetHigh, bImmediate);
	return SetTapePosition(hDevice, dwPositionMethod, dwPartition, dwOffsetLow, dwOffsetHigh, bImmediate);
}
DWORD_PTR thunk_SetThreadAffinityMask(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	DWORD_PTR dwThreadAffinityMask = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetThreadAffinityMask(%p, %p)", hThread, dwThreadAffinityMask);
	return SetThreadAffinityMask(hThread, dwThreadAffinityMask);
}
BOOL thunk_SetThreadContext(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	const CONTEXT * lpContext = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetThreadContext(%p, %p)", hThread, lpContext);
	return SetThreadContext(hThread, lpContext);
}
BOOL thunk_SetThreadLocale(CPU* cpu){
	LCID Locale = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetThreadLocale(%p)", Locale);
	return SetThreadLocale(Locale);
}
BOOL thunk_SetThreadPriority(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	int nPriority = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetThreadPriority(%p, %p)", hThread, nPriority);
	return SetThreadPriority(hThread, nPriority);
}
BOOL thunk_SetTimeZoneInformation(CPU* cpu){
	const TIME_ZONE_INFORMATION * lpTimeZoneInformation = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetTimeZoneInformation(%p)", lpTimeZoneInformation);
	return SetTimeZoneInformation(lpTimeZoneInformation);
}
LPTOP_LEVEL_EXCEPTION_FILTER thunk_SetUnhandledExceptionFilter(CPU* cpu){
	LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SetUnhandledExceptionFilter(%p)", lpTopLevelExceptionFilter);
	return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}
BOOL thunk_SetVolumeLabelA(CPU* cpu){
	LPCSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPCSTR lpVolumeName = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetVolumeLabelA(%p, %p)", lpRootPathName, lpVolumeName);
	return SetVolumeLabelA(lpRootPathName, lpVolumeName);
}
BOOL thunk_SetVolumeLabelW(CPU* cpu){
	LPCWSTR lpRootPathName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpVolumeName = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SetVolumeLabelW(%p, %p)", lpRootPathName, lpVolumeName);
	return SetVolumeLabelW(lpRootPathName, lpVolumeName);
}
BOOL thunk_SetupComm(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwInQueue = cpu->fn_arg(cpu, 1);
	DWORD dwOutQueue = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SetupComm(%p, %p, %p)", hFile, dwInQueue, dwOutQueue);
	return SetupComm(hFile, dwInQueue, dwOutQueue);
}
DWORD thunk_SizeofResource(CPU* cpu){
	HMODULE hModule = cpu->fn_arg(cpu, 0);
	HRSRC hResInfo = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SizeofResource(%p, %p)", hModule, hResInfo);
	return SizeofResource(hModule, hResInfo);
}
VOID thunk_Sleep(CPU* cpu){
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!Sleep(%p)", dwMilliseconds);
	return Sleep(dwMilliseconds);
}
DWORD thunk_SleepEx(CPU* cpu){
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 0);
	BOOL bAlertable = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SleepEx(%p, %p)", dwMilliseconds, bAlertable);
	return SleepEx(dwMilliseconds, bAlertable);
}
DWORD thunk_SuspendThread(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!SuspendThread(%p)", hThread);
	return SuspendThread(hThread);
}
BOOL thunk_SystemTimeToFileTime(CPU* cpu){
	const SYSTEMTIME * lpSystemTime = cpu->fn_arg(cpu, 0);
	LPFILETIME lpFileTime = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!SystemTimeToFileTime(%p, %p)", lpSystemTime, lpFileTime);
	return SystemTimeToFileTime(lpSystemTime, lpFileTime);
}
BOOL thunk_SystemTimeToTzSpecificLocalTime(CPU* cpu){
	const TIME_ZONE_INFORMATION * lpTimeZoneInformation = cpu->fn_arg(cpu, 0);
	const SYSTEMTIME * lpUniversalTime = cpu->fn_arg(cpu, 1);
	LPSYSTEMTIME lpLocalTime = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!SystemTimeToTzSpecificLocalTime(%p, %p, %p)", lpTimeZoneInformation, lpUniversalTime, lpLocalTime);
	return SystemTimeToTzSpecificLocalTime(lpTimeZoneInformation, lpUniversalTime, lpLocalTime);
}
BOOL thunk_TerminateProcess(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	UINT uExitCode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!TerminateProcess(%p, %p)", hProcess, uExitCode);
	return TerminateProcess(hProcess, uExitCode);
}
BOOL thunk_TerminateThread(CPU* cpu){
	HANDLE hThread = cpu->fn_arg(cpu, 0);
	DWORD dwExitCode = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!TerminateThread(%p, %p)", hThread, dwExitCode);
	return TerminateThread(hThread, dwExitCode);
}
DWORD thunk_TlsAlloc(CPU* cpu){
	printf("\nCalling KERNEL32!TlsAllo)");
	return TlsAlloc();
}
BOOL thunk_TlsFree(CPU* cpu){
	DWORD dwTlsIndex = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!TlsFree(%p)", dwTlsIndex);
	return TlsFree(dwTlsIndex);
}
LPVOID thunk_TlsGetValue(CPU* cpu){
	DWORD dwTlsIndex = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!TlsGetValue(%p)", dwTlsIndex);
	return TlsGetValue(dwTlsIndex);
}
BOOL thunk_TlsSetValue(CPU* cpu){
	DWORD dwTlsIndex = cpu->fn_arg(cpu, 0);
	LPVOID lpTlsValue = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!TlsSetValue(%p, %p)", dwTlsIndex, lpTlsValue);
	return TlsSetValue(dwTlsIndex, lpTlsValue);
}
BOOL thunk_TransactNamedPipe(CPU* cpu){
	HANDLE hNamedPipe = cpu->fn_arg(cpu, 0);
	LPVOID lpInBuffer = cpu->fn_arg(cpu, 1);
	DWORD nInBufferSize = cpu->fn_arg(cpu, 2);
	LPVOID lpOutBuffer = cpu->fn_arg(cpu, 3);
	DWORD nOutBufferSize = cpu->fn_arg(cpu, 4);
	LPDWORD lpBytesRead = cpu->fn_arg(cpu, 5);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 6);
	printf("\nCalling KERNEL32!TransactNamedPipe(%p, %p, %p, %p, %p, %p, %p)", hNamedPipe, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, lpOverlapped);
	return TransactNamedPipe(hNamedPipe, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesRead, lpOverlapped);
}
BOOL thunk_TransmitCommChar(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	char cChar = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!TransmitCommChar(%p, %p)", hFile, cChar);
	return TransmitCommChar(hFile, cChar);
}
LONG thunk_UnhandledExceptionFilter(CPU* cpu){
	EXCEPTION_POINTERS * ExceptionInfo = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!UnhandledExceptionFilter(%p)", ExceptionInfo);
	return UnhandledExceptionFilter(ExceptionInfo);
}
BOOL thunk_UnlockFile(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwFileOffsetLow = cpu->fn_arg(cpu, 1);
	DWORD dwFileOffsetHigh = cpu->fn_arg(cpu, 2);
	DWORD nNumberOfBytesToUnlockLow = cpu->fn_arg(cpu, 3);
	DWORD nNumberOfBytesToUnlockHigh = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!UnlockFile(%p, %p, %p, %p, %p)", hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh);
	return UnlockFile(hFile, dwFileOffsetLow, dwFileOffsetHigh, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh);
}
BOOL thunk_UnlockFileEx(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	DWORD dwReserved = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToUnlockLow = cpu->fn_arg(cpu, 2);
	DWORD nNumberOfBytesToUnlockHigh = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!UnlockFileEx(%p, %p, %p, %p, %p)", hFile, dwReserved, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh, lpOverlapped);
	return UnlockFileEx(hFile, dwReserved, nNumberOfBytesToUnlockLow, nNumberOfBytesToUnlockHigh, lpOverlapped);
}
BOOL thunk_UnmapViewOfFile(CPU* cpu){
	LPCVOID lpBaseAddress = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!UnmapViewOfFile(%p)", lpBaseAddress);
	return UnmapViewOfFile(lpBaseAddress);
}
BOOL thunk_UpdateResourceA(CPU* cpu){
	HANDLE hUpdate = cpu->fn_arg(cpu, 0);
	LPCSTR lpType = cpu->fn_arg(cpu, 1);
	LPCSTR lpName = cpu->fn_arg(cpu, 2);
	WORD wLanguage = cpu->fn_arg(cpu, 3);
	LPVOID lpData = cpu->fn_arg(cpu, 4);
	DWORD cb = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!UpdateResourceA(%p, %p, %p, %p, %p, %p)", hUpdate, lpType, lpName, wLanguage, lpData, cb);
	return UpdateResourceA(hUpdate, lpType, lpName, wLanguage, lpData, cb);
}
BOOL thunk_UpdateResourceW(CPU* cpu){
	HANDLE hUpdate = cpu->fn_arg(cpu, 0);
	LPCWSTR lpType = cpu->fn_arg(cpu, 1);
	LPCWSTR lpName = cpu->fn_arg(cpu, 2);
	WORD wLanguage = cpu->fn_arg(cpu, 3);
	LPVOID lpData = cpu->fn_arg(cpu, 4);
	DWORD cb = cpu->fn_arg(cpu, 5);
	printf("\nCalling KERNEL32!UpdateResourceW(%p, %p, %p, %p, %p, %p)", hUpdate, lpType, lpName, wLanguage, lpData, cb);
	return UpdateResourceW(hUpdate, lpType, lpName, wLanguage, lpData, cb);
}
DWORD thunk_VerLanguageNameA(CPU* cpu){
	DWORD wLang = cpu->fn_arg(cpu, 0);
	LPSTR szLang = cpu->fn_arg(cpu, 1);
	DWORD cchLang = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!VerLanguageNameA(%p, %p, %p)", wLang, szLang, cchLang);
	return VerLanguageNameA(wLang, szLang, cchLang);
}
DWORD thunk_VerLanguageNameW(CPU* cpu){
	DWORD wLang = cpu->fn_arg(cpu, 0);
	LPWSTR szLang = cpu->fn_arg(cpu, 1);
	DWORD cchLang = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!VerLanguageNameW(%p, %p, %p)", wLang, szLang, cchLang);
	return VerLanguageNameW(wLang, szLang, cchLang);
}
LPVOID thunk_VirtualAlloc(CPU* cpu){
	LPVOID lpAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwSize = cpu->fn_arg(cpu, 1);
	DWORD flAllocationType = cpu->fn_arg(cpu, 2);
	DWORD flProtect = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!VirtualAlloc(%p, %p, %p, %p)", lpAddress, dwSize, flAllocationType, flProtect);
	return VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}
BOOL thunk_VirtualFree(CPU* cpu){
	LPVOID lpAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwSize = cpu->fn_arg(cpu, 1);
	DWORD dwFreeType = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!VirtualFree(%p, %p, %p)", lpAddress, dwSize, dwFreeType);
	return VirtualFree(lpAddress, dwSize, dwFreeType);
}
BOOL thunk_VirtualLock(CPU* cpu){
	LPVOID lpAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!VirtualLock(%p, %p)", lpAddress, dwSize);
	return VirtualLock(lpAddress, dwSize);
}
BOOL thunk_VirtualProtect(CPU* cpu){
	LPVOID lpAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwSize = cpu->fn_arg(cpu, 1);
	DWORD flNewProtect = cpu->fn_arg(cpu, 2);
	PDWORD lpflOldProtect = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!VirtualProtect(%p, %p, %p, %p)", lpAddress, dwSize, flNewProtect, lpflOldProtect);
	return VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}
BOOL thunk_VirtualProtectEx(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPVOID lpAddress = cpu->fn_arg(cpu, 1);
	SIZE_T dwSize = cpu->fn_arg(cpu, 2);
	DWORD flNewProtect = cpu->fn_arg(cpu, 3);
	PDWORD lpflOldProtect = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!VirtualProtectEx(%p, %p, %p, %p, %p)", hProcess, lpAddress, dwSize, flNewProtect, lpflOldProtect);
	return VirtualProtectEx(hProcess, lpAddress, dwSize, flNewProtect, lpflOldProtect);
}
SIZE_T thunk_VirtualQuery(CPU* cpu){
	LPCVOID lpAddress = cpu->fn_arg(cpu, 0);
	PMEMORY_BASIC_INFORMATION lpBuffer = cpu->fn_arg(cpu, 1);
	SIZE_T dwLength = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!VirtualQuery(%p, %p, %p)", lpAddress, lpBuffer, dwLength);
	return VirtualQuery(lpAddress, lpBuffer, dwLength);
}
SIZE_T thunk_VirtualQueryEx(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPCVOID lpAddress = cpu->fn_arg(cpu, 1);
	PMEMORY_BASIC_INFORMATION lpBuffer = cpu->fn_arg(cpu, 2);
	SIZE_T dwLength = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!VirtualQueryEx(%p, %p, %p, %p)", hProcess, lpAddress, lpBuffer, dwLength);
	return VirtualQueryEx(hProcess, lpAddress, lpBuffer, dwLength);
}
BOOL thunk_VirtualUnlock(CPU* cpu){
	LPVOID lpAddress = cpu->fn_arg(cpu, 0);
	SIZE_T dwSize = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!VirtualUnlock(%p, %p)", lpAddress, dwSize);
	return VirtualUnlock(lpAddress, dwSize);
}
BOOL thunk_WaitCommEvent(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPDWORD lpEvtMask = cpu->fn_arg(cpu, 1);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WaitCommEvent(%p, %p, %p)", hFile, lpEvtMask, lpOverlapped);
	return WaitCommEvent(hFile, lpEvtMask, lpOverlapped);
}
BOOL thunk_WaitForDebugEvent(CPU* cpu){
	LPDEBUG_EVENT lpDebugEvent = cpu->fn_arg(cpu, 0);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WaitForDebugEvent(%p, %p)", lpDebugEvent, dwMilliseconds);
	return WaitForDebugEvent(lpDebugEvent, dwMilliseconds);
}
DWORD thunk_WaitForMultipleObjects(CPU* cpu){
	DWORD nCount = cpu->fn_arg(cpu, 0);
	const HANDLE * lpHandles = cpu->fn_arg(cpu, 1);
	BOOL bWaitAll = cpu->fn_arg(cpu, 2);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WaitForMultipleObjects(%p, %p, %p, %p)", nCount, lpHandles, bWaitAll, dwMilliseconds);
	return WaitForMultipleObjects(nCount, lpHandles, bWaitAll, dwMilliseconds);
}
DWORD thunk_WaitForMultipleObjectsEx(CPU* cpu){
	DWORD nCount = cpu->fn_arg(cpu, 0);
	const HANDLE * lpHandles = cpu->fn_arg(cpu, 1);
	BOOL bWaitAll = cpu->fn_arg(cpu, 2);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 3);
	BOOL bAlertable = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WaitForMultipleObjectsEx(%p, %p, %p, %p, %p)", nCount, lpHandles, bWaitAll, dwMilliseconds, bAlertable);
	return WaitForMultipleObjectsEx(nCount, lpHandles, bWaitAll, dwMilliseconds, bAlertable);
}
DWORD thunk_WaitForSingleObject(CPU* cpu){
	HANDLE hHandle = cpu->fn_arg(cpu, 0);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WaitForSingleObject(%p, %p)", hHandle, dwMilliseconds);
	return WaitForSingleObject(hHandle, dwMilliseconds);
}
DWORD thunk_WaitForSingleObjectEx(CPU* cpu){
	HANDLE hHandle = cpu->fn_arg(cpu, 0);
	DWORD dwMilliseconds = cpu->fn_arg(cpu, 1);
	BOOL bAlertable = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WaitForSingleObjectEx(%p, %p, %p)", hHandle, dwMilliseconds, bAlertable);
	return WaitForSingleObjectEx(hHandle, dwMilliseconds, bAlertable);
}
BOOL thunk_WaitNamedPipeA(CPU* cpu){
	LPCSTR lpNamedPipeName = cpu->fn_arg(cpu, 0);
	DWORD nTimeOut = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WaitNamedPipeA(%p, %p)", lpNamedPipeName, nTimeOut);
	return WaitNamedPipeA(lpNamedPipeName, nTimeOut);
}
BOOL thunk_WaitNamedPipeW(CPU* cpu){
	LPCWSTR lpNamedPipeName = cpu->fn_arg(cpu, 0);
	DWORD nTimeOut = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WaitNamedPipeW(%p, %p)", lpNamedPipeName, nTimeOut);
	return WaitNamedPipeW(lpNamedPipeName, nTimeOut);
}
int thunk_WideCharToMultiByte(CPU* cpu){
	UINT CodePage = cpu->fn_arg(cpu, 0);
	DWORD dwFlags = cpu->fn_arg(cpu, 1);
	LPCWCH lpWideCharStr = cpu->fn_arg(cpu, 2);
	int cchWideChar = cpu->fn_arg(cpu, 3);
	LPSTR lpMultiByteStr = cpu->fn_arg(cpu, 4);
	int cbMultiByte = cpu->fn_arg(cpu, 5);
	LPCCH lpDefaultChar = cpu->fn_arg(cpu, 6);
	LPBOOL lpUsedDefaultChar = cpu->fn_arg(cpu, 7);
	printf("\nCalling KERNEL32!WideCharToMultiByte(%p, %p, %p, %p, %p, %p, %p, %p)", CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
	return WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}
UINT thunk_WinExec(CPU* cpu){
	LPCSTR lpCmdLine = cpu->fn_arg(cpu, 0);
	UINT uCmdShow = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WinExec(%p, %p)", lpCmdLine, uCmdShow);
	return WinExec(lpCmdLine, uCmdShow);
}
BOOL thunk_WriteConsoleA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const VOID * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfCharsToWrite = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfCharsWritten = cpu->fn_arg(cpu, 3);
	LPVOID lpReserved = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteConsoleA(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
	return WriteConsoleA(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
}
BOOL thunk_WriteConsoleW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const VOID * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfCharsToWrite = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfCharsWritten = cpu->fn_arg(cpu, 3);
	LPVOID lpReserved = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteConsoleW(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
	return WriteConsoleW(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, lpReserved);
}
BOOL thunk_WriteConsoleInputA(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	const INPUT_RECORD * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsWritten = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WriteConsoleInputA(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsWritten);
	return WriteConsoleInputA(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsWritten);
}
BOOL thunk_WriteConsoleInputW(CPU* cpu){
	HANDLE hConsoleInput = cpu->fn_arg(cpu, 0);
	const INPUT_RECORD * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfEventsWritten = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WriteConsoleInputW(%p, %p, %p, %p)", hConsoleInput, lpBuffer, nLength, lpNumberOfEventsWritten);
	return WriteConsoleInputW(hConsoleInput, lpBuffer, nLength, lpNumberOfEventsWritten);
}
BOOL thunk_WriteConsoleOutputA(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const CHAR_INFO * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD_PTR dwBufferSize = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwBufferCoord = cpu->fn_arg(cpu, 3);
	PSMALL_RECT lpWriteRegion = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteConsoleOutputA(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, dwBufferSize, dwBufferCoord, lpWriteRegion);
	return WriteConsoleOutputA(hConsoleOutput, lpBuffer, *(COORD*)&dwBufferSize, *(COORD*)&dwBufferCoord, lpWriteRegion);
}
BOOL thunk_WriteConsoleOutputW(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const CHAR_INFO * lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD_PTR dwBufferSize = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwBufferCoord = cpu->fn_arg(cpu, 3);
	PSMALL_RECT lpWriteRegion = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteConsoleOutputW(%p, %p, %p, %p, %p)", hConsoleOutput, lpBuffer, dwBufferSize, dwBufferCoord, lpWriteRegion);
	return WriteConsoleOutputW(hConsoleOutput, lpBuffer, *(COORD*)&dwBufferSize, *(COORD*)&dwBufferCoord, lpWriteRegion);
}
BOOL thunk_WriteConsoleOutputAttribute(CPU* cpu){
	HANDLE hConsoleOutput = cpu->fn_arg(cpu, 0);
	const WORD * lpAttribute = cpu->fn_arg(cpu, 1);
	DWORD nLength = cpu->fn_arg(cpu, 2);
	DWORD_PTR dwWriteCoord = cpu->fn_arg(cpu, 3);
	LPDWORD lpNumberOfAttrsWritten = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteConsoleOutputAttribute(%p, %p, %p, %p, %p)", hConsoleOutput, lpAttribute, nLength, dwWriteCoord, lpNumberOfAttrsWritten);
	return WriteConsoleOutputAttribute(hConsoleOutput, lpAttribute, nLength, *(COORD*)&dwWriteCoord, lpNumberOfAttrsWritten);
}
BOOL thunk_WriteFile(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToWrite = cpu->fn_arg(cpu, 2);
	LPDWORD lpNumberOfBytesWritten = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteFile(%p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
	return WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}
BOOL thunk_WriteFileEx(CPU* cpu){
	HANDLE hFile = cpu->fn_arg(cpu, 0);
	LPCVOID lpBuffer = cpu->fn_arg(cpu, 1);
	DWORD nNumberOfBytesToWrite = cpu->fn_arg(cpu, 2);
	LPOVERLAPPED lpOverlapped = cpu->fn_arg(cpu, 3);
	LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteFileEx(%p, %p, %p, %p, %p)", hFile, lpBuffer, nNumberOfBytesToWrite, lpOverlapped, lpCompletionRoutine);
	return WriteFileEx(hFile, lpBuffer, nNumberOfBytesToWrite, lpOverlapped, lpCompletionRoutine);
}
BOOL thunk_WritePrivateProfileSectionA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpString = cpu->fn_arg(cpu, 1);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WritePrivateProfileSectionA(%p, %p, %p)", lpAppName, lpString, lpFileName);
	return WritePrivateProfileSectionA(lpAppName, lpString, lpFileName);
}
BOOL thunk_WritePrivateProfileSectionW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString = cpu->fn_arg(cpu, 1);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WritePrivateProfileSectionW(%p, %p, %p)", lpAppName, lpString, lpFileName);
	return WritePrivateProfileSectionW(lpAppName, lpString, lpFileName);
}
BOOL thunk_WritePrivateProfileStringA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpString = cpu->fn_arg(cpu, 2);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WritePrivateProfileStringA(%p, %p, %p, %p)", lpAppName, lpKeyName, lpString, lpFileName);
	return WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, lpFileName);
}
BOOL thunk_WritePrivateProfileStringW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpString = cpu->fn_arg(cpu, 2);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WritePrivateProfileStringW(%p, %p, %p, %p)", lpAppName, lpKeyName, lpString, lpFileName);
	return WritePrivateProfileStringW(lpAppName, lpKeyName, lpString, lpFileName);
}
BOOL thunk_WritePrivateProfileStructA(CPU* cpu){
	LPCSTR lpszSection = cpu->fn_arg(cpu, 0);
	LPCSTR lpszKey = cpu->fn_arg(cpu, 1);
	LPVOID lpStruct = cpu->fn_arg(cpu, 2);
	UINT uSizeStruct = cpu->fn_arg(cpu, 3);
	LPCSTR szFile = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WritePrivateProfileStructA(%p, %p, %p, %p, %p)", lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
	return WritePrivateProfileStructA(lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
}
BOOL thunk_WritePrivateProfileStructW(CPU* cpu){
	LPCWSTR lpszSection = cpu->fn_arg(cpu, 0);
	LPCWSTR lpszKey = cpu->fn_arg(cpu, 1);
	LPVOID lpStruct = cpu->fn_arg(cpu, 2);
	UINT uSizeStruct = cpu->fn_arg(cpu, 3);
	LPCWSTR szFile = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WritePrivateProfileStructW(%p, %p, %p, %p, %p)", lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
	return WritePrivateProfileStructW(lpszSection, lpszKey, lpStruct, uSizeStruct, szFile);
}
BOOL thunk_WriteProcessMemory(CPU* cpu){
	HANDLE hProcess = cpu->fn_arg(cpu, 0);
	LPVOID lpBaseAddress = cpu->fn_arg(cpu, 1);
	LPCVOID lpBuffer = cpu->fn_arg(cpu, 2);
	SIZE_T nSize = cpu->fn_arg(cpu, 3);
	SIZE_T * lpNumberOfBytesWritten = cpu->fn_arg(cpu, 4);
	printf("\nCalling KERNEL32!WriteProcessMemory(%p, %p, %p, %p, %p)", hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesWritten);
	return WriteProcessMemory(hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesWritten);
}
BOOL thunk_WriteProfileSectionA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpString = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WriteProfileSectionA(%p, %p)", lpAppName, lpString);
	return WriteProfileSectionA(lpAppName, lpString);
}
BOOL thunk_WriteProfileSectionW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!WriteProfileSectionW(%p, %p)", lpAppName, lpString);
	return WriteProfileSectionW(lpAppName, lpString);
}
BOOL thunk_WriteProfileStringA(CPU* cpu){
	LPCSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCSTR lpString = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WriteProfileStringA(%p, %p, %p)", lpAppName, lpKeyName, lpString);
	return WriteProfileStringA(lpAppName, lpKeyName, lpString);
}
BOOL thunk_WriteProfileStringW(CPU* cpu){
	LPCWSTR lpAppName = cpu->fn_arg(cpu, 0);
	LPCWSTR lpKeyName = cpu->fn_arg(cpu, 1);
	LPCWSTR lpString = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!WriteProfileStringW(%p, %p, %p)", lpAppName, lpKeyName, lpString);
	return WriteProfileStringW(lpAppName, lpKeyName, lpString);
}
DWORD thunk_WriteTapemark(CPU* cpu){
	HANDLE hDevice = cpu->fn_arg(cpu, 0);
	DWORD dwTapemarkType = cpu->fn_arg(cpu, 1);
	DWORD dwTapemarkCount = cpu->fn_arg(cpu, 2);
	BOOL bImmediate = cpu->fn_arg(cpu, 3);
	printf("\nCalling KERNEL32!WriteTapemark(%p, %p, %p, %p)", hDevice, dwTapemarkType, dwTapemarkCount, bImmediate);
	return WriteTapemark(hDevice, dwTapemarkType, dwTapemarkCount, bImmediate);
}
long thunk__hread(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	long lBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!_hread(%p, %p, %p)", hFile, lpBuffer, lBytes);
	return _hread(hFile, lpBuffer, lBytes);
}
long thunk__hwrite(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	LPCSTR lpBuffer = cpu->fn_arg(cpu, 1);
	long lBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!_hwrite(%p, %p, %p)", hFile, lpBuffer, lBytes);
	return _hwrite(hFile, lpBuffer, lBytes);
}
HFILE thunk__lopen(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	int iReadWrite = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!_lopen(%p, %p)", lpPathName, iReadWrite);
	return _lopen(lpPathName, iReadWrite);
}
HFILE thunk__lcreat(CPU* cpu){
	LPCSTR lpPathName = cpu->fn_arg(cpu, 0);
	int iAttribute = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!_lcreat(%p, %p)", lpPathName, iAttribute);
	return _lcreat(lpPathName, iAttribute);
}
int thunk__lclose(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!_lclose(%p)", hFile);
	return _lclose(hFile);
}
LONG thunk__llseek(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	LONG lOffset = cpu->fn_arg(cpu, 1);
	int iOrigin = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!_llseek(%p, %p, %p)", hFile, lOffset, iOrigin);
	return _llseek(hFile, lOffset, iOrigin);
}
UINT thunk__lread(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	LPVOID lpBuffer = cpu->fn_arg(cpu, 1);
	UINT uBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!_lread(%p, %p, %p)", hFile, lpBuffer, uBytes);
	return _lread(hFile, lpBuffer, uBytes);
}
UINT thunk__lwrite(CPU* cpu){
	HFILE hFile = cpu->fn_arg(cpu, 0);
	LPCCH lpBuffer = cpu->fn_arg(cpu, 1);
	UINT uBytes = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!_lwrite(%p, %p, %p)", hFile, lpBuffer, uBytes);
	return _lwrite(hFile, lpBuffer, uBytes);
}
LPSTR thunk_lstrcatA(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcatA(%p, %p)", lpString1, lpString2);
	return lstrcatA(lpString1, lpString2);
}
LPSTR thunk_lstrcat(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcat(%p, %p)", lpString1, lpString2);
	return lstrcat(lpString1, lpString2);
}
LPWSTR thunk_lstrcatW(CPU* cpu){
	LPWSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcatW(%p, %p)", lpString1, lpString2);
	return lstrcatW(lpString1, lpString2);
}
int thunk_lstrcmpA(CPU* cpu){
	LPCSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmpA(%p, %p)", lpString1, lpString2);
	return lstrcmpA(lpString1, lpString2);
}
int thunk_lstrcmp(CPU* cpu){
	LPCSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmp(%p, %p)", lpString1, lpString2);
	return lstrcmp(lpString1, lpString2);
}
int thunk_lstrcmpW(CPU* cpu){
	LPCWSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmpW(%p, %p)", lpString1, lpString2);
	return lstrcmpW(lpString1, lpString2);
}
int thunk_lstrcmpiA(CPU* cpu){
	LPCSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmpiA(%p, %p)", lpString1, lpString2);
	return lstrcmpiA(lpString1, lpString2);
}
int thunk_lstrcmpi(CPU* cpu){
	LPCSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmpi(%p, %p)", lpString1, lpString2);
	return lstrcmpi(lpString1, lpString2);
}
int thunk_lstrcmpiW(CPU* cpu){
	LPCWSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcmpiW(%p, %p)", lpString1, lpString2);
	return lstrcmpiW(lpString1, lpString2);
}
LPSTR thunk_lstrcpyA(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcpyA(%p, %p)", lpString1, lpString2);
	return lstrcpyA(lpString1, lpString2);
}
LPSTR thunk_lstrcpy(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcpy(%p, %p)", lpString1, lpString2);
	return lstrcpy(lpString1, lpString2);
}
LPWSTR thunk_lstrcpyW(CPU* cpu){
	LPWSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!lstrcpyW(%p, %p)", lpString1, lpString2);
	return lstrcpyW(lpString1, lpString2);
}
LPSTR thunk_lstrcpynA(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	int iMaxLength = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!lstrcpynA(%p, %p, %p)", lpString1, lpString2, iMaxLength);
	return lstrcpynA(lpString1, lpString2, iMaxLength);
}
LPSTR thunk_lstrcpyn(CPU* cpu){
	LPSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCSTR lpString2 = cpu->fn_arg(cpu, 1);
	int iMaxLength = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!lstrcpyn(%p, %p, %p)", lpString1, lpString2, iMaxLength);
	return lstrcpyn(lpString1, lpString2, iMaxLength);
}
LPWSTR thunk_lstrcpynW(CPU* cpu){
	LPWSTR lpString1 = cpu->fn_arg(cpu, 0);
	LPCWSTR lpString2 = cpu->fn_arg(cpu, 1);
	int iMaxLength = cpu->fn_arg(cpu, 2);
	printf("\nCalling KERNEL32!lstrcpynW(%p, %p, %p)", lpString1, lpString2, iMaxLength);
	return lstrcpynW(lpString1, lpString2, iMaxLength);
}
int thunk_lstrlenA(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!lstrlenA(%p)", lpString);
	return lstrlenA(lpString);
}
int thunk_lstrlen(CPU* cpu){
	LPCSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!lstrlen(%p)", lpString);
	return lstrlen(lpString);
}
int thunk_lstrlenW(CPU* cpu){
	LPCWSTR lpString = cpu->fn_arg(cpu, 0);
	printf("\nCalling KERNEL32!lstrlenW(%p)", lpString);
	return lstrlenW(lpString);
}

BOOL thunk_InitializeCriticalSectionAndSpinCount(CPU* cpu) {
	LPCRITICAL_SECTION lpCriticalSection = cpu->fn_arg(cpu, 0);
	DWORD dwSpinCount = cpu->fn_arg(cpu, 1);
	printf("\nCalling KERNEL32!InitializeCriticalSectionAndSpinCount(%p, %p)", lpCriticalSection, dwSpinCount);
	return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
