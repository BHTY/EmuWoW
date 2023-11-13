global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

global AddAtomA
extern AddAtomA
export AddAtomA

AddAtomA:
	mov eax, THUNK_KERNEL32_ADDATOMA
	int SYSCALL_THUNK
	ret 0x4

global AddAtomW
extern AddAtomW
export AddAtomW

AddAtomW:
	mov eax, THUNK_KERNEL32_ADDATOMW
	int SYSCALL_THUNK
	ret 0x4

global AddConsoleAliasA
extern AddConsoleAliasA
export AddConsoleAliasA

AddConsoleAliasA:
	mov eax, THUNK_KERNEL32_ADDCONSOLEALIASA
	int SYSCALL_THUNK
	ret 0xc

global AddConsoleAliasW
extern AddConsoleAliasW
export AddConsoleAliasW

AddConsoleAliasW:
	mov eax, THUNK_KERNEL32_ADDCONSOLEALIASW
	int SYSCALL_THUNK
	ret 0xc

global AllocConsole
extern AllocConsole
export AllocConsole

AllocConsole:
	mov eax, THUNK_KERNEL32_ALLOCCONSOLE
	int SYSCALL_THUNK
	ret 0x0

global AreFileApisANSI
extern AreFileApisANSI
export AreFileApisANSI

AreFileApisANSI:
	mov eax, THUNK_KERNEL32_AREFILEAPISANSI
	int SYSCALL_THUNK
	ret 0x0

global BackupRead
extern BackupRead
export BackupRead

BackupRead:
	mov eax, THUNK_KERNEL32_BACKUPREAD
	int SYSCALL_THUNK
	ret 0x1c

global BackupSeek
extern BackupSeek
export BackupSeek

BackupSeek:
	mov eax, THUNK_KERNEL32_BACKUPSEEK
	int SYSCALL_THUNK
	ret 0x18

global BackupWrite
extern BackupWrite
export BackupWrite

BackupWrite:
	mov eax, THUNK_KERNEL32_BACKUPWRITE
	int SYSCALL_THUNK
	ret 0x1c

global Beep
extern Beep
export Beep

Beep:
	mov eax, THUNK_KERNEL32_BEEP
	int SYSCALL_THUNK
	ret 0x8

global BeginUpdateResourceA
extern BeginUpdateResourceA
export BeginUpdateResourceA

BeginUpdateResourceA:
	mov eax, THUNK_KERNEL32_BEGINUPDATERESOURCEA
	int SYSCALL_THUNK
	ret 0x8

global BeginUpdateResourceW
extern BeginUpdateResourceW
export BeginUpdateResourceW

BeginUpdateResourceW:
	mov eax, THUNK_KERNEL32_BEGINUPDATERESOURCEW
	int SYSCALL_THUNK
	ret 0x8

global BuildCommDCBA
extern BuildCommDCBA
export BuildCommDCBA

BuildCommDCBA:
	mov eax, THUNK_KERNEL32_BUILDCOMMDCBA
	int SYSCALL_THUNK
	ret 0x8

global BuildCommDCBAndTimeoutsA
extern BuildCommDCBAndTimeoutsA
export BuildCommDCBAndTimeoutsA

BuildCommDCBAndTimeoutsA:
	mov eax, THUNK_KERNEL32_BUILDCOMMDCBANDTIMEOUTSA
	int SYSCALL_THUNK
	ret 0xc

global BuildCommDCBAndTimeoutsW
extern BuildCommDCBAndTimeoutsW
export BuildCommDCBAndTimeoutsW

BuildCommDCBAndTimeoutsW:
	mov eax, THUNK_KERNEL32_BUILDCOMMDCBANDTIMEOUTSW
	int SYSCALL_THUNK
	ret 0xc

global BuildCommDCBW
extern BuildCommDCBW
export BuildCommDCBW

BuildCommDCBW:
	mov eax, THUNK_KERNEL32_BUILDCOMMDCBW
	int SYSCALL_THUNK
	ret 0x8

global CallNamedPipeA
extern CallNamedPipeA
export CallNamedPipeA

CallNamedPipeA:
	mov eax, THUNK_KERNEL32_CALLNAMEDPIPEA
	int SYSCALL_THUNK
	ret 0x1c

global CallNamedPipeW
extern CallNamedPipeW
export CallNamedPipeW

CallNamedPipeW:
	mov eax, THUNK_KERNEL32_CALLNAMEDPIPEW
	int SYSCALL_THUNK
	ret 0x1c

global ClearCommBreak
extern ClearCommBreak
export ClearCommBreak

ClearCommBreak:
	mov eax, THUNK_KERNEL32_CLEARCOMMBREAK
	int SYSCALL_THUNK
	ret 0x4

global ClearCommError
extern ClearCommError
export ClearCommError

ClearCommError:
	mov eax, THUNK_KERNEL32_CLEARCOMMERROR
	int SYSCALL_THUNK
	ret 0xc

global CloseHandle
extern CloseHandle
export CloseHandle

CloseHandle:
	mov eax, THUNK_KERNEL32_CLOSEHANDLE
	int SYSCALL_THUNK
	ret 0x4

global CommConfigDialogA
extern CommConfigDialogA
export CommConfigDialogA

CommConfigDialogA:
	mov eax, THUNK_KERNEL32_COMMCONFIGDIALOGA
	int SYSCALL_THUNK
	ret 0xc

global CommConfigDialogW
extern CommConfigDialogW
export CommConfigDialogW

CommConfigDialogW:
	mov eax, THUNK_KERNEL32_COMMCONFIGDIALOGW
	int SYSCALL_THUNK
	ret 0xc

global CompareFileTime
extern CompareFileTime
export CompareFileTime

CompareFileTime:
	mov eax, THUNK_KERNEL32_COMPAREFILETIME
	int SYSCALL_THUNK
	ret 0x8

global CompareStringA
extern CompareStringA
export CompareStringA

CompareStringA:
	mov eax, THUNK_KERNEL32_COMPARESTRINGA
	int SYSCALL_THUNK
	ret 0x18

global CompareStringW
extern CompareStringW
export CompareStringW

CompareStringW:
	mov eax, THUNK_KERNEL32_COMPARESTRINGW
	int SYSCALL_THUNK
	ret 0x18

global ConnectNamedPipe
extern ConnectNamedPipe
export ConnectNamedPipe

ConnectNamedPipe:
	mov eax, THUNK_KERNEL32_CONNECTNAMEDPIPE
	int SYSCALL_THUNK
	ret 0x8

global ContinueDebugEvent
extern ContinueDebugEvent
export ContinueDebugEvent

ContinueDebugEvent:
	mov eax, THUNK_KERNEL32_CONTINUEDEBUGEVENT
	int SYSCALL_THUNK
	ret 0xc

global ConvertDefaultLocale
extern ConvertDefaultLocale
export ConvertDefaultLocale

ConvertDefaultLocale:
	mov eax, THUNK_KERNEL32_CONVERTDEFAULTLOCALE
	int SYSCALL_THUNK
	ret 0x4

global CopyFileA
extern CopyFileA
export CopyFileA

CopyFileA:
	mov eax, THUNK_KERNEL32_COPYFILEA
	int SYSCALL_THUNK
	ret 0xc

global CopyFileW
extern CopyFileW
export CopyFileW

CopyFileW:
	mov eax, THUNK_KERNEL32_COPYFILEW
	int SYSCALL_THUNK
	ret 0xc

global CreateConsoleScreenBuffer
extern CreateConsoleScreenBuffer
export CreateConsoleScreenBuffer

CreateConsoleScreenBuffer:
	mov eax, THUNK_KERNEL32_CREATECONSOLESCREENBUFFER
	int SYSCALL_THUNK
	ret 0x14

global CreateDirectoryA
extern CreateDirectoryA
export CreateDirectoryA

CreateDirectoryA:
	mov eax, THUNK_KERNEL32_CREATEDIRECTORYA
	int SYSCALL_THUNK
	ret 0x8

global CreateDirectoryExA
extern CreateDirectoryExA
export CreateDirectoryExA

CreateDirectoryExA:
	mov eax, THUNK_KERNEL32_CREATEDIRECTORYEXA
	int SYSCALL_THUNK
	ret 0xc

global CreateDirectoryExW
extern CreateDirectoryExW
export CreateDirectoryExW

CreateDirectoryExW:
	mov eax, THUNK_KERNEL32_CREATEDIRECTORYEXW
	int SYSCALL_THUNK
	ret 0xc

global CreateDirectoryW
extern CreateDirectoryW
export CreateDirectoryW

CreateDirectoryW:
	mov eax, THUNK_KERNEL32_CREATEDIRECTORYW
	int SYSCALL_THUNK
	ret 0x8

global CreateEventA
extern CreateEventA
export CreateEventA

CreateEventA:
	mov eax, THUNK_KERNEL32_CREATEEVENTA
	int SYSCALL_THUNK
	ret 0x10

global CreateEventW
extern CreateEventW
export CreateEventW

CreateEventW:
	mov eax, THUNK_KERNEL32_CREATEEVENTW
	int SYSCALL_THUNK
	ret 0x10

global CreateFileA
extern CreateFileA
export CreateFileA

CreateFileA:
	mov eax, THUNK_KERNEL32_CREATEFILEA
	int SYSCALL_THUNK
	ret 0x1c

global CreateFileMappingA
extern CreateFileMappingA
export CreateFileMappingA

CreateFileMappingA:
	mov eax, THUNK_KERNEL32_CREATEFILEMAPPINGA
	int SYSCALL_THUNK
	ret 0x18

global CreateFileMappingW
extern CreateFileMappingW
export CreateFileMappingW

CreateFileMappingW:
	mov eax, THUNK_KERNEL32_CREATEFILEMAPPINGW
	int SYSCALL_THUNK
	ret 0x18

global CreateFileW
extern CreateFileW
export CreateFileW

CreateFileW:
	mov eax, THUNK_KERNEL32_CREATEFILEW
	int SYSCALL_THUNK
	ret 0x1c

global CreateIoCompletionPort
extern CreateIoCompletionPort
export CreateIoCompletionPort

CreateIoCompletionPort:
	mov eax, THUNK_KERNEL32_CREATEIOCOMPLETIONPORT
	int SYSCALL_THUNK
	ret 0x10

global CreateMailslotA
extern CreateMailslotA
export CreateMailslotA

CreateMailslotA:
	mov eax, THUNK_KERNEL32_CREATEMAILSLOTA
	int SYSCALL_THUNK
	ret 0x10

global CreateMailslotW
extern CreateMailslotW
export CreateMailslotW

CreateMailslotW:
	mov eax, THUNK_KERNEL32_CREATEMAILSLOTW
	int SYSCALL_THUNK
	ret 0x10

global CreateMutexA
extern CreateMutexA
export CreateMutexA

CreateMutexA:
	mov eax, THUNK_KERNEL32_CREATEMUTEXA
	int SYSCALL_THUNK
	ret 0xc

global CreateMutexW
extern CreateMutexW
export CreateMutexW

CreateMutexW:
	mov eax, THUNK_KERNEL32_CREATEMUTEXW
	int SYSCALL_THUNK
	ret 0xc

global CreateNamedPipeA
extern CreateNamedPipeA
export CreateNamedPipeA

CreateNamedPipeA:
	mov eax, THUNK_KERNEL32_CREATENAMEDPIPEA
	int SYSCALL_THUNK
	ret 0x20

global CreateNamedPipeW
extern CreateNamedPipeW
export CreateNamedPipeW

CreateNamedPipeW:
	mov eax, THUNK_KERNEL32_CREATENAMEDPIPEW
	int SYSCALL_THUNK
	ret 0x20

global CreatePipe
extern CreatePipe
export CreatePipe

CreatePipe:
	mov eax, THUNK_KERNEL32_CREATEPIPE
	int SYSCALL_THUNK
	ret 0x10

global CreateProcessA
extern CreateProcessA
export CreateProcessA

CreateProcessA:
	mov eax, THUNK_KERNEL32_CREATEPROCESSA
	int SYSCALL_THUNK
	ret 0x28

global CreateProcessW
extern CreateProcessW
export CreateProcessW

CreateProcessW:
	mov eax, THUNK_KERNEL32_CREATEPROCESSW
	int SYSCALL_THUNK
	ret 0x28

global CreateRemoteThread
extern CreateRemoteThread
export CreateRemoteThread

CreateRemoteThread:
	mov eax, THUNK_KERNEL32_CREATEREMOTETHREAD
	int SYSCALL_THUNK
	ret 0x1c

global CreateSemaphoreA
extern CreateSemaphoreA
export CreateSemaphoreA

CreateSemaphoreA:
	mov eax, THUNK_KERNEL32_CREATESEMAPHOREA
	int SYSCALL_THUNK
	ret 0x10

global CreateSemaphoreW
extern CreateSemaphoreW
export CreateSemaphoreW

CreateSemaphoreW:
	mov eax, THUNK_KERNEL32_CREATESEMAPHOREW
	int SYSCALL_THUNK
	ret 0x10

global CreateTapePartition
extern CreateTapePartition
export CreateTapePartition

CreateTapePartition:
	mov eax, THUNK_KERNEL32_CREATETAPEPARTITION
	int SYSCALL_THUNK
	ret 0x10

global CreateThread
extern CreateThread
export CreateThread

CreateThread:
	mov eax, THUNK_KERNEL32_CREATETHREAD
	int SYSCALL_THUNK
	ret 0x18

global DebugActiveProcess
extern DebugActiveProcess
export DebugActiveProcess

DebugActiveProcess:
	mov eax, THUNK_KERNEL32_DEBUGACTIVEPROCESS
	int SYSCALL_THUNK
	ret 0x4

global DebugBreak
extern DebugBreak
export DebugBreak

DebugBreak:
	mov eax, THUNK_KERNEL32_DEBUGBREAK
	int SYSCALL_THUNK
	ret 0x0

global DefineDosDeviceA
extern DefineDosDeviceA
export DefineDosDeviceA

DefineDosDeviceA:
	mov eax, THUNK_KERNEL32_DEFINEDOSDEVICEA
	int SYSCALL_THUNK
	ret 0xc

global DefineDosDeviceW
extern DefineDosDeviceW
export DefineDosDeviceW

DefineDosDeviceW:
	mov eax, THUNK_KERNEL32_DEFINEDOSDEVICEW
	int SYSCALL_THUNK
	ret 0xc

global DeleteAtom
extern DeleteAtom
export DeleteAtom

DeleteAtom:
	mov eax, THUNK_KERNEL32_DELETEATOM
	int SYSCALL_THUNK
	ret 0x4

global DeleteCriticalSection
extern DeleteCriticalSection
export DeleteCriticalSection

DeleteCriticalSection:
	mov eax, THUNK_KERNEL32_DELETECRITICALSECTION
	int SYSCALL_THUNK
	ret 0x4

global DeleteFileA
extern DeleteFileA
export DeleteFileA

DeleteFileA:
	mov eax, THUNK_KERNEL32_DELETEFILEA
	int SYSCALL_THUNK
	ret 0x4

global DeleteFileW
extern DeleteFileW
export DeleteFileW

DeleteFileW:
	mov eax, THUNK_KERNEL32_DELETEFILEW
	int SYSCALL_THUNK
	ret 0x4

global DeviceIoControl
extern DeviceIoControl
export DeviceIoControl

DeviceIoControl:
	mov eax, THUNK_KERNEL32_DEVICEIOCONTROL
	int SYSCALL_THUNK
	ret 0x20

global DisableThreadLibraryCalls
extern DisableThreadLibraryCalls
export DisableThreadLibraryCalls

DisableThreadLibraryCalls:
	mov eax, THUNK_KERNEL32_DISABLETHREADLIBRARYCALLS
	int SYSCALL_THUNK
	ret 0x4

global DisconnectNamedPipe
extern DisconnectNamedPipe
export DisconnectNamedPipe

DisconnectNamedPipe:
	mov eax, THUNK_KERNEL32_DISCONNECTNAMEDPIPE
	int SYSCALL_THUNK
	ret 0x4

global DosDateTimeToFileTime
extern DosDateTimeToFileTime
export DosDateTimeToFileTime

DosDateTimeToFileTime:
	mov eax, THUNK_KERNEL32_DOSDATETIMETOFILETIME
	int SYSCALL_THUNK
	ret 0xc

global DuplicateHandle
extern DuplicateHandle
export DuplicateHandle

DuplicateHandle:
	mov eax, THUNK_KERNEL32_DUPLICATEHANDLE
	int SYSCALL_THUNK
	ret 0x1c

global EndUpdateResourceA
extern EndUpdateResourceA
export EndUpdateResourceA

EndUpdateResourceA:
	mov eax, THUNK_KERNEL32_ENDUPDATERESOURCEA
	int SYSCALL_THUNK
	ret 0x8

global EndUpdateResourceW
extern EndUpdateResourceW
export EndUpdateResourceW

EndUpdateResourceW:
	mov eax, THUNK_KERNEL32_ENDUPDATERESOURCEW
	int SYSCALL_THUNK
	ret 0x8

global EnterCriticalSection
extern EnterCriticalSection
export EnterCriticalSection

EnterCriticalSection:
	mov eax, THUNK_KERNEL32_ENTERCRITICALSECTION
	int SYSCALL_THUNK
	ret 0x4

global EnumCalendarInfoA
extern EnumCalendarInfoA
export EnumCalendarInfoA

EnumCalendarInfoA:
	mov eax, THUNK_KERNEL32_ENUMCALENDARINFOA
	int SYSCALL_THUNK
	ret 0x10

global EnumCalendarInfoW
extern EnumCalendarInfoW
export EnumCalendarInfoW

EnumCalendarInfoW:
	mov eax, THUNK_KERNEL32_ENUMCALENDARINFOW
	int SYSCALL_THUNK
	ret 0x10

global EnumDateFormatsA
extern EnumDateFormatsA
export EnumDateFormatsA

EnumDateFormatsA:
	mov eax, THUNK_KERNEL32_ENUMDATEFORMATSA
	int SYSCALL_THUNK
	ret 0xc

global EnumDateFormatsW
extern EnumDateFormatsW
export EnumDateFormatsW

EnumDateFormatsW:
	mov eax, THUNK_KERNEL32_ENUMDATEFORMATSW
	int SYSCALL_THUNK
	ret 0xc

global EnumResourceLanguagesA
extern EnumResourceLanguagesA
export EnumResourceLanguagesA

EnumResourceLanguagesA:
	mov eax, THUNK_KERNEL32_ENUMRESOURCELANGUAGESA
	int SYSCALL_THUNK
	ret 0x14

global EnumResourceLanguagesW
extern EnumResourceLanguagesW
export EnumResourceLanguagesW

EnumResourceLanguagesW:
	mov eax, THUNK_KERNEL32_ENUMRESOURCELANGUAGESW
	int SYSCALL_THUNK
	ret 0x14

global EnumResourceNamesA
extern EnumResourceNamesA
export EnumResourceNamesA

EnumResourceNamesA:
	mov eax, THUNK_KERNEL32_ENUMRESOURCENAMESA
	int SYSCALL_THUNK
	ret 0x10

global EnumResourceNamesW
extern EnumResourceNamesW
export EnumResourceNamesW

EnumResourceNamesW:
	mov eax, THUNK_KERNEL32_ENUMRESOURCENAMESW
	int SYSCALL_THUNK
	ret 0x10

global EnumResourceTypesA
extern EnumResourceTypesA
export EnumResourceTypesA

EnumResourceTypesA:
	mov eax, THUNK_KERNEL32_ENUMRESOURCETYPESA
	int SYSCALL_THUNK
	ret 0xc

global EnumResourceTypesW
extern EnumResourceTypesW
export EnumResourceTypesW

EnumResourceTypesW:
	mov eax, THUNK_KERNEL32_ENUMRESOURCETYPESW
	int SYSCALL_THUNK
	ret 0xc

global EnumSystemCodePagesA
extern EnumSystemCodePagesA
export EnumSystemCodePagesA

EnumSystemCodePagesA:
	mov eax, THUNK_KERNEL32_ENUMSYSTEMCODEPAGESA
	int SYSCALL_THUNK
	ret 0x8

global EnumSystemCodePagesW
extern EnumSystemCodePagesW
export EnumSystemCodePagesW

EnumSystemCodePagesW:
	mov eax, THUNK_KERNEL32_ENUMSYSTEMCODEPAGESW
	int SYSCALL_THUNK
	ret 0x8

global EnumSystemLocalesA
extern EnumSystemLocalesA
export EnumSystemLocalesA

EnumSystemLocalesA:
	mov eax, THUNK_KERNEL32_ENUMSYSTEMLOCALESA
	int SYSCALL_THUNK
	ret 0x8

global EnumSystemLocalesW
extern EnumSystemLocalesW
export EnumSystemLocalesW

EnumSystemLocalesW:
	mov eax, THUNK_KERNEL32_ENUMSYSTEMLOCALESW
	int SYSCALL_THUNK
	ret 0x8

global EnumTimeFormatsA
extern EnumTimeFormatsA
export EnumTimeFormatsA

EnumTimeFormatsA:
	mov eax, THUNK_KERNEL32_ENUMTIMEFORMATSA
	int SYSCALL_THUNK
	ret 0xc

global EnumTimeFormatsW
extern EnumTimeFormatsW
export EnumTimeFormatsW

EnumTimeFormatsW:
	mov eax, THUNK_KERNEL32_ENUMTIMEFORMATSW
	int SYSCALL_THUNK
	ret 0xc

global EraseTape
extern EraseTape
export EraseTape

EraseTape:
	mov eax, THUNK_KERNEL32_ERASETAPE
	int SYSCALL_THUNK
	ret 0xc

global EscapeCommFunction
extern EscapeCommFunction
export EscapeCommFunction

EscapeCommFunction:
	mov eax, THUNK_KERNEL32_ESCAPECOMMFUNCTION
	int SYSCALL_THUNK
	ret 0x8

global ExitProcess
extern ExitProcess
export ExitProcess

ExitProcess:
	mov eax, THUNK_KERNEL32_EXITPROCESS
	int SYSCALL_THUNK
	ret 0x4

global ExitThread
extern ExitThread
export ExitThread

ExitThread:
	mov eax, THUNK_KERNEL32_EXITTHREAD
	int SYSCALL_THUNK
	ret 0x4

global ExpandEnvironmentStringsA
extern ExpandEnvironmentStringsA
export ExpandEnvironmentStringsA

ExpandEnvironmentStringsA:
	mov eax, THUNK_KERNEL32_EXPANDENVIRONMENTSTRINGSA
	int SYSCALL_THUNK
	ret 0xc

global ExpandEnvironmentStringsW
extern ExpandEnvironmentStringsW
export ExpandEnvironmentStringsW

ExpandEnvironmentStringsW:
	mov eax, THUNK_KERNEL32_EXPANDENVIRONMENTSTRINGSW
	int SYSCALL_THUNK
	ret 0xc

global FatalAppExitA
extern FatalAppExitA
export FatalAppExitA

FatalAppExitA:
	mov eax, THUNK_KERNEL32_FATALAPPEXITA
	int SYSCALL_THUNK
	ret 0x8

global FatalAppExitW
extern FatalAppExitW
export FatalAppExitW

FatalAppExitW:
	mov eax, THUNK_KERNEL32_FATALAPPEXITW
	int SYSCALL_THUNK
	ret 0x8

global FatalExit
extern FatalExit
export FatalExit

FatalExit:
	mov eax, THUNK_KERNEL32_FATALEXIT
	int SYSCALL_THUNK
	ret 0x4

global FileTimeToDosDateTime
extern FileTimeToDosDateTime
export FileTimeToDosDateTime

FileTimeToDosDateTime:
	mov eax, THUNK_KERNEL32_FILETIMETODOSDATETIME
	int SYSCALL_THUNK
	ret 0xc

global FileTimeToLocalFileTime
extern FileTimeToLocalFileTime
export FileTimeToLocalFileTime

FileTimeToLocalFileTime:
	mov eax, THUNK_KERNEL32_FILETIMETOLOCALFILETIME
	int SYSCALL_THUNK
	ret 0x8

global FileTimeToSystemTime
extern FileTimeToSystemTime
export FileTimeToSystemTime

FileTimeToSystemTime:
	mov eax, THUNK_KERNEL32_FILETIMETOSYSTEMTIME
	int SYSCALL_THUNK
	ret 0x8

global FillConsoleOutputAttribute
extern FillConsoleOutputAttribute
export FillConsoleOutputAttribute

FillConsoleOutputAttribute:
	mov eax, THUNK_KERNEL32_FILLCONSOLEOUTPUTATTRIBUTE
	int SYSCALL_THUNK
	ret 0x14

global FillConsoleOutputCharacterA
extern FillConsoleOutputCharacterA
export FillConsoleOutputCharacterA

FillConsoleOutputCharacterA:
	mov eax, THUNK_KERNEL32_FILLCONSOLEOUTPUTCHARACTERA
	int SYSCALL_THUNK
	ret 0x14

global FillConsoleOutputCharacterW
extern FillConsoleOutputCharacterW
export FillConsoleOutputCharacterW

FillConsoleOutputCharacterW:
	mov eax, THUNK_KERNEL32_FILLCONSOLEOUTPUTCHARACTERW
	int SYSCALL_THUNK
	ret 0x14

global FindAtomA
extern FindAtomA
export FindAtomA

FindAtomA:
	mov eax, THUNK_KERNEL32_FINDATOMA
	int SYSCALL_THUNK
	ret 0x4

global FindAtomW
extern FindAtomW
export FindAtomW

FindAtomW:
	mov eax, THUNK_KERNEL32_FINDATOMW
	int SYSCALL_THUNK
	ret 0x4

global FindClose
extern FindClose
export FindClose

FindClose:
	mov eax, THUNK_KERNEL32_FINDCLOSE
	int SYSCALL_THUNK
	ret 0x4

global FindCloseChangeNotification
extern FindCloseChangeNotification
export FindCloseChangeNotification

FindCloseChangeNotification:
	mov eax, THUNK_KERNEL32_FINDCLOSECHANGENOTIFICATION
	int SYSCALL_THUNK
	ret 0x4

global FindFirstChangeNotificationA
extern FindFirstChangeNotificationA
export FindFirstChangeNotificationA

FindFirstChangeNotificationA:
	mov eax, THUNK_KERNEL32_FINDFIRSTCHANGENOTIFICATIONA
	int SYSCALL_THUNK
	ret 0xc

global FindFirstChangeNotificationW
extern FindFirstChangeNotificationW
export FindFirstChangeNotificationW

FindFirstChangeNotificationW:
	mov eax, THUNK_KERNEL32_FINDFIRSTCHANGENOTIFICATIONW
	int SYSCALL_THUNK
	ret 0xc

global FindFirstFileA
extern FindFirstFileA
export FindFirstFileA

FindFirstFileA:
	mov eax, THUNK_KERNEL32_FINDFIRSTFILEA
	int SYSCALL_THUNK
	ret 0x8

global FindFirstFileW
extern FindFirstFileW
export FindFirstFileW

FindFirstFileW:
	mov eax, THUNK_KERNEL32_FINDFIRSTFILEW
	int SYSCALL_THUNK
	ret 0x8

global FindNextChangeNotification
extern FindNextChangeNotification
export FindNextChangeNotification

FindNextChangeNotification:
	mov eax, THUNK_KERNEL32_FINDNEXTCHANGENOTIFICATION
	int SYSCALL_THUNK
	ret 0x4

global FindNextFileA
extern FindNextFileA
export FindNextFileA

FindNextFileA:
	mov eax, THUNK_KERNEL32_FINDNEXTFILEA
	int SYSCALL_THUNK
	ret 0x8

global FindNextFileW
extern FindNextFileW
export FindNextFileW

FindNextFileW:
	mov eax, THUNK_KERNEL32_FINDNEXTFILEW
	int SYSCALL_THUNK
	ret 0x8

global FindResourceA
extern FindResourceA
export FindResourceA

FindResourceA:
	mov eax, THUNK_KERNEL32_FINDRESOURCEA
	int SYSCALL_THUNK
	ret 0xc

global FindResourceExA
extern FindResourceExA
export FindResourceExA

FindResourceExA:
	mov eax, THUNK_KERNEL32_FINDRESOURCEEXA
	int SYSCALL_THUNK
	ret 0x10

global FindResourceExW
extern FindResourceExW
export FindResourceExW

FindResourceExW:
	mov eax, THUNK_KERNEL32_FINDRESOURCEEXW
	int SYSCALL_THUNK
	ret 0x10

global FindResourceW
extern FindResourceW
export FindResourceW

FindResourceW:
	mov eax, THUNK_KERNEL32_FINDRESOURCEW
	int SYSCALL_THUNK
	ret 0xc

global FlushConsoleInputBuffer
extern FlushConsoleInputBuffer
export FlushConsoleInputBuffer

FlushConsoleInputBuffer:
	mov eax, THUNK_KERNEL32_FLUSHCONSOLEINPUTBUFFER
	int SYSCALL_THUNK
	ret 0x4

global FlushFileBuffers
extern FlushFileBuffers
export FlushFileBuffers

FlushFileBuffers:
	mov eax, THUNK_KERNEL32_FLUSHFILEBUFFERS
	int SYSCALL_THUNK
	ret 0x4

global FlushInstructionCache
extern FlushInstructionCache
export FlushInstructionCache

FlushInstructionCache:
	mov eax, THUNK_KERNEL32_FLUSHINSTRUCTIONCACHE
	int SYSCALL_THUNK
	ret 0xc

global FlushViewOfFile
extern FlushViewOfFile
export FlushViewOfFile

FlushViewOfFile:
	mov eax, THUNK_KERNEL32_FLUSHVIEWOFFILE
	int SYSCALL_THUNK
	ret 0x8

global FoldStringA
extern FoldStringA
export FoldStringA

FoldStringA:
	mov eax, THUNK_KERNEL32_FOLDSTRINGA
	int SYSCALL_THUNK
	ret 0x14

global FoldStringW
extern FoldStringW
export FoldStringW

FoldStringW:
	mov eax, THUNK_KERNEL32_FOLDSTRINGW
	int SYSCALL_THUNK
	ret 0x14

global FormatMessageA
extern FormatMessageA
export FormatMessageA

FormatMessageA:
	mov eax, THUNK_KERNEL32_FORMATMESSAGEA
	int SYSCALL_THUNK
	ret 0x1c

global FormatMessageW
extern FormatMessageW
export FormatMessageW

FormatMessageW:
	mov eax, THUNK_KERNEL32_FORMATMESSAGEW
	int SYSCALL_THUNK
	ret 0x1c

global FreeConsole
extern FreeConsole
export FreeConsole

FreeConsole:
	mov eax, THUNK_KERNEL32_FREECONSOLE
	int SYSCALL_THUNK
	ret 0x0

global FreeEnvironmentStringsA
extern FreeEnvironmentStringsA
export FreeEnvironmentStringsA

FreeEnvironmentStringsA:
	mov eax, THUNK_KERNEL32_FREEENVIRONMENTSTRINGSA
	int SYSCALL_THUNK
	ret 0x4

global FreeEnvironmentStrings
extern FreeEnvironmentStrings
export FreeEnvironmentStrings

FreeEnvironmentStrings:
	mov eax, THUNK_KERNEL32_FREEENVIRONMENTSTRINGS
	int SYSCALL_THUNK
	ret 0x4

global FreeEnvironmentStringsW
extern FreeEnvironmentStringsW
export FreeEnvironmentStringsW

FreeEnvironmentStringsW:
	mov eax, THUNK_KERNEL32_FREEENVIRONMENTSTRINGSW
	int SYSCALL_THUNK
	ret 0x4

global FreeLibrary
extern FreeLibrary
export FreeLibrary

FreeLibrary:
	mov eax, THUNK_KERNEL32_FREELIBRARY
	int SYSCALL_THUNK
	ret 0x4

global FreeLibraryAndExitThread
extern FreeLibraryAndExitThread
export FreeLibraryAndExitThread

FreeLibraryAndExitThread:
	mov eax, THUNK_KERNEL32_FREELIBRARYANDEXITTHREAD
	int SYSCALL_THUNK
	ret 0x8

global FreeResource
extern FreeResource
export FreeResource

FreeResource:
	mov eax, THUNK_KERNEL32_FREERESOURCE
	int SYSCALL_THUNK
	ret 0x4

global GenerateConsoleCtrlEvent
extern GenerateConsoleCtrlEvent
export GenerateConsoleCtrlEvent

GenerateConsoleCtrlEvent:
	mov eax, THUNK_KERNEL32_GENERATECONSOLECTRLEVENT
	int SYSCALL_THUNK
	ret 0x8

global GetACP
extern GetACP
export GetACP

GetACP:
	mov eax, THUNK_KERNEL32_GETACP
	int SYSCALL_THUNK
	ret 0x0

global GetAtomNameA
extern GetAtomNameA
export GetAtomNameA

GetAtomNameA:
	mov eax, THUNK_KERNEL32_GETATOMNAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetAtomNameW
extern GetAtomNameW
export GetAtomNameW

GetAtomNameW:
	mov eax, THUNK_KERNEL32_GETATOMNAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetBinaryTypeA
extern GetBinaryTypeA
export GetBinaryTypeA

GetBinaryTypeA:
	mov eax, THUNK_KERNEL32_GETBINARYTYPEA
	int SYSCALL_THUNK
	ret 0x8

global GetBinaryType
extern GetBinaryType
export GetBinaryType

GetBinaryType:
	mov eax, THUNK_KERNEL32_GETBINARYTYPE
	int SYSCALL_THUNK
	ret 0x8

global GetBinaryTypeW
extern GetBinaryTypeW
export GetBinaryTypeW

GetBinaryTypeW:
	mov eax, THUNK_KERNEL32_GETBINARYTYPEW
	int SYSCALL_THUNK
	ret 0x8

global GetCPInfo
extern GetCPInfo
export GetCPInfo

GetCPInfo:
	mov eax, THUNK_KERNEL32_GETCPINFO
	int SYSCALL_THUNK
	ret 0x8

global GetCommConfig
extern GetCommConfig
export GetCommConfig

GetCommConfig:
	mov eax, THUNK_KERNEL32_GETCOMMCONFIG
	int SYSCALL_THUNK
	ret 0xc

global GetCommMask
extern GetCommMask
export GetCommMask

GetCommMask:
	mov eax, THUNK_KERNEL32_GETCOMMMASK
	int SYSCALL_THUNK
	ret 0x8

global GetCommModemStatus
extern GetCommModemStatus
export GetCommModemStatus

GetCommModemStatus:
	mov eax, THUNK_KERNEL32_GETCOMMMODEMSTATUS
	int SYSCALL_THUNK
	ret 0x8

global GetCommProperties
extern GetCommProperties
export GetCommProperties

GetCommProperties:
	mov eax, THUNK_KERNEL32_GETCOMMPROPERTIES
	int SYSCALL_THUNK
	ret 0x8

global GetCommState
extern GetCommState
export GetCommState

GetCommState:
	mov eax, THUNK_KERNEL32_GETCOMMSTATE
	int SYSCALL_THUNK
	ret 0x8

global GetCommTimeouts
extern GetCommTimeouts
export GetCommTimeouts

GetCommTimeouts:
	mov eax, THUNK_KERNEL32_GETCOMMTIMEOUTS
	int SYSCALL_THUNK
	ret 0x8

global GetCommandLineA
extern GetCommandLineA
export GetCommandLineA

GetCommandLineA:
	mov eax, THUNK_KERNEL32_GETCOMMANDLINEA
	int SYSCALL_THUNK
	ret 0x0

global GetCommandLineW
extern GetCommandLineW
export GetCommandLineW

GetCommandLineW:
	mov eax, THUNK_KERNEL32_GETCOMMANDLINEW
	int SYSCALL_THUNK
	ret 0x0

global GetCompressedFileSizeA
extern GetCompressedFileSizeA
export GetCompressedFileSizeA

GetCompressedFileSizeA:
	mov eax, THUNK_KERNEL32_GETCOMPRESSEDFILESIZEA
	int SYSCALL_THUNK
	ret 0x8

global GetCompressedFileSizeW
extern GetCompressedFileSizeW
export GetCompressedFileSizeW

GetCompressedFileSizeW:
	mov eax, THUNK_KERNEL32_GETCOMPRESSEDFILESIZEW
	int SYSCALL_THUNK
	ret 0x8

global GetComputerNameA
extern GetComputerNameA
export GetComputerNameA

GetComputerNameA:
	mov eax, THUNK_KERNEL32_GETCOMPUTERNAMEA
	int SYSCALL_THUNK
	ret 0x8

global GetComputerNameW
extern GetComputerNameW
export GetComputerNameW

GetComputerNameW:
	mov eax, THUNK_KERNEL32_GETCOMPUTERNAMEW
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleAliasA
extern GetConsoleAliasA
export GetConsoleAliasA

GetConsoleAliasA:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASA
	int SYSCALL_THUNK
	ret 0x10

global GetConsoleAliasW
extern GetConsoleAliasW
export GetConsoleAliasW

GetConsoleAliasW:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASW
	int SYSCALL_THUNK
	ret 0x10

global GetConsoleAliasExesA
extern GetConsoleAliasExesA
export GetConsoleAliasExesA

GetConsoleAliasExesA:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASEXESA
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleAliasExesW
extern GetConsoleAliasExesW
export GetConsoleAliasExesW

GetConsoleAliasExesW:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASEXESW
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleAliasExesLengthA
extern GetConsoleAliasExesLengthA
export GetConsoleAliasExesLengthA

GetConsoleAliasExesLengthA:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASEXESLENGTHA
	int SYSCALL_THUNK
	ret 0x0

global GetConsoleAliasExesLengthW
extern GetConsoleAliasExesLengthW
export GetConsoleAliasExesLengthW

GetConsoleAliasExesLengthW:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASEXESLENGTHW
	int SYSCALL_THUNK
	ret 0x0

global GetConsoleAliasesA
extern GetConsoleAliasesA
export GetConsoleAliasesA

GetConsoleAliasesA:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASESA
	int SYSCALL_THUNK
	ret 0xc

global GetConsoleAliasesW
extern GetConsoleAliasesW
export GetConsoleAliasesW

GetConsoleAliasesW:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASESW
	int SYSCALL_THUNK
	ret 0xc

global GetConsoleAliasesLengthA
extern GetConsoleAliasesLengthA
export GetConsoleAliasesLengthA

GetConsoleAliasesLengthA:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASESLENGTHA
	int SYSCALL_THUNK
	ret 0x4

global GetConsoleAliasesLengthW
extern GetConsoleAliasesLengthW
export GetConsoleAliasesLengthW

GetConsoleAliasesLengthW:
	mov eax, THUNK_KERNEL32_GETCONSOLEALIASESLENGTHW
	int SYSCALL_THUNK
	ret 0x4

global GetConsoleCP
extern GetConsoleCP
export GetConsoleCP

GetConsoleCP:
	mov eax, THUNK_KERNEL32_GETCONSOLECP
	int SYSCALL_THUNK
	ret 0x0

global GetConsoleCursorInfo
extern GetConsoleCursorInfo
export GetConsoleCursorInfo

GetConsoleCursorInfo:
	mov eax, THUNK_KERNEL32_GETCONSOLECURSORINFO
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleDisplayMode
extern GetConsoleDisplayMode
export GetConsoleDisplayMode

GetConsoleDisplayMode:
	mov eax, THUNK_KERNEL32_GETCONSOLEDISPLAYMODE
	int SYSCALL_THUNK
	ret 0x4

global GetConsoleFontSize
extern GetConsoleFontSize
export GetConsoleFontSize

GetConsoleFontSize:
	mov eax, THUNK_KERNEL32_GETCONSOLEFONTSIZE
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleMode
extern GetConsoleMode
export GetConsoleMode

GetConsoleMode:
	mov eax, THUNK_KERNEL32_GETCONSOLEMODE
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleOutputCP
extern GetConsoleOutputCP
export GetConsoleOutputCP

GetConsoleOutputCP:
	mov eax, THUNK_KERNEL32_GETCONSOLEOUTPUTCP
	int SYSCALL_THUNK
	ret 0x0

global GetConsoleScreenBufferInfo
extern GetConsoleScreenBufferInfo
export GetConsoleScreenBufferInfo

GetConsoleScreenBufferInfo:
	mov eax, THUNK_KERNEL32_GETCONSOLESCREENBUFFERINFO
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleTitleA
extern GetConsoleTitleA
export GetConsoleTitleA

GetConsoleTitleA:
	mov eax, THUNK_KERNEL32_GETCONSOLETITLEA
	int SYSCALL_THUNK
	ret 0x8

global GetConsoleTitleW
extern GetConsoleTitleW
export GetConsoleTitleW

GetConsoleTitleW:
	mov eax, THUNK_KERNEL32_GETCONSOLETITLEW
	int SYSCALL_THUNK
	ret 0x8

global GetCurrentConsoleFont
extern GetCurrentConsoleFont
export GetCurrentConsoleFont

GetCurrentConsoleFont:
	mov eax, THUNK_KERNEL32_GETCURRENTCONSOLEFONT
	int SYSCALL_THUNK
	ret 0xc

global GetCurrentDirectoryA
extern GetCurrentDirectoryA
export GetCurrentDirectoryA

GetCurrentDirectoryA:
	mov eax, THUNK_KERNEL32_GETCURRENTDIRECTORYA
	int SYSCALL_THUNK
	ret 0x8

global GetCurrentDirectoryW
extern GetCurrentDirectoryW
export GetCurrentDirectoryW

GetCurrentDirectoryW:
	mov eax, THUNK_KERNEL32_GETCURRENTDIRECTORYW
	int SYSCALL_THUNK
	ret 0x8

global GetCurrentProcess
extern GetCurrentProcess
export GetCurrentProcess

GetCurrentProcess:
	mov eax, THUNK_KERNEL32_GETCURRENTPROCESS
	int SYSCALL_THUNK
	ret 0x0

global GetCurrentProcessId
extern GetCurrentProcessId
export GetCurrentProcessId

GetCurrentProcessId:
	mov eax, THUNK_KERNEL32_GETCURRENTPROCESSID
	int SYSCALL_THUNK
	ret 0x0

global GetCurrentThread
extern GetCurrentThread
export GetCurrentThread

GetCurrentThread:
	mov eax, THUNK_KERNEL32_GETCURRENTTHREAD
	int SYSCALL_THUNK
	ret 0x0

global GetCurrentThreadId
extern GetCurrentThreadId
export GetCurrentThreadId

GetCurrentThreadId:
	mov eax, THUNK_KERNEL32_GETCURRENTTHREADID
	int SYSCALL_THUNK
	ret 0x0

global GetDateFormatA
extern GetDateFormatA
export GetDateFormatA

GetDateFormatA:
	mov eax, THUNK_KERNEL32_GETDATEFORMATA
	int SYSCALL_THUNK
	ret 0x18

global GetDateFormatW
extern GetDateFormatW
export GetDateFormatW

GetDateFormatW:
	mov eax, THUNK_KERNEL32_GETDATEFORMATW
	int SYSCALL_THUNK
	ret 0x18

global GetDefaultCommConfigA
extern GetDefaultCommConfigA
export GetDefaultCommConfigA

GetDefaultCommConfigA:
	mov eax, THUNK_KERNEL32_GETDEFAULTCOMMCONFIGA
	int SYSCALL_THUNK
	ret 0xc

global GetDefaultCommConfigW
extern GetDefaultCommConfigW
export GetDefaultCommConfigW

GetDefaultCommConfigW:
	mov eax, THUNK_KERNEL32_GETDEFAULTCOMMCONFIGW
	int SYSCALL_THUNK
	ret 0xc

global GetDiskFreeSpaceA
extern GetDiskFreeSpaceA
export GetDiskFreeSpaceA

GetDiskFreeSpaceA:
	mov eax, THUNK_KERNEL32_GETDISKFREESPACEA
	int SYSCALL_THUNK
	ret 0x14

global GetDiskFreeSpaceW
extern GetDiskFreeSpaceW
export GetDiskFreeSpaceW

GetDiskFreeSpaceW:
	mov eax, THUNK_KERNEL32_GETDISKFREESPACEW
	int SYSCALL_THUNK
	ret 0x14

global GetDriveTypeA
extern GetDriveTypeA
export GetDriveTypeA

GetDriveTypeA:
	mov eax, THUNK_KERNEL32_GETDRIVETYPEA
	int SYSCALL_THUNK
	ret 0x4

global GetDriveTypeW
extern GetDriveTypeW
export GetDriveTypeW

GetDriveTypeW:
	mov eax, THUNK_KERNEL32_GETDRIVETYPEW
	int SYSCALL_THUNK
	ret 0x4

global GetEnvironmentStrings
extern GetEnvironmentStrings
export GetEnvironmentStrings

GetEnvironmentStrings:
	mov eax, THUNK_KERNEL32_GETENVIRONMENTSTRINGS
	int SYSCALL_THUNK
	ret 0x0

global GetEnvironmentStringsW
extern GetEnvironmentStringsW
export GetEnvironmentStringsW

GetEnvironmentStringsW:
	mov eax, THUNK_KERNEL32_GETENVIRONMENTSTRINGSW
	int SYSCALL_THUNK
	ret 0x0

global GetEnvironmentVariableA
extern GetEnvironmentVariableA
export GetEnvironmentVariableA

GetEnvironmentVariableA:
	mov eax, THUNK_KERNEL32_GETENVIRONMENTVARIABLEA
	int SYSCALL_THUNK
	ret 0xc

global GetEnvironmentVariableW
extern GetEnvironmentVariableW
export GetEnvironmentVariableW

GetEnvironmentVariableW:
	mov eax, THUNK_KERNEL32_GETENVIRONMENTVARIABLEW
	int SYSCALL_THUNK
	ret 0xc

global GetExitCodeProcess
extern GetExitCodeProcess
export GetExitCodeProcess

GetExitCodeProcess:
	mov eax, THUNK_KERNEL32_GETEXITCODEPROCESS
	int SYSCALL_THUNK
	ret 0x8

global GetExitCodeThread
extern GetExitCodeThread
export GetExitCodeThread

GetExitCodeThread:
	mov eax, THUNK_KERNEL32_GETEXITCODETHREAD
	int SYSCALL_THUNK
	ret 0x8

global GetFileAttributesA
extern GetFileAttributesA
export GetFileAttributesA

GetFileAttributesA:
	mov eax, THUNK_KERNEL32_GETFILEATTRIBUTESA
	int SYSCALL_THUNK
	ret 0x4

global GetFileAttributesW
extern GetFileAttributesW
export GetFileAttributesW

GetFileAttributesW:
	mov eax, THUNK_KERNEL32_GETFILEATTRIBUTESW
	int SYSCALL_THUNK
	ret 0x4

global GetFileInformationByHandle
extern GetFileInformationByHandle
export GetFileInformationByHandle

GetFileInformationByHandle:
	mov eax, THUNK_KERNEL32_GETFILEINFORMATIONBYHANDLE
	int SYSCALL_THUNK
	ret 0x8

global GetFileSize
extern GetFileSize
export GetFileSize

GetFileSize:
	mov eax, THUNK_KERNEL32_GETFILESIZE
	int SYSCALL_THUNK
	ret 0x8

global GetFileTime
extern GetFileTime
export GetFileTime

GetFileTime:
	mov eax, THUNK_KERNEL32_GETFILETIME
	int SYSCALL_THUNK
	ret 0x10

global GetFileType
extern GetFileType
export GetFileType

GetFileType:
	mov eax, THUNK_KERNEL32_GETFILETYPE
	int SYSCALL_THUNK
	ret 0x4

global GetFullPathNameA
extern GetFullPathNameA
export GetFullPathNameA

GetFullPathNameA:
	mov eax, THUNK_KERNEL32_GETFULLPATHNAMEA
	int SYSCALL_THUNK
	ret 0x10

global GetFullPathNameW
extern GetFullPathNameW
export GetFullPathNameW

GetFullPathNameW:
	mov eax, THUNK_KERNEL32_GETFULLPATHNAMEW
	int SYSCALL_THUNK
	ret 0x10

global GetHandleInformation
extern GetHandleInformation
export GetHandleInformation

GetHandleInformation:
	mov eax, THUNK_KERNEL32_GETHANDLEINFORMATION
	int SYSCALL_THUNK
	ret 0x8

global GetLargestConsoleWindowSize
extern GetLargestConsoleWindowSize
export GetLargestConsoleWindowSize

GetLargestConsoleWindowSize:
	mov eax, THUNK_KERNEL32_GETLARGESTCONSOLEWINDOWSIZE
	int SYSCALL_THUNK
	ret 0x4

global GetLastError
extern GetLastError
export GetLastError

GetLastError:
	mov eax, THUNK_KERNEL32_GETLASTERROR
	int SYSCALL_THUNK
	ret 0x0

global GetLocalTime
extern GetLocalTime
export GetLocalTime

GetLocalTime:
	mov eax, THUNK_KERNEL32_GETLOCALTIME
	int SYSCALL_THUNK
	ret 0x4

global GetLocaleInfoA
extern GetLocaleInfoA
export GetLocaleInfoA

GetLocaleInfoA:
	mov eax, THUNK_KERNEL32_GETLOCALEINFOA
	int SYSCALL_THUNK
	ret 0x10

global GetLocaleInfoW
extern GetLocaleInfoW
export GetLocaleInfoW

GetLocaleInfoW:
	mov eax, THUNK_KERNEL32_GETLOCALEINFOW
	int SYSCALL_THUNK
	ret 0x10

global GetLogicalDriveStringsA
extern GetLogicalDriveStringsA
export GetLogicalDriveStringsA

GetLogicalDriveStringsA:
	mov eax, THUNK_KERNEL32_GETLOGICALDRIVESTRINGSA
	int SYSCALL_THUNK
	ret 0x8

global GetLogicalDriveStringsW
extern GetLogicalDriveStringsW
export GetLogicalDriveStringsW

GetLogicalDriveStringsW:
	mov eax, THUNK_KERNEL32_GETLOGICALDRIVESTRINGSW
	int SYSCALL_THUNK
	ret 0x8

global GetMailslotInfo
extern GetMailslotInfo
export GetMailslotInfo

GetMailslotInfo:
	mov eax, THUNK_KERNEL32_GETMAILSLOTINFO
	int SYSCALL_THUNK
	ret 0x14

global GetModuleFileNameA
extern GetModuleFileNameA
export GetModuleFileNameA

GetModuleFileNameA:
	mov eax, THUNK_KERNEL32_GETMODULEFILENAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetModuleFileNameW
extern GetModuleFileNameW
export GetModuleFileNameW

GetModuleFileNameW:
	mov eax, THUNK_KERNEL32_GETMODULEFILENAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetModuleHandleA
extern GetModuleHandleA
export GetModuleHandleA

GetModuleHandleA:
	mov eax, THUNK_KERNEL32_GETMODULEHANDLEA
	int SYSCALL_THUNK
	ret 0x4

global GetModuleHandleW
extern GetModuleHandleW
export GetModuleHandleW

GetModuleHandleW:
	mov eax, THUNK_KERNEL32_GETMODULEHANDLEW
	int SYSCALL_THUNK
	ret 0x4

global GetNamedPipeHandleStateA
extern GetNamedPipeHandleStateA
export GetNamedPipeHandleStateA

GetNamedPipeHandleStateA:
	mov eax, THUNK_KERNEL32_GETNAMEDPIPEHANDLESTATEA
	int SYSCALL_THUNK
	ret 0x1c

global GetNamedPipeHandleStateW
extern GetNamedPipeHandleStateW
export GetNamedPipeHandleStateW

GetNamedPipeHandleStateW:
	mov eax, THUNK_KERNEL32_GETNAMEDPIPEHANDLESTATEW
	int SYSCALL_THUNK
	ret 0x1c

global GetNamedPipeInfo
extern GetNamedPipeInfo
export GetNamedPipeInfo

GetNamedPipeInfo:
	mov eax, THUNK_KERNEL32_GETNAMEDPIPEINFO
	int SYSCALL_THUNK
	ret 0x14

global GetNumberFormatA
extern GetNumberFormatA
export GetNumberFormatA

GetNumberFormatA:
	mov eax, THUNK_KERNEL32_GETNUMBERFORMATA
	int SYSCALL_THUNK
	ret 0x18

global GetNumberFormatW
extern GetNumberFormatW
export GetNumberFormatW

GetNumberFormatW:
	mov eax, THUNK_KERNEL32_GETNUMBERFORMATW
	int SYSCALL_THUNK
	ret 0x18

global GetNumberOfConsoleInputEvents
extern GetNumberOfConsoleInputEvents
export GetNumberOfConsoleInputEvents

GetNumberOfConsoleInputEvents:
	mov eax, THUNK_KERNEL32_GETNUMBEROFCONSOLEINPUTEVENTS
	int SYSCALL_THUNK
	ret 0x8

global GetNumberOfConsoleMouseButtons
extern GetNumberOfConsoleMouseButtons
export GetNumberOfConsoleMouseButtons

GetNumberOfConsoleMouseButtons:
	mov eax, THUNK_KERNEL32_GETNUMBEROFCONSOLEMOUSEBUTTONS
	int SYSCALL_THUNK
	ret 0x4

global GetOEMCP
extern GetOEMCP
export GetOEMCP

GetOEMCP:
	mov eax, THUNK_KERNEL32_GETOEMCP
	int SYSCALL_THUNK
	ret 0x0

global GetOverlappedResult
extern GetOverlappedResult
export GetOverlappedResult

GetOverlappedResult:
	mov eax, THUNK_KERNEL32_GETOVERLAPPEDRESULT
	int SYSCALL_THUNK
	ret 0x10

global GetPriorityClass
extern GetPriorityClass
export GetPriorityClass

GetPriorityClass:
	mov eax, THUNK_KERNEL32_GETPRIORITYCLASS
	int SYSCALL_THUNK
	ret 0x4

global GetPrivateProfileIntA
extern GetPrivateProfileIntA
export GetPrivateProfileIntA

GetPrivateProfileIntA:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILEINTA
	int SYSCALL_THUNK
	ret 0x10

global GetPrivateProfileIntW
extern GetPrivateProfileIntW
export GetPrivateProfileIntW

GetPrivateProfileIntW:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILEINTW
	int SYSCALL_THUNK
	ret 0x10

global GetPrivateProfileSectionA
extern GetPrivateProfileSectionA
export GetPrivateProfileSectionA

GetPrivateProfileSectionA:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESECTIONA
	int SYSCALL_THUNK
	ret 0x10

global GetPrivateProfileSectionW
extern GetPrivateProfileSectionW
export GetPrivateProfileSectionW

GetPrivateProfileSectionW:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESECTIONW
	int SYSCALL_THUNK
	ret 0x10

global GetPrivateProfileSectionNamesA
extern GetPrivateProfileSectionNamesA
export GetPrivateProfileSectionNamesA

GetPrivateProfileSectionNamesA:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESECTIONNAMESA
	int SYSCALL_THUNK
	ret 0xc

global GetPrivateProfileSectionNamesW
extern GetPrivateProfileSectionNamesW
export GetPrivateProfileSectionNamesW

GetPrivateProfileSectionNamesW:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESECTIONNAMESW
	int SYSCALL_THUNK
	ret 0xc

global GetPrivateProfileStringA
extern GetPrivateProfileStringA
export GetPrivateProfileStringA

GetPrivateProfileStringA:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESTRINGA
	int SYSCALL_THUNK
	ret 0x18

global GetPrivateProfileStringW
extern GetPrivateProfileStringW
export GetPrivateProfileStringW

GetPrivateProfileStringW:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESTRINGW
	int SYSCALL_THUNK
	ret 0x18

global GetPrivateProfileStructA
extern GetPrivateProfileStructA
export GetPrivateProfileStructA

GetPrivateProfileStructA:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESTRUCTA
	int SYSCALL_THUNK
	ret 0x14

global GetPrivateProfileStructW
extern GetPrivateProfileStructW
export GetPrivateProfileStructW

GetPrivateProfileStructW:
	mov eax, THUNK_KERNEL32_GETPRIVATEPROFILESTRUCTW
	int SYSCALL_THUNK
	ret 0x14

global GetProcAddress
extern GetProcAddress
export GetProcAddress

GetProcAddress:
	mov eax, THUNK_KERNEL32_GETPROCADDRESS
	int SYSCALL_THUNK
	ret 0x8

global GetProcessAffinityMask
extern GetProcessAffinityMask
export GetProcessAffinityMask

GetProcessAffinityMask:
	mov eax, THUNK_KERNEL32_GETPROCESSAFFINITYMASK
	int SYSCALL_THUNK
	ret 0xc

global GetProcessHeap
extern GetProcessHeap
export GetProcessHeap

GetProcessHeap:
	mov eax, THUNK_KERNEL32_GETPROCESSHEAP
	int SYSCALL_THUNK
	ret 0x0

global GetProcessHeaps
extern GetProcessHeaps
export GetProcessHeaps

GetProcessHeaps:
	mov eax, THUNK_KERNEL32_GETPROCESSHEAPS
	int SYSCALL_THUNK
	ret 0x8

global GetProcessShutdownParameters
extern GetProcessShutdownParameters
export GetProcessShutdownParameters

GetProcessShutdownParameters:
	mov eax, THUNK_KERNEL32_GETPROCESSSHUTDOWNPARAMETERS
	int SYSCALL_THUNK
	ret 0x8

global GetProcessTimes
extern GetProcessTimes
export GetProcessTimes

GetProcessTimes:
	mov eax, THUNK_KERNEL32_GETPROCESSTIMES
	int SYSCALL_THUNK
	ret 0x14

global GetProcessVersion
extern GetProcessVersion
export GetProcessVersion

GetProcessVersion:
	mov eax, THUNK_KERNEL32_GETPROCESSVERSION
	int SYSCALL_THUNK
	ret 0x4

global GetProcessWorkingSetSize
extern GetProcessWorkingSetSize
export GetProcessWorkingSetSize

GetProcessWorkingSetSize:
	mov eax, THUNK_KERNEL32_GETPROCESSWORKINGSETSIZE
	int SYSCALL_THUNK
	ret 0xc

global GetProfileIntA
extern GetProfileIntA
export GetProfileIntA

GetProfileIntA:
	mov eax, THUNK_KERNEL32_GETPROFILEINTA
	int SYSCALL_THUNK
	ret 0xc

global GetProfileIntW
extern GetProfileIntW
export GetProfileIntW

GetProfileIntW:
	mov eax, THUNK_KERNEL32_GETPROFILEINTW
	int SYSCALL_THUNK
	ret 0xc

global GetProfileSectionA
extern GetProfileSectionA
export GetProfileSectionA

GetProfileSectionA:
	mov eax, THUNK_KERNEL32_GETPROFILESECTIONA
	int SYSCALL_THUNK
	ret 0xc

global GetProfileSectionW
extern GetProfileSectionW
export GetProfileSectionW

GetProfileSectionW:
	mov eax, THUNK_KERNEL32_GETPROFILESECTIONW
	int SYSCALL_THUNK
	ret 0xc

global GetProfileStringA
extern GetProfileStringA
export GetProfileStringA

GetProfileStringA:
	mov eax, THUNK_KERNEL32_GETPROFILESTRINGA
	int SYSCALL_THUNK
	ret 0x14

global GetProfileStringW
extern GetProfileStringW
export GetProfileStringW

GetProfileStringW:
	mov eax, THUNK_KERNEL32_GETPROFILESTRINGW
	int SYSCALL_THUNK
	ret 0x14

global GetQueuedCompletionStatus
extern GetQueuedCompletionStatus
export GetQueuedCompletionStatus

GetQueuedCompletionStatus:
	mov eax, THUNK_KERNEL32_GETQUEUEDCOMPLETIONSTATUS
	int SYSCALL_THUNK
	ret 0x14

global GetShortPathNameA
extern GetShortPathNameA
export GetShortPathNameA

GetShortPathNameA:
	mov eax, THUNK_KERNEL32_GETSHORTPATHNAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetShortPathNameW
extern GetShortPathNameW
export GetShortPathNameW

GetShortPathNameW:
	mov eax, THUNK_KERNEL32_GETSHORTPATHNAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetStartupInfo
extern GetStartupInfo
export GetStartupInfo

GetStartupInfo:
	mov eax, THUNK_KERNEL32_GETSTARTUPINFO
	int SYSCALL_THUNK
	ret 0x4

global GetStartupInfoA
extern GetStartupInfoA
export GetStartupInfoA

GetStartupInfoA:
	mov eax, THUNK_KERNEL32_GETSTARTUPINFOA
	int SYSCALL_THUNK
	ret 0x4

global GetStartupInfoW
extern GetStartupInfoW
export GetStartupInfoW

GetStartupInfoW:
	mov eax, THUNK_KERNEL32_GETSTARTUPINFOW
	int SYSCALL_THUNK
	ret 0x4

global GetStdHandle
extern GetStdHandle
export GetStdHandle

GetStdHandle:
	mov eax, THUNK_KERNEL32_GETSTDHANDLE
	int SYSCALL_THUNK
	ret 0x4

global GetStringTypeA
extern GetStringTypeA
export GetStringTypeA

GetStringTypeA:
	mov eax, THUNK_KERNEL32_GETSTRINGTYPEA
	int SYSCALL_THUNK
	ret 0x14

global GetStringTypeExW
extern GetStringTypeExW
export GetStringTypeExW

GetStringTypeExW:
	mov eax, THUNK_KERNEL32_GETSTRINGTYPEEXW
	int SYSCALL_THUNK
	ret 0x14

global GetStringTypeExA
extern GetStringTypeExA
export GetStringTypeExA

GetStringTypeExA:
	mov eax, THUNK_KERNEL32_GETSTRINGTYPEEXA
	int SYSCALL_THUNK
	ret 0x14

global GetStringTypeW
extern GetStringTypeW
export GetStringTypeW

GetStringTypeW:
	mov eax, THUNK_KERNEL32_GETSTRINGTYPEW
	int SYSCALL_THUNK
	ret 0x10

global GetSystemDefaultLCID
extern GetSystemDefaultLCID
export GetSystemDefaultLCID

GetSystemDefaultLCID:
	mov eax, THUNK_KERNEL32_GETSYSTEMDEFAULTLCID
	int SYSCALL_THUNK
	ret 0x0

global GetSystemDefaultLangID
extern GetSystemDefaultLangID
export GetSystemDefaultLangID

GetSystemDefaultLangID:
	mov eax, THUNK_KERNEL32_GETSYSTEMDEFAULTLANGID
	int SYSCALL_THUNK
	ret 0x0

global GetSystemDirectoryA
extern GetSystemDirectoryA
export GetSystemDirectoryA

GetSystemDirectoryA:
	mov eax, THUNK_KERNEL32_GETSYSTEMDIRECTORYA
	int SYSCALL_THUNK
	ret 0x8

global GetSystemDirectoryW
extern GetSystemDirectoryW
export GetSystemDirectoryW

GetSystemDirectoryW:
	mov eax, THUNK_KERNEL32_GETSYSTEMDIRECTORYW
	int SYSCALL_THUNK
	ret 0x8

global GetSystemInfo
extern GetSystemInfo
export GetSystemInfo

GetSystemInfo:
	mov eax, THUNK_KERNEL32_GETSYSTEMINFO
	int SYSCALL_THUNK
	ret 0x4

global GetSystemPowerStatus
extern GetSystemPowerStatus
export GetSystemPowerStatus

GetSystemPowerStatus:
	mov eax, THUNK_KERNEL32_GETSYSTEMPOWERSTATUS
	int SYSCALL_THUNK
	ret 0x4

global GetSystemTime
extern GetSystemTime
export GetSystemTime

GetSystemTime:
	mov eax, THUNK_KERNEL32_GETSYSTEMTIME
	int SYSCALL_THUNK
	ret 0x4

global GetSystemTimeAdjustment
extern GetSystemTimeAdjustment
export GetSystemTimeAdjustment

GetSystemTimeAdjustment:
	mov eax, THUNK_KERNEL32_GETSYSTEMTIMEADJUSTMENT
	int SYSCALL_THUNK
	ret 0xc

global GetSystemTimeAsFileTime
extern GetSystemTimeAsFileTime
export GetSystemTimeAsFileTime

GetSystemTimeAsFileTime:
	mov eax, THUNK_KERNEL32_GETSYSTEMTIMEASFILETIME
	int SYSCALL_THUNK
	ret 0x4

global GetTempFileNameA
extern GetTempFileNameA
export GetTempFileNameA

GetTempFileNameA:
	mov eax, THUNK_KERNEL32_GETTEMPFILENAMEA
	int SYSCALL_THUNK
	ret 0x10

global GetTempFileNameW
extern GetTempFileNameW
export GetTempFileNameW

GetTempFileNameW:
	mov eax, THUNK_KERNEL32_GETTEMPFILENAMEW
	int SYSCALL_THUNK
	ret 0x10

global GetThreadContext
extern GetThreadContext
export GetThreadContext

GetThreadContext:
	mov eax, THUNK_KERNEL32_GETTHREADCONTEXT
	int SYSCALL_THUNK
	ret 0x8

global GetThreadLocale
extern GetThreadLocale
export GetThreadLocale

GetThreadLocale:
	mov eax, THUNK_KERNEL32_GETTHREADLOCALE
	int SYSCALL_THUNK
	ret 0x0

global GetThreadPriority
extern GetThreadPriority
export GetThreadPriority

GetThreadPriority:
	mov eax, THUNK_KERNEL32_GETTHREADPRIORITY
	int SYSCALL_THUNK
	ret 0x4

global GetThreadSelectorEntry
extern GetThreadSelectorEntry
export GetThreadSelectorEntry

GetThreadSelectorEntry:
	mov eax, THUNK_KERNEL32_GETTHREADSELECTORENTRY
	int SYSCALL_THUNK
	ret 0xc

global GetThreadTimes
extern GetThreadTimes
export GetThreadTimes

GetThreadTimes:
	mov eax, THUNK_KERNEL32_GETTHREADTIMES
	int SYSCALL_THUNK
	ret 0x14

global GetTickCount
extern GetTickCount
export GetTickCount

