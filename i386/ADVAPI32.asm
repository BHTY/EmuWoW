global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

global RegCreateKeyExW
extern RegCreateKeyExW
export RegCreateKeyExW

RegCreateKeyExW:
	mov eax, THUNK_ADVAPI32_REGCREATEKEYEXW
	int SYSCALL_THUNK
	ret 0x24

global RegQueryValueW
extern RegQueryValueW
export RegQueryValueW

RegQueryValueW:
	mov eax, THUNK_ADVAPI32_REGQUERYVALUEW
	int SYSCALL_THUNK
	ret 0x10

global RegCloseKey
extern RegCloseKey
export RegCloseKey

RegCloseKey:
	mov eax, THUNK_ADVAPI32_REGCLOSEKEY
	int SYSCALL_THUNK
	ret 0x4

global RegSetValueExW
extern RegSetValueExW
export RegSetValueExW

RegSetValueExW:
	mov eax, THUNK_ADVAPI32_REGSETVALUEEXW
	int SYSCALL_THUNK
	ret 0x18

global OpenProcessToken
extern OpenProcessToken
export OpenProcessToken

OpenProcessToken:
	mov eax, THUNK_ADVAPI32_OPENPROCESSTOKEN
	int SYSCALL_THUNK
	ret 0xc

global GetTokenInformation
extern GetTokenInformation
export GetTokenInformation

GetTokenInformation:
	mov eax, THUNK_ADVAPI32_GETTOKENINFORMATION
	int SYSCALL_THUNK
	ret 0x14

global RegOpenKeyExW
extern RegOpenKeyExW
export RegOpenKeyExW

RegOpenKeyExW:
	mov eax, THUNK_ADVAPI32_REGOPENKEYEXW
	int SYSCALL_THUNK
	ret 0x14

global RegEnumValueW
extern RegEnumValueW
export RegEnumValueW

RegEnumValueW:
	mov eax, THUNK_ADVAPI32_REGENUMVALUEW
	int SYSCALL_THUNK
	ret 0x20

global LookupAccountSidW
extern LookupAccountSidW
export LookupAccountSidW

LookupAccountSidW:
	mov eax, THUNK_ADVAPI32_LOOKUPACCOUNTSIDW
	int SYSCALL_THUNK
	ret 0x1c

global RegQueryValueExW
extern RegQueryValueExW
export RegQueryValueExW

RegQueryValueExW:
	mov eax, THUNK_ADVAPI32_REGQUERYVALUEEXW
	int SYSCALL_THUNK
	ret 0x18

THUNK_ADVAPI32_REGCREATEKEYEXW equ 0xfa0
THUNK_ADVAPI32_REGQUERYVALUEW equ 0xfa1
THUNK_ADVAPI32_REGCLOSEKEY equ 0xfa2
THUNK_ADVAPI32_REGSETVALUEEXW equ 0xfa3
THUNK_ADVAPI32_OPENPROCESSTOKEN equ 0xfa4
THUNK_ADVAPI32_GETTOKENINFORMATION equ 0xfa5
THUNK_ADVAPI32_REGOPENKEYEXW equ 0xfa6
THUNK_ADVAPI32_REGENUMVALUEW equ 0xfa7
THUNK_ADVAPI32_LOOKUPACCOUNTSIDW equ 0xfa8
THUNK_ADVAPI32_REGQUERYVALUEEXW equ 0xfa9

SYSCALL_THUNK equ 0x80