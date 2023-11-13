#include <windows.h>
#include <winternl.h>
#include "thunk_ADVAPI32.h"
#include "thunks.h"

LSTATUS thunk_RegCreateKeyExW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	LPCWSTR lpSubKey = cpu->fn_arg(cpu, 1);
	DWORD Reserved = cpu->fn_arg(cpu, 2);
	LPWSTR lpClass = cpu->fn_arg(cpu, 3);
	DWORD dwOptions = cpu->fn_arg(cpu, 4);
	REGSAM samDesired = cpu->fn_arg(cpu, 5);
	const LPSECURITY_ATTRIBUTES lpSecurityAttributes = cpu->fn_arg(cpu, 6);
	PHKEY phkResult = cpu->fn_arg(cpu, 7);
	LPDWORD lpdwDisposition = cpu->fn_arg(cpu, 8);
	printf("\nCalling ADVAPI32!RegCreateKeyExW(%p, %p, %p, %p, %p, %p, %p, %p, %p)", hKey, lpSubKey, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, phkResult, lpdwDisposition);
	return RegCreateKeyExW(hKey, lpSubKey, Reserved, lpClass, dwOptions, samDesired, lpSecurityAttributes, phkResult, lpdwDisposition);
}
LSTATUS thunk_RegQueryValueW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	LPCWSTR lpSubKey = cpu->fn_arg(cpu, 1);
	LPWSTR lpData = cpu->fn_arg(cpu, 2);
	PLONG lpcbData = cpu->fn_arg(cpu, 3);
	printf("\nCalling ADVAPI32!RegQueryValueW(%p, %p, %p, %p)", hKey, lpSubKey, lpData, lpcbData);
	return RegQueryValueW(hKey, lpSubKey, lpData, lpcbData);
}
LSTATUS thunk_RegCloseKey(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	printf("\nCalling ADVAPI32!RegCloseKey(%p)", hKey);
	return RegCloseKey(hKey);
}
LSTATUS thunk_RegSetValueExW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	LPCWSTR lpValueName = cpu->fn_arg(cpu, 1);
	DWORD Reserved = cpu->fn_arg(cpu, 2);
	DWORD dwType = cpu->fn_arg(cpu, 3);
	const BYTE* lpData = cpu->fn_arg(cpu, 4);
	DWORD cbData = cpu->fn_arg(cpu, 5);
	printf("\nCalling ADVAPI32!RegSetValueExW(%p, %p, %p, %p, %p, %p)", hKey, lpValueName, Reserved, dwType, lpData, cbData);
	return RegSetValueExW(hKey, lpValueName, Reserved, dwType, lpData, cbData);
}
BOOL thunk_OpenProcessToken(CPU* cpu) {
	HANDLE ProcessHandle = cpu->fn_arg(cpu, 0);
	DWORD DesiredAccess = cpu->fn_arg(cpu, 1);
	PHANDLE TokenHandle = cpu->fn_arg(cpu, 2);
	printf("\nCalling ADVAPI32!OpenProcessToken(%p, %p, %p)", ProcessHandle, DesiredAccess, TokenHandle);
	return OpenProcessToken(ProcessHandle, DesiredAccess, TokenHandle);
}
BOOL thunk_GetTokenInformation(CPU* cpu) {
	HANDLE TokenHandle = cpu->fn_arg(cpu, 0);
	TOKEN_INFORMATION_CLASS TokenInformationClass = cpu->fn_arg(cpu, 1);
	LPVOID TokenInformation = cpu->fn_arg(cpu, 2);
	DWORD TokenInformationLength = cpu->fn_arg(cpu, 3);
	PDWORD ReturnLength = cpu->fn_arg(cpu, 4);
	printf("\nCalling ADVAPI32!GetTokenInformation(%p, %p, %p, %p, %p)", TokenHandle, TokenInformationClass, TokenInformation, TokenInformationLength, ReturnLength);
	return GetTokenInformation(TokenHandle, TokenInformationClass, TokenInformation, TokenInformationLength, ReturnLength);
}
LSTATUS thunk_RegOpenKeyExW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	LPCWSTR lpSubKey = cpu->fn_arg(cpu, 1);
	DWORD ulOptions = cpu->fn_arg(cpu, 2);
	REGSAM samDesired = cpu->fn_arg(cpu, 3);
	PHKEY phkResult = cpu->fn_arg(cpu, 4);
	printf("\nCalling ADVAPI32!RegOpenKeyExW(%p, %p, %p, %p, %p)", hKey, lpSubKey, ulOptions, samDesired, phkResult);
	return RegOpenKeyExW(hKey, lpSubKey, ulOptions, samDesired, phkResult);
}
LSTATUS thunk_RegEnumValueW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	DWORD dwIndex = cpu->fn_arg(cpu, 1);
	LPWSTR lpValueName = cpu->fn_arg(cpu, 2);
	LPDWORD lpcchValueName = cpu->fn_arg(cpu, 3);
	LPDWORD lpReserved = cpu->fn_arg(cpu, 4);
	LPDWORD lpType = cpu->fn_arg(cpu, 5);
	LPBYTE lpData = cpu->fn_arg(cpu, 6);
	LPDWORD lpcbData = cpu->fn_arg(cpu, 7);
	printf("\nCalling ADVAPI32!RegEnumValueW(%p, %p, %p, %p, %p, %p, %p, %p)", hKey, dwIndex, lpValueName, lpcchValueName, lpReserved, lpType, lpData, lpcbData);
	return RegEnumValueW(hKey, dwIndex, lpValueName, lpcchValueName, lpReserved, lpType, lpData, lpcbData);
}
BOOL thunk_LookupAccountSidW(CPU* cpu) {
	LPCWSTR lpSystemName = cpu->fn_arg(cpu, 0);
	PSID Sid = cpu->fn_arg(cpu, 1);
	LPWSTR Name = cpu->fn_arg(cpu, 2);
	LPDWORD cchName = cpu->fn_arg(cpu, 3);
	LPWSTR ReferencedDomainName = cpu->fn_arg(cpu, 4);
	LPDWORD cchReferencedDomainName = cpu->fn_arg(cpu, 5);
	PSID_NAME_USE peUse = cpu->fn_arg(cpu, 6);
	printf("\nCalling ADVAPI32!LookupAccountSidW(%p, %p, %p, %p, %p, %p, %p)", lpSystemName, Sid, Name, cchName, ReferencedDomainName, cchReferencedDomainName, peUse);
	return LookupAccountSidW(lpSystemName, Sid, Name, cchName, ReferencedDomainName, cchReferencedDomainName, peUse);
}
LSTATUS thunk_RegQueryValueExW(CPU* cpu) {
	HKEY hKey = cpu->fn_arg(cpu, 0);
	LPCWSTR lpValueName = cpu->fn_arg(cpu, 1);
	LPDWORD lpReserved = cpu->fn_arg(cpu, 2);
	LPDWORD lpType = cpu->fn_arg(cpu, 3);
	LPBYTE lpData = cpu->fn_arg(cpu, 4);
	LPDWORD lpcbData = cpu->fn_arg(cpu, 5);
	printf("\nCalling ADVAPI32!RegQueryValueExW(%p, %p, %p, %p, %p, %p)", hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
	return RegQueryValueExW(hKey, lpValueName, lpReserved, lpType, lpData, lpcbData);
}