GetTickCount:
	mov eax, THUNK_KERNEL32_GETTICKCOUNT
	int SYSCALL_THUNK
	ret 0x0

global GetTimeFormatA
extern GetTimeFormatA
export GetTimeFormatA

GetTimeFormatA:
	mov eax, THUNK_KERNEL32_GETTIMEFORMATA
	int SYSCALL_THUNK
	ret 0x18

global GetTimeFormatW
extern GetTimeFormatW
export GetTimeFormatW

GetTimeFormatW:
	mov eax, THUNK_KERNEL32_GETTIMEFORMATW
	int SYSCALL_THUNK
	ret 0x18

global GetTimeZoneInformation
extern GetTimeZoneInformation
export GetTimeZoneInformation

GetTimeZoneInformation:
	mov eax, THUNK_KERNEL32_GETTIMEZONEINFORMATION
	int SYSCALL_THUNK
	ret 0x4

global GetUserDefaultLCID
extern GetUserDefaultLCID
export GetUserDefaultLCID

GetUserDefaultLCID:
	mov eax, THUNK_KERNEL32_GETUSERDEFAULTLCID
	int SYSCALL_THUNK
	ret 0x0

global GetUserDefaultLangID
extern GetUserDefaultLangID
export GetUserDefaultLangID

GetUserDefaultLangID:
	mov eax, THUNK_KERNEL32_GETUSERDEFAULTLANGID
	int SYSCALL_THUNK
	ret 0x0

global GetVersion
extern GetVersion
export GetVersion

GetVersion:
	mov eax, THUNK_KERNEL32_GETVERSION
	int SYSCALL_THUNK
	ret 0x0

global GetVersionExA
extern GetVersionExA
export GetVersionExA

GetVersionExA:
	mov eax, THUNK_KERNEL32_GETVERSIONEXA
	int SYSCALL_THUNK
	ret 0x4

global GetVersionExW
extern GetVersionExW
export GetVersionExW

GetVersionExW:
	mov eax, THUNK_KERNEL32_GETVERSIONEXW
	int SYSCALL_THUNK
	ret 0x4

global GetVolumeInformationA
extern GetVolumeInformationA
export GetVolumeInformationA

GetVolumeInformationA:
	mov eax, THUNK_KERNEL32_GETVOLUMEINFORMATIONA
	int SYSCALL_THUNK
	ret 0x20

global GetVolumeInformationW
extern GetVolumeInformationW
export GetVolumeInformationW

GetVolumeInformationW:
	mov eax, THUNK_KERNEL32_GETVOLUMEINFORMATIONW
	int SYSCALL_THUNK
	ret 0x20

global GetWindowsDirectoryA
extern GetWindowsDirectoryA
export GetWindowsDirectoryA

GetWindowsDirectoryA:
	mov eax, THUNK_KERNEL32_GETWINDOWSDIRECTORYA
	int SYSCALL_THUNK
	ret 0x8

global GetWindowsDirectoryW
extern GetWindowsDirectoryW
export GetWindowsDirectoryW

GetWindowsDirectoryW:
	mov eax, THUNK_KERNEL32_GETWINDOWSDIRECTORYW
	int SYSCALL_THUNK
	ret 0x8

global GlobalAddAtomA
extern GlobalAddAtomA
export GlobalAddAtomA

GlobalAddAtomA:
	mov eax, THUNK_KERNEL32_GLOBALADDATOMA
	int SYSCALL_THUNK
	ret 0x4

global GlobalAddAtomW
extern GlobalAddAtomW
export GlobalAddAtomW

GlobalAddAtomW:
	mov eax, THUNK_KERNEL32_GLOBALADDATOMW
	int SYSCALL_THUNK
	ret 0x4

global GlobalAlloc
extern GlobalAlloc
export GlobalAlloc

GlobalAlloc:
	mov eax, THUNK_KERNEL32_GLOBALALLOC
	int SYSCALL_THUNK
	ret 0x8

global GlobalDeleteAtom
extern GlobalDeleteAtom
export GlobalDeleteAtom

GlobalDeleteAtom:
	mov eax, THUNK_KERNEL32_GLOBALDELETEATOM
	int SYSCALL_THUNK
	ret 0x4

global GlobalFindAtomA
extern GlobalFindAtomA
export GlobalFindAtomA

GlobalFindAtomA:
	mov eax, THUNK_KERNEL32_GLOBALFINDATOMA
	int SYSCALL_THUNK
	ret 0x4

global GlobalFindAtomW
extern GlobalFindAtomW
export GlobalFindAtomW

GlobalFindAtomW:
	mov eax, THUNK_KERNEL32_GLOBALFINDATOMW
	int SYSCALL_THUNK
	ret 0x4

global GlobalFlags
extern GlobalFlags
export GlobalFlags

GlobalFlags:
	mov eax, THUNK_KERNEL32_GLOBALFLAGS
	int SYSCALL_THUNK
	ret 0x4

global GlobalFree
extern GlobalFree
export GlobalFree

GlobalFree:
	mov eax, THUNK_KERNEL32_GLOBALFREE
	int SYSCALL_THUNK
	ret 0x4

global GlobalGetAtomNameA
extern GlobalGetAtomNameA
export GlobalGetAtomNameA

GlobalGetAtomNameA:
	mov eax, THUNK_KERNEL32_GLOBALGETATOMNAMEA
	int SYSCALL_THUNK
	ret 0xc

global GlobalGetAtomNameW
extern GlobalGetAtomNameW
export GlobalGetAtomNameW

GlobalGetAtomNameW:
	mov eax, THUNK_KERNEL32_GLOBALGETATOMNAMEW
	int SYSCALL_THUNK
	ret 0xc

global GlobalHandle
extern GlobalHandle
export GlobalHandle

GlobalHandle:
	mov eax, THUNK_KERNEL32_GLOBALHANDLE
	int SYSCALL_THUNK
	ret 0x4

global GlobalLock
extern GlobalLock
export GlobalLock

GlobalLock:
	mov eax, THUNK_KERNEL32_GLOBALLOCK
	int SYSCALL_THUNK
	ret 0x4

global GlobalMemoryStatus
extern GlobalMemoryStatus
export GlobalMemoryStatus

GlobalMemoryStatus:
	mov eax, THUNK_KERNEL32_GLOBALMEMORYSTATUS
	int SYSCALL_THUNK
	ret 0x4

global GlobalReAlloc
extern GlobalReAlloc
export GlobalReAlloc

GlobalReAlloc:
	mov eax, THUNK_KERNEL32_GLOBALREALLOC
	int SYSCALL_THUNK
	ret 0xc

global GlobalSize
extern GlobalSize
export GlobalSize

GlobalSize:
	mov eax, THUNK_KERNEL32_GLOBALSIZE
	int SYSCALL_THUNK
	ret 0x4

global GlobalUnlock
extern GlobalUnlock
export GlobalUnlock

GlobalUnlock:
	mov eax, THUNK_KERNEL32_GLOBALUNLOCK
	int SYSCALL_THUNK
	ret 0x4

global HeapAlloc
extern HeapAlloc
export HeapAlloc

HeapAlloc:
	mov eax, THUNK_KERNEL32_HEAPALLOC
	int SYSCALL_THUNK
	ret 0xc

global HeapCompact
extern HeapCompact
export HeapCompact

HeapCompact:
	mov eax, THUNK_KERNEL32_HEAPCOMPACT
	int SYSCALL_THUNK
	ret 0x8

global HeapCreate
extern HeapCreate
export HeapCreate

HeapCreate:
	mov eax, THUNK_KERNEL32_HEAPCREATE
	int SYSCALL_THUNK
	ret 0xc

global HeapDestroy
extern HeapDestroy
export HeapDestroy

HeapDestroy:
	mov eax, THUNK_KERNEL32_HEAPDESTROY
	int SYSCALL_THUNK
	ret 0x4

global HeapFree
extern HeapFree
export HeapFree

HeapFree:
	mov eax, THUNK_KERNEL32_HEAPFREE
	int SYSCALL_THUNK
	ret 0xc

global HeapLock
extern HeapLock
export HeapLock

HeapLock:
	mov eax, THUNK_KERNEL32_HEAPLOCK
	int SYSCALL_THUNK
	ret 0x4

global HeapReAlloc
extern HeapReAlloc
export HeapReAlloc

HeapReAlloc:
	mov eax, THUNK_KERNEL32_HEAPREALLOC
	int SYSCALL_THUNK
	ret 0x10

global HeapSize
extern HeapSize
export HeapSize

HeapSize:
	mov eax, THUNK_KERNEL32_HEAPSIZE
	int SYSCALL_THUNK
	ret 0xc

global HeapSummary
extern HeapSummary
export HeapSummary

HeapSummary:
	mov eax, THUNK_KERNEL32_HEAPSUMMARY
	int SYSCALL_THUNK
	ret 0xc

global HeapUnlock
extern HeapUnlock
export HeapUnlock

HeapUnlock:
	mov eax, THUNK_KERNEL32_HEAPUNLOCK
	int SYSCALL_THUNK
	ret 0x4

global HeapValidate
extern HeapValidate
export HeapValidate

HeapValidate:
	mov eax, THUNK_KERNEL32_HEAPVALIDATE
	int SYSCALL_THUNK
	ret 0xc

global HeapWalk
extern HeapWalk
export HeapWalk

HeapWalk:
	mov eax, THUNK_KERNEL32_HEAPWALK
	int SYSCALL_THUNK
	ret 0x8

global InitAtomTable
extern InitAtomTable
export InitAtomTable

InitAtomTable:
	mov eax, THUNK_KERNEL32_INITATOMTABLE
	int SYSCALL_THUNK
	ret 0x4

global InitializeCriticalSection
extern InitializeCriticalSection
export InitializeCriticalSection

InitializeCriticalSection:
	mov eax, THUNK_KERNEL32_INITIALIZECRITICALSECTION
	int SYSCALL_THUNK
	ret 0x4

global InterlockedDecrement
extern InterlockedDecrement
export InterlockedDecrement

InterlockedDecrement:
	mov eax, THUNK_KERNEL32_INTERLOCKEDDECREMENT
	int SYSCALL_THUNK
	ret 0x4

global InterlockedExchange
extern InterlockedExchange
export InterlockedExchange

InterlockedExchange:
	mov eax, THUNK_KERNEL32_INTERLOCKEDEXCHANGE
	int SYSCALL_THUNK
	ret 0x8

global InterlockedIncrement
extern InterlockedIncrement
export InterlockedIncrement

InterlockedIncrement:
	mov eax, THUNK_KERNEL32_INTERLOCKEDINCREMENT
	int SYSCALL_THUNK
	ret 0x4

global IsBadCodePtr
extern IsBadCodePtr
export IsBadCodePtr

IsBadCodePtr:
	mov eax, THUNK_KERNEL32_ISBADCODEPTR
	int SYSCALL_THUNK
	ret 0x4

global IsBadHugeReadPtr
extern IsBadHugeReadPtr
export IsBadHugeReadPtr

IsBadHugeReadPtr:
	mov eax, THUNK_KERNEL32_ISBADHUGEREADPTR
	int SYSCALL_THUNK
	ret 0x8

global IsBadHugeWritePtr
extern IsBadHugeWritePtr
export IsBadHugeWritePtr

IsBadHugeWritePtr:
	mov eax, THUNK_KERNEL32_ISBADHUGEWRITEPTR
	int SYSCALL_THUNK
	ret 0x8

global IsBadReadPtr
extern IsBadReadPtr
export IsBadReadPtr

IsBadReadPtr:
	mov eax, THUNK_KERNEL32_ISBADREADPTR
	int SYSCALL_THUNK
	ret 0x8

global IsBadStringPtrA
extern IsBadStringPtrA
export IsBadStringPtrA

IsBadStringPtrA:
	mov eax, THUNK_KERNEL32_ISBADSTRINGPTRA
	int SYSCALL_THUNK
	ret 0x8

global IsBadStringPtrW
extern IsBadStringPtrW
export IsBadStringPtrW

IsBadStringPtrW:
	mov eax, THUNK_KERNEL32_ISBADSTRINGPTRW
	int SYSCALL_THUNK
	ret 0x8

global IsBadWritePtr
extern IsBadWritePtr
export IsBadWritePtr

IsBadWritePtr:
	mov eax, THUNK_KERNEL32_ISBADWRITEPTR
	int SYSCALL_THUNK
	ret 0x8

global IsDBCSLeadByte
extern IsDBCSLeadByte
export IsDBCSLeadByte

IsDBCSLeadByte:
	mov eax, THUNK_KERNEL32_ISDBCSLEADBYTE
	int SYSCALL_THUNK
	ret 0x4

global IsDBCSLeadByteEx
extern IsDBCSLeadByteEx
export IsDBCSLeadByteEx

IsDBCSLeadByteEx:
	mov eax, THUNK_KERNEL32_ISDBCSLEADBYTEEX
	int SYSCALL_THUNK
	ret 0x8

global IsDebuggerPresent
extern IsDebuggerPresent
export IsDebuggerPresent

IsDebuggerPresent:
	mov eax, THUNK_KERNEL32_ISDEBUGGERPRESENT
	int SYSCALL_THUNK
	ret 0x0

global IsValidCodePage
extern IsValidCodePage
export IsValidCodePage

IsValidCodePage:
	mov eax, THUNK_KERNEL32_ISVALIDCODEPAGE
	int SYSCALL_THUNK
	ret 0x4

global IsValidLocale
extern IsValidLocale
export IsValidLocale

IsValidLocale:
	mov eax, THUNK_KERNEL32_ISVALIDLOCALE
	int SYSCALL_THUNK
	ret 0x8

global LCMapStringA
extern LCMapStringA
export LCMapStringA

LCMapStringA:
	mov eax, THUNK_KERNEL32_LCMAPSTRINGA
	int SYSCALL_THUNK
	ret 0x18

global LCMapStringW
extern LCMapStringW
export LCMapStringW

LCMapStringW:
	mov eax, THUNK_KERNEL32_LCMAPSTRINGW
	int SYSCALL_THUNK
	ret 0x18

global LeaveCriticalSection
extern LeaveCriticalSection
export LeaveCriticalSection

LeaveCriticalSection:
	mov eax, THUNK_KERNEL32_LEAVECRITICALSECTION
	int SYSCALL_THUNK
	ret 0x4

global LoadLibraryA
extern LoadLibraryA
export LoadLibraryA

LoadLibraryA:
	mov eax, THUNK_KERNEL32_LOADLIBRARYA
	int SYSCALL_THUNK
	ret 0x4

global LoadLibraryExA
extern LoadLibraryExA
export LoadLibraryExA

LoadLibraryExA:
	mov eax, THUNK_KERNEL32_LOADLIBRARYEXA
	int SYSCALL_THUNK
	ret 0xc

global LoadLibraryExW
extern LoadLibraryExW
export LoadLibraryExW

LoadLibraryExW:
	mov eax, THUNK_KERNEL32_LOADLIBRARYEXW
	int SYSCALL_THUNK
	ret 0xc

global LoadLibraryW
extern LoadLibraryW
export LoadLibraryW

LoadLibraryW:
	mov eax, THUNK_KERNEL32_LOADLIBRARYW
	int SYSCALL_THUNK
	ret 0x4

global LoadModule
extern LoadModule
export LoadModule

LoadModule:
	mov eax, THUNK_KERNEL32_LOADMODULE
	int SYSCALL_THUNK
	ret 0x8

global LoadResource
extern LoadResource
export LoadResource

LoadResource:
	mov eax, THUNK_KERNEL32_LOADRESOURCE
	int SYSCALL_THUNK
	ret 0x8

global LocalAlloc
extern LocalAlloc
export LocalAlloc

LocalAlloc:
	mov eax, THUNK_KERNEL32_LOCALALLOC
	int SYSCALL_THUNK
	ret 0x8

global LocalCompact
extern LocalCompact
export LocalCompact

LocalCompact:
	mov eax, THUNK_KERNEL32_LOCALCOMPACT
	int SYSCALL_THUNK
	ret 0x4

global LocalFileTimeToFileTime
extern LocalFileTimeToFileTime
export LocalFileTimeToFileTime

LocalFileTimeToFileTime:
	mov eax, THUNK_KERNEL32_LOCALFILETIMETOFILETIME
	int SYSCALL_THUNK
	ret 0x8

global LocalFlags
extern LocalFlags
export LocalFlags

LocalFlags:
	mov eax, THUNK_KERNEL32_LOCALFLAGS
	int SYSCALL_THUNK
	ret 0x4

global LocalFree
extern LocalFree
export LocalFree

LocalFree:
	mov eax, THUNK_KERNEL32_LOCALFREE
	int SYSCALL_THUNK
	ret 0x4

global LocalHandle
extern LocalHandle
export LocalHandle

LocalHandle:
	mov eax, THUNK_KERNEL32_LOCALHANDLE
	int SYSCALL_THUNK
	ret 0x4

global LocalLock
extern LocalLock
export LocalLock

LocalLock:
	mov eax, THUNK_KERNEL32_LOCALLOCK
	int SYSCALL_THUNK
	ret 0x4

global LocalReAlloc
extern LocalReAlloc
export LocalReAlloc

LocalReAlloc:
	mov eax, THUNK_KERNEL32_LOCALREALLOC
	int SYSCALL_THUNK
	ret 0xc

global LocalSize
extern LocalSize
export LocalSize

LocalSize:
	mov eax, THUNK_KERNEL32_LOCALSIZE
	int SYSCALL_THUNK
	ret 0x4

global LocalUnlock
extern LocalUnlock
export LocalUnlock

LocalUnlock:
	mov eax, THUNK_KERNEL32_LOCALUNLOCK
	int SYSCALL_THUNK
	ret 0x4

global LockFile
extern LockFile
export LockFile

LockFile:
	mov eax, THUNK_KERNEL32_LOCKFILE
	int SYSCALL_THUNK
	ret 0x14

global LockFileEx
extern LockFileEx
export LockFileEx

LockFileEx:
	mov eax, THUNK_KERNEL32_LOCKFILEEX
	int SYSCALL_THUNK
	ret 0x18

global LockResource
extern LockResource
export LockResource

LockResource:
	mov eax, THUNK_KERNEL32_LOCKRESOURCE
	int SYSCALL_THUNK
	ret 0x4

global MapViewOfFile
extern MapViewOfFile
export MapViewOfFile

MapViewOfFile:
	mov eax, THUNK_KERNEL32_MAPVIEWOFFILE
	int SYSCALL_THUNK
	ret 0x14

global MapViewOfFileEx
extern MapViewOfFileEx
export MapViewOfFileEx

MapViewOfFileEx:
	mov eax, THUNK_KERNEL32_MAPVIEWOFFILEEX
	int SYSCALL_THUNK
	ret 0x18

global MoveFileA
extern MoveFileA
export MoveFileA

MoveFileA:
	mov eax, THUNK_KERNEL32_MOVEFILEA
	int SYSCALL_THUNK
	ret 0x8

global MoveFileExA
extern MoveFileExA
export MoveFileExA

MoveFileExA:
	mov eax, THUNK_KERNEL32_MOVEFILEEXA
	int SYSCALL_THUNK
	ret 0xc

global MoveFileExW
extern MoveFileExW
export MoveFileExW

MoveFileExW:
	mov eax, THUNK_KERNEL32_MOVEFILEEXW
	int SYSCALL_THUNK
	ret 0xc

global MoveFileW
extern MoveFileW
export MoveFileW

MoveFileW:
	mov eax, THUNK_KERNEL32_MOVEFILEW
	int SYSCALL_THUNK
	ret 0x8

global MulDiv
extern MulDiv
export MulDiv

MulDiv:
	mov eax, THUNK_KERNEL32_MULDIV
	int SYSCALL_THUNK
	ret 0xc

global MultiByteToWideChar
extern MultiByteToWideChar
export MultiByteToWideChar

MultiByteToWideChar:
	mov eax, THUNK_KERNEL32_MULTIBYTETOWIDECHAR
	int SYSCALL_THUNK
	ret 0x18

global OpenEventA
extern OpenEventA
export OpenEventA

OpenEventA:
	mov eax, THUNK_KERNEL32_OPENEVENTA
	int SYSCALL_THUNK
	ret 0xc

global OpenEventW
extern OpenEventW
export OpenEventW

OpenEventW:
	mov eax, THUNK_KERNEL32_OPENEVENTW
	int SYSCALL_THUNK
	ret 0xc

global OpenFile
extern OpenFile
export OpenFile

OpenFile:
	mov eax, THUNK_KERNEL32_OPENFILE
	int SYSCALL_THUNK
	ret 0xc

global OpenFileMappingA
extern OpenFileMappingA
export OpenFileMappingA

OpenFileMappingA:
	mov eax, THUNK_KERNEL32_OPENFILEMAPPINGA
	int SYSCALL_THUNK
	ret 0xc

global OpenFileMappingW
extern OpenFileMappingW
export OpenFileMappingW

OpenFileMappingW:
	mov eax, THUNK_KERNEL32_OPENFILEMAPPINGW
	int SYSCALL_THUNK
	ret 0xc

global OpenMutexA
extern OpenMutexA
export OpenMutexA

OpenMutexA:
	mov eax, THUNK_KERNEL32_OPENMUTEXA
	int SYSCALL_THUNK
	ret 0xc

global OpenMutexW
extern OpenMutexW
export OpenMutexW

OpenMutexW:
	mov eax, THUNK_KERNEL32_OPENMUTEXW
	int SYSCALL_THUNK
	ret 0xc

global OpenProcess
extern OpenProcess
export OpenProcess

OpenProcess:
	mov eax, THUNK_KERNEL32_OPENPROCESS
	int SYSCALL_THUNK
	ret 0xc

global OpenSemaphoreA
extern OpenSemaphoreA
export OpenSemaphoreA

OpenSemaphoreA:
	mov eax, THUNK_KERNEL32_OPENSEMAPHOREA
	int SYSCALL_THUNK
	ret 0xc

global OpenSemaphoreW
extern OpenSemaphoreW
export OpenSemaphoreW

OpenSemaphoreW:
	mov eax, THUNK_KERNEL32_OPENSEMAPHOREW
	int SYSCALL_THUNK
	ret 0xc

global OutputDebugStringA
extern OutputDebugStringA
export OutputDebugStringA

