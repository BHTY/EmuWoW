.verstamp 3 10

.text
.align 2

.globl	_DLLMainCRTStartup
.extern _DLLMainCRTStartup 4
.globl RegCreateKeyExW
.extern RegCreateKeyExW 4
.globl RegQueryValueW
.extern RegQueryValueW 4
.globl RegCloseKey
.extern RegCloseKey 4
.globl RegSetValueExW
.extern RegSetValueExW 4
.globl OpenProcessToken
.extern OpenProcessToken 4
.globl GetTokenInformation
.extern GetTokenInformation 4
.globl RegOpenKeyExW
.extern RegOpenKeyExW 4
.globl RegEnumValueW
.extern RegEnumValueW 4
.globl LookupAccountSidW
.extern LookupAccountSidW 4
.globl RegQueryValueExW
.extern RegQueryValueExW 4
.ent _DLLMainCRTStartup
_DLLMainCRTStartup:
    j $31
    .end
.ent RegCreateKeyExW
RegCreateKeyExW:
    li $3, 4000
    syscall
    j $31
    .end
.ent RegQueryValueW
RegQueryValueW:
    li $3, 4001
    syscall
    j $31
    .end
.ent RegCloseKey
RegCloseKey:
    li $3, 4002
    syscall
    j $31
    .end
.ent RegSetValueExW
RegSetValueExW:
    li $3, 4003
    syscall
    j $31
    .end
.ent OpenProcessToken
OpenProcessToken:
    li $3, 4004
    syscall
    j $31
    .end
.ent GetTokenInformation
GetTokenInformation:
    li $3, 4005
    syscall
    j $31
    .end
.ent RegOpenKeyExW
RegOpenKeyExW:
    li $3, 4006
    syscall
    j $31
    .end
.ent RegEnumValueW
RegEnumValueW:
    li $3, 4007
    syscall
    j $31
    .end
.ent LookupAccountSidW
LookupAccountSidW:
    li $3, 4008
    syscall
    j $31
    .end
.ent RegQueryValueExW
RegQueryValueExW:
    li $3, 4009
    syscall
    j $31
    .end
