.verstamp 3 10

.text
.align 2

.globl	_DLLMainCRTStartup
.extern _DLLMainCRTStartup 4
.globl NtCreateFile
.extern NtCreateFile 4
.ent _DLLMainCRTStartup
_DLLMainCRTStartup:
    j $31
    .end
.ent NtCreateFile
NtCreateFile:
    li $3, 0
    syscall
    j $31
    .end