OutputDebugStringA:
	mov eax, THUNK_KERNEL32_OUTPUTDEBUGSTRINGA
	int SYSCALL_THUNK
	ret 0x4

global OutputDebugStringW
extern OutputDebugStringW
export OutputDebugStringW

OutputDebugStringW:
	mov eax, THUNK_KERNEL32_OUTPUTDEBUGSTRINGW
	int SYSCALL_THUNK
	ret 0x4

global PeekConsoleInputA
extern PeekConsoleInputA
export PeekConsoleInputA

PeekConsoleInputA:
	mov eax, THUNK_KERNEL32_PEEKCONSOLEINPUTA
	int SYSCALL_THUNK
	ret 0x10

global PeekConsoleInputW
extern PeekConsoleInputW
export PeekConsoleInputW

PeekConsoleInputW:
	mov eax, THUNK_KERNEL32_PEEKCONSOLEINPUTW
	int SYSCALL_THUNK
	ret 0x10

global PeekNamedPipe
extern PeekNamedPipe
export PeekNamedPipe

PeekNamedPipe:
	mov eax, THUNK_KERNEL32_PEEKNAMEDPIPE
	int SYSCALL_THUNK
	ret 0x18

global PostQueuedCompletionStatus
extern PostQueuedCompletionStatus
export PostQueuedCompletionStatus

PostQueuedCompletionStatus:
	mov eax, THUNK_KERNEL32_POSTQUEUEDCOMPLETIONSTATUS
	int SYSCALL_THUNK
	ret 0x10

global PrepareTape
extern PrepareTape
export PrepareTape

PrepareTape:
	mov eax, THUNK_KERNEL32_PREPARETAPE
	int SYSCALL_THUNK
	ret 0xc

global PulseEvent
extern PulseEvent
export PulseEvent

PulseEvent:
	mov eax, THUNK_KERNEL32_PULSEEVENT
	int SYSCALL_THUNK
	ret 0x4

global PurgeComm
extern PurgeComm
export PurgeComm

PurgeComm:
	mov eax, THUNK_KERNEL32_PURGECOMM
	int SYSCALL_THUNK
	ret 0x8

global QueryDosDeviceA
extern QueryDosDeviceA
export QueryDosDeviceA

QueryDosDeviceA:
	mov eax, THUNK_KERNEL32_QUERYDOSDEVICEA
	int SYSCALL_THUNK
	ret 0xc

global QueryDosDeviceW
extern QueryDosDeviceW
export QueryDosDeviceW

QueryDosDeviceW:
	mov eax, THUNK_KERNEL32_QUERYDOSDEVICEW
	int SYSCALL_THUNK
	ret 0xc

global QueryPerformanceCounter
extern QueryPerformanceCounter
export QueryPerformanceCounter

QueryPerformanceCounter:
	mov eax, THUNK_KERNEL32_QUERYPERFORMANCECOUNTER
	int SYSCALL_THUNK
	ret 0x4

global QueryPerformanceFrequency
extern QueryPerformanceFrequency
export QueryPerformanceFrequency

QueryPerformanceFrequency:
	mov eax, THUNK_KERNEL32_QUERYPERFORMANCEFREQUENCY
	int SYSCALL_THUNK
	ret 0x4

global RaiseException
extern RaiseException
export RaiseException

RaiseException:
	mov eax, THUNK_KERNEL32_RAISEEXCEPTION
	int SYSCALL_THUNK
	ret 0x10

global ReadConsoleA
extern ReadConsoleA
export ReadConsoleA

ReadConsoleA:
	mov eax, THUNK_KERNEL32_READCONSOLEA
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleW
extern ReadConsoleW
export ReadConsoleW

ReadConsoleW:
	mov eax, THUNK_KERNEL32_READCONSOLEW
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleInputA
extern ReadConsoleInputA
export ReadConsoleInputA

ReadConsoleInputA:
	mov eax, THUNK_KERNEL32_READCONSOLEINPUTA
	int SYSCALL_THUNK
	ret 0x10

global ReadConsoleInputW
extern ReadConsoleInputW
export ReadConsoleInputW

ReadConsoleInputW:
	mov eax, THUNK_KERNEL32_READCONSOLEINPUTW
	int SYSCALL_THUNK
	ret 0x10

global ReadConsoleOutputA
extern ReadConsoleOutputA
export ReadConsoleOutputA

ReadConsoleOutputA:
	mov eax, THUNK_KERNEL32_READCONSOLEOUTPUTA
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleOutputW
extern ReadConsoleOutputW
export ReadConsoleOutputW

ReadConsoleOutputW:
	mov eax, THUNK_KERNEL32_READCONSOLEOUTPUTW
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleOutputAttribute
extern ReadConsoleOutputAttribute
export ReadConsoleOutputAttribute

ReadConsoleOutputAttribute:
	mov eax, THUNK_KERNEL32_READCONSOLEOUTPUTATTRIBUTE
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleOutputCharacterA
extern ReadConsoleOutputCharacterA
export ReadConsoleOutputCharacterA

ReadConsoleOutputCharacterA:
	mov eax, THUNK_KERNEL32_READCONSOLEOUTPUTCHARACTERA
	int SYSCALL_THUNK
	ret 0x14

global ReadConsoleOutputCharacterW
extern ReadConsoleOutputCharacterW
export ReadConsoleOutputCharacterW

ReadConsoleOutputCharacterW:
	mov eax, THUNK_KERNEL32_READCONSOLEOUTPUTCHARACTERW
	int SYSCALL_THUNK
	ret 0x14

global ReadFile
extern ReadFile
export ReadFile

ReadFile:
	mov eax, THUNK_KERNEL32_READFILE
	int SYSCALL_THUNK
	ret 0x14

global ReadFileEx
extern ReadFileEx
export ReadFileEx

ReadFileEx:
	mov eax, THUNK_KERNEL32_READFILEEX
	int SYSCALL_THUNK
	ret 0x14

global ReadProcessMemory
extern ReadProcessMemory
export ReadProcessMemory

ReadProcessMemory:
	mov eax, THUNK_KERNEL32_READPROCESSMEMORY
	int SYSCALL_THUNK
	ret 0x14

global ReleaseMutex
extern ReleaseMutex
export ReleaseMutex

ReleaseMutex:
	mov eax, THUNK_KERNEL32_RELEASEMUTEX
	int SYSCALL_THUNK
	ret 0x4

global ReleaseSemaphore
extern ReleaseSemaphore
export ReleaseSemaphore

ReleaseSemaphore:
	mov eax, THUNK_KERNEL32_RELEASESEMAPHORE
	int SYSCALL_THUNK
	ret 0xc

global RemoveDirectoryA
extern RemoveDirectoryA
export RemoveDirectoryA

RemoveDirectoryA:
	mov eax, THUNK_KERNEL32_REMOVEDIRECTORYA
	int SYSCALL_THUNK
	ret 0x4

global RemoveDirectoryW
extern RemoveDirectoryW
export RemoveDirectoryW

RemoveDirectoryW:
	mov eax, THUNK_KERNEL32_REMOVEDIRECTORYW
	int SYSCALL_THUNK
	ret 0x4

global ResetEvent
extern ResetEvent
export ResetEvent

ResetEvent:
	mov eax, THUNK_KERNEL32_RESETEVENT
	int SYSCALL_THUNK
	ret 0x4

global ResumeThread
extern ResumeThread
export ResumeThread

ResumeThread:
	mov eax, THUNK_KERNEL32_RESUMETHREAD
	int SYSCALL_THUNK
	ret 0x4

global RtlFillMemory
extern RtlFillMemory
export RtlFillMemory

RtlFillMemory:
	mov eax, THUNK_KERNEL32_RTLFILLMEMORY
	int SYSCALL_THUNK
	ret 0xc

global RtlMoveMemory
extern RtlMoveMemory
export RtlMoveMemory

RtlMoveMemory:
	mov eax, THUNK_KERNEL32_RTLMOVEMEMORY
	int SYSCALL_THUNK
	ret 0xc

global RtlUnwind
extern RtlUnwind
export RtlUnwind

RtlUnwind:
	mov eax, THUNK_KERNEL32_RTLUNWIND
	int SYSCALL_THUNK
	ret 0x10

global RtlZeroMemory
extern RtlZeroMemory
export RtlZeroMemory

RtlZeroMemory:
	mov eax, THUNK_KERNEL32_RTLZEROMEMORY
	int SYSCALL_THUNK
	ret 0x8

global ScrollConsoleScreenBuffer
extern ScrollConsoleScreenBuffer
export ScrollConsoleScreenBuffer

ScrollConsoleScreenBuffer:
	mov eax, THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFER
	int SYSCALL_THUNK
	ret 0x14

global ScrollConsoleScreenBufferA
extern ScrollConsoleScreenBufferA
export ScrollConsoleScreenBufferA

ScrollConsoleScreenBufferA:
	mov eax, THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFERA
	int SYSCALL_THUNK
	ret 0x14

global ScrollConsoleScreenBufferW
extern ScrollConsoleScreenBufferW
export ScrollConsoleScreenBufferW

ScrollConsoleScreenBufferW:
	mov eax, THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFERW
	int SYSCALL_THUNK
	ret 0x14

global SearchPathA
extern SearchPathA
export SearchPathA

SearchPathA:
	mov eax, THUNK_KERNEL32_SEARCHPATHA
	int SYSCALL_THUNK
	ret 0x18

global SearchPathW
extern SearchPathW
export SearchPathW

SearchPathW:
	mov eax, THUNK_KERNEL32_SEARCHPATHW
	int SYSCALL_THUNK
	ret 0x18

global SetCommBreak
extern SetCommBreak
export SetCommBreak

SetCommBreak:
	mov eax, THUNK_KERNEL32_SETCOMMBREAK
	int SYSCALL_THUNK
	ret 0x4

global SetCommConfig
extern SetCommConfig
export SetCommConfig

SetCommConfig:
	mov eax, THUNK_KERNEL32_SETCOMMCONFIG
	int SYSCALL_THUNK
	ret 0xc

global SetCommMask
extern SetCommMask
export SetCommMask

SetCommMask:
	mov eax, THUNK_KERNEL32_SETCOMMMASK
	int SYSCALL_THUNK
	ret 0x8

global SetCommState
extern SetCommState
export SetCommState

SetCommState:
	mov eax, THUNK_KERNEL32_SETCOMMSTATE
	int SYSCALL_THUNK
	ret 0x8

global SetCommTimeouts
extern SetCommTimeouts
export SetCommTimeouts

SetCommTimeouts:
	mov eax, THUNK_KERNEL32_SETCOMMTIMEOUTS
	int SYSCALL_THUNK
	ret 0x8

global SetComputerNameA
extern SetComputerNameA
export SetComputerNameA

SetComputerNameA:
	mov eax, THUNK_KERNEL32_SETCOMPUTERNAMEA
	int SYSCALL_THUNK
	ret 0x4

global SetComputerNameW
extern SetComputerNameW
export SetComputerNameW

SetComputerNameW:
	mov eax, THUNK_KERNEL32_SETCOMPUTERNAMEW
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleActiveScreenBuffer
extern SetConsoleActiveScreenBuffer
export SetConsoleActiveScreenBuffer

SetConsoleActiveScreenBuffer:
	mov eax, THUNK_KERNEL32_SETCONSOLEACTIVESCREENBUFFER
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleCP
extern SetConsoleCP
export SetConsoleCP

SetConsoleCP:
	mov eax, THUNK_KERNEL32_SETCONSOLECP
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleCtrlHandler
extern SetConsoleCtrlHandler
export SetConsoleCtrlHandler

SetConsoleCtrlHandler:
	mov eax, THUNK_KERNEL32_SETCONSOLECTRLHANDLER
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleCursorInfo
extern SetConsoleCursorInfo
export SetConsoleCursorInfo

SetConsoleCursorInfo:
	mov eax, THUNK_KERNEL32_SETCONSOLECURSORINFO
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleCursorPosition
extern SetConsoleCursorPosition
export SetConsoleCursorPosition

SetConsoleCursorPosition:
	mov eax, THUNK_KERNEL32_SETCONSOLECURSORPOSITION
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleDisplayMode
extern SetConsoleDisplayMode
export SetConsoleDisplayMode

SetConsoleDisplayMode:
	mov eax, THUNK_KERNEL32_SETCONSOLEDISPLAYMODE
	int SYSCALL_THUNK
	ret 0xc

global SetConsoleMode
extern SetConsoleMode
export SetConsoleMode

SetConsoleMode:
	mov eax, THUNK_KERNEL32_SETCONSOLEMODE
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleOutputCP
extern SetConsoleOutputCP
export SetConsoleOutputCP

SetConsoleOutputCP:
	mov eax, THUNK_KERNEL32_SETCONSOLEOUTPUTCP
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleScreenBufferSize
extern SetConsoleScreenBufferSize
export SetConsoleScreenBufferSize

SetConsoleScreenBufferSize:
	mov eax, THUNK_KERNEL32_SETCONSOLESCREENBUFFERSIZE
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleTextAttribute
extern SetConsoleTextAttribute
export SetConsoleTextAttribute

SetConsoleTextAttribute:
	mov eax, THUNK_KERNEL32_SETCONSOLETEXTATTRIBUTE
	int SYSCALL_THUNK
	ret 0x8

global SetConsoleTitleA
extern SetConsoleTitleA
export SetConsoleTitleA

SetConsoleTitleA:
	mov eax, THUNK_KERNEL32_SETCONSOLETITLEA
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleTitleW
extern SetConsoleTitleW
export SetConsoleTitleW

SetConsoleTitleW:
	mov eax, THUNK_KERNEL32_SETCONSOLETITLEW
	int SYSCALL_THUNK
	ret 0x4

global SetConsoleWindowInfo
extern SetConsoleWindowInfo
export SetConsoleWindowInfo

SetConsoleWindowInfo:
	mov eax, THUNK_KERNEL32_SETCONSOLEWINDOWINFO
	int SYSCALL_THUNK
	ret 0xc

global SetCurrentDirectoryA
extern SetCurrentDirectoryA
export SetCurrentDirectoryA

SetCurrentDirectoryA:
	mov eax, THUNK_KERNEL32_SETCURRENTDIRECTORYA
	int SYSCALL_THUNK
	ret 0x4

global SetCurrentDirectoryW
extern SetCurrentDirectoryW
export SetCurrentDirectoryW

SetCurrentDirectoryW:
	mov eax, THUNK_KERNEL32_SETCURRENTDIRECTORYW
	int SYSCALL_THUNK
	ret 0x4

global SetDefaultCommConfigA
extern SetDefaultCommConfigA
export SetDefaultCommConfigA

SetDefaultCommConfigA:
	mov eax, THUNK_KERNEL32_SETDEFAULTCOMMCONFIGA
	int SYSCALL_THUNK
	ret 0xc

global SetDefaultCommConfigW
extern SetDefaultCommConfigW
export SetDefaultCommConfigW

SetDefaultCommConfigW:
	mov eax, THUNK_KERNEL32_SETDEFAULTCOMMCONFIGW
	int SYSCALL_THUNK
	ret 0xc

global SetEndOfFile
extern SetEndOfFile
export SetEndOfFile

SetEndOfFile:
	mov eax, THUNK_KERNEL32_SETENDOFFILE
	int SYSCALL_THUNK
	ret 0x4

global SetEnvironmentVariableA
extern SetEnvironmentVariableA
export SetEnvironmentVariableA

SetEnvironmentVariableA:
	mov eax, THUNK_KERNEL32_SETENVIRONMENTVARIABLEA
	int SYSCALL_THUNK
	ret 0x8

global SetEnvironmentVariableW
extern SetEnvironmentVariableW
export SetEnvironmentVariableW

SetEnvironmentVariableW:
	mov eax, THUNK_KERNEL32_SETENVIRONMENTVARIABLEW
	int SYSCALL_THUNK
	ret 0x8

global SetErrorMode
extern SetErrorMode
export SetErrorMode

SetErrorMode:
	mov eax, THUNK_KERNEL32_SETERRORMODE
	int SYSCALL_THUNK
	ret 0x4

global SetEvent
extern SetEvent
export SetEvent

SetEvent:
	mov eax, THUNK_KERNEL32_SETEVENT
	int SYSCALL_THUNK
	ret 0x4

global SetFileApisToANSI
extern SetFileApisToANSI
export SetFileApisToANSI

SetFileApisToANSI:
	mov eax, THUNK_KERNEL32_SETFILEAPISTOANSI
	int SYSCALL_THUNK
	ret 0x0

global SetFileApisToOEM
extern SetFileApisToOEM
export SetFileApisToOEM

SetFileApisToOEM:
	mov eax, THUNK_KERNEL32_SETFILEAPISTOOEM
	int SYSCALL_THUNK
	ret 0x0

global SetFileAttributesA
extern SetFileAttributesA
export SetFileAttributesA

SetFileAttributesA:
	mov eax, THUNK_KERNEL32_SETFILEATTRIBUTESA
	int SYSCALL_THUNK
	ret 0x8

global SetFileAttributesW
extern SetFileAttributesW
export SetFileAttributesW

SetFileAttributesW:
	mov eax, THUNK_KERNEL32_SETFILEATTRIBUTESW
	int SYSCALL_THUNK
	ret 0x8

global SetFilePointer
extern SetFilePointer
export SetFilePointer

SetFilePointer:
	mov eax, THUNK_KERNEL32_SETFILEPOINTER
	int SYSCALL_THUNK
	ret 0x10

global SetFileTime
extern SetFileTime
export SetFileTime

SetFileTime:
	mov eax, THUNK_KERNEL32_SETFILETIME
	int SYSCALL_THUNK
	ret 0x10

global SetHandleCount
extern SetHandleCount
export SetHandleCount

SetHandleCount:
	mov eax, THUNK_KERNEL32_SETHANDLECOUNT
	int SYSCALL_THUNK
	ret 0x4

global SetHandleInformation
extern SetHandleInformation
export SetHandleInformation

SetHandleInformation:
	mov eax, THUNK_KERNEL32_SETHANDLEINFORMATION
	int SYSCALL_THUNK
	ret 0xc

global SetLastError
extern SetLastError
export SetLastError

SetLastError:
	mov eax, THUNK_KERNEL32_SETLASTERROR
	int SYSCALL_THUNK
	ret 0x4

global SetLocalTime
extern SetLocalTime
export SetLocalTime

SetLocalTime:
	mov eax, THUNK_KERNEL32_SETLOCALTIME
	int SYSCALL_THUNK
	ret 0x4

global SetLocaleInfoA
extern SetLocaleInfoA
export SetLocaleInfoA

SetLocaleInfoA:
	mov eax, THUNK_KERNEL32_SETLOCALEINFOA
	int SYSCALL_THUNK
	ret 0xc

global SetLocaleInfoW
extern SetLocaleInfoW
export SetLocaleInfoW

SetLocaleInfoW:
	mov eax, THUNK_KERNEL32_SETLOCALEINFOW
	int SYSCALL_THUNK
	ret 0xc

global SetMailslotInfo
extern SetMailslotInfo
export SetMailslotInfo

SetMailslotInfo:
	mov eax, THUNK_KERNEL32_SETMAILSLOTINFO
	int SYSCALL_THUNK
	ret 0x8

global SetNamedPipeHandleState
extern SetNamedPipeHandleState
export SetNamedPipeHandleState

SetNamedPipeHandleState:
	mov eax, THUNK_KERNEL32_SETNAMEDPIPEHANDLESTATE
	int SYSCALL_THUNK
	ret 0x10

global SetPriorityClass
extern SetPriorityClass
export SetPriorityClass

SetPriorityClass:
	mov eax, THUNK_KERNEL32_SETPRIORITYCLASS
	int SYSCALL_THUNK
	ret 0x8

global SetProcessShutdownParameters
extern SetProcessShutdownParameters
export SetProcessShutdownParameters

SetProcessShutdownParameters:
	mov eax, THUNK_KERNEL32_SETPROCESSSHUTDOWNPARAMETERS
	int SYSCALL_THUNK
	ret 0x8

global SetProcessWorkingSetSize
extern SetProcessWorkingSetSize
export SetProcessWorkingSetSize

SetProcessWorkingSetSize:
	mov eax, THUNK_KERNEL32_SETPROCESSWORKINGSETSIZE
	int SYSCALL_THUNK
	ret 0xc

global SetStdHandle
extern SetStdHandle
export SetStdHandle

SetStdHandle:
	mov eax, THUNK_KERNEL32_SETSTDHANDLE
	int SYSCALL_THUNK
	ret 0x8

global SetSystemPowerState
extern SetSystemPowerState
export SetSystemPowerState

SetSystemPowerState:
	mov eax, THUNK_KERNEL32_SETSYSTEMPOWERSTATE
	int SYSCALL_THUNK
	ret 0x8

global SetSystemTime
extern SetSystemTime
export SetSystemTime

SetSystemTime:
	mov eax, THUNK_KERNEL32_SETSYSTEMTIME
	int SYSCALL_THUNK
	ret 0x4

global SetSystemTimeAdjustment
extern SetSystemTimeAdjustment
export SetSystemTimeAdjustment

SetSystemTimeAdjustment:
	mov eax, THUNK_KERNEL32_SETSYSTEMTIMEADJUSTMENT
	int SYSCALL_THUNK
	ret 0x8

global SetTapeParameters
extern SetTapeParameters
export SetTapeParameters

SetTapeParameters:
	mov eax, THUNK_KERNEL32_SETTAPEPARAMETERS
	int SYSCALL_THUNK
	ret 0xc

global SetTapePosition
extern SetTapePosition
export SetTapePosition

SetTapePosition:
	mov eax, THUNK_KERNEL32_SETTAPEPOSITION
	int SYSCALL_THUNK
	ret 0x18

global SetThreadAffinityMask
extern SetThreadAffinityMask
export SetThreadAffinityMask

SetThreadAffinityMask:
	mov eax, THUNK_KERNEL32_SETTHREADAFFINITYMASK
	int SYSCALL_THUNK
	ret 0x8

global SetThreadContext
extern SetThreadContext
export SetThreadContext

SetThreadContext:
	mov eax, THUNK_KERNEL32_SETTHREADCONTEXT
	int SYSCALL_THUNK
	ret 0x8

