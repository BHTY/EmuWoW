#pragma once
#include <windows.h>
#include <winternl.h>
#include "cpu.h"

ATOM thunk_AddAtomA(CPU* cpu);
ATOM thunk_AddAtomW(CPU* cpu);
BOOL thunk_AddConsoleAliasA(CPU* cpu);
BOOL thunk_AddConsoleAliasW(CPU* cpu);
BOOL thunk_AllocConsole(CPU* cpu);
BOOL thunk_AreFileApisANSI(CPU* cpu);
BOOL thunk_BackupRead(CPU* cpu);
BOOL thunk_BackupSeek(CPU* cpu);
BOOL thunk_BackupWrite(CPU* cpu);
BOOL thunk_Beep(CPU* cpu);
HANDLE thunk_BeginUpdateResourceA(CPU* cpu);
HANDLE thunk_BeginUpdateResourceW(CPU* cpu);
BOOL thunk_BuildCommDCBA(CPU* cpu);
BOOL thunk_BuildCommDCBAndTimeoutsA(CPU* cpu);
BOOL thunk_BuildCommDCBAndTimeoutsW(CPU* cpu);
BOOL thunk_BuildCommDCBW(CPU* cpu);
BOOL thunk_CallNamedPipeA(CPU* cpu);
BOOL thunk_CallNamedPipeW(CPU* cpu);
BOOL thunk_ClearCommBreak(CPU* cpu);
BOOL thunk_ClearCommError(CPU* cpu);
BOOL thunk_CloseHandle(CPU* cpu);
BOOL thunk_CommConfigDialogA(CPU* cpu);
BOOL thunk_CommConfigDialogW(CPU* cpu);
LONG thunk_CompareFileTime(CPU* cpu);
int thunk_CompareStringA(CPU* cpu);
int thunk_CompareStringW(CPU* cpu);
BOOL thunk_ConnectNamedPipe(CPU* cpu);
BOOL thunk_ContinueDebugEvent(CPU* cpu);
LCID thunk_ConvertDefaultLocale(CPU* cpu);
BOOL thunk_CopyFileA(CPU* cpu);
BOOL thunk_CopyFileW(CPU* cpu);
HANDLE thunk_CreateConsoleScreenBuffer(CPU* cpu);
BOOL thunk_CreateDirectoryA(CPU* cpu);
BOOL thunk_CreateDirectoryExA(CPU* cpu);
BOOL thunk_CreateDirectoryExW(CPU* cpu);
BOOL thunk_CreateDirectoryW(CPU* cpu);
HANDLE thunk_CreateEventA(CPU* cpu);
HANDLE thunk_CreateEventW(CPU* cpu);
HANDLE thunk_CreateFileA(CPU* cpu);
HANDLE thunk_CreateFileMappingA(CPU* cpu);
HANDLE thunk_CreateFileMappingW(CPU* cpu);
HANDLE thunk_CreateFileW(CPU* cpu);
HANDLE thunk_CreateIoCompletionPort(CPU* cpu);
HANDLE thunk_CreateMailslotA(CPU* cpu);
HANDLE thunk_CreateMailslotW(CPU* cpu);
HANDLE thunk_CreateMutexA(CPU* cpu);
HANDLE thunk_CreateMutexW(CPU* cpu);
HANDLE thunk_CreateNamedPipeA(CPU* cpu);
HANDLE thunk_CreateNamedPipeW(CPU* cpu);
BOOL thunk_CreatePipe(CPU* cpu);
BOOL thunk_CreateProcessA(CPU* cpu);
BOOL thunk_CreateProcessW(CPU* cpu);
HANDLE thunk_CreateRemoteThread(CPU* cpu);
HANDLE thunk_CreateSemaphoreA(CPU* cpu);
HANDLE thunk_CreateSemaphoreW(CPU* cpu);
DWORD thunk_CreateTapePartition(CPU* cpu);
HANDLE thunk_CreateThread(CPU* cpu);
BOOL thunk_DebugActiveProcess(CPU* cpu);
VOID thunk_DebugBreak(CPU* cpu);
BOOL thunk_DefineDosDeviceA(CPU* cpu);
BOOL thunk_DefineDosDeviceW(CPU* cpu);
ATOM thunk_DeleteAtom(CPU* cpu);
VOID thunk_DeleteCriticalSection(CPU* cpu);
BOOL thunk_DeleteFileA(CPU* cpu);
BOOL thunk_DeleteFileW(CPU* cpu);
BOOL thunk_DeviceIoControl(CPU* cpu);
BOOL thunk_DisableThreadLibraryCalls(CPU* cpu);
BOOL thunk_DisconnectNamedPipe(CPU* cpu);
BOOL thunk_DosDateTimeToFileTime(CPU* cpu);
BOOL thunk_DuplicateHandle(CPU* cpu);
BOOL thunk_EndUpdateResourceA(CPU* cpu);
BOOL thunk_EndUpdateResourceW(CPU* cpu);
VOID thunk_EnterCriticalSection(CPU* cpu);
BOOL thunk_EnumCalendarInfoA(CPU* cpu);
BOOL thunk_EnumCalendarInfoW(CPU* cpu);
BOOL thunk_EnumDateFormatsA(CPU* cpu);
BOOL thunk_EnumDateFormatsW(CPU* cpu);
BOOL thunk_EnumResourceLanguagesA(CPU* cpu);
BOOL thunk_EnumResourceLanguagesW(CPU* cpu);
BOOL thunk_EnumResourceNamesA(CPU* cpu);
BOOL thunk_EnumResourceNamesW(CPU* cpu);
BOOL thunk_EnumResourceTypesA(CPU* cpu);
BOOL thunk_EnumResourceTypesW(CPU* cpu);
BOOL thunk_EnumSystemCodePagesA(CPU* cpu);
BOOL thunk_EnumSystemCodePagesW(CPU* cpu);
BOOL thunk_EnumSystemLocalesA(CPU* cpu);
BOOL thunk_EnumSystemLocalesW(CPU* cpu);
BOOL thunk_EnumTimeFormatsA(CPU* cpu);
BOOL thunk_EnumTimeFormatsW(CPU* cpu);
DWORD thunk_EraseTape(CPU* cpu);
BOOL thunk_EscapeCommFunction(CPU* cpu);
VOID thunk_ExitProcess(CPU* cpu);
VOID thunk_ExitThread(CPU* cpu);
DWORD thunk_ExpandEnvironmentStringsA(CPU* cpu);
DWORD thunk_ExpandEnvironmentStringsW(CPU* cpu);
VOID thunk_FatalAppExitA(CPU* cpu);
VOID thunk_FatalAppExitW(CPU* cpu);
VOID thunk_FatalExit(CPU* cpu);
BOOL thunk_FileTimeToDosDateTime(CPU* cpu);
BOOL thunk_FileTimeToLocalFileTime(CPU* cpu);
BOOL thunk_FileTimeToSystemTime(CPU* cpu);
BOOL thunk_FillConsoleOutputAttribute(CPU* cpu);
BOOL thunk_FillConsoleOutputCharacterA(CPU* cpu);
BOOL thunk_FillConsoleOutputCharacterW(CPU* cpu);
ATOM thunk_FindAtomA(CPU* cpu);
ATOM thunk_FindAtomW(CPU* cpu);
BOOL thunk_FindClose(CPU* cpu);
BOOL thunk_FindCloseChangeNotification(CPU* cpu);
HANDLE thunk_FindFirstChangeNotificationA(CPU* cpu);
HANDLE thunk_FindFirstChangeNotificationW(CPU* cpu);
HANDLE thunk_FindFirstFileA(CPU* cpu);
HANDLE thunk_FindFirstFileW(CPU* cpu);
BOOL thunk_FindNextChangeNotification(CPU* cpu);
BOOL thunk_FindNextFileA(CPU* cpu);
BOOL thunk_FindNextFileW(CPU* cpu);
HRSRC thunk_FindResourceA(CPU* cpu);
HRSRC thunk_FindResourceExA(CPU* cpu);
HRSRC thunk_FindResourceExW(CPU* cpu);
HRSRC thunk_FindResourceW(CPU* cpu);
BOOL thunk_FlushConsoleInputBuffer(CPU* cpu);
BOOL thunk_FlushFileBuffers(CPU* cpu);
BOOL thunk_FlushInstructionCache(CPU* cpu);
BOOL thunk_FlushViewOfFile(CPU* cpu);
int thunk_FoldStringA(CPU* cpu);
int thunk_FoldStringW(CPU* cpu);
DWORD thunk_FormatMessageA(CPU* cpu);
DWORD thunk_FormatMessageW(CPU* cpu);
BOOL thunk_FreeConsole(CPU* cpu);
BOOL thunk_FreeEnvironmentStringsA(CPU* cpu);
BOOL thunk_FreeEnvironmentStrings(CPU* cpu);
BOOL thunk_FreeEnvironmentStringsW(CPU* cpu);
BOOL thunk_FreeLibrary(CPU* cpu);
VOID thunk_FreeLibraryAndExitThread(CPU* cpu);
BOOL thunk_FreeResource(CPU* cpu);
BOOL thunk_GenerateConsoleCtrlEvent(CPU* cpu);
UINT thunk_GetACP(CPU* cpu);
UINT thunk_GetAtomNameA(CPU* cpu);
UINT thunk_GetAtomNameW(CPU* cpu);
BOOL thunk_GetBinaryTypeA(CPU* cpu);
BOOL thunk_GetBinaryType(CPU* cpu);
BOOL thunk_GetBinaryTypeW(CPU* cpu);
BOOL thunk_GetCPInfo(CPU* cpu);
BOOL thunk_GetCommConfig(CPU* cpu);
BOOL thunk_GetCommMask(CPU* cpu);
BOOL thunk_GetCommModemStatus(CPU* cpu);
BOOL thunk_GetCommProperties(CPU* cpu);
BOOL thunk_GetCommState(CPU* cpu);
BOOL thunk_GetCommTimeouts(CPU* cpu);
LPSTR thunk_GetCommandLineA(CPU* cpu);
LPWSTR thunk_GetCommandLineW(CPU* cpu);
DWORD thunk_GetCompressedFileSizeA(CPU* cpu);
DWORD thunk_GetCompressedFileSizeW(CPU* cpu);
BOOL thunk_GetComputerNameA(CPU* cpu);
BOOL thunk_GetComputerNameW(CPU* cpu);
DWORD thunk_GetConsoleAliasA(CPU* cpu);
DWORD thunk_GetConsoleAliasW(CPU* cpu);
DWORD thunk_GetConsoleAliasExesA(CPU* cpu);
DWORD thunk_GetConsoleAliasExesW(CPU* cpu);
DWORD thunk_GetConsoleAliasExesLengthA(CPU* cpu);
DWORD thunk_GetConsoleAliasExesLengthW(CPU* cpu);
DWORD thunk_GetConsoleAliasesA(CPU* cpu);
DWORD thunk_GetConsoleAliasesW(CPU* cpu);
DWORD thunk_GetConsoleAliasesLengthA(CPU* cpu);
DWORD thunk_GetConsoleAliasesLengthW(CPU* cpu);
UINT thunk_GetConsoleCP(CPU* cpu);
BOOL thunk_GetConsoleCursorInfo(CPU* cpu);
BOOL thunk_GetConsoleDisplayMode(CPU* cpu);
COORD thunk_GetConsoleFontSize(CPU* cpu);
BOOL thunk_GetConsoleMode(CPU* cpu);
UINT thunk_GetConsoleOutputCP(CPU* cpu);
BOOL thunk_GetConsoleScreenBufferInfo(CPU* cpu);
DWORD thunk_GetConsoleTitleA(CPU* cpu);
DWORD thunk_GetConsoleTitleW(CPU* cpu);
BOOL thunk_GetCurrentConsoleFont(CPU* cpu);
DWORD thunk_GetCurrentDirectoryA(CPU* cpu);
DWORD thunk_GetCurrentDirectoryW(CPU* cpu);
HANDLE thunk_GetCurrentProcess(CPU* cpu);
DWORD thunk_GetCurrentProcessId(CPU* cpu);
HANDLE thunk_GetCurrentThread(CPU* cpu);
DWORD thunk_GetCurrentThreadId(CPU* cpu);
int thunk_GetDateFormatA(CPU* cpu);
int thunk_GetDateFormatW(CPU* cpu);
BOOL thunk_GetDefaultCommConfigA(CPU* cpu);
BOOL thunk_GetDefaultCommConfigW(CPU* cpu);
BOOL thunk_GetDiskFreeSpaceA(CPU* cpu);
BOOL thunk_GetDiskFreeSpaceW(CPU* cpu);
UINT thunk_GetDriveTypeA(CPU* cpu);
UINT thunk_GetDriveTypeW(CPU* cpu);
LPCH thunk_GetEnvironmentStrings(CPU* cpu);
LPWCH thunk_GetEnvironmentStringsW(CPU* cpu);
DWORD thunk_GetEnvironmentVariableA(CPU* cpu);
DWORD thunk_GetEnvironmentVariableW(CPU* cpu);
BOOL thunk_GetExitCodeProcess(CPU* cpu);
BOOL thunk_GetExitCodeThread(CPU* cpu);
DWORD thunk_GetFileAttributesA(CPU* cpu);
DWORD thunk_GetFileAttributesW(CPU* cpu);
BOOL thunk_GetFileInformationByHandle(CPU* cpu);
DWORD thunk_GetFileSize(CPU* cpu);
BOOL thunk_GetFileTime(CPU* cpu);
DWORD thunk_GetFileType(CPU* cpu);
DWORD thunk_GetFullPathNameA(CPU* cpu);
DWORD thunk_GetFullPathNameW(CPU* cpu);
BOOL thunk_GetHandleInformation(CPU* cpu);
COORD thunk_GetLargestConsoleWindowSize(CPU* cpu);
DWORD thunk_GetLastError(CPU* cpu);
VOID thunk_GetLocalTime(CPU* cpu);
int thunk_GetLocaleInfoA(CPU* cpu);
int thunk_GetLocaleInfoW(CPU* cpu);
DWORD thunk_GetLogicalDriveStringsA(CPU* cpu);
DWORD thunk_GetLogicalDriveStringsW(CPU* cpu);
BOOL thunk_GetMailslotInfo(CPU* cpu);
DWORD thunk_GetModuleFileNameA(CPU* cpu);
DWORD thunk_GetModuleFileNameW(CPU* cpu);
HMODULE thunk_GetModuleHandleA(CPU* cpu);
HMODULE thunk_GetModuleHandleW(CPU* cpu);
BOOL thunk_GetNamedPipeHandleStateA(CPU* cpu);
BOOL thunk_GetNamedPipeHandleStateW(CPU* cpu);
BOOL thunk_GetNamedPipeInfo(CPU* cpu);
int thunk_GetNumberFormatA(CPU* cpu);
int thunk_GetNumberFormatW(CPU* cpu);
BOOL thunk_GetNumberOfConsoleInputEvents(CPU* cpu);
BOOL thunk_GetNumberOfConsoleMouseButtons(CPU* cpu);
UINT thunk_GetOEMCP(CPU* cpu);
BOOL thunk_GetOverlappedResult(CPU* cpu);
DWORD thunk_GetPriorityClass(CPU* cpu);
UINT thunk_GetPrivateProfileIntA(CPU* cpu);
UINT thunk_GetPrivateProfileIntW(CPU* cpu);
DWORD thunk_GetPrivateProfileSectionA(CPU* cpu);
DWORD thunk_GetPrivateProfileSectionW(CPU* cpu);
DWORD thunk_GetPrivateProfileSectionNamesA(CPU* cpu);
DWORD thunk_GetPrivateProfileSectionNamesW(CPU* cpu);
DWORD thunk_GetPrivateProfileStringA(CPU* cpu);
DWORD thunk_GetPrivateProfileStringW(CPU* cpu);
BOOL thunk_GetPrivateProfileStructA(CPU* cpu);
BOOL thunk_GetPrivateProfileStructW(CPU* cpu);
FARPROC thunk_GetProcAddress(CPU* cpu);
BOOL thunk_GetProcessAffinityMask(CPU* cpu);
HANDLE thunk_GetProcessHeap(CPU* cpu);
DWORD thunk_GetProcessHeaps(CPU* cpu);
BOOL thunk_GetProcessShutdownParameters(CPU* cpu);
BOOL thunk_GetProcessTimes(CPU* cpu);
DWORD thunk_GetProcessVersion(CPU* cpu);
BOOL thunk_GetProcessWorkingSetSize(CPU* cpu);
UINT thunk_GetProfileIntA(CPU* cpu);
UINT thunk_GetProfileIntW(CPU* cpu);
DWORD thunk_GetProfileSectionA(CPU* cpu);
DWORD thunk_GetProfileSectionW(CPU* cpu);
DWORD thunk_GetProfileStringA(CPU* cpu);
DWORD thunk_GetProfileStringW(CPU* cpu);
BOOL thunk_GetQueuedCompletionStatus(CPU* cpu);
DWORD thunk_GetShortPathNameA(CPU* cpu);
DWORD thunk_GetShortPathNameW(CPU* cpu);
VOID thunk_GetStartupInfo(CPU* cpu);
VOID thunk_GetStartupInfoA(CPU* cpu);
VOID thunk_GetStartupInfoW(CPU* cpu);
HANDLE thunk_GetStdHandle(CPU* cpu);
BOOL thunk_GetStringTypeA(CPU* cpu);
BOOL thunk_GetStringTypeExW(CPU* cpu);
BOOL thunk_GetStringTypeExA(CPU* cpu);
BOOL thunk_GetStringTypeW(CPU* cpu);
LCID thunk_GetSystemDefaultLCID(CPU* cpu);
LANGID thunk_GetSystemDefaultLangID(CPU* cpu);
UINT thunk_GetSystemDirectoryA(CPU* cpu);
UINT thunk_GetSystemDirectoryW(CPU* cpu);
VOID thunk_GetSystemInfo(CPU* cpu);
BOOL thunk_GetSystemPowerStatus(CPU* cpu);
VOID thunk_GetSystemTime(CPU* cpu);
BOOL thunk_GetSystemTimeAdjustment(CPU* cpu);
VOID thunk_GetSystemTimeAsFileTime(CPU* cpu);
UINT thunk_GetTempFileNameA(CPU* cpu);
UINT thunk_GetTempFileNameW(CPU* cpu);
BOOL thunk_GetThreadContext(CPU* cpu);
LCID thunk_GetThreadLocale(CPU* cpu);
int thunk_GetThreadPriority(CPU* cpu);
BOOL thunk_GetThreadSelectorEntry(CPU* cpu);
BOOL thunk_GetThreadTimes(CPU* cpu);
DWORD thunk_GetTickCount(CPU* cpu);
int thunk_GetTimeFormatA(CPU* cpu);
int thunk_GetTimeFormatW(CPU* cpu);
DWORD thunk_GetTimeZoneInformation(CPU* cpu);
LCID thunk_GetUserDefaultLCID(CPU* cpu);
LANGID thunk_GetUserDefaultLangID(CPU* cpu);
DWORD thunk_GetVersion(CPU* cpu);
BOOL thunk_GetVersionExA(CPU* cpu);
BOOL thunk_GetVersionExW(CPU* cpu);
BOOL thunk_GetVolumeInformationA(CPU* cpu);
BOOL thunk_GetVolumeInformationW(CPU* cpu);
UINT thunk_GetWindowsDirectoryA(CPU* cpu);
UINT thunk_GetWindowsDirectoryW(CPU* cpu);
ATOM thunk_GlobalAddAtomA(CPU* cpu);
ATOM thunk_GlobalAddAtomW(CPU* cpu);
HGLOBAL thunk_GlobalAlloc(CPU* cpu);
ATOM thunk_GlobalDeleteAtom(CPU* cpu);
ATOM thunk_GlobalFindAtomA(CPU* cpu);
ATOM thunk_GlobalFindAtomW(CPU* cpu);
UINT thunk_GlobalFlags(CPU* cpu);
HGLOBAL thunk_GlobalFree(CPU* cpu);
UINT thunk_GlobalGetAtomNameA(CPU* cpu);
UINT thunk_GlobalGetAtomNameW(CPU* cpu);
HGLOBAL thunk_GlobalHandle(CPU* cpu);
LPVOID thunk_GlobalLock(CPU* cpu);
VOID thunk_GlobalMemoryStatus(CPU* cpu);
HGLOBAL thunk_GlobalReAlloc(CPU* cpu);
SIZE_T thunk_GlobalSize(CPU* cpu);
BOOL thunk_GlobalUnlock(CPU* cpu);
LPVOID thunk_HeapAlloc(CPU* cpu);
SIZE_T thunk_HeapCompact(CPU* cpu);
HANDLE thunk_HeapCreate(CPU* cpu);
BOOL thunk_HeapDestroy(CPU* cpu);
BOOL thunk_HeapFree(CPU* cpu);
BOOL thunk_HeapLock(CPU* cpu);
LPVOID thunk_HeapReAlloc(CPU* cpu);
SIZE_T thunk_HeapSize(CPU* cpu);
BOOL thunk_HeapSummary(CPU* cpu);
BOOL thunk_HeapUnlock(CPU* cpu);
BOOL thunk_HeapValidate(CPU* cpu);
BOOL thunk_HeapWalk(CPU* cpu);
BOOL thunk_InitAtomTable(CPU* cpu);
VOID thunk_InitializeCriticalSection(CPU* cpu);
LONG thunk_InterlockedDecrement(CPU* cpu);
LONG thunk_InterlockedExchange(CPU* cpu);
LONG thunk_InterlockedIncrement(CPU* cpu);
BOOL thunk_IsBadCodePtr(CPU* cpu);
BOOL thunk_IsBadHugeReadPtr(CPU* cpu);
BOOL thunk_IsBadHugeWritePtr(CPU* cpu);
BOOL thunk_IsBadReadPtr(CPU* cpu);
BOOL thunk_IsBadStringPtrA(CPU* cpu);
BOOL thunk_IsBadStringPtrW(CPU* cpu);
BOOL thunk_IsBadWritePtr(CPU* cpu);
BOOL thunk_IsDBCSLeadByte(CPU* cpu);
BOOL thunk_IsDBCSLeadByteEx(CPU* cpu);
BOOL thunk_IsDebuggerPresent(CPU* cpu);
BOOL thunk_IsValidCodePage(CPU* cpu);
BOOL thunk_IsValidLocale(CPU* cpu);
int thunk_LCMapStringA(CPU* cpu);
int thunk_LCMapStringW(CPU* cpu);
VOID thunk_LeaveCriticalSection(CPU* cpu);
HMODULE thunk_LoadLibraryA(CPU* cpu);
HMODULE thunk_LoadLibraryExA(CPU* cpu);
HMODULE thunk_LoadLibraryExW(CPU* cpu);
HMODULE thunk_LoadLibraryW(CPU* cpu);
DWORD thunk_LoadModule(CPU* cpu);
HGLOBAL thunk_LoadResource(CPU* cpu);
HLOCAL thunk_LocalAlloc(CPU* cpu);
SIZE_T thunk_LocalCompact(CPU* cpu);
BOOL thunk_LocalFileTimeToFileTime(CPU* cpu);
UINT thunk_LocalFlags(CPU* cpu);
HLOCAL thunk_LocalFree(CPU* cpu);
HLOCAL thunk_LocalHandle(CPU* cpu);
LPVOID thunk_LocalLock(CPU* cpu);
HLOCAL thunk_LocalReAlloc(CPU* cpu);
SIZE_T thunk_LocalSize(CPU* cpu);
BOOL thunk_LocalUnlock(CPU* cpu);
BOOL thunk_LockFile(CPU* cpu);
BOOL thunk_LockFileEx(CPU* cpu);
LPVOID thunk_LockResource(CPU* cpu);
LPVOID thunk_MapViewOfFile(CPU* cpu);
LPVOID thunk_MapViewOfFileEx(CPU* cpu);
BOOL thunk_MoveFileA(CPU* cpu);
BOOL thunk_MoveFileExA(CPU* cpu);
BOOL thunk_MoveFileExW(CPU* cpu);
BOOL thunk_MoveFileW(CPU* cpu);
int thunk_MulDiv(CPU* cpu);
int thunk_MultiByteToWideChar(CPU* cpu);
HANDLE thunk_OpenEventA(CPU* cpu);
HANDLE thunk_OpenEventW(CPU* cpu);
HFILE thunk_OpenFile(CPU* cpu);
HANDLE thunk_OpenFileMappingA(CPU* cpu);
HANDLE thunk_OpenFileMappingW(CPU* cpu);
HANDLE thunk_OpenMutexA(CPU* cpu);
HANDLE thunk_OpenMutexW(CPU* cpu);
HANDLE thunk_OpenProcess(CPU* cpu);
HANDLE thunk_OpenSemaphoreA(CPU* cpu);
HANDLE thunk_OpenSemaphoreW(CPU* cpu);
VOID thunk_OutputDebugStringA(CPU* cpu);
VOID thunk_OutputDebugStringW(CPU* cpu);
BOOL thunk_PeekConsoleInputA(CPU* cpu);
BOOL thunk_PeekConsoleInputW(CPU* cpu);
BOOL thunk_PeekNamedPipe(CPU* cpu);
BOOL thunk_PostQueuedCompletionStatus(CPU* cpu);
DWORD thunk_PrepareTape(CPU* cpu);
BOOL thunk_PulseEvent(CPU* cpu);
BOOL thunk_PurgeComm(CPU* cpu);
DWORD thunk_QueryDosDeviceA(CPU* cpu);
DWORD thunk_QueryDosDeviceW(CPU* cpu);
BOOL thunk_QueryPerformanceCounter(CPU* cpu);
BOOL thunk_QueryPerformanceFrequency(CPU* cpu);
VOID thunk_RaiseException(CPU* cpu);
BOOL thunk_ReadConsoleA(CPU* cpu);
BOOL thunk_ReadConsoleW(CPU* cpu);
BOOL thunk_ReadConsoleInputA(CPU* cpu);
BOOL thunk_ReadConsoleInputW(CPU* cpu);
BOOL thunk_ReadConsoleOutputA(CPU* cpu);
BOOL thunk_ReadConsoleOutputW(CPU* cpu);
BOOL thunk_ReadConsoleOutputAttribute(CPU* cpu);
BOOL thunk_ReadConsoleOutputCharacterA(CPU* cpu);
BOOL thunk_ReadConsoleOutputCharacterW(CPU* cpu);
BOOL thunk_ReadFile(CPU* cpu);
BOOL thunk_ReadFileEx(CPU* cpu);
BOOL thunk_ReadProcessMemory(CPU* cpu);
BOOL thunk_ReleaseMutex(CPU* cpu);
BOOL thunk_ReleaseSemaphore(CPU* cpu);
BOOL thunk_RemoveDirectoryA(CPU* cpu);
BOOL thunk_RemoveDirectoryW(CPU* cpu);
BOOL thunk_ResetEvent(CPU* cpu);
DWORD thunk_ResumeThread(CPU* cpu);
VOID thunk_RtlFillMemory(CPU* cpu);
VOID thunk_RtlMoveMemory(CPU* cpu);
VOID thunk_RtlUnwind(CPU* cpu);
VOID thunk_RtlZeroMemory(CPU* cpu);
BOOL thunk_ScrollConsoleScreenBuffer(CPU* cpu);
BOOL thunk_ScrollConsoleScreenBufferA(CPU* cpu);
BOOL thunk_ScrollConsoleScreenBufferW(CPU* cpu);
DWORD thunk_SearchPathA(CPU* cpu);
DWORD thunk_SearchPathW(CPU* cpu);
BOOL thunk_SetCommBreak(CPU* cpu);
BOOL thunk_SetCommConfig(CPU* cpu);
BOOL thunk_SetCommMask(CPU* cpu);
BOOL thunk_SetCommState(CPU* cpu);
BOOL thunk_SetCommTimeouts(CPU* cpu);
BOOL thunk_SetComputerNameA(CPU* cpu);
BOOL thunk_SetComputerNameW(CPU* cpu);
BOOL thunk_SetConsoleActiveScreenBuffer(CPU* cpu);
BOOL thunk_SetConsoleCP(CPU* cpu);
BOOL thunk_SetConsoleCtrlHandler(CPU* cpu);
BOOL thunk_SetConsoleCursorInfo(CPU* cpu);
BOOL thunk_SetConsoleCursorPosition(CPU* cpu);
BOOL thunk_SetConsoleDisplayMode(CPU* cpu);
BOOL thunk_SetConsoleMode(CPU* cpu);
BOOL thunk_SetConsoleOutputCP(CPU* cpu);
BOOL thunk_SetConsoleScreenBufferSize(CPU* cpu);
BOOL thunk_SetConsoleTextAttribute(CPU* cpu);
BOOL thunk_SetConsoleTitleA(CPU* cpu);
BOOL thunk_SetConsoleTitleW(CPU* cpu);
BOOL thunk_SetConsoleWindowInfo(CPU* cpu);
BOOL thunk_SetCurrentDirectoryA(CPU* cpu);
BOOL thunk_SetCurrentDirectoryW(CPU* cpu);
BOOL thunk_SetDefaultCommConfigA(CPU* cpu);
BOOL thunk_SetDefaultCommConfigW(CPU* cpu);
BOOL thunk_SetEndOfFile(CPU* cpu);
BOOL thunk_SetEnvironmentVariableA(CPU* cpu);
BOOL thunk_SetEnvironmentVariableW(CPU* cpu);
UINT thunk_SetErrorMode(CPU* cpu);
BOOL thunk_SetEvent(CPU* cpu);
VOID thunk_SetFileApisToANSI(CPU* cpu);
VOID thunk_SetFileApisToOEM(CPU* cpu);
BOOL thunk_SetFileAttributesA(CPU* cpu);
BOOL thunk_SetFileAttributesW(CPU* cpu);
DWORD thunk_SetFilePointer(CPU* cpu);
BOOL thunk_SetFileTime(CPU* cpu);
UINT thunk_SetHandleCount(CPU* cpu);
BOOL thunk_SetHandleInformation(CPU* cpu);
VOID thunk_SetLastError(CPU* cpu);
BOOL thunk_SetLocalTime(CPU* cpu);
BOOL thunk_SetLocaleInfoA(CPU* cpu);
BOOL thunk_SetLocaleInfoW(CPU* cpu);
BOOL thunk_SetMailslotInfo(CPU* cpu);
BOOL thunk_SetNamedPipeHandleState(CPU* cpu);
BOOL thunk_SetPriorityClass(CPU* cpu);
BOOL thunk_SetProcessShutdownParameters(CPU* cpu);
BOOL thunk_SetProcessWorkingSetSize(CPU* cpu);
BOOL thunk_SetStdHandle(CPU* cpu);
BOOL thunk_SetSystemPowerState(CPU* cpu);
BOOL thunk_SetSystemTime(CPU* cpu);
BOOL thunk_SetSystemTimeAdjustment(CPU* cpu);
DWORD thunk_SetTapeParameters(CPU* cpu);
DWORD thunk_SetTapePosition(CPU* cpu);
DWORD_PTR thunk_SetThreadAffinityMask(CPU* cpu);
BOOL thunk_SetThreadContext(CPU* cpu);
BOOL thunk_SetThreadLocale(CPU* cpu);
BOOL thunk_SetThreadPriority(CPU* cpu);
BOOL thunk_SetTimeZoneInformation(CPU* cpu);
LPTOP_LEVEL_EXCEPTION_FILTER thunk_SetUnhandledExceptionFilter(CPU* cpu);
BOOL thunk_SetVolumeLabelA(CPU* cpu);
BOOL thunk_SetVolumeLabelW(CPU* cpu);
BOOL thunk_SetupComm(CPU* cpu);
DWORD thunk_SizeofResource(CPU* cpu);
VOID thunk_Sleep(CPU* cpu);
DWORD thunk_SleepEx(CPU* cpu);
DWORD thunk_SuspendThread(CPU* cpu);
BOOL thunk_SystemTimeToFileTime(CPU* cpu);
BOOL thunk_SystemTimeToTzSpecificLocalTime(CPU* cpu);
BOOL thunk_TerminateProcess(CPU* cpu);
BOOL thunk_TerminateThread(CPU* cpu);
DWORD thunk_TlsAlloc(CPU* cpu);
BOOL thunk_TlsFree(CPU* cpu);
LPVOID thunk_TlsGetValue(CPU* cpu);
BOOL thunk_TlsSetValue(CPU* cpu);
BOOL thunk_TransactNamedPipe(CPU* cpu);
BOOL thunk_TransmitCommChar(CPU* cpu);
LONG thunk_UnhandledExceptionFilter(CPU* cpu);
BOOL thunk_UnlockFile(CPU* cpu);
BOOL thunk_UnlockFileEx(CPU* cpu);
BOOL thunk_UnmapViewOfFile(CPU* cpu);
BOOL thunk_UpdateResourceA(CPU* cpu);
BOOL thunk_UpdateResourceW(CPU* cpu);
DWORD thunk_VerLanguageNameA(CPU* cpu);
DWORD thunk_VerLanguageNameW(CPU* cpu);
LPVOID thunk_VirtualAlloc(CPU* cpu);
BOOL thunk_VirtualFree(CPU* cpu);
BOOL thunk_VirtualLock(CPU* cpu);
BOOL thunk_VirtualProtect(CPU* cpu);
BOOL thunk_VirtualProtectEx(CPU* cpu);
SIZE_T thunk_VirtualQuery(CPU* cpu);
SIZE_T thunk_VirtualQueryEx(CPU* cpu);
BOOL thunk_VirtualUnlock(CPU* cpu);
BOOL thunk_WaitCommEvent(CPU* cpu);
BOOL thunk_WaitForDebugEvent(CPU* cpu);
DWORD thunk_WaitForMultipleObjects(CPU* cpu);
DWORD thunk_WaitForMultipleObjectsEx(CPU* cpu);
DWORD thunk_WaitForSingleObject(CPU* cpu);
DWORD thunk_WaitForSingleObjectEx(CPU* cpu);
BOOL thunk_WaitNamedPipeA(CPU* cpu);
BOOL thunk_WaitNamedPipeW(CPU* cpu);
int thunk_WideCharToMultiByte(CPU* cpu);
UINT thunk_WinExec(CPU* cpu);
BOOL thunk_WriteConsoleA(CPU* cpu);
BOOL thunk_WriteConsoleW(CPU* cpu);
BOOL thunk_WriteConsoleInputA(CPU* cpu);
BOOL thunk_WriteConsoleInputW(CPU* cpu);
BOOL thunk_WriteConsoleOutputA(CPU* cpu);
BOOL thunk_WriteConsoleOutputW(CPU* cpu);
BOOL thunk_WriteConsoleOutputAttribute(CPU* cpu);
BOOL thunk_WriteFile(CPU* cpu);
BOOL thunk_WriteFileEx(CPU* cpu);
BOOL thunk_WritePrivateProfileSectionA(CPU* cpu);
BOOL thunk_WritePrivateProfileSectionW(CPU* cpu);
BOOL thunk_WritePrivateProfileStringA(CPU* cpu);
BOOL thunk_WritePrivateProfileStringW(CPU* cpu);
BOOL thunk_WritePrivateProfileStructA(CPU* cpu);
BOOL thunk_WritePrivateProfileStructW(CPU* cpu);
BOOL thunk_WriteProcessMemory(CPU* cpu);
BOOL thunk_WriteProfileSectionA(CPU* cpu);
BOOL thunk_WriteProfileSectionW(CPU* cpu);
BOOL thunk_WriteProfileStringA(CPU* cpu);
BOOL thunk_WriteProfileStringW(CPU* cpu);
DWORD thunk_WriteTapemark(CPU* cpu);
long thunk__hread(CPU* cpu);
long thunk__hwrite(CPU* cpu);
HFILE thunk__lopen(CPU* cpu);
HFILE thunk__lcreat(CPU* cpu);
int thunk__lclose(CPU* cpu);
LONG thunk__llseek(CPU* cpu);
UINT thunk__lread(CPU* cpu);
UINT thunk__lwrite(CPU* cpu);
LPSTR thunk_lstrcatA(CPU* cpu);
LPSTR thunk_lstrcat(CPU* cpu);
LPWSTR thunk_lstrcatW(CPU* cpu);
int thunk_lstrcmpA(CPU* cpu);
int thunk_lstrcmp(CPU* cpu);
int thunk_lstrcmpW(CPU* cpu);
int thunk_lstrcmpiA(CPU* cpu);
int thunk_lstrcmpi(CPU* cpu);
int thunk_lstrcmpiW(CPU* cpu);
LPSTR thunk_lstrcpyA(CPU* cpu);
LPSTR thunk_lstrcpy(CPU* cpu);
LPWSTR thunk_lstrcpyW(CPU* cpu);
LPSTR thunk_lstrcpynA(CPU* cpu);
LPSTR thunk_lstrcpyn(CPU* cpu);
LPWSTR thunk_lstrcpynW(CPU* cpu);
int thunk_lstrlenA(CPU* cpu);
int thunk_lstrlen(CPU* cpu);
int thunk_lstrlenW(CPU* cpu);
BOOL thunk_InitializeCriticalSectionAndSpinCount(CPU* cpu);