global SetThreadLocale
extern SetThreadLocale
export SetThreadLocale

SetThreadLocale:
	mov eax, THUNK_KERNEL32_SETTHREADLOCALE
	int SYSCALL_THUNK
	ret 0x4

global SetThreadPriority
extern SetThreadPriority
export SetThreadPriority

SetThreadPriority:
	mov eax, THUNK_KERNEL32_SETTHREADPRIORITY
	int SYSCALL_THUNK
	ret 0x8

global SetTimeZoneInformation
extern SetTimeZoneInformation
export SetTimeZoneInformation

SetTimeZoneInformation:
	mov eax, THUNK_KERNEL32_SETTIMEZONEINFORMATION
	int SYSCALL_THUNK
	ret 0x4

global SetUnhandledExceptionFilter
extern SetUnhandledExceptionFilter
export SetUnhandledExceptionFilter

SetUnhandledExceptionFilter:
	mov eax, THUNK_KERNEL32_SETUNHANDLEDEXCEPTIONFILTER
	int SYSCALL_THUNK
	ret 0x4

global SetVolumeLabelA
extern SetVolumeLabelA
export SetVolumeLabelA

SetVolumeLabelA:
	mov eax, THUNK_KERNEL32_SETVOLUMELABELA
	int SYSCALL_THUNK
	ret 0x8

global SetVolumeLabelW
extern SetVolumeLabelW
export SetVolumeLabelW

SetVolumeLabelW:
	mov eax, THUNK_KERNEL32_SETVOLUMELABELW
	int SYSCALL_THUNK
	ret 0x8

global SetupComm
extern SetupComm
export SetupComm

SetupComm:
	mov eax, THUNK_KERNEL32_SETUPCOMM
	int SYSCALL_THUNK
	ret 0xc

global SizeofResource
extern SizeofResource
export SizeofResource

SizeofResource:
	mov eax, THUNK_KERNEL32_SIZEOFRESOURCE
	int SYSCALL_THUNK
	ret 0x8

global Sleep
extern Sleep
export Sleep

Sleep:
	mov eax, THUNK_KERNEL32_SLEEP
	int SYSCALL_THUNK
	ret 0x4

global SleepEx
extern SleepEx
export SleepEx

SleepEx:
	mov eax, THUNK_KERNEL32_SLEEPEX
	int SYSCALL_THUNK
	ret 0x8

global SuspendThread
extern SuspendThread
export SuspendThread

SuspendThread:
	mov eax, THUNK_KERNEL32_SUSPENDTHREAD
	int SYSCALL_THUNK
	ret 0x4

global SystemTimeToFileTime
extern SystemTimeToFileTime
export SystemTimeToFileTime

SystemTimeToFileTime:
	mov eax, THUNK_KERNEL32_SYSTEMTIMETOFILETIME
	int SYSCALL_THUNK
	ret 0x8

global SystemTimeToTzSpecificLocalTime
extern SystemTimeToTzSpecificLocalTime
export SystemTimeToTzSpecificLocalTime

SystemTimeToTzSpecificLocalTime:
	mov eax, THUNK_KERNEL32_SYSTEMTIMETOTZSPECIFICLOCALTIME
	int SYSCALL_THUNK
	ret 0xc

global TerminateProcess
extern TerminateProcess
export TerminateProcess

TerminateProcess:
	mov eax, THUNK_KERNEL32_TERMINATEPROCESS
	int SYSCALL_THUNK
	ret 0x8

global TerminateThread
extern TerminateThread
export TerminateThread

TerminateThread:
	mov eax, THUNK_KERNEL32_TERMINATETHREAD
	int SYSCALL_THUNK
	ret 0x8

global TlsAlloc
extern TlsAlloc
export TlsAlloc

TlsAlloc:
	mov eax, THUNK_KERNEL32_TLSALLOC
	int SYSCALL_THUNK
	ret 0x0

global TlsFree
extern TlsFree
export TlsFree

TlsFree:
	mov eax, THUNK_KERNEL32_TLSFREE
	int SYSCALL_THUNK
	ret 0x4

global TlsGetValue
extern TlsGetValue
export TlsGetValue

TlsGetValue:
	mov eax, THUNK_KERNEL32_TLSGETVALUE
	int SYSCALL_THUNK
	ret 0x4

global TlsSetValue
extern TlsSetValue
export TlsSetValue

TlsSetValue:
	mov eax, THUNK_KERNEL32_TLSSETVALUE
	int SYSCALL_THUNK
	ret 0x8

global TransactNamedPipe
extern TransactNamedPipe
export TransactNamedPipe

TransactNamedPipe:
	mov eax, THUNK_KERNEL32_TRANSACTNAMEDPIPE
	int SYSCALL_THUNK
	ret 0x1c

global TransmitCommChar
extern TransmitCommChar
export TransmitCommChar

TransmitCommChar:
	mov eax, THUNK_KERNEL32_TRANSMITCOMMCHAR
	int SYSCALL_THUNK
	ret 0x8

global UnhandledExceptionFilter
extern UnhandledExceptionFilter
export UnhandledExceptionFilter

UnhandledExceptionFilter:
	mov eax, THUNK_KERNEL32_UNHANDLEDEXCEPTIONFILTER
	int SYSCALL_THUNK
	ret 0x4

global UnlockFile
extern UnlockFile
export UnlockFile

UnlockFile:
	mov eax, THUNK_KERNEL32_UNLOCKFILE
	int SYSCALL_THUNK
	ret 0x14

global UnlockFileEx
extern UnlockFileEx
export UnlockFileEx

UnlockFileEx:
	mov eax, THUNK_KERNEL32_UNLOCKFILEEX
	int SYSCALL_THUNK
	ret 0x14

global UnmapViewOfFile
extern UnmapViewOfFile
export UnmapViewOfFile

UnmapViewOfFile:
	mov eax, THUNK_KERNEL32_UNMAPVIEWOFFILE
	int SYSCALL_THUNK
	ret 0x4

global UpdateResourceA
extern UpdateResourceA
export UpdateResourceA

UpdateResourceA:
	mov eax, THUNK_KERNEL32_UPDATERESOURCEA
	int SYSCALL_THUNK
	ret 0x18

global UpdateResourceW
extern UpdateResourceW
export UpdateResourceW

UpdateResourceW:
	mov eax, THUNK_KERNEL32_UPDATERESOURCEW
	int SYSCALL_THUNK
	ret 0x18

global VerLanguageNameA
extern VerLanguageNameA
export VerLanguageNameA

VerLanguageNameA:
	mov eax, THUNK_KERNEL32_VERLANGUAGENAMEA
	int SYSCALL_THUNK
	ret 0xc

global VerLanguageNameW
extern VerLanguageNameW
export VerLanguageNameW

VerLanguageNameW:
	mov eax, THUNK_KERNEL32_VERLANGUAGENAMEW
	int SYSCALL_THUNK
	ret 0xc

global VirtualAlloc
extern VirtualAlloc
export VirtualAlloc

VirtualAlloc:
	mov eax, THUNK_KERNEL32_VIRTUALALLOC
	int SYSCALL_THUNK
	ret 0x10

global VirtualFree
extern VirtualFree
export VirtualFree

VirtualFree:
	mov eax, THUNK_KERNEL32_VIRTUALFREE
	int SYSCALL_THUNK
	ret 0xc

global VirtualLock
extern VirtualLock
export VirtualLock

VirtualLock:
	mov eax, THUNK_KERNEL32_VIRTUALLOCK
	int SYSCALL_THUNK
	ret 0x8

global VirtualProtect
extern VirtualProtect
export VirtualProtect

VirtualProtect:
	mov eax, THUNK_KERNEL32_VIRTUALPROTECT
	int SYSCALL_THUNK
	ret 0x10

global VirtualProtectEx
extern VirtualProtectEx
export VirtualProtectEx

VirtualProtectEx:
	mov eax, THUNK_KERNEL32_VIRTUALPROTECTEX
	int SYSCALL_THUNK
	ret 0x14

global VirtualQuery
extern VirtualQuery
export VirtualQuery

VirtualQuery:
	mov eax, THUNK_KERNEL32_VIRTUALQUERY
	int SYSCALL_THUNK
	ret 0xc

global VirtualQueryEx
extern VirtualQueryEx
export VirtualQueryEx

VirtualQueryEx:
	mov eax, THUNK_KERNEL32_VIRTUALQUERYEX
	int SYSCALL_THUNK
	ret 0x10

global VirtualUnlock
extern VirtualUnlock
export VirtualUnlock

VirtualUnlock:
	mov eax, THUNK_KERNEL32_VIRTUALUNLOCK
	int SYSCALL_THUNK
	ret 0x8

global WaitCommEvent
extern WaitCommEvent
export WaitCommEvent

WaitCommEvent:
	mov eax, THUNK_KERNEL32_WAITCOMMEVENT
	int SYSCALL_THUNK
	ret 0xc

global WaitForDebugEvent
extern WaitForDebugEvent
export WaitForDebugEvent

WaitForDebugEvent:
	mov eax, THUNK_KERNEL32_WAITFORDEBUGEVENT
	int SYSCALL_THUNK
	ret 0x8

global WaitForMultipleObjects
extern WaitForMultipleObjects
export WaitForMultipleObjects

WaitForMultipleObjects:
	mov eax, THUNK_KERNEL32_WAITFORMULTIPLEOBJECTS
	int SYSCALL_THUNK
	ret 0x10

global WaitForMultipleObjectsEx
extern WaitForMultipleObjectsEx
export WaitForMultipleObjectsEx

WaitForMultipleObjectsEx:
	mov eax, THUNK_KERNEL32_WAITFORMULTIPLEOBJECTSEX
	int SYSCALL_THUNK
	ret 0x14

global WaitForSingleObject
extern WaitForSingleObject
export WaitForSingleObject

WaitForSingleObject:
	mov eax, THUNK_KERNEL32_WAITFORSINGLEOBJECT
	int SYSCALL_THUNK
	ret 0x8

global WaitForSingleObjectEx
extern WaitForSingleObjectEx
export WaitForSingleObjectEx

WaitForSingleObjectEx:
	mov eax, THUNK_KERNEL32_WAITFORSINGLEOBJECTEX
	int SYSCALL_THUNK
	ret 0xc

global WaitNamedPipeA
extern WaitNamedPipeA
export WaitNamedPipeA

WaitNamedPipeA:
	mov eax, THUNK_KERNEL32_WAITNAMEDPIPEA
	int SYSCALL_THUNK
	ret 0x8

global WaitNamedPipeW
extern WaitNamedPipeW
export WaitNamedPipeW

WaitNamedPipeW:
	mov eax, THUNK_KERNEL32_WAITNAMEDPIPEW
	int SYSCALL_THUNK
	ret 0x8

global WideCharToMultiByte
extern WideCharToMultiByte
export WideCharToMultiByte

WideCharToMultiByte:
	mov eax, THUNK_KERNEL32_WIDECHARTOMULTIBYTE
	int SYSCALL_THUNK
	ret 0x20

global WinExec
extern WinExec
export WinExec

WinExec:
	mov eax, THUNK_KERNEL32_WINEXEC
	int SYSCALL_THUNK
	ret 0x8

global WriteConsoleA
extern WriteConsoleA
export WriteConsoleA

WriteConsoleA:
	mov eax, THUNK_KERNEL32_WRITECONSOLEA
	int SYSCALL_THUNK
	ret 0x14

global WriteConsoleW
extern WriteConsoleW
export WriteConsoleW

WriteConsoleW:
	mov eax, THUNK_KERNEL32_WRITECONSOLEW
	int SYSCALL_THUNK
	ret 0x14

global WriteConsoleInputA
extern WriteConsoleInputA
export WriteConsoleInputA

WriteConsoleInputA:
	mov eax, THUNK_KERNEL32_WRITECONSOLEINPUTA
	int SYSCALL_THUNK
	ret 0x10

global WriteConsoleInputW
extern WriteConsoleInputW
export WriteConsoleInputW

WriteConsoleInputW:
	mov eax, THUNK_KERNEL32_WRITECONSOLEINPUTW
	int SYSCALL_THUNK
	ret 0x10

global WriteConsoleOutputA
extern WriteConsoleOutputA
export WriteConsoleOutputA

WriteConsoleOutputA:
	mov eax, THUNK_KERNEL32_WRITECONSOLEOUTPUTA
	int SYSCALL_THUNK
	ret 0x14

global WriteConsoleOutputW
extern WriteConsoleOutputW
export WriteConsoleOutputW

WriteConsoleOutputW:
	mov eax, THUNK_KERNEL32_WRITECONSOLEOUTPUTW
	int SYSCALL_THUNK
	ret 0x14

global WriteConsoleOutputAttribute
extern WriteConsoleOutputAttribute
export WriteConsoleOutputAttribute

WriteConsoleOutputAttribute:
	mov eax, THUNK_KERNEL32_WRITECONSOLEOUTPUTATTRIBUTE
	int SYSCALL_THUNK
	ret 0x14

global WriteFile
extern WriteFile
export WriteFile

WriteFile:
	mov eax, THUNK_KERNEL32_WRITEFILE
	int SYSCALL_THUNK
	ret 0x14

global WriteFileEx
extern WriteFileEx
export WriteFileEx

WriteFileEx:
	mov eax, THUNK_KERNEL32_WRITEFILEEX
	int SYSCALL_THUNK
	ret 0x14

global WritePrivateProfileSectionA
extern WritePrivateProfileSectionA
export WritePrivateProfileSectionA

WritePrivateProfileSectionA:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESECTIONA
	int SYSCALL_THUNK
	ret 0xc

global WritePrivateProfileSectionW
extern WritePrivateProfileSectionW
export WritePrivateProfileSectionW

WritePrivateProfileSectionW:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESECTIONW
	int SYSCALL_THUNK
	ret 0xc

global WritePrivateProfileStringA
extern WritePrivateProfileStringA
export WritePrivateProfileStringA

WritePrivateProfileStringA:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESTRINGA
	int SYSCALL_THUNK
	ret 0x10

global WritePrivateProfileStringW
extern WritePrivateProfileStringW
export WritePrivateProfileStringW

WritePrivateProfileStringW:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESTRINGW
	int SYSCALL_THUNK
	ret 0x10

global WritePrivateProfileStructA
extern WritePrivateProfileStructA
export WritePrivateProfileStructA

WritePrivateProfileStructA:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESTRUCTA
	int SYSCALL_THUNK
	ret 0x14

global WritePrivateProfileStructW
extern WritePrivateProfileStructW
export WritePrivateProfileStructW

WritePrivateProfileStructW:
	mov eax, THUNK_KERNEL32_WRITEPRIVATEPROFILESTRUCTW
	int SYSCALL_THUNK
	ret 0x14

global WriteProcessMemory
extern WriteProcessMemory
export WriteProcessMemory

WriteProcessMemory:
	mov eax, THUNK_KERNEL32_WRITEPROCESSMEMORY
	int SYSCALL_THUNK
	ret 0x14

global WriteProfileSectionA
extern WriteProfileSectionA
export WriteProfileSectionA

WriteProfileSectionA:
	mov eax, THUNK_KERNEL32_WRITEPROFILESECTIONA
	int SYSCALL_THUNK
	ret 0x8

global WriteProfileSectionW
extern WriteProfileSectionW
export WriteProfileSectionW

WriteProfileSectionW:
	mov eax, THUNK_KERNEL32_WRITEPROFILESECTIONW
	int SYSCALL_THUNK
	ret 0x8

global WriteProfileStringA
extern WriteProfileStringA
export WriteProfileStringA

WriteProfileStringA:
	mov eax, THUNK_KERNEL32_WRITEPROFILESTRINGA
	int SYSCALL_THUNK
	ret 0xc

global WriteProfileStringW
extern WriteProfileStringW
export WriteProfileStringW

WriteProfileStringW:
	mov eax, THUNK_KERNEL32_WRITEPROFILESTRINGW
	int SYSCALL_THUNK
	ret 0xc

global WriteTapemark
extern WriteTapemark
export WriteTapemark

WriteTapemark:
	mov eax, THUNK_KERNEL32_WRITETAPEMARK
	int SYSCALL_THUNK
	ret 0x10

global _hread
extern _hread
export _hread

_hread:
	mov eax, THUNK_KERNEL32__HREAD
	int SYSCALL_THUNK
	ret 0xc

global _hwrite
extern _hwrite
export _hwrite

_hwrite:
	mov eax, THUNK_KERNEL32__HWRITE
	int SYSCALL_THUNK
	ret 0xc

global _lopen
extern _lopen
export _lopen

_lopen:
	mov eax, THUNK_KERNEL32__LOPEN
	int SYSCALL_THUNK
	ret 0x8

global _lcreat
extern _lcreat
export _lcreat

_lcreat:
	mov eax, THUNK_KERNEL32__LCREAT
	int SYSCALL_THUNK
	ret 0x8

global _lclose
extern _lclose
export _lclose

_lclose:
	mov eax, THUNK_KERNEL32__LCLOSE
	int SYSCALL_THUNK
	ret 0x4

global _llseek
extern _llseek
export _llseek

_llseek:
	mov eax, THUNK_KERNEL32__LLSEEK
	int SYSCALL_THUNK
	ret 0xc

global _lread
extern _lread
export _lread

_lread:
	mov eax, THUNK_KERNEL32__LREAD
	int SYSCALL_THUNK
	ret 0xc

global _lwrite
extern _lwrite
export _lwrite

_lwrite:
	mov eax, THUNK_KERNEL32__LWRITE
	int SYSCALL_THUNK
	ret 0xc

global lstrcatA
extern lstrcatA
export lstrcatA

lstrcatA:
	mov eax, THUNK_KERNEL32_LSTRCATA
	int SYSCALL_THUNK
	ret 0x8

global lstrcat
extern lstrcat
export lstrcat

lstrcat:
	mov eax, THUNK_KERNEL32_LSTRCAT
	int SYSCALL_THUNK
	ret 0x8

global lstrcatW
extern lstrcatW
export lstrcatW

lstrcatW:
	mov eax, THUNK_KERNEL32_LSTRCATW
	int SYSCALL_THUNK
	ret 0x8

global lstrcmpA
extern lstrcmpA
export lstrcmpA

lstrcmpA:
	mov eax, THUNK_KERNEL32_LSTRCMPA
	int SYSCALL_THUNK
	ret 0x8

global lstrcmp
extern lstrcmp
export lstrcmp

lstrcmp:
	mov eax, THUNK_KERNEL32_LSTRCMP
	int SYSCALL_THUNK
	ret 0x8

global lstrcmpW
extern lstrcmpW
export lstrcmpW

lstrcmpW:
	mov eax, THUNK_KERNEL32_LSTRCMPW
	int SYSCALL_THUNK
	ret 0x8

global lstrcmpiA
extern lstrcmpiA
export lstrcmpiA

lstrcmpiA:
	mov eax, THUNK_KERNEL32_LSTRCMPIA
	int SYSCALL_THUNK
	ret 0x8

global lstrcmpi
extern lstrcmpi
export lstrcmpi

lstrcmpi:
	mov eax, THUNK_KERNEL32_LSTRCMPI
	int SYSCALL_THUNK
	ret 0x8

global lstrcmpiW
extern lstrcmpiW
export lstrcmpiW

lstrcmpiW:
	mov eax, THUNK_KERNEL32_LSTRCMPIW
	int SYSCALL_THUNK
	ret 0x8

global lstrcpyA
extern lstrcpyA
export lstrcpyA

lstrcpyA:
	mov eax, THUNK_KERNEL32_LSTRCPYA
	int SYSCALL_THUNK
	ret 0x8

global lstrcpy
extern lstrcpy
export lstrcpy

lstrcpy:
	mov eax, THUNK_KERNEL32_LSTRCPY
	int SYSCALL_THUNK
	ret 0x8

global lstrcpyW
extern lstrcpyW
export lstrcpyW

lstrcpyW:
	mov eax, THUNK_KERNEL32_LSTRCPYW
	int SYSCALL_THUNK
	ret 0x8

global lstrcpynA
extern lstrcpynA
export lstrcpynA

lstrcpynA:
	mov eax, THUNK_KERNEL32_LSTRCPYNA
	int SYSCALL_THUNK
	ret 0xc

global lstrcpyn
extern lstrcpyn
export lstrcpyn

lstrcpyn:
	mov eax, THUNK_KERNEL32_LSTRCPYN
	int SYSCALL_THUNK
	ret 0xc

global lstrcpynW
extern lstrcpynW
export lstrcpynW

lstrcpynW:
	mov eax, THUNK_KERNEL32_LSTRCPYNW
	int SYSCALL_THUNK
	ret 0xc

global lstrlenA
extern lstrlenA
export lstrlenA

lstrlenA:
	mov eax, THUNK_KERNEL32_LSTRLENA
	int SYSCALL_THUNK
	ret 0x4

global lstrlen
extern lstrlen
export lstrlen

lstrlen:
	mov eax, THUNK_KERNEL32_LSTRLEN
	int SYSCALL_THUNK
	ret 0x4

global lstrlenW
extern lstrlenW
export lstrlenW

lstrlenW:
	mov eax, THUNK_KERNEL32_LSTRLENW
	int SYSCALL_THUNK
	ret 0x4

THUNK_KERNEL32_ADDATOMA equ 0xc00
THUNK_KERNEL32_ADDATOMW equ 0xc01
THUNK_KERNEL32_ADDCONSOLEALIASA equ 0xc02
THUNK_KERNEL32_ADDCONSOLEALIASW equ 0xc03
THUNK_KERNEL32_ALLOCCONSOLE equ 0xc04
THUNK_KERNEL32_AREFILEAPISANSI equ 0xc05
THUNK_KERNEL32_BACKUPREAD equ 0xc06
THUNK_KERNEL32_BACKUPSEEK equ 0xc07
THUNK_KERNEL32_BACKUPWRITE equ 0xc08
THUNK_KERNEL32_BEEP equ 0xc09
THUNK_KERNEL32_BEGINUPDATERESOURCEA equ 0xc0a
THUNK_KERNEL32_BEGINUPDATERESOURCEW equ 0xc0b
THUNK_KERNEL32_BUILDCOMMDCBA equ 0xc0c
THUNK_KERNEL32_BUILDCOMMDCBANDTIMEOUTSA equ 0xc0d
THUNK_KERNEL32_BUILDCOMMDCBANDTIMEOUTSW equ 0xc0e
THUNK_KERNEL32_BUILDCOMMDCBW equ 0xc0f
THUNK_KERNEL32_CALLNAMEDPIPEA equ 0xc10
THUNK_KERNEL32_CALLNAMEDPIPEW equ 0xc11
THUNK_KERNEL32_CLEARCOMMBREAK equ 0xc12
THUNK_KERNEL32_CLEARCOMMERROR equ 0xc13
THUNK_KERNEL32_CLOSEHANDLE equ 0xc14
THUNK_KERNEL32_COMMCONFIGDIALOGA equ 0xc15
THUNK_KERNEL32_COMMCONFIGDIALOGW equ 0xc16
THUNK_KERNEL32_COMPAREFILETIME equ 0xc17
THUNK_KERNEL32_COMPARESTRINGA equ 0xc18
THUNK_KERNEL32_COMPARESTRINGW equ 0xc19
THUNK_KERNEL32_CONNECTNAMEDPIPE equ 0xc1a
THUNK_KERNEL32_CONTINUEDEBUGEVENT equ 0xc1b
THUNK_KERNEL32_CONVERTDEFAULTLOCALE equ 0xc1c
THUNK_KERNEL32_COPYFILEA equ 0xc1d
THUNK_KERNEL32_COPYFILEW equ 0xc1e
THUNK_KERNEL32_CREATECONSOLESCREENBUFFER equ 0xc1f
THUNK_KERNEL32_CREATEDIRECTORYA equ 0xc20
THUNK_KERNEL32_CREATEDIRECTORYEXA equ 0xc21
THUNK_KERNEL32_CREATEDIRECTORYEXW equ 0xc22
THUNK_KERNEL32_CREATEDIRECTORYW equ 0xc23
THUNK_KERNEL32_CREATEEVENTA equ 0xc24
THUNK_KERNEL32_CREATEEVENTW equ 0xc25
THUNK_KERNEL32_CREATEFILEA equ 0xc26
THUNK_KERNEL32_CREATEFILEMAPPINGA equ 0xc27
THUNK_KERNEL32_CREATEFILEMAPPINGW equ 0xc28
THUNK_KERNEL32_CREATEFILEW equ 0xc29
THUNK_KERNEL32_CREATEIOCOMPLETIONPORT equ 0xc2a
THUNK_KERNEL32_CREATEMAILSLOTA equ 0xc2b
THUNK_KERNEL32_CREATEMAILSLOTW equ 0xc2c
THUNK_KERNEL32_CREATEMUTEXA equ 0xc2d
THUNK_KERNEL32_CREATEMUTEXW equ 0xc2e
THUNK_KERNEL32_CREATENAMEDPIPEA equ 0xc2f
THUNK_KERNEL32_CREATENAMEDPIPEW equ 0xc30
THUNK_KERNEL32_CREATEPIPE equ 0xc31
THUNK_KERNEL32_CREATEPROCESSA equ 0xc32
THUNK_KERNEL32_CREATEPROCESSW equ 0xc33
THUNK_KERNEL32_CREATEREMOTETHREAD equ 0xc34
THUNK_KERNEL32_CREATESEMAPHOREA equ 0xc35
THUNK_KERNEL32_CREATESEMAPHOREW equ 0xc36
THUNK_KERNEL32_CREATETAPEPARTITION equ 0xc37
THUNK_KERNEL32_CREATETHREAD equ 0xc38
THUNK_KERNEL32_DEBUGACTIVEPROCESS equ 0xc39
THUNK_KERNEL32_DEBUGBREAK equ 0xc3a
THUNK_KERNEL32_DEFINEDOSDEVICEA equ 0xc3b
THUNK_KERNEL32_DEFINEDOSDEVICEW equ 0xc3c
THUNK_KERNEL32_DELETEATOM equ 0xc3d
THUNK_KERNEL32_DELETECRITICALSECTION equ 0xc3e
THUNK_KERNEL32_DELETEFILEA equ 0xc3f
THUNK_KERNEL32_DELETEFILEW equ 0xc40
THUNK_KERNEL32_DEVICEIOCONTROL equ 0xc41
THUNK_KERNEL32_DISABLETHREADLIBRARYCALLS equ 0xc42
THUNK_KERNEL32_DISCONNECTNAMEDPIPE equ 0xc43
THUNK_KERNEL32_DOSDATETIMETOFILETIME equ 0xc44
THUNK_KERNEL32_DUPLICATEHANDLE equ 0xc45
THUNK_KERNEL32_ENDUPDATERESOURCEA equ 0xc46
THUNK_KERNEL32_ENDUPDATERESOURCEW equ 0xc47
THUNK_KERNEL32_ENTERCRITICALSECTION equ 0xc48
THUNK_KERNEL32_ENUMCALENDARINFOA equ 0xc49
THUNK_KERNEL32_ENUMCALENDARINFOW equ 0xc4a
THUNK_KERNEL32_ENUMDATEFORMATSA equ 0xc4b
THUNK_KERNEL32_ENUMDATEFORMATSW equ 0xc4c
THUNK_KERNEL32_ENUMRESOURCELANGUAGESA equ 0xc4d
THUNK_KERNEL32_ENUMRESOURCELANGUAGESW equ 0xc4e
THUNK_KERNEL32_ENUMRESOURCENAMESA equ 0xc4f
THUNK_KERNEL32_ENUMRESOURCENAMESW equ 0xc50
THUNK_KERNEL32_ENUMRESOURCETYPESA equ 0xc51
THUNK_KERNEL32_ENUMRESOURCETYPESW equ 0xc52
THUNK_KERNEL32_ENUMSYSTEMCODEPAGESA equ 0xc53
THUNK_KERNEL32_ENUMSYSTEMCODEPAGESW equ 0xc54
THUNK_KERNEL32_ENUMSYSTEMLOCALESA equ 0xc55
THUNK_KERNEL32_ENUMSYSTEMLOCALESW equ 0xc56
THUNK_KERNEL32_ENUMTIMEFORMATSA equ 0xc57
THUNK_KERNEL32_ENUMTIMEFORMATSW equ 0xc58
THUNK_KERNEL32_ERASETAPE equ 0xc59
THUNK_KERNEL32_ESCAPECOMMFUNCTION equ 0xc5a
THUNK_KERNEL32_EXITPROCESS equ 0xc5b
THUNK_KERNEL32_EXITTHREAD equ 0xc5c
THUNK_KERNEL32_EXPANDENVIRONMENTSTRINGSA equ 0xc5d
THUNK_KERNEL32_EXPANDENVIRONMENTSTRINGSW equ 0xc5e
THUNK_KERNEL32_FATALAPPEXITA equ 0xc5f
THUNK_KERNEL32_FATALAPPEXITW equ 0xc60
THUNK_KERNEL32_FATALEXIT equ 0xc61
THUNK_KERNEL32_FILETIMETODOSDATETIME equ 0xc62
THUNK_KERNEL32_FILETIMETOLOCALFILETIME equ 0xc63
THUNK_KERNEL32_FILETIMETOSYSTEMTIME equ 0xc64
THUNK_KERNEL32_FILLCONSOLEOUTPUTATTRIBUTE equ 0xc65
THUNK_KERNEL32_FILLCONSOLEOUTPUTCHARACTERA equ 0xc66
THUNK_KERNEL32_FILLCONSOLEOUTPUTCHARACTERW equ 0xc67
THUNK_KERNEL32_FINDATOMA equ 0xc68
THUNK_KERNEL32_FINDATOMW equ 0xc69
THUNK_KERNEL32_FINDCLOSE equ 0xc6a
THUNK_KERNEL32_FINDCLOSECHANGENOTIFICATION equ 0xc6b
THUNK_KERNEL32_FINDFIRSTCHANGENOTIFICATIONA equ 0xc6c
THUNK_KERNEL32_FINDFIRSTCHANGENOTIFICATIONW equ 0xc6d
THUNK_KERNEL32_FINDFIRSTFILEA equ 0xc6e
THUNK_KERNEL32_FINDFIRSTFILEW equ 0xc6f
THUNK_KERNEL32_FINDNEXTCHANGENOTIFICATION equ 0xc70
THUNK_KERNEL32_FINDNEXTFILEA equ 0xc71
THUNK_KERNEL32_FINDNEXTFILEW equ 0xc72
THUNK_KERNEL32_FINDRESOURCEA equ 0xc73
THUNK_KERNEL32_FINDRESOURCEEXA equ 0xc74
THUNK_KERNEL32_FINDRESOURCEEXW equ 0xc75
THUNK_KERNEL32_FINDRESOURCEW equ 0xc76
THUNK_KERNEL32_FLUSHCONSOLEINPUTBUFFER equ 0xc77
THUNK_KERNEL32_FLUSHFILEBUFFERS equ 0xc78
THUNK_KERNEL32_FLUSHINSTRUCTIONCACHE equ 0xc79
THUNK_KERNEL32_FLUSHVIEWOFFILE equ 0xc7a
THUNK_KERNEL32_FOLDSTRINGA equ 0xc7b
THUNK_KERNEL32_FOLDSTRINGW equ 0xc7c
THUNK_KERNEL32_FORMATMESSAGEA equ 0xc7d
THUNK_KERNEL32_FORMATMESSAGEW equ 0xc7e
THUNK_KERNEL32_FREECONSOLE equ 0xc7f
THUNK_KERNEL32_FREEENVIRONMENTSTRINGSA equ 0xc80
THUNK_KERNEL32_FREEENVIRONMENTSTRINGS equ 0xc81
THUNK_KERNEL32_FREEENVIRONMENTSTRINGSW equ 0xc82
THUNK_KERNEL32_FREELIBRARY equ 0xc83
THUNK_KERNEL32_FREELIBRARYANDEXITTHREAD equ 0xc84
THUNK_KERNEL32_FREERESOURCE equ 0xc85
THUNK_KERNEL32_GENERATECONSOLECTRLEVENT equ 0xc86
THUNK_KERNEL32_GETACP equ 0xc87
THUNK_KERNEL32_GETATOMNAMEA equ 0xc88
THUNK_KERNEL32_GETATOMNAMEW equ 0xc89
THUNK_KERNEL32_GETBINARYTYPEA equ 0xc8a
THUNK_KERNEL32_GETBINARYTYPE equ 0xc8b
THUNK_KERNEL32_GETBINARYTYPEW equ 0xc8c
THUNK_KERNEL32_GETCPINFO equ 0xc8d
THUNK_KERNEL32_GETCOMMCONFIG equ 0xc8e
THUNK_KERNEL32_GETCOMMMASK equ 0xc8f
THUNK_KERNEL32_GETCOMMMODEMSTATUS equ 0xc90
THUNK_KERNEL32_GETCOMMPROPERTIES equ 0xc91
THUNK_KERNEL32_GETCOMMSTATE equ 0xc92
THUNK_KERNEL32_GETCOMMTIMEOUTS equ 0xc93
THUNK_KERNEL32_GETCOMMANDLINEA equ 0xc94
THUNK_KERNEL32_GETCOMMANDLINEW equ 0xc95
THUNK_KERNEL32_GETCOMPRESSEDFILESIZEA equ 0xc96
THUNK_KERNEL32_GETCOMPRESSEDFILESIZEW equ 0xc97
THUNK_KERNEL32_GETCOMPUTERNAMEA equ 0xc98
THUNK_KERNEL32_GETCOMPUTERNAMEW equ 0xc99
THUNK_KERNEL32_GETCONSOLEALIASA equ 0xc9a
THUNK_KERNEL32_GETCONSOLEALIASW equ 0xc9b
THUNK_KERNEL32_GETCONSOLEALIASEXESA equ 0xc9c
THUNK_KERNEL32_GETCONSOLEALIASEXESW equ 0xc9d
THUNK_KERNEL32_GETCONSOLEALIASEXESLENGTHA equ 0xc9e
THUNK_KERNEL32_GETCONSOLEALIASEXESLENGTHW equ 0xc9f
THUNK_KERNEL32_GETCONSOLEALIASESA equ 0xca0
THUNK_KERNEL32_GETCONSOLEALIASESW equ 0xca1
THUNK_KERNEL32_GETCONSOLEALIASESLENGTHA equ 0xca2
THUNK_KERNEL32_GETCONSOLEALIASESLENGTHW equ 0xca3
THUNK_KERNEL32_GETCONSOLECP equ 0xca4
THUNK_KERNEL32_GETCONSOLECURSORINFO equ 0xca5
THUNK_KERNEL32_GETCONSOLEDISPLAYMODE equ 0xca6
THUNK_KERNEL32_GETCONSOLEFONTSIZE equ 0xca7
THUNK_KERNEL32_GETCONSOLEMODE equ 0xca8
THUNK_KERNEL32_GETCONSOLEOUTPUTCP equ 0xca9
THUNK_KERNEL32_GETCONSOLESCREENBUFFERINFO equ 0xcaa
THUNK_KERNEL32_GETCONSOLETITLEA equ 0xcab
THUNK_KERNEL32_GETCONSOLETITLEW equ 0xcac
THUNK_KERNEL32_GETCURRENTCONSOLEFONT equ 0xcad
THUNK_KERNEL32_GETCURRENTDIRECTORYA equ 0xcae
THUNK_KERNEL32_GETCURRENTDIRECTORYW equ 0xcaf
THUNK_KERNEL32_GETCURRENTPROCESS equ 0xcb0
THUNK_KERNEL32_GETCURRENTPROCESSID equ 0xcb1
THUNK_KERNEL32_GETCURRENTTHREAD equ 0xcb2
THUNK_KERNEL32_GETCURRENTTHREADID equ 0xcb3
THUNK_KERNEL32_GETDATEFORMATA equ 0xcb4
THUNK_KERNEL32_GETDATEFORMATW equ 0xcb5
THUNK_KERNEL32_GETDEFAULTCOMMCONFIGA equ 0xcb6
THUNK_KERNEL32_GETDEFAULTCOMMCONFIGW equ 0xcb7
THUNK_KERNEL32_GETDISKFREESPACEA equ 0xcb8
THUNK_KERNEL32_GETDISKFREESPACEW equ 0xcb9
THUNK_KERNEL32_GETDRIVETYPEA equ 0xcba
THUNK_KERNEL32_GETDRIVETYPEW equ 0xcbb
THUNK_KERNEL32_GETENVIRONMENTSTRINGS equ 0xcbc
THUNK_KERNEL32_GETENVIRONMENTSTRINGSW equ 0xcbd
THUNK_KERNEL32_GETENVIRONMENTVARIABLEA equ 0xcbe
THUNK_KERNEL32_GETENVIRONMENTVARIABLEW equ 0xcbf
THUNK_KERNEL32_GETEXITCODEPROCESS equ 0xcc0
THUNK_KERNEL32_GETEXITCODETHREAD equ 0xcc1
THUNK_KERNEL32_GETFILEATTRIBUTESA equ 0xcc2
THUNK_KERNEL32_GETFILEATTRIBUTESW equ 0xcc3
THUNK_KERNEL32_GETFILEINFORMATIONBYHANDLE equ 0xcc4
THUNK_KERNEL32_GETFILESIZE equ 0xcc5
THUNK_KERNEL32_GETFILETIME equ 0xcc6
THUNK_KERNEL32_GETFILETYPE equ 0xcc7
THUNK_KERNEL32_GETFULLPATHNAMEA equ 0xcc8
THUNK_KERNEL32_GETFULLPATHNAMEW equ 0xcc9
THUNK_KERNEL32_GETHANDLEINFORMATION equ 0xcca
THUNK_KERNEL32_GETLARGESTCONSOLEWINDOWSIZE equ 0xccb
THUNK_KERNEL32_GETLASTERROR equ 0xccc
THUNK_KERNEL32_GETLOCALTIME equ 0xccd
THUNK_KERNEL32_GETLOCALEINFOA equ 0xcce
THUNK_KERNEL32_GETLOCALEINFOW equ 0xccf
THUNK_KERNEL32_GETLOGICALDRIVESTRINGSA equ 0xcd0
THUNK_KERNEL32_GETLOGICALDRIVESTRINGSW equ 0xcd1
THUNK_KERNEL32_GETMAILSLOTINFO equ 0xcd2
THUNK_KERNEL32_GETMODULEFILENAMEA equ 0xcd3
THUNK_KERNEL32_GETMODULEFILENAMEW equ 0xcd4
THUNK_KERNEL32_GETMODULEHANDLEA equ 0xcd5
THUNK_KERNEL32_GETMODULEHANDLEW equ 0xcd6
THUNK_KERNEL32_GETNAMEDPIPEHANDLESTATEA equ 0xcd7
THUNK_KERNEL32_GETNAMEDPIPEHANDLESTATEW equ 0xcd8
THUNK_KERNEL32_GETNAMEDPIPEINFO equ 0xcd9
THUNK_KERNEL32_GETNUMBERFORMATA equ 0xcda
THUNK_KERNEL32_GETNUMBERFORMATW equ 0xcdb
THUNK_KERNEL32_GETNUMBEROFCONSOLEINPUTEVENTS equ 0xcdc
THUNK_KERNEL32_GETNUMBEROFCONSOLEMOUSEBUTTONS equ 0xcdd
THUNK_KERNEL32_GETOEMCP equ 0xcde
THUNK_KERNEL32_GETOVERLAPPEDRESULT equ 0xcdf
THUNK_KERNEL32_GETPRIORITYCLASS equ 0xce0
THUNK_KERNEL32_GETPRIVATEPROFILEINTA equ 0xce1
THUNK_KERNEL32_GETPRIVATEPROFILEINTW equ 0xce2
THUNK_KERNEL32_GETPRIVATEPROFILESECTIONA equ 0xce3
THUNK_KERNEL32_GETPRIVATEPROFILESECTIONW equ 0xce4
THUNK_KERNEL32_GETPRIVATEPROFILESECTIONNAMESA equ 0xce5
THUNK_KERNEL32_GETPRIVATEPROFILESECTIONNAMESW equ 0xce6
THUNK_KERNEL32_GETPRIVATEPROFILESTRINGA equ 0xce7
THUNK_KERNEL32_GETPRIVATEPROFILESTRINGW equ 0xce8
THUNK_KERNEL32_GETPRIVATEPROFILESTRUCTA equ 0xce9
THUNK_KERNEL32_GETPRIVATEPROFILESTRUCTW equ 0xcea
THUNK_KERNEL32_GETPROCADDRESS equ 0xceb
THUNK_KERNEL32_GETPROCESSAFFINITYMASK equ 0xcec
THUNK_KERNEL32_GETPROCESSHEAP equ 0xced
THUNK_KERNEL32_GETPROCESSHEAPS equ 0xcee
THUNK_KERNEL32_GETPROCESSSHUTDOWNPARAMETERS equ 0xcef
THUNK_KERNEL32_GETPROCESSTIMES equ 0xcf0
THUNK_KERNEL32_GETPROCESSVERSION equ 0xcf1
THUNK_KERNEL32_GETPROCESSWORKINGSETSIZE equ 0xcf2
THUNK_KERNEL32_GETPROFILEINTA equ 0xcf3
THUNK_KERNEL32_GETPROFILEINTW equ 0xcf4
THUNK_KERNEL32_GETPROFILESECTIONA equ 0xcf5
THUNK_KERNEL32_GETPROFILESECTIONW equ 0xcf6
THUNK_KERNEL32_GETPROFILESTRINGA equ 0xcf7
THUNK_KERNEL32_GETPROFILESTRINGW equ 0xcf8
THUNK_KERNEL32_GETQUEUEDCOMPLETIONSTATUS equ 0xcf9
THUNK_KERNEL32_GETSHORTPATHNAMEA equ 0xcfa
THUNK_KERNEL32_GETSHORTPATHNAMEW equ 0xcfb
THUNK_KERNEL32_GETSTARTUPINFO equ 0xcfc
THUNK_KERNEL32_GETSTARTUPINFOA equ 0xcfd
THUNK_KERNEL32_GETSTARTUPINFOW equ 0xcfe
THUNK_KERNEL32_GETSTDHANDLE equ 0xcff
THUNK_KERNEL32_GETSTRINGTYPEA equ 0xd00
THUNK_KERNEL32_GETSTRINGTYPEEXW equ 0xd01
THUNK_KERNEL32_GETSTRINGTYPEEXA equ 0xd02
THUNK_KERNEL32_GETSTRINGTYPEW equ 0xd03
THUNK_KERNEL32_GETSYSTEMDEFAULTLCID equ 0xd04
THUNK_KERNEL32_GETSYSTEMDEFAULTLANGID equ 0xd05
THUNK_KERNEL32_GETSYSTEMDIRECTORYA equ 0xd06
THUNK_KERNEL32_GETSYSTEMDIRECTORYW equ 0xd07
THUNK_KERNEL32_GETSYSTEMINFO equ 0xd08
THUNK_KERNEL32_GETSYSTEMPOWERSTATUS equ 0xd09
THUNK_KERNEL32_GETSYSTEMTIME equ 0xd0a
THUNK_KERNEL32_GETSYSTEMTIMEADJUSTMENT equ 0xd0b
THUNK_KERNEL32_GETSYSTEMTIMEASFILETIME equ 0xd0c
THUNK_KERNEL32_GETTEMPFILENAMEA equ 0xd0d
THUNK_KERNEL32_GETTEMPFILENAMEW equ 0xd0e
THUNK_KERNEL32_GETTHREADCONTEXT equ 0xd0f
THUNK_KERNEL32_GETTHREADLOCALE equ 0xd10
THUNK_KERNEL32_GETTHREADPRIORITY equ 0xd11
THUNK_KERNEL32_GETTHREADSELECTORENTRY equ 0xd12
THUNK_KERNEL32_GETTHREADTIMES equ 0xd13
THUNK_KERNEL32_GETTICKCOUNT equ 0xd14
THUNK_KERNEL32_GETTIMEFORMATA equ 0xd15
THUNK_KERNEL32_GETTIMEFORMATW equ 0xd16
THUNK_KERNEL32_GETTIMEZONEINFORMATION equ 0xd17
THUNK_KERNEL32_GETUSERDEFAULTLCID equ 0xd18
THUNK_KERNEL32_GETUSERDEFAULTLANGID equ 0xd19
THUNK_KERNEL32_GETVERSION equ 0xd1a
THUNK_KERNEL32_GETVERSIONEXA equ 0xd1b
THUNK_KERNEL32_GETVERSIONEXW equ 0xd1c
THUNK_KERNEL32_GETVOLUMEINFORMATIONA equ 0xd1d
THUNK_KERNEL32_GETVOLUMEINFORMATIONW equ 0xd1e
THUNK_KERNEL32_GETWINDOWSDIRECTORYA equ 0xd1f
THUNK_KERNEL32_GETWINDOWSDIRECTORYW equ 0xd20
THUNK_KERNEL32_GLOBALADDATOMA equ 0xd21
THUNK_KERNEL32_GLOBALADDATOMW equ 0xd22
THUNK_KERNEL32_GLOBALALLOC equ 0xd23
THUNK_KERNEL32_GLOBALDELETEATOM equ 0xd24
THUNK_KERNEL32_GLOBALFINDATOMA equ 0xd25
THUNK_KERNEL32_GLOBALFINDATOMW equ 0xd26
THUNK_KERNEL32_GLOBALFLAGS equ 0xd27
THUNK_KERNEL32_GLOBALFREE equ 0xd28
THUNK_KERNEL32_GLOBALGETATOMNAMEA equ 0xd29
THUNK_KERNEL32_GLOBALGETATOMNAMEW equ 0xd2a
THUNK_KERNEL32_GLOBALHANDLE equ 0xd2b
THUNK_KERNEL32_GLOBALLOCK equ 0xd2c
THUNK_KERNEL32_GLOBALMEMORYSTATUS equ 0xd2d
THUNK_KERNEL32_GLOBALREALLOC equ 0xd2e
THUNK_KERNEL32_GLOBALSIZE equ 0xd2f
THUNK_KERNEL32_GLOBALUNLOCK equ 0xd30
THUNK_KERNEL32_HEAPALLOC equ 0xd31
THUNK_KERNEL32_HEAPCOMPACT equ 0xd32
THUNK_KERNEL32_HEAPCREATE equ 0xd33
THUNK_KERNEL32_HEAPDESTROY equ 0xd34
THUNK_KERNEL32_HEAPFREE equ 0xd35
THUNK_KERNEL32_HEAPLOCK equ 0xd36
THUNK_KERNEL32_HEAPREALLOC equ 0xd37
THUNK_KERNEL32_HEAPSIZE equ 0xd38
THUNK_KERNEL32_HEAPSUMMARY equ 0xd39
THUNK_KERNEL32_HEAPUNLOCK equ 0xd3a
THUNK_KERNEL32_HEAPVALIDATE equ 0xd3b
THUNK_KERNEL32_HEAPWALK equ 0xd3c
THUNK_KERNEL32_INITATOMTABLE equ 0xd3d
THUNK_KERNEL32_INITIALIZECRITICALSECTION equ 0xd3e
THUNK_KERNEL32_INTERLOCKEDDECREMENT equ 0xd3f
THUNK_KERNEL32_INTERLOCKEDEXCHANGE equ 0xd40
THUNK_KERNEL32_INTERLOCKEDINCREMENT equ 0xd41
THUNK_KERNEL32_ISBADCODEPTR equ 0xd42
THUNK_KERNEL32_ISBADHUGEREADPTR equ 0xd43
THUNK_KERNEL32_ISBADHUGEWRITEPTR equ 0xd44
THUNK_KERNEL32_ISBADREADPTR equ 0xd45
THUNK_KERNEL32_ISBADSTRINGPTRA equ 0xd46
THUNK_KERNEL32_ISBADSTRINGPTRW equ 0xd47
THUNK_KERNEL32_ISBADWRITEPTR equ 0xd48
THUNK_KERNEL32_ISDBCSLEADBYTE equ 0xd49
THUNK_KERNEL32_ISDBCSLEADBYTEEX equ 0xd4a
THUNK_KERNEL32_ISDEBUGGERPRESENT equ 0xd4b
THUNK_KERNEL32_ISVALIDCODEPAGE equ 0xd4c
THUNK_KERNEL32_ISVALIDLOCALE equ 0xd4d
THUNK_KERNEL32_LCMAPSTRINGA equ 0xd4e
THUNK_KERNEL32_LCMAPSTRINGW equ 0xd4f
THUNK_KERNEL32_LEAVECRITICALSECTION equ 0xd50
THUNK_KERNEL32_LOADLIBRARYA equ 0xd51
THUNK_KERNEL32_LOADLIBRARYEXA equ 0xd52
THUNK_KERNEL32_LOADLIBRARYEXW equ 0xd53
THUNK_KERNEL32_LOADLIBRARYW equ 0xd54
THUNK_KERNEL32_LOADMODULE equ 0xd55
THUNK_KERNEL32_LOADRESOURCE equ 0xd56
THUNK_KERNEL32_LOCALALLOC equ 0xd57
THUNK_KERNEL32_LOCALCOMPACT equ 0xd58
THUNK_KERNEL32_LOCALFILETIMETOFILETIME equ 0xd59
THUNK_KERNEL32_LOCALFLAGS equ 0xd5a
THUNK_KERNEL32_LOCALFREE equ 0xd5b
THUNK_KERNEL32_LOCALHANDLE equ 0xd5c
THUNK_KERNEL32_LOCALLOCK equ 0xd5d
THUNK_KERNEL32_LOCALREALLOC equ 0xd5e
THUNK_KERNEL32_LOCALSIZE equ 0xd5f
THUNK_KERNEL32_LOCALUNLOCK equ 0xd60
THUNK_KERNEL32_LOCKFILE equ 0xd61
THUNK_KERNEL32_LOCKFILEEX equ 0xd62
THUNK_KERNEL32_LOCKRESOURCE equ 0xd63
THUNK_KERNEL32_MAPVIEWOFFILE equ 0xd64
THUNK_KERNEL32_MAPVIEWOFFILEEX equ 0xd65
THUNK_KERNEL32_MOVEFILEA equ 0xd66
THUNK_KERNEL32_MOVEFILEEXA equ 0xd67
THUNK_KERNEL32_MOVEFILEEXW equ 0xd68
THUNK_KERNEL32_MOVEFILEW equ 0xd69
THUNK_KERNEL32_MULDIV equ 0xd6a
THUNK_KERNEL32_MULTIBYTETOWIDECHAR equ 0xd6b
THUNK_KERNEL32_OPENEVENTA equ 0xd6c
THUNK_KERNEL32_OPENEVENTW equ 0xd6d
THUNK_KERNEL32_OPENFILE equ 0xd6e
THUNK_KERNEL32_OPENFILEMAPPINGA equ 0xd6f
THUNK_KERNEL32_OPENFILEMAPPINGW equ 0xd70
THUNK_KERNEL32_OPENMUTEXA equ 0xd71
THUNK_KERNEL32_OPENMUTEXW equ 0xd72
THUNK_KERNEL32_OPENPROCESS equ 0xd73
THUNK_KERNEL32_OPENSEMAPHOREA equ 0xd74
THUNK_KERNEL32_OPENSEMAPHOREW equ 0xd75
THUNK_KERNEL32_OUTPUTDEBUGSTRINGA equ 0xd76
THUNK_KERNEL32_OUTPUTDEBUGSTRINGW equ 0xd77
THUNK_KERNEL32_PEEKCONSOLEINPUTA equ 0xd78
THUNK_KERNEL32_PEEKCONSOLEINPUTW equ 0xd79
THUNK_KERNEL32_PEEKNAMEDPIPE equ 0xd7a
THUNK_KERNEL32_POSTQUEUEDCOMPLETIONSTATUS equ 0xd7b
THUNK_KERNEL32_PREPARETAPE equ 0xd7c
THUNK_KERNEL32_PULSEEVENT equ 0xd7d
THUNK_KERNEL32_PURGECOMM equ 0xd7e
THUNK_KERNEL32_QUERYDOSDEVICEA equ 0xd7f
THUNK_KERNEL32_QUERYDOSDEVICEW equ 0xd80
THUNK_KERNEL32_QUERYPERFORMANCECOUNTER equ 0xd81
THUNK_KERNEL32_QUERYPERFORMANCEFREQUENCY equ 0xd82
THUNK_KERNEL32_RAISEEXCEPTION equ 0xd83
THUNK_KERNEL32_READCONSOLEA equ 0xd84
THUNK_KERNEL32_READCONSOLEW equ 0xd85
THUNK_KERNEL32_READCONSOLEINPUTA equ 0xd86
THUNK_KERNEL32_READCONSOLEINPUTW equ 0xd87
THUNK_KERNEL32_READCONSOLEOUTPUTA equ 0xd88
THUNK_KERNEL32_READCONSOLEOUTPUTW equ 0xd89
THUNK_KERNEL32_READCONSOLEOUTPUTATTRIBUTE equ 0xd8a
THUNK_KERNEL32_READCONSOLEOUTPUTCHARACTERA equ 0xd8b
THUNK_KERNEL32_READCONSOLEOUTPUTCHARACTERW equ 0xd8c
THUNK_KERNEL32_READFILE equ 0xd8d
THUNK_KERNEL32_READFILEEX equ 0xd8e
THUNK_KERNEL32_READPROCESSMEMORY equ 0xd8f
THUNK_KERNEL32_RELEASEMUTEX equ 0xd90
THUNK_KERNEL32_RELEASESEMAPHORE equ 0xd91
THUNK_KERNEL32_REMOVEDIRECTORYA equ 0xd92
THUNK_KERNEL32_REMOVEDIRECTORYW equ 0xd93
THUNK_KERNEL32_RESETEVENT equ 0xd94
THUNK_KERNEL32_RESUMETHREAD equ 0xd95
THUNK_KERNEL32_RTLFILLMEMORY equ 0xd96
THUNK_KERNEL32_RTLMOVEMEMORY equ 0xd97
THUNK_KERNEL32_RTLUNWIND equ 0xd98
THUNK_KERNEL32_RTLZEROMEMORY equ 0xd99
THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFER equ 0xd9a
THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFERA equ 0xd9b
THUNK_KERNEL32_SCROLLCONSOLESCREENBUFFERW equ 0xd9c
THUNK_KERNEL32_SEARCHPATHA equ 0xd9d
THUNK_KERNEL32_SEARCHPATHW equ 0xd9e
THUNK_KERNEL32_SETCOMMBREAK equ 0xd9f
THUNK_KERNEL32_SETCOMMCONFIG equ 0xda0
THUNK_KERNEL32_SETCOMMMASK equ 0xda1
THUNK_KERNEL32_SETCOMMSTATE equ 0xda2
THUNK_KERNEL32_SETCOMMTIMEOUTS equ 0xda3
THUNK_KERNEL32_SETCOMPUTERNAMEA equ 0xda4
THUNK_KERNEL32_SETCOMPUTERNAMEW equ 0xda5
THUNK_KERNEL32_SETCONSOLEACTIVESCREENBUFFER equ 0xda6
THUNK_KERNEL32_SETCONSOLECP equ 0xda7
THUNK_KERNEL32_SETCONSOLECTRLHANDLER equ 0xda8
THUNK_KERNEL32_SETCONSOLECURSORINFO equ 0xda9
THUNK_KERNEL32_SETCONSOLECURSORPOSITION equ 0xdaa
THUNK_KERNEL32_SETCONSOLEDISPLAYMODE equ 0xdab
THUNK_KERNEL32_SETCONSOLEMODE equ 0xdac
THUNK_KERNEL32_SETCONSOLEOUTPUTCP equ 0xdad
THUNK_KERNEL32_SETCONSOLESCREENBUFFERSIZE equ 0xdae
THUNK_KERNEL32_SETCONSOLETEXTATTRIBUTE equ 0xdaf
THUNK_KERNEL32_SETCONSOLETITLEA equ 0xdb0
THUNK_KERNEL32_SETCONSOLETITLEW equ 0xdb1
THUNK_KERNEL32_SETCONSOLEWINDOWINFO equ 0xdb2
THUNK_KERNEL32_SETCURRENTDIRECTORYA equ 0xdb3
THUNK_KERNEL32_SETCURRENTDIRECTORYW equ 0xdb4
THUNK_KERNEL32_SETDEFAULTCOMMCONFIGA equ 0xdb5
THUNK_KERNEL32_SETDEFAULTCOMMCONFIGW equ 0xdb6
THUNK_KERNEL32_SETENDOFFILE equ 0xdb7
THUNK_KERNEL32_SETENVIRONMENTVARIABLEA equ 0xdb8
THUNK_KERNEL32_SETENVIRONMENTVARIABLEW equ 0xdb9
THUNK_KERNEL32_SETERRORMODE equ 0xdba
THUNK_KERNEL32_SETEVENT equ 0xdbb
THUNK_KERNEL32_SETFILEAPISTOANSI equ 0xdbc
THUNK_KERNEL32_SETFILEAPISTOOEM equ 0xdbd
THUNK_KERNEL32_SETFILEATTRIBUTESA equ 0xdbe
THUNK_KERNEL32_SETFILEATTRIBUTESW equ 0xdbf
THUNK_KERNEL32_SETFILEPOINTER equ 0xdc0
THUNK_KERNEL32_SETFILETIME equ 0xdc1
THUNK_KERNEL32_SETHANDLECOUNT equ 0xdc2
THUNK_KERNEL32_SETHANDLEINFORMATION equ 0xdc3
THUNK_KERNEL32_SETLASTERROR equ 0xdc4
THUNK_KERNEL32_SETLOCALTIME equ 0xdc5
THUNK_KERNEL32_SETLOCALEINFOA equ 0xdc6
THUNK_KERNEL32_SETLOCALEINFOW equ 0xdc7
THUNK_KERNEL32_SETMAILSLOTINFO equ 0xdc8
THUNK_KERNEL32_SETNAMEDPIPEHANDLESTATE equ 0xdc9
THUNK_KERNEL32_SETPRIORITYCLASS equ 0xdca
THUNK_KERNEL32_SETPROCESSSHUTDOWNPARAMETERS equ 0xdcb
THUNK_KERNEL32_SETPROCESSWORKINGSETSIZE equ 0xdcc
THUNK_KERNEL32_SETSTDHANDLE equ 0xdcd
THUNK_KERNEL32_SETSYSTEMPOWERSTATE equ 0xdce
THUNK_KERNEL32_SETSYSTEMTIME equ 0xdcf
THUNK_KERNEL32_SETSYSTEMTIMEADJUSTMENT equ 0xdd0
THUNK_KERNEL32_SETTAPEPARAMETERS equ 0xdd1
THUNK_KERNEL32_SETTAPEPOSITION equ 0xdd2
THUNK_KERNEL32_SETTHREADAFFINITYMASK equ 0xdd3
THUNK_KERNEL32_SETTHREADCONTEXT equ 0xdd4
THUNK_KERNEL32_SETTHREADLOCALE equ 0xdd5
THUNK_KERNEL32_SETTHREADPRIORITY equ 0xdd6
THUNK_KERNEL32_SETTIMEZONEINFORMATION equ 0xdd7
THUNK_KERNEL32_SETUNHANDLEDEXCEPTIONFILTER equ 0xdd8
THUNK_KERNEL32_SETVOLUMELABELA equ 0xdd9
THUNK_KERNEL32_SETVOLUMELABELW equ 0xdda
THUNK_KERNEL32_SETUPCOMM equ 0xddb
THUNK_KERNEL32_SIZEOFRESOURCE equ 0xddc
THUNK_KERNEL32_SLEEP equ 0xddd
THUNK_KERNEL32_SLEEPEX equ 0xdde
THUNK_KERNEL32_SUSPENDTHREAD equ 0xddf
THUNK_KERNEL32_SYSTEMTIMETOFILETIME equ 0xde0
THUNK_KERNEL32_SYSTEMTIMETOTZSPECIFICLOCALTIME equ 0xde1
THUNK_KERNEL32_TERMINATEPROCESS equ 0xde2
THUNK_KERNEL32_TERMINATETHREAD equ 0xde3
THUNK_KERNEL32_TLSALLOC equ 0xde4
THUNK_KERNEL32_TLSFREE equ 0xde5
THUNK_KERNEL32_TLSGETVALUE equ 0xde6
THUNK_KERNEL32_TLSSETVALUE equ 0xde7
THUNK_KERNEL32_TRANSACTNAMEDPIPE equ 0xde8
THUNK_KERNEL32_TRANSMITCOMMCHAR equ 0xde9
THUNK_KERNEL32_UNHANDLEDEXCEPTIONFILTER equ 0xdea
THUNK_KERNEL32_UNLOCKFILE equ 0xdeb
THUNK_KERNEL32_UNLOCKFILEEX equ 0xdec
THUNK_KERNEL32_UNMAPVIEWOFFILE equ 0xded
THUNK_KERNEL32_UPDATERESOURCEA equ 0xdee
THUNK_KERNEL32_UPDATERESOURCEW equ 0xdef
THUNK_KERNEL32_VERLANGUAGENAMEA equ 0xdf0
THUNK_KERNEL32_VERLANGUAGENAMEW equ 0xdf1
THUNK_KERNEL32_VIRTUALALLOC equ 0xdf2
THUNK_KERNEL32_VIRTUALFREE equ 0xdf3
THUNK_KERNEL32_VIRTUALLOCK equ 0xdf4
THUNK_KERNEL32_VIRTUALPROTECT equ 0xdf5
THUNK_KERNEL32_VIRTUALPROTECTEX equ 0xdf6
THUNK_KERNEL32_VIRTUALQUERY equ 0xdf7
THUNK_KERNEL32_VIRTUALQUERYEX equ 0xdf8
THUNK_KERNEL32_VIRTUALUNLOCK equ 0xdf9
THUNK_KERNEL32_WAITCOMMEVENT equ 0xdfa
THUNK_KERNEL32_WAITFORDEBUGEVENT equ 0xdfb
THUNK_KERNEL32_WAITFORMULTIPLEOBJECTS equ 0xdfc
THUNK_KERNEL32_WAITFORMULTIPLEOBJECTSEX equ 0xdfd
THUNK_KERNEL32_WAITFORSINGLEOBJECT equ 0xdfe
THUNK_KERNEL32_WAITFORSINGLEOBJECTEX equ 0xdff
THUNK_KERNEL32_WAITNAMEDPIPEA equ 0xe00
THUNK_KERNEL32_WAITNAMEDPIPEW equ 0xe01
THUNK_KERNEL32_WIDECHARTOMULTIBYTE equ 0xe02
THUNK_KERNEL32_WINEXEC equ 0xe03
THUNK_KERNEL32_WRITECONSOLEA equ 0xe04
THUNK_KERNEL32_WRITECONSOLEW equ 0xe05
THUNK_KERNEL32_WRITECONSOLEINPUTA equ 0xe06
THUNK_KERNEL32_WRITECONSOLEINPUTW equ 0xe07
THUNK_KERNEL32_WRITECONSOLEOUTPUTA equ 0xe08
THUNK_KERNEL32_WRITECONSOLEOUTPUTW equ 0xe09
THUNK_KERNEL32_WRITECONSOLEOUTPUTATTRIBUTE equ 0xe0a
THUNK_KERNEL32_WRITEFILE equ 0xe0b
THUNK_KERNEL32_WRITEFILEEX equ 0xe0c
THUNK_KERNEL32_WRITEPRIVATEPROFILESECTIONA equ 0xe0d
THUNK_KERNEL32_WRITEPRIVATEPROFILESECTIONW equ 0xe0e
THUNK_KERNEL32_WRITEPRIVATEPROFILESTRINGA equ 0xe0f
THUNK_KERNEL32_WRITEPRIVATEPROFILESTRINGW equ 0xe10
THUNK_KERNEL32_WRITEPRIVATEPROFILESTRUCTA equ 0xe11
THUNK_KERNEL32_WRITEPRIVATEPROFILESTRUCTW equ 0xe12
THUNK_KERNEL32_WRITEPROCESSMEMORY equ 0xe13
THUNK_KERNEL32_WRITEPROFILESECTIONA equ 0xe14
THUNK_KERNEL32_WRITEPROFILESECTIONW equ 0xe15
THUNK_KERNEL32_WRITEPROFILESTRINGA equ 0xe16
THUNK_KERNEL32_WRITEPROFILESTRINGW equ 0xe17
THUNK_KERNEL32_WRITETAPEMARK equ 0xe18
THUNK_KERNEL32__HREAD equ 0xe19
THUNK_KERNEL32__HWRITE equ 0xe1a
THUNK_KERNEL32__LOPEN equ 0xe1b
THUNK_KERNEL32__LCREAT equ 0xe1c
THUNK_KERNEL32__LCLOSE equ 0xe1d
THUNK_KERNEL32__LLSEEK equ 0xe1e
THUNK_KERNEL32__LREAD equ 0xe1f
THUNK_KERNEL32__LWRITE equ 0xe20
THUNK_KERNEL32_LSTRCATA equ 0xe21
THUNK_KERNEL32_LSTRCAT equ 0xe22
THUNK_KERNEL32_LSTRCATW equ 0xe23
THUNK_KERNEL32_LSTRCMPA equ 0xe24
THUNK_KERNEL32_LSTRCMP equ 0xe25
THUNK_KERNEL32_LSTRCMPW equ 0xe26
THUNK_KERNEL32_LSTRCMPIA equ 0xe27
THUNK_KERNEL32_LSTRCMPI equ 0xe28
THUNK_KERNEL32_LSTRCMPIW equ 0xe29
THUNK_KERNEL32_LSTRCPYA equ 0xe2a
THUNK_KERNEL32_LSTRCPY equ 0xe2b
THUNK_KERNEL32_LSTRCPYW equ 0xe2c
THUNK_KERNEL32_LSTRCPYNA equ 0xe2d
THUNK_KERNEL32_LSTRCPYN equ 0xe2e
THUNK_KERNEL32_LSTRCPYNW equ 0xe2f
THUNK_KERNEL32_LSTRLENA equ 0xe30
THUNK_KERNEL32_LSTRLEN equ 0xe31
THUNK_KERNEL32_LSTRLENW equ 0xe32

SYSCALL_THUNK equ 0x80