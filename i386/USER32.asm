global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

global ChangeDisplaySettingsA
extern ChangeDisplaySettingsA
export ChangeDisplaySettingsA

ChangeDisplaySettingsA:
	mov eax, THUNK_USER32_CHANGEDISPLAYSETTINGSA
	int SYSCALL_THUNK
	ret 0x8

global ChangeDisplaySettingsW
extern ChangeDisplaySettingsW
export ChangeDisplaySettingsW

ChangeDisplaySettingsW:
	mov eax, THUNK_USER32_CHANGEDISPLAYSETTINGSW
	int SYSCALL_THUNK
	ret 0x8

global ChangeDisplaySettingsExA
extern ChangeDisplaySettingsExA
export ChangeDisplaySettingsExA

ChangeDisplaySettingsExA:
	mov eax, THUNK_USER32_CHANGEDISPLAYSETTINGSEXA
	int SYSCALL_THUNK
	ret 0x14

global ChangeDisplaySettingsExW
extern ChangeDisplaySettingsExW
export ChangeDisplaySettingsExW

ChangeDisplaySettingsExW:
	mov eax, THUNK_USER32_CHANGEDISPLAYSETTINGSEXW
	int SYSCALL_THUNK
	ret 0x14

global CreateDesktopA
extern CreateDesktopA
export CreateDesktopA

CreateDesktopA:
	mov eax, THUNK_USER32_CREATEDESKTOPA
	int SYSCALL_THUNK
	ret 0x18

global CreateDesktopW
extern CreateDesktopW
export CreateDesktopW

CreateDesktopW:
	mov eax, THUNK_USER32_CREATEDESKTOPW
	int SYSCALL_THUNK
	ret 0x18

global DisplayConfigGetDeviceInfo
extern DisplayConfigGetDeviceInfo
export DisplayConfigGetDeviceInfo

DisplayConfigGetDeviceInfo:
	mov eax, THUNK_USER32_DISPLAYCONFIGGETDEVICEINFO
	int SYSCALL_THUNK
	ret 0x4

global EnumDisplayDevicesA
extern EnumDisplayDevicesA
export EnumDisplayDevicesA

EnumDisplayDevicesA:
	mov eax, THUNK_USER32_ENUMDISPLAYDEVICESA
	int SYSCALL_THUNK
	ret 0x10

global EnumDisplayDevicesW
extern EnumDisplayDevicesW
export EnumDisplayDevicesW

EnumDisplayDevicesW:
	mov eax, THUNK_USER32_ENUMDISPLAYDEVICESW
	int SYSCALL_THUNK
	ret 0x10

global EnumDisplaySettingsA
extern EnumDisplaySettingsA
export EnumDisplaySettingsA

EnumDisplaySettingsA:
	mov eax, THUNK_USER32_ENUMDISPLAYSETTINGSA
	int SYSCALL_THUNK
	ret 0xc

global EnumDisplaySettingsW
extern EnumDisplaySettingsW
export EnumDisplaySettingsW

EnumDisplaySettingsW:
	mov eax, THUNK_USER32_ENUMDISPLAYSETTINGSW
	int SYSCALL_THUNK
	ret 0xc

global EnumDisplaySettingsExA
extern EnumDisplaySettingsExA
export EnumDisplaySettingsExA

EnumDisplaySettingsExA:
	mov eax, THUNK_USER32_ENUMDISPLAYSETTINGSEXA
	int SYSCALL_THUNK
	ret 0x10

global EnumDisplaySettingsExW
extern EnumDisplaySettingsExW
export EnumDisplaySettingsExW

EnumDisplaySettingsExW:
	mov eax, THUNK_USER32_ENUMDISPLAYSETTINGSEXW
	int SYSCALL_THUNK
	ret 0x10

global GetDisplayConfigBufferSizes
extern GetDisplayConfigBufferSizes
export GetDisplayConfigBufferSizes

GetDisplayConfigBufferSizes:
	mov eax, THUNK_USER32_GETDISPLAYCONFIGBUFFERSIZES
	int SYSCALL_THUNK
	ret 0xc

global UpdateLayeredWindow
extern UpdateLayeredWindow
export UpdateLayeredWindow

UpdateLayeredWindow:
	mov eax, THUNK_USER32_UPDATELAYEREDWINDOW
	int SYSCALL_THUNK
	ret 0x24

global UpdateLayeredWindowIndirect
extern UpdateLayeredWindowIndirect
export UpdateLayeredWindowIndirect

UpdateLayeredWindowIndirect:
	mov eax, THUNK_USER32_UPDATELAYEREDWINDOWINDIRECT
	int SYSCALL_THUNK
	ret 0x8

global ActivateKeyboardLayout
extern ActivateKeyboardLayout
export ActivateKeyboardLayout

ActivateKeyboardLayout:
	mov eax, THUNK_USER32_ACTIVATEKEYBOARDLAYOUT
	int SYSCALL_THUNK
	ret 0x8

global AdjustWindowRect
extern AdjustWindowRect
export AdjustWindowRect

AdjustWindowRect:
	mov eax, THUNK_USER32_ADJUSTWINDOWRECT
	int SYSCALL_THUNK
	ret 0xc

global AdjustWindowRectEx
extern AdjustWindowRectEx
export AdjustWindowRectEx

AdjustWindowRectEx:
	mov eax, THUNK_USER32_ADJUSTWINDOWRECTEX
	int SYSCALL_THUNK
	ret 0x10

global AnyPopup
extern AnyPopup
export AnyPopup

AnyPopup:
	mov eax, THUNK_USER32_ANYPOPUP
	int SYSCALL_THUNK
	ret 0x0

global AppendMenuA
extern AppendMenuA
export AppendMenuA

AppendMenuA:
	mov eax, THUNK_USER32_APPENDMENUA
	int SYSCALL_THUNK
	ret 0x10

global AppendMenuW
extern AppendMenuW
export AppendMenuW

AppendMenuW:
	mov eax, THUNK_USER32_APPENDMENUW
	int SYSCALL_THUNK
	ret 0x10

global ArrangeIconicWindows
extern ArrangeIconicWindows
export ArrangeIconicWindows

ArrangeIconicWindows:
	mov eax, THUNK_USER32_ARRANGEICONICWINDOWS
	int SYSCALL_THUNK
	ret 0x4

global AttachThreadInput
extern AttachThreadInput
export AttachThreadInput

AttachThreadInput:
	mov eax, THUNK_USER32_ATTACHTHREADINPUT
	int SYSCALL_THUNK
	ret 0xc

global BeginDeferWindowPos
extern BeginDeferWindowPos
export BeginDeferWindowPos

BeginDeferWindowPos:
	mov eax, THUNK_USER32_BEGINDEFERWINDOWPOS
	int SYSCALL_THUNK
	ret 0x4

global BeginPaint
extern BeginPaint
export BeginPaint

BeginPaint:
	mov eax, THUNK_USER32_BEGINPAINT
	int SYSCALL_THUNK
	ret 0x8

global BringWindowToTop
extern BringWindowToTop
export BringWindowToTop

BringWindowToTop:
	mov eax, THUNK_USER32_BRINGWINDOWTOTOP
	int SYSCALL_THUNK
	ret 0x4

global BroadcastSystemMessage
extern BroadcastSystemMessage
export BroadcastSystemMessage

BroadcastSystemMessage:
	mov eax, THUNK_USER32_BROADCASTSYSTEMMESSAGE
	int SYSCALL_THUNK
	ret 0x14

global BroadcastSystemMessageA
extern BroadcastSystemMessageA
export BroadcastSystemMessageA

BroadcastSystemMessageA:
	mov eax, THUNK_USER32_BROADCASTSYSTEMMESSAGEA
	int SYSCALL_THUNK
	ret 0x14

global BroadcastSystemMessageW
extern BroadcastSystemMessageW
export BroadcastSystemMessageW

BroadcastSystemMessageW:
	mov eax, THUNK_USER32_BROADCASTSYSTEMMESSAGEW
	int SYSCALL_THUNK
	ret 0x14

global CallMsgFilterA
extern CallMsgFilterA
export CallMsgFilterA

CallMsgFilterA:
	mov eax, THUNK_USER32_CALLMSGFILTERA
	int SYSCALL_THUNK
	ret 0x8

global CallMsgFilterW
extern CallMsgFilterW
export CallMsgFilterW

CallMsgFilterW:
	mov eax, THUNK_USER32_CALLMSGFILTERW
	int SYSCALL_THUNK
	ret 0x8

global CallNextHookEx
extern CallNextHookEx
export CallNextHookEx

CallNextHookEx:
	mov eax, THUNK_USER32_CALLNEXTHOOKEX
	int SYSCALL_THUNK
	ret 0x10

global CallWindowProcA
extern CallWindowProcA
export CallWindowProcA

CallWindowProcA:
	mov eax, THUNK_USER32_CALLWINDOWPROCA
	int SYSCALL_THUNK
	ret 0x14

global CallWindowProcW
extern CallWindowProcW
export CallWindowProcW

CallWindowProcW:
	mov eax, THUNK_USER32_CALLWINDOWPROCW
	int SYSCALL_THUNK
	ret 0x14

global CascadeWindows
extern CascadeWindows
export CascadeWindows

CascadeWindows:
	mov eax, THUNK_USER32_CASCADEWINDOWS
	int SYSCALL_THUNK
	ret 0x14

global ChangeClipboardChain
extern ChangeClipboardChain
export ChangeClipboardChain

ChangeClipboardChain:
	mov eax, THUNK_USER32_CHANGECLIPBOARDCHAIN
	int SYSCALL_THUNK
	ret 0x8

global ChangeMenuA
extern ChangeMenuA
export ChangeMenuA

ChangeMenuA:
	mov eax, THUNK_USER32_CHANGEMENUA
	int SYSCALL_THUNK
	ret 0x14

global ChangeMenuW
extern ChangeMenuW
export ChangeMenuW

ChangeMenuW:
	mov eax, THUNK_USER32_CHANGEMENUW
	int SYSCALL_THUNK
	ret 0x14

global ChangeWindowMessageFilter
extern ChangeWindowMessageFilter
export ChangeWindowMessageFilter

ChangeWindowMessageFilter:
	mov eax, THUNK_USER32_CHANGEWINDOWMESSAGEFILTER
	int SYSCALL_THUNK
	ret 0x8

global ChangeWindowMessageFilterEx
extern ChangeWindowMessageFilterEx
export ChangeWindowMessageFilterEx

ChangeWindowMessageFilterEx:
	mov eax, THUNK_USER32_CHANGEWINDOWMESSAGEFILTEREX
	int SYSCALL_THUNK
	ret 0x10

global CharLowerA
extern CharLowerA
export CharLowerA

CharLowerA:
	mov eax, THUNK_USER32_CHARLOWERA
	int SYSCALL_THUNK
	ret 0x4

global CharLowerW
extern CharLowerW
export CharLowerW

CharLowerW:
	mov eax, THUNK_USER32_CHARLOWERW
	int SYSCALL_THUNK
	ret 0x4

global CharLowerBuffA
extern CharLowerBuffA
export CharLowerBuffA

CharLowerBuffA:
	mov eax, THUNK_USER32_CHARLOWERBUFFA
	int SYSCALL_THUNK
	ret 0x8

global CharLowerBuffW
extern CharLowerBuffW
export CharLowerBuffW

CharLowerBuffW:
	mov eax, THUNK_USER32_CHARLOWERBUFFW
	int SYSCALL_THUNK
	ret 0x8

global CharNextA
extern CharNextA
export CharNextA

CharNextA:
	mov eax, THUNK_USER32_CHARNEXTA
	int SYSCALL_THUNK
	ret 0x4

global CharNextW
extern CharNextW
export CharNextW

CharNextW:
	mov eax, THUNK_USER32_CHARNEXTW
	int SYSCALL_THUNK
	ret 0x4

global CharNextExA
extern CharNextExA
export CharNextExA

CharNextExA:
	mov eax, THUNK_USER32_CHARNEXTEXA
	int SYSCALL_THUNK
	ret 0xc

global CharPrevA
extern CharPrevA
export CharPrevA

CharPrevA:
	mov eax, THUNK_USER32_CHARPREVA
	int SYSCALL_THUNK
	ret 0x8

global CharPrevW
extern CharPrevW
export CharPrevW

CharPrevW:
	mov eax, THUNK_USER32_CHARPREVW
	int SYSCALL_THUNK
	ret 0x8

global CharPrevExA
extern CharPrevExA
export CharPrevExA

CharPrevExA:
	mov eax, THUNK_USER32_CHARPREVEXA
	int SYSCALL_THUNK
	ret 0x10

global CharUpperA
extern CharUpperA
export CharUpperA

CharUpperA:
	mov eax, THUNK_USER32_CHARUPPERA
	int SYSCALL_THUNK
	ret 0x4

global CharUpperW
extern CharUpperW
export CharUpperW

CharUpperW:
	mov eax, THUNK_USER32_CHARUPPERW
	int SYSCALL_THUNK
	ret 0x4

global CharUpperBuffA
extern CharUpperBuffA
export CharUpperBuffA

CharUpperBuffA:
	mov eax, THUNK_USER32_CHARUPPERBUFFA
	int SYSCALL_THUNK
	ret 0x8

global CharUpperBuffW
extern CharUpperBuffW
export CharUpperBuffW

CharUpperBuffW:
	mov eax, THUNK_USER32_CHARUPPERBUFFW
	int SYSCALL_THUNK
	ret 0x8

global CharToOemA
extern CharToOemA
export CharToOemA

CharToOemA:
	mov eax, THUNK_USER32_CHARTOOEMA
	int SYSCALL_THUNK
	ret 0x8

global CharToOemW
extern CharToOemW
export CharToOemW

CharToOemW:
	mov eax, THUNK_USER32_CHARTOOEMW
	int SYSCALL_THUNK
	ret 0x8

global CharToOemBuffA
extern CharToOemBuffA
export CharToOemBuffA

CharToOemBuffA:
	mov eax, THUNK_USER32_CHARTOOEMBUFFA
	int SYSCALL_THUNK
	ret 0xc

global CharToOemBuffW
extern CharToOemBuffW
export CharToOemBuffW

CharToOemBuffW:
	mov eax, THUNK_USER32_CHARTOOEMBUFFW
	int SYSCALL_THUNK
	ret 0xc

global CheckDlgButton
extern CheckDlgButton
export CheckDlgButton

CheckDlgButton:
	mov eax, THUNK_USER32_CHECKDLGBUTTON
	int SYSCALL_THUNK
	ret 0xc

global CheckMenuItem
extern CheckMenuItem
export CheckMenuItem

CheckMenuItem:
	mov eax, THUNK_USER32_CHECKMENUITEM
	int SYSCALL_THUNK
	ret 0xc

global CheckMenuRadioItem
extern CheckMenuRadioItem
export CheckMenuRadioItem

CheckMenuRadioItem:
	mov eax, THUNK_USER32_CHECKMENURADIOITEM
	int SYSCALL_THUNK
	ret 0x14

global CheckRadioButton
extern CheckRadioButton
export CheckRadioButton

CheckRadioButton:
	mov eax, THUNK_USER32_CHECKRADIOBUTTON
	int SYSCALL_THUNK
	ret 0x10

global ChildWindowFromPoint
extern ChildWindowFromPoint
export ChildWindowFromPoint

ChildWindowFromPoint:
	mov eax, THUNK_USER32_CHILDWINDOWFROMPOINT
	int SYSCALL_THUNK
	ret 0x8

global ChildWindowFromPointEx
extern ChildWindowFromPointEx
export ChildWindowFromPointEx

ChildWindowFromPointEx:
	mov eax, THUNK_USER32_CHILDWINDOWFROMPOINTEX
	int SYSCALL_THUNK
	ret 0xc

global ClientToScreen
extern ClientToScreen
export ClientToScreen

ClientToScreen:
	mov eax, THUNK_USER32_CLIENTTOSCREEN
	int SYSCALL_THUNK
	ret 0x8

global ClipCursor
extern ClipCursor
export ClipCursor

ClipCursor:
	mov eax, THUNK_USER32_CLIPCURSOR
	int SYSCALL_THUNK
	ret 0x4

global CloseClipboard
extern CloseClipboard
export CloseClipboard

CloseClipboard:
	mov eax, THUNK_USER32_CLOSECLIPBOARD
	int SYSCALL_THUNK
	ret 0x0

global CloseDesktop
extern CloseDesktop
export CloseDesktop

CloseDesktop:
	mov eax, THUNK_USER32_CLOSEDESKTOP
	int SYSCALL_THUNK
	ret 0x4

global CloseTouchInputHandle
extern CloseTouchInputHandle
export CloseTouchInputHandle

CloseTouchInputHandle:
	mov eax, THUNK_USER32_CLOSETOUCHINPUTHANDLE
	int SYSCALL_THUNK
	ret 0x4

global CloseGestureInfoHandle
extern CloseGestureInfoHandle
export CloseGestureInfoHandle

CloseGestureInfoHandle:
	mov eax, THUNK_USER32_CLOSEGESTUREINFOHANDLE
	int SYSCALL_THUNK
	ret 0x4

global CloseWindow
extern CloseWindow
export CloseWindow

CloseWindow:
	mov eax, THUNK_USER32_CLOSEWINDOW
	int SYSCALL_THUNK
	ret 0x4

global CloseWindowStation
extern CloseWindowStation
export CloseWindowStation

CloseWindowStation:
	mov eax, THUNK_USER32_CLOSEWINDOWSTATION
	int SYSCALL_THUNK
	ret 0x4

global CopyAcceleratorTableA
extern CopyAcceleratorTableA
export CopyAcceleratorTableA

CopyAcceleratorTableA:
	mov eax, THUNK_USER32_COPYACCELERATORTABLEA
	int SYSCALL_THUNK
	ret 0xc

global CopyAcceleratorTableW
extern CopyAcceleratorTableW
export CopyAcceleratorTableW

CopyAcceleratorTableW:
	mov eax, THUNK_USER32_COPYACCELERATORTABLEW
	int SYSCALL_THUNK
	ret 0xc

global CopyIcon
extern CopyIcon
export CopyIcon

CopyIcon:
	mov eax, THUNK_USER32_COPYICON
	int SYSCALL_THUNK
	ret 0x4

global CopyImage
extern CopyImage
export CopyImage

CopyImage:
	mov eax, THUNK_USER32_COPYIMAGE
	int SYSCALL_THUNK
	ret 0x14

global CopyRect
extern CopyRect
export CopyRect

CopyRect:
	mov eax, THUNK_USER32_COPYRECT
	int SYSCALL_THUNK
	ret 0x8

global CountClipboardFormats
extern CountClipboardFormats
export CountClipboardFormats

CountClipboardFormats:
	mov eax, THUNK_USER32_COUNTCLIPBOARDFORMATS
	int SYSCALL_THUNK
	ret 0x0

global CreateAcceleratorTableA
extern CreateAcceleratorTableA
export CreateAcceleratorTableA

CreateAcceleratorTableA:
	mov eax, THUNK_USER32_CREATEACCELERATORTABLEA
	int SYSCALL_THUNK
	ret 0x8

global CreateAcceleratorTableW
extern CreateAcceleratorTableW
export CreateAcceleratorTableW

CreateAcceleratorTableW:
	mov eax, THUNK_USER32_CREATEACCELERATORTABLEW
	int SYSCALL_THUNK
	ret 0x8

global CreateIconIndirect
extern CreateIconIndirect
export CreateIconIndirect

CreateIconIndirect:
	mov eax, THUNK_USER32_CREATEICONINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreateCaret
extern CreateCaret
export CreateCaret

CreateCaret:
	mov eax, THUNK_USER32_CREATECARET
	int SYSCALL_THUNK
	ret 0x10

global CreateCursor
extern CreateCursor
export CreateCursor

CreateCursor:
	mov eax, THUNK_USER32_CREATECURSOR
	int SYSCALL_THUNK
	ret 0x1c

global CreateDialogIndirectParamA
extern CreateDialogIndirectParamA
export CreateDialogIndirectParamA

CreateDialogIndirectParamA:
	mov eax, THUNK_USER32_CREATEDIALOGINDIRECTPARAMA
	int SYSCALL_THUNK
	ret 0x14

global CreateDialogIndirectParamW
extern CreateDialogIndirectParamW
export CreateDialogIndirectParamW

CreateDialogIndirectParamW:
	mov eax, THUNK_USER32_CREATEDIALOGINDIRECTPARAMW
	int SYSCALL_THUNK
	ret 0x14

global CreateDialogParamA
extern CreateDialogParamA
export CreateDialogParamA

CreateDialogParamA:
	mov eax, THUNK_USER32_CREATEDIALOGPARAMA
	int SYSCALL_THUNK
	ret 0x14

global CreateDialogParamW
extern CreateDialogParamW
export CreateDialogParamW

CreateDialogParamW:
	mov eax, THUNK_USER32_CREATEDIALOGPARAMW
	int SYSCALL_THUNK
	ret 0x14

global CreateIcon
extern CreateIcon
export CreateIcon

CreateIcon:
	mov eax, THUNK_USER32_CREATEICON
	int SYSCALL_THUNK
	ret 0x1c

global CreateIconFromResource
extern CreateIconFromResource
export CreateIconFromResource

CreateIconFromResource:
	mov eax, THUNK_USER32_CREATEICONFROMRESOURCE
	int SYSCALL_THUNK
	ret 0x10

global CreateIconFromResourceEx
extern CreateIconFromResourceEx
export CreateIconFromResourceEx

CreateIconFromResourceEx:
	mov eax, THUNK_USER32_CREATEICONFROMRESOURCEEX
	int SYSCALL_THUNK
	ret 0x1c

global CreateMenu
extern CreateMenu
export CreateMenu

CreateMenu:
	mov eax, THUNK_USER32_CREATEMENU
	int SYSCALL_THUNK
	ret 0x0

global CreatePopupMenu
extern CreatePopupMenu
export CreatePopupMenu

CreatePopupMenu:
	mov eax, THUNK_USER32_CREATEPOPUPMENU
	int SYSCALL_THUNK
	ret 0x0

global CreateWindowExA
extern CreateWindowExA
export CreateWindowExA

CreateWindowExA:
	mov eax, THUNK_USER32_CREATEWINDOWEXA
	int SYSCALL_THUNK
	ret 0x30

global CreateWindowExW
extern CreateWindowExW
export CreateWindowExW

CreateWindowExW:
	mov eax, THUNK_USER32_CREATEWINDOWEXW
	int SYSCALL_THUNK
	ret 0x30

global CreateWindowStationA
extern CreateWindowStationA
export CreateWindowStationA

CreateWindowStationA:
	mov eax, THUNK_USER32_CREATEWINDOWSTATIONA
	int SYSCALL_THUNK
	ret 0x10

global CreateWindowStationW
extern CreateWindowStationW
export CreateWindowStationW

CreateWindowStationW:
	mov eax, THUNK_USER32_CREATEWINDOWSTATIONW
	int SYSCALL_THUNK
	ret 0x10

global CreateMDIWindowA
extern CreateMDIWindowA
export CreateMDIWindowA

CreateMDIWindowA:
	mov eax, THUNK_USER32_CREATEMDIWINDOWA
	int SYSCALL_THUNK
	ret 0x28

global CreateMDIWindowW
extern CreateMDIWindowW
export CreateMDIWindowW

CreateMDIWindowW:
	mov eax, THUNK_USER32_CREATEMDIWINDOWW
	int SYSCALL_THUNK
	ret 0x28

global CreateSyntheticPointerDevice
extern CreateSyntheticPointerDevice
export CreateSyntheticPointerDevice

CreateSyntheticPointerDevice:
	mov eax, THUNK_USER32_CREATESYNTHETICPOINTERDEVICE
	int SYSCALL_THUNK
	ret 0xc

global DefDlgProcA
extern DefDlgProcA
export DefDlgProcA

DefDlgProcA:
	mov eax, THUNK_USER32_DEFDLGPROCA
	int SYSCALL_THUNK
	ret 0x10

global DefDlgProcW
extern DefDlgProcW
export DefDlgProcW

DefDlgProcW:
	mov eax, THUNK_USER32_DEFDLGPROCW
	int SYSCALL_THUNK
	ret 0x10

global DeferWindowPos
extern DeferWindowPos
export DeferWindowPos

DeferWindowPos:
	mov eax, THUNK_USER32_DEFERWINDOWPOS
	int SYSCALL_THUNK
	ret 0x20

global DefFrameProcA
extern DefFrameProcA
export DefFrameProcA

DefFrameProcA:
	mov eax, THUNK_USER32_DEFFRAMEPROCA
	int SYSCALL_THUNK
	ret 0x14

global DefFrameProcW
extern DefFrameProcW
export DefFrameProcW

DefFrameProcW:
	mov eax, THUNK_USER32_DEFFRAMEPROCW
	int SYSCALL_THUNK
	ret 0x14

global DefMDIChildProcA
extern DefMDIChildProcA
export DefMDIChildProcA

DefMDIChildProcA:
	mov eax, THUNK_USER32_DEFMDICHILDPROCA
	int SYSCALL_THUNK
	ret 0x10

global DefMDIChildProcW
extern DefMDIChildProcW
export DefMDIChildProcW

DefMDIChildProcW:
	mov eax, THUNK_USER32_DEFMDICHILDPROCW
	int SYSCALL_THUNK
	ret 0x10

global DefRawInputProc
extern DefRawInputProc
export DefRawInputProc

DefRawInputProc:
	mov eax, THUNK_USER32_DEFRAWINPUTPROC
	int SYSCALL_THUNK
	ret 0xc

global DefWindowProcA
extern DefWindowProcA
export DefWindowProcA

DefWindowProcA:
	mov eax, THUNK_USER32_DEFWINDOWPROCA
	int SYSCALL_THUNK
	ret 0x10

global DefWindowProcW
extern DefWindowProcW
export DefWindowProcW

DefWindowProcW:
	mov eax, THUNK_USER32_DEFWINDOWPROCW
	int SYSCALL_THUNK
	ret 0x10

global DeleteMenu
extern DeleteMenu
export DeleteMenu

DeleteMenu:
	mov eax, THUNK_USER32_DELETEMENU
	int SYSCALL_THUNK
	ret 0xc

global DeregisterShellHookWindow
extern DeregisterShellHookWindow
export DeregisterShellHookWindow

DeregisterShellHookWindow:
	mov eax, THUNK_USER32_DEREGISTERSHELLHOOKWINDOW
	int SYSCALL_THUNK
	ret 0x4

global DestroyAcceleratorTable
extern DestroyAcceleratorTable
export DestroyAcceleratorTable

DestroyAcceleratorTable:
	mov eax, THUNK_USER32_DESTROYACCELERATORTABLE
	int SYSCALL_THUNK
	ret 0x4

global DestroyCaret
extern DestroyCaret
export DestroyCaret

DestroyCaret:
	mov eax, THUNK_USER32_DESTROYCARET
	int SYSCALL_THUNK
	ret 0x0

global DestroyCursor
extern DestroyCursor
export DestroyCursor

DestroyCursor:
	mov eax, THUNK_USER32_DESTROYCURSOR
	int SYSCALL_THUNK
	ret 0x4

global DestroyIcon
extern DestroyIcon
export DestroyIcon

DestroyIcon:
	mov eax, THUNK_USER32_DESTROYICON
	int SYSCALL_THUNK
	ret 0x4

global DestroyMenu
extern DestroyMenu
export DestroyMenu

DestroyMenu:
	mov eax, THUNK_USER32_DESTROYMENU
	int SYSCALL_THUNK
	ret 0x4

global DestroySyntheticPointerDevice
extern DestroySyntheticPointerDevice
export DestroySyntheticPointerDevice

DestroySyntheticPointerDevice:
	mov eax, THUNK_USER32_DESTROYSYNTHETICPOINTERDEVICE
	int SYSCALL_THUNK
	ret 0x4

global DestroyWindow
extern DestroyWindow
export DestroyWindow

DestroyWindow:
	mov eax, THUNK_USER32_DESTROYWINDOW
	int SYSCALL_THUNK
	ret 0x4

global DialogBoxIndirectParamA
extern DialogBoxIndirectParamA
export DialogBoxIndirectParamA

DialogBoxIndirectParamA:
	mov eax, THUNK_USER32_DIALOGBOXINDIRECTPARAMA
	int SYSCALL_THUNK
	ret 0x14

global DialogBoxIndirectParamW
extern DialogBoxIndirectParamW
export DialogBoxIndirectParamW

DialogBoxIndirectParamW:
	mov eax, THUNK_USER32_DIALOGBOXINDIRECTPARAMW
	int SYSCALL_THUNK
	ret 0x14

global DialogBoxParamA
extern DialogBoxParamA
export DialogBoxParamA

DialogBoxParamA:
	mov eax, THUNK_USER32_DIALOGBOXPARAMA
	int SYSCALL_THUNK
	ret 0x14

global DialogBoxParamW
extern DialogBoxParamW
export DialogBoxParamW

DialogBoxParamW:
	mov eax, THUNK_USER32_DIALOGBOXPARAMW
	int SYSCALL_THUNK
	ret 0x14

global DisableProcessWindowsGhosting
extern DisableProcessWindowsGhosting
export DisableProcessWindowsGhosting

DisableProcessWindowsGhosting:
	mov eax, THUNK_USER32_DISABLEPROCESSWINDOWSGHOSTING
	int SYSCALL_THUNK
	ret 0x0

global DispatchMessageA
extern DispatchMessageA
export DispatchMessageA

DispatchMessageA:
	mov eax, THUNK_USER32_DISPATCHMESSAGEA
	int SYSCALL_THUNK
	ret 0x4

global DispatchMessageW
extern DispatchMessageW
export DispatchMessageW

DispatchMessageW:
	mov eax, THUNK_USER32_DISPATCHMESSAGEW
	int SYSCALL_THUNK
	ret 0x4

global DlgDirListA
extern DlgDirListA
export DlgDirListA

DlgDirListA:
	mov eax, THUNK_USER32_DLGDIRLISTA
	int SYSCALL_THUNK
	ret 0x14

global DlgDirListW
extern DlgDirListW
export DlgDirListW

DlgDirListW:
	mov eax, THUNK_USER32_DLGDIRLISTW
	int SYSCALL_THUNK
	ret 0x14

global DlgDirListComboBoxA
extern DlgDirListComboBoxA
export DlgDirListComboBoxA

DlgDirListComboBoxA:
	mov eax, THUNK_USER32_DLGDIRLISTCOMBOBOXA
	int SYSCALL_THUNK
	ret 0x14

global DlgDirListComboBoxW
extern DlgDirListComboBoxW
export DlgDirListComboBoxW

DlgDirListComboBoxW:
	mov eax, THUNK_USER32_DLGDIRLISTCOMBOBOXW
	int SYSCALL_THUNK
	ret 0x14

global DlgDirSelectComboBoxExA
extern DlgDirSelectComboBoxExA
export DlgDirSelectComboBoxExA

DlgDirSelectComboBoxExA:
	mov eax, THUNK_USER32_DLGDIRSELECTCOMBOBOXEXA
	int SYSCALL_THUNK
	ret 0x10

global DlgDirSelectComboBoxExW
extern DlgDirSelectComboBoxExW
export DlgDirSelectComboBoxExW

DlgDirSelectComboBoxExW:
	mov eax, THUNK_USER32_DLGDIRSELECTCOMBOBOXEXW
	int SYSCALL_THUNK
	ret 0x10

global DlgDirSelectExA
extern DlgDirSelectExA
export DlgDirSelectExA

DlgDirSelectExA:
	mov eax, THUNK_USER32_DLGDIRSELECTEXA
	int SYSCALL_THUNK
	ret 0x10

global DlgDirSelectExW
extern DlgDirSelectExW
export DlgDirSelectExW

DlgDirSelectExW:
	mov eax, THUNK_USER32_DLGDIRSELECTEXW
	int SYSCALL_THUNK
	ret 0x10

global DragDetect
extern DragDetect
export DragDetect

DragDetect:
	mov eax, THUNK_USER32_DRAGDETECT
	int SYSCALL_THUNK
	ret 0x8

global DragObject
extern DragObject
export DragObject

DragObject:
	mov eax, THUNK_USER32_DRAGOBJECT
	int SYSCALL_THUNK
	ret 0x14

global DrawAnimatedRects
extern DrawAnimatedRects
export DrawAnimatedRects

DrawAnimatedRects:
	mov eax, THUNK_USER32_DRAWANIMATEDRECTS
	int SYSCALL_THUNK
	ret 0x10

global DrawCaption
extern DrawCaption
export DrawCaption

DrawCaption:
	mov eax, THUNK_USER32_DRAWCAPTION
	int SYSCALL_THUNK
	ret 0x10

global DrawEdge
extern DrawEdge
export DrawEdge

DrawEdge:
	mov eax, THUNK_USER32_DRAWEDGE
	int SYSCALL_THUNK
	ret 0x10

global DrawFocusRect
extern DrawFocusRect
export DrawFocusRect

DrawFocusRect:
	mov eax, THUNK_USER32_DRAWFOCUSRECT
	int SYSCALL_THUNK
	ret 0x8

global DrawFrameControl
extern DrawFrameControl
export DrawFrameControl

DrawFrameControl:
	mov eax, THUNK_USER32_DRAWFRAMECONTROL
	int SYSCALL_THUNK
	ret 0x10

global DrawIcon
extern DrawIcon
export DrawIcon

DrawIcon:
	mov eax, THUNK_USER32_DRAWICON
	int SYSCALL_THUNK
	ret 0x10

global DrawIconEx
extern DrawIconEx
export DrawIconEx

DrawIconEx:
	mov eax, THUNK_USER32_DRAWICONEX
	int SYSCALL_THUNK
	ret 0x24

global DrawMenuBar
extern DrawMenuBar
export DrawMenuBar

DrawMenuBar:
	mov eax, THUNK_USER32_DRAWMENUBAR
	int SYSCALL_THUNK
	ret 0x4

global DrawStateA
extern DrawStateA
export DrawStateA

DrawStateA:
	mov eax, THUNK_USER32_DRAWSTATEA
	int SYSCALL_THUNK
	ret 0x28

global DrawStateW
extern DrawStateW
export DrawStateW

DrawStateW:
	mov eax, THUNK_USER32_DRAWSTATEW
	int SYSCALL_THUNK
	ret 0x28

global DrawTextA
extern DrawTextA
export DrawTextA

DrawTextA:
	mov eax, THUNK_USER32_DRAWTEXTA
	int SYSCALL_THUNK
	ret 0x14

global DrawTextW
extern DrawTextW
export DrawTextW

DrawTextW:
	mov eax, THUNK_USER32_DRAWTEXTW
	int SYSCALL_THUNK
	ret 0x14

global DrawTextExA
extern DrawTextExA
export DrawTextExA

DrawTextExA:
	mov eax, THUNK_USER32_DRAWTEXTEXA
	int SYSCALL_THUNK
	ret 0x18

global DrawTextExW
extern DrawTextExW
export DrawTextExW

DrawTextExW:
	mov eax, THUNK_USER32_DRAWTEXTEXW
	int SYSCALL_THUNK
	ret 0x18

global EmptyClipboard
extern EmptyClipboard
export EmptyClipboard

EmptyClipboard:
	mov eax, THUNK_USER32_EMPTYCLIPBOARD
	int SYSCALL_THUNK
	ret 0x0

global EnableMenuItem
extern EnableMenuItem
export EnableMenuItem

EnableMenuItem:
	mov eax, THUNK_USER32_ENABLEMENUITEM
	int SYSCALL_THUNK
	ret 0xc

global EnableMouseInPointer
extern EnableMouseInPointer
export EnableMouseInPointer

EnableMouseInPointer:
	mov eax, THUNK_USER32_ENABLEMOUSEINPOINTER
	int SYSCALL_THUNK
	ret 0x4

global EnableNonClientDpiScaling
extern EnableNonClientDpiScaling
export EnableNonClientDpiScaling

EnableNonClientDpiScaling:
	mov eax, THUNK_USER32_ENABLENONCLIENTDPISCALING
	int SYSCALL_THUNK
	ret 0x4

global EnableScrollBar
extern EnableScrollBar
export EnableScrollBar

EnableScrollBar:
	mov eax, THUNK_USER32_ENABLESCROLLBAR
	int SYSCALL_THUNK
	ret 0xc

global EnableWindow
extern EnableWindow
export EnableWindow

EnableWindow:
	mov eax, THUNK_USER32_ENABLEWINDOW
	int SYSCALL_THUNK
	ret 0x8

global EndDeferWindowPos
extern EndDeferWindowPos
export EndDeferWindowPos

EndDeferWindowPos:
	mov eax, THUNK_USER32_ENDDEFERWINDOWPOS
	int SYSCALL_THUNK
	ret 0x4

global EndDialog
extern EndDialog
export EndDialog

EndDialog:
	mov eax, THUNK_USER32_ENDDIALOG
	int SYSCALL_THUNK
	ret 0x8

global EndMenu
extern EndMenu
export EndMenu

EndMenu:
	mov eax, THUNK_USER32_ENDMENU
	int SYSCALL_THUNK
	ret 0x0

global EndPaint
extern EndPaint
export EndPaint

EndPaint:
	mov eax, THUNK_USER32_ENDPAINT
	int SYSCALL_THUNK
	ret 0x8

global EnumChildWindows
extern EnumChildWindows
export EnumChildWindows

EnumChildWindows:
	mov eax, THUNK_USER32_ENUMCHILDWINDOWS
	int SYSCALL_THUNK
	ret 0xc

global EnumClipboardFormats
extern EnumClipboardFormats
export EnumClipboardFormats

EnumClipboardFormats:
	mov eax, THUNK_USER32_ENUMCLIPBOARDFORMATS
	int SYSCALL_THUNK
	ret 0x4

global EnumDesktopsA
extern EnumDesktopsA
export EnumDesktopsA

EnumDesktopsA:
	mov eax, THUNK_USER32_ENUMDESKTOPSA
	int SYSCALL_THUNK
	ret 0xc

global EnumDesktopsW
extern EnumDesktopsW
export EnumDesktopsW

EnumDesktopsW:
	mov eax, THUNK_USER32_ENUMDESKTOPSW
	int SYSCALL_THUNK
	ret 0xc

global EnumDesktopWindows
extern EnumDesktopWindows
export EnumDesktopWindows

EnumDesktopWindows:
	mov eax, THUNK_USER32_ENUMDESKTOPWINDOWS
	int SYSCALL_THUNK
	ret 0xc

global EnumDisplayMonitors
extern EnumDisplayMonitors
export EnumDisplayMonitors

EnumDisplayMonitors:
	mov eax, THUNK_USER32_ENUMDISPLAYMONITORS
	int SYSCALL_THUNK
	ret 0x10

global EnumPropsA
extern EnumPropsA
export EnumPropsA

EnumPropsA:
	mov eax, THUNK_USER32_ENUMPROPSA
	int SYSCALL_THUNK
	ret 0x8

global EnumPropsW
extern EnumPropsW
export EnumPropsW

EnumPropsW:
	mov eax, THUNK_USER32_ENUMPROPSW
	int SYSCALL_THUNK
	ret 0x8

global EnumPropsExA
extern EnumPropsExA
export EnumPropsExA

EnumPropsExA:
	mov eax, THUNK_USER32_ENUMPROPSEXA
	int SYSCALL_THUNK
	ret 0xc

global EnumPropsExW
extern EnumPropsExW
export EnumPropsExW

EnumPropsExW:
	mov eax, THUNK_USER32_ENUMPROPSEXW
	int SYSCALL_THUNK
	ret 0xc

global EnumThreadWindows
extern EnumThreadWindows
export EnumThreadWindows

EnumThreadWindows:
	mov eax, THUNK_USER32_ENUMTHREADWINDOWS
	int SYSCALL_THUNK
	ret 0xc

global EnumWindows
extern EnumWindows
export EnumWindows

EnumWindows:
	mov eax, THUNK_USER32_ENUMWINDOWS
	int SYSCALL_THUNK
	ret 0x8

global EnumWindowStationsA
extern EnumWindowStationsA
export EnumWindowStationsA

EnumWindowStationsA:
	mov eax, THUNK_USER32_ENUMWINDOWSTATIONSA
	int SYSCALL_THUNK
	ret 0x8

global EnumWindowStationsW
extern EnumWindowStationsW
export EnumWindowStationsW

EnumWindowStationsW:
	mov eax, THUNK_USER32_ENUMWINDOWSTATIONSW
	int SYSCALL_THUNK
	ret 0x8

global EvaluateProximityToRect
extern EvaluateProximityToRect
export EvaluateProximityToRect

EvaluateProximityToRect:
	mov eax, THUNK_USER32_EVALUATEPROXIMITYTORECT
	int SYSCALL_THUNK
	ret 0xc

global EvaluateProximityToPolygon
extern EvaluateProximityToPolygon
export EvaluateProximityToPolygon

EvaluateProximityToPolygon:
	mov eax, THUNK_USER32_EVALUATEPROXIMITYTOPOLYGON
	int SYSCALL_THUNK
	ret 0x10

global ExcludeUpdateRgn
extern ExcludeUpdateRgn
export ExcludeUpdateRgn

ExcludeUpdateRgn:
	mov eax, THUNK_USER32_EXCLUDEUPDATERGN
	int SYSCALL_THUNK
	ret 0x8

global ExitWindowsEx
extern ExitWindowsEx
export ExitWindowsEx

ExitWindowsEx:
	mov eax, THUNK_USER32_EXITWINDOWSEX
	int SYSCALL_THUNK
	ret 0x8

global FillRect
extern FillRect
export FillRect

FillRect:
	mov eax, THUNK_USER32_FILLRECT
	int SYSCALL_THUNK
	ret 0xc

global FindWindowA
extern FindWindowA
export FindWindowA

FindWindowA:
	mov eax, THUNK_USER32_FINDWINDOWA
	int SYSCALL_THUNK
	ret 0x8

global FindWindowW
extern FindWindowW
export FindWindowW

FindWindowW:
	mov eax, THUNK_USER32_FINDWINDOWW
	int SYSCALL_THUNK
	ret 0x8

global FindWindowExA
extern FindWindowExA
export FindWindowExA

FindWindowExA:
	mov eax, THUNK_USER32_FINDWINDOWEXA
	int SYSCALL_THUNK
	ret 0x10

global FindWindowExW
extern FindWindowExW
export FindWindowExW

FindWindowExW:
	mov eax, THUNK_USER32_FINDWINDOWEXW
	int SYSCALL_THUNK
	ret 0x10

global FlashWindow
extern FlashWindow
export FlashWindow

FlashWindow:
	mov eax, THUNK_USER32_FLASHWINDOW
	int SYSCALL_THUNK
	ret 0x8

global FlashWindowEx
extern FlashWindowEx
export FlashWindowEx

FlashWindowEx:
	mov eax, THUNK_USER32_FLASHWINDOWEX
	int SYSCALL_THUNK
	ret 0x4

global FrameRect
extern FrameRect
export FrameRect

FrameRect:
	mov eax, THUNK_USER32_FRAMERECT
	int SYSCALL_THUNK
	ret 0xc

global GetActiveWindow
extern GetActiveWindow
export GetActiveWindow

GetActiveWindow:
	mov eax, THUNK_USER32_GETACTIVEWINDOW
	int SYSCALL_THUNK
	ret 0x0

global GetAltTabInfoA
extern GetAltTabInfoA
export GetAltTabInfoA

GetAltTabInfoA:
	mov eax, THUNK_USER32_GETALTTABINFOA
	int SYSCALL_THUNK
	ret 0x14

global GetAltTabInfoW
extern GetAltTabInfoW
export GetAltTabInfoW

GetAltTabInfoW:
	mov eax, THUNK_USER32_GETALTTABINFOW
	int SYSCALL_THUNK
	ret 0x14

global GetAncestor
extern GetAncestor
export GetAncestor

GetAncestor:
	mov eax, THUNK_USER32_GETANCESTOR
	int SYSCALL_THUNK
	ret 0x8

global GetAsyncKeyState
extern GetAsyncKeyState
export GetAsyncKeyState

GetAsyncKeyState:
	mov eax, THUNK_USER32_GETASYNCKEYSTATE
	int SYSCALL_THUNK
	ret 0x4

global GetAutoRotationState
extern GetAutoRotationState
export GetAutoRotationState

GetAutoRotationState:
	mov eax, THUNK_USER32_GETAUTOROTATIONSTATE
	int SYSCALL_THUNK
	ret 0x4

global GetAwarenessFromDpiAwarenessContext
extern GetAwarenessFromDpiAwarenessContext
export GetAwarenessFromDpiAwarenessContext

GetAwarenessFromDpiAwarenessContext:
	mov eax, THUNK_USER32_GETAWARENESSFROMDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x4

global GetCapture
extern GetCapture
export GetCapture

GetCapture:
	mov eax, THUNK_USER32_GETCAPTURE
	int SYSCALL_THUNK
	ret 0x0

global GetCaretBlinkTime
extern GetCaretBlinkTime
export GetCaretBlinkTime

GetCaretBlinkTime:
	mov eax, THUNK_USER32_GETCARETBLINKTIME
	int SYSCALL_THUNK
	ret 0x0

global GetCaretPos
extern GetCaretPos
export GetCaretPos

GetCaretPos:
	mov eax, THUNK_USER32_GETCARETPOS
	int SYSCALL_THUNK
	ret 0x4

global GetClassInfoA
extern GetClassInfoA
export GetClassInfoA

GetClassInfoA:
	mov eax, THUNK_USER32_GETCLASSINFOA
	int SYSCALL_THUNK
	ret 0xc

global GetClassInfoW
extern GetClassInfoW
export GetClassInfoW

GetClassInfoW:
	mov eax, THUNK_USER32_GETCLASSINFOW
	int SYSCALL_THUNK
	ret 0xc

global GetClassInfoExA
extern GetClassInfoExA
export GetClassInfoExA

GetClassInfoExA:
	mov eax, THUNK_USER32_GETCLASSINFOEXA
	int SYSCALL_THUNK
	ret 0xc

global GetClassInfoExW
extern GetClassInfoExW
export GetClassInfoExW

GetClassInfoExW:
	mov eax, THUNK_USER32_GETCLASSINFOEXW
	int SYSCALL_THUNK
	ret 0xc

global GetClassLongA
extern GetClassLongA
export GetClassLongA

GetClassLongA:
	mov eax, THUNK_USER32_GETCLASSLONGA
	int SYSCALL_THUNK
	ret 0x8

global GetClassLongW
extern GetClassLongW
export GetClassLongW

GetClassLongW:
	mov eax, THUNK_USER32_GETCLASSLONGW
	int SYSCALL_THUNK
	ret 0x8

global GetClassNameA
extern GetClassNameA
export GetClassNameA

GetClassNameA:
	mov eax, THUNK_USER32_GETCLASSNAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetClassNameW
extern GetClassNameW
export GetClassNameW

GetClassNameW:
	mov eax, THUNK_USER32_GETCLASSNAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetClassWord
extern GetClassWord
export GetClassWord

GetClassWord:
	mov eax, THUNK_USER32_GETCLASSWORD
	int SYSCALL_THUNK
	ret 0x8

global GetClientRect
extern GetClientRect
export GetClientRect

GetClientRect:
	mov eax, THUNK_USER32_GETCLIENTRECT
	int SYSCALL_THUNK
	ret 0x8

global GetClipboardData
extern GetClipboardData
export GetClipboardData

GetClipboardData:
	mov eax, THUNK_USER32_GETCLIPBOARDDATA
	int SYSCALL_THUNK
	ret 0x4

global GetClipboardFormatNameA
extern GetClipboardFormatNameA
export GetClipboardFormatNameA

GetClipboardFormatNameA:
	mov eax, THUNK_USER32_GETCLIPBOARDFORMATNAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetClipboardFormatNameW
extern GetClipboardFormatNameW
export GetClipboardFormatNameW

GetClipboardFormatNameW:
	mov eax, THUNK_USER32_GETCLIPBOARDFORMATNAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetClipboardOwner
extern GetClipboardOwner
export GetClipboardOwner

GetClipboardOwner:
	mov eax, THUNK_USER32_GETCLIPBOARDOWNER
	int SYSCALL_THUNK
	ret 0x0

global GetClipboardSequenceNumber
extern GetClipboardSequenceNumber
export GetClipboardSequenceNumber

GetClipboardSequenceNumber:
	mov eax, THUNK_USER32_GETCLIPBOARDSEQUENCENUMBER
	int SYSCALL_THUNK
	ret 0x0

global GetClipboardViewer
extern GetClipboardViewer
export GetClipboardViewer

GetClipboardViewer:
	mov eax, THUNK_USER32_GETCLIPBOARDVIEWER
	int SYSCALL_THUNK
	ret 0x0

global GetClipCursor
extern GetClipCursor
export GetClipCursor

GetClipCursor:
	mov eax, THUNK_USER32_GETCLIPCURSOR
	int SYSCALL_THUNK
	ret 0x4

global GetComboBoxInfo
extern GetComboBoxInfo
export GetComboBoxInfo

GetComboBoxInfo:
	mov eax, THUNK_USER32_GETCOMBOBOXINFO
	int SYSCALL_THUNK
	ret 0x8

global GetCurrentInputMessageSource
extern GetCurrentInputMessageSource
export GetCurrentInputMessageSource

GetCurrentInputMessageSource:
	mov eax, THUNK_USER32_GETCURRENTINPUTMESSAGESOURCE
	int SYSCALL_THUNK
	ret 0x4

global GetCursor
extern GetCursor
export GetCursor

GetCursor:
	mov eax, THUNK_USER32_GETCURSOR
	int SYSCALL_THUNK
	ret 0x0

global GetCursorInfo
extern GetCursorInfo
export GetCursorInfo

GetCursorInfo:
	mov eax, THUNK_USER32_GETCURSORINFO
	int SYSCALL_THUNK
	ret 0x4

global GetCursorPos
extern GetCursorPos
export GetCursorPos

GetCursorPos:
	mov eax, THUNK_USER32_GETCURSORPOS
	int SYSCALL_THUNK
	ret 0x4

global GetDC
extern GetDC
export GetDC

GetDC:
	mov eax, THUNK_USER32_GETDC
	int SYSCALL_THUNK
	ret 0x4

global GetDCEx
extern GetDCEx
export GetDCEx

GetDCEx:
	mov eax, THUNK_USER32_GETDCEX
	int SYSCALL_THUNK
	ret 0xc

global GetDesktopWindow
extern GetDesktopWindow
export GetDesktopWindow

GetDesktopWindow:
	mov eax, THUNK_USER32_GETDESKTOPWINDOW
	int SYSCALL_THUNK
	ret 0x0

global GetDialogBaseUnits
extern GetDialogBaseUnits
export GetDialogBaseUnits

GetDialogBaseUnits:
	mov eax, THUNK_USER32_GETDIALOGBASEUNITS
	int SYSCALL_THUNK
	ret 0x0

global GetDisplayAutoRotationPreferences
extern GetDisplayAutoRotationPreferences
export GetDisplayAutoRotationPreferences

GetDisplayAutoRotationPreferences:
	mov eax, THUNK_USER32_GETDISPLAYAUTOROTATIONPREFERENCES
	int SYSCALL_THUNK
	ret 0x4

global GetDlgCtrlID
extern GetDlgCtrlID
export GetDlgCtrlID

GetDlgCtrlID:
	mov eax, THUNK_USER32_GETDLGCTRLID
	int SYSCALL_THUNK
	ret 0x4

global GetDlgItem
extern GetDlgItem
export GetDlgItem

GetDlgItem:
	mov eax, THUNK_USER32_GETDLGITEM
	int SYSCALL_THUNK
	ret 0x8

global GetDlgItemInt
extern GetDlgItemInt
export GetDlgItemInt

GetDlgItemInt:
	mov eax, THUNK_USER32_GETDLGITEMINT
	int SYSCALL_THUNK
	ret 0x10

global GetDlgItemTextA
extern GetDlgItemTextA
export GetDlgItemTextA

GetDlgItemTextA:
	mov eax, THUNK_USER32_GETDLGITEMTEXTA
	int SYSCALL_THUNK
	ret 0x10

global GetDlgItemTextW
extern GetDlgItemTextW
export GetDlgItemTextW

GetDlgItemTextW:
	mov eax, THUNK_USER32_GETDLGITEMTEXTW
	int SYSCALL_THUNK
	ret 0x10

global GetDoubleClickTime
extern GetDoubleClickTime
export GetDoubleClickTime

GetDoubleClickTime:
	mov eax, THUNK_USER32_GETDOUBLECLICKTIME
	int SYSCALL_THUNK
	ret 0x0

global GetDpiForWindow
extern GetDpiForWindow
export GetDpiForWindow

GetDpiForWindow:
	mov eax, THUNK_USER32_GETDPIFORWINDOW
	int SYSCALL_THUNK
	ret 0x4

global GetDpiForSystem
extern GetDpiForSystem
export GetDpiForSystem

GetDpiForSystem:
	mov eax, THUNK_USER32_GETDPIFORSYSTEM
	int SYSCALL_THUNK
	ret 0x0

global GetFocus
extern GetFocus
export GetFocus

GetFocus:
	mov eax, THUNK_USER32_GETFOCUS
	int SYSCALL_THUNK
	ret 0x0

global GetForegroundWindow
extern GetForegroundWindow
export GetForegroundWindow

GetForegroundWindow:
	mov eax, THUNK_USER32_GETFOREGROUNDWINDOW
	int SYSCALL_THUNK
	ret 0x0

global GetGestureConfig
extern GetGestureConfig
export GetGestureConfig

GetGestureConfig:
	mov eax, THUNK_USER32_GETGESTURECONFIG
	int SYSCALL_THUNK
	ret 0x18

global GetGestureExtraArgs
extern GetGestureExtraArgs
export GetGestureExtraArgs

GetGestureExtraArgs:
	mov eax, THUNK_USER32_GETGESTUREEXTRAARGS
	int SYSCALL_THUNK
	ret 0xc

global GetGestureInfo
extern GetGestureInfo
export GetGestureInfo

GetGestureInfo:
	mov eax, THUNK_USER32_GETGESTUREINFO
	int SYSCALL_THUNK
	ret 0x8

global GetGUIThreadInfo
extern GetGUIThreadInfo
export GetGUIThreadInfo

GetGUIThreadInfo:
	mov eax, THUNK_USER32_GETGUITHREADINFO
	int SYSCALL_THUNK
	ret 0x8

global GetGuiResources
extern GetGuiResources
export GetGuiResources

GetGuiResources:
	mov eax, THUNK_USER32_GETGUIRESOURCES
	int SYSCALL_THUNK
	ret 0x8

global GetIconInfo
extern GetIconInfo
export GetIconInfo

GetIconInfo:
	mov eax, THUNK_USER32_GETICONINFO
	int SYSCALL_THUNK
	ret 0x8

global GetIconInfoExA
extern GetIconInfoExA
export GetIconInfoExA

GetIconInfoExA:
	mov eax, THUNK_USER32_GETICONINFOEXA
	int SYSCALL_THUNK
	ret 0x8

global GetIconInfoExW
extern GetIconInfoExW
export GetIconInfoExW

GetIconInfoExW:
	mov eax, THUNK_USER32_GETICONINFOEXW
	int SYSCALL_THUNK
	ret 0x8

global GetInputState
extern GetInputState
export GetInputState

GetInputState:
	mov eax, THUNK_USER32_GETINPUTSTATE
	int SYSCALL_THUNK
	ret 0x0

global GetKBCodePage
extern GetKBCodePage
export GetKBCodePage

GetKBCodePage:
	mov eax, THUNK_USER32_GETKBCODEPAGE
	int SYSCALL_THUNK
	ret 0x0

global GetKeyboardLayout
extern GetKeyboardLayout
export GetKeyboardLayout

GetKeyboardLayout:
	mov eax, THUNK_USER32_GETKEYBOARDLAYOUT
	int SYSCALL_THUNK
	ret 0x4

global GetKeyboardLayoutList
extern GetKeyboardLayoutList
export GetKeyboardLayoutList

GetKeyboardLayoutList:
	mov eax, THUNK_USER32_GETKEYBOARDLAYOUTLIST
	int SYSCALL_THUNK
	ret 0x8

global GetKeyboardState
extern GetKeyboardState
export GetKeyboardState

GetKeyboardState:
	mov eax, THUNK_USER32_GETKEYBOARDSTATE
	int SYSCALL_THUNK
	ret 0x4

global GetKeyboardType
extern GetKeyboardType
export GetKeyboardType

GetKeyboardType:
	mov eax, THUNK_USER32_GETKEYBOARDTYPE
	int SYSCALL_THUNK
	ret 0x4

global GetKeyNameTextA
extern GetKeyNameTextA
export GetKeyNameTextA

GetKeyNameTextA:
	mov eax, THUNK_USER32_GETKEYNAMETEXTA
	int SYSCALL_THUNK
	ret 0xc

global GetKeyNameTextW
extern GetKeyNameTextW
export GetKeyNameTextW

GetKeyNameTextW:
	mov eax, THUNK_USER32_GETKEYNAMETEXTW
	int SYSCALL_THUNK
	ret 0xc

global GetKeyboardLayoutNameA
extern GetKeyboardLayoutNameA
export GetKeyboardLayoutNameA

GetKeyboardLayoutNameA:
	mov eax, THUNK_USER32_GETKEYBOARDLAYOUTNAMEA
	int SYSCALL_THUNK
	ret 0x4

global GetKeyboardLayoutNameW
extern GetKeyboardLayoutNameW
export GetKeyboardLayoutNameW

GetKeyboardLayoutNameW:
	mov eax, THUNK_USER32_GETKEYBOARDLAYOUTNAMEW
	int SYSCALL_THUNK
	ret 0x4

global GetKeyState
extern GetKeyState
export GetKeyState

GetKeyState:
	mov eax, THUNK_USER32_GETKEYSTATE
	int SYSCALL_THUNK
	ret 0x4

global GetLastActivePopup
extern GetLastActivePopup
export GetLastActivePopup

GetLastActivePopup:
	mov eax, THUNK_USER32_GETLASTACTIVEPOPUP
	int SYSCALL_THUNK
	ret 0x4

global GetLastInputInfo
extern GetLastInputInfo
export GetLastInputInfo

GetLastInputInfo:
	mov eax, THUNK_USER32_GETLASTINPUTINFO
	int SYSCALL_THUNK
	ret 0x4

global GetListBoxInfo
extern GetListBoxInfo
export GetListBoxInfo

GetListBoxInfo:
	mov eax, THUNK_USER32_GETLISTBOXINFO
	int SYSCALL_THUNK
	ret 0x4

global GetRawInputBuffer
extern GetRawInputBuffer
export GetRawInputBuffer

GetRawInputBuffer:
	mov eax, THUNK_USER32_GETRAWINPUTBUFFER
	int SYSCALL_THUNK
	ret 0xc

global GetRawInputData
extern GetRawInputData
export GetRawInputData

GetRawInputData:
	mov eax, THUNK_USER32_GETRAWINPUTDATA
	int SYSCALL_THUNK
	ret 0x14

global GetRawInputDeviceInfoA
extern GetRawInputDeviceInfoA
export GetRawInputDeviceInfoA

GetRawInputDeviceInfoA:
	mov eax, THUNK_USER32_GETRAWINPUTDEVICEINFOA
	int SYSCALL_THUNK
	ret 0x10

global GetRawInputDeviceInfoW
extern GetRawInputDeviceInfoW
export GetRawInputDeviceInfoW

GetRawInputDeviceInfoW:
	mov eax, THUNK_USER32_GETRAWINPUTDEVICEINFOW
	int SYSCALL_THUNK
	ret 0x10

global GetRawInputDeviceList
extern GetRawInputDeviceList
export GetRawInputDeviceList

GetRawInputDeviceList:
	mov eax, THUNK_USER32_GETRAWINPUTDEVICELIST
	int SYSCALL_THUNK
	ret 0xc

global GetRegisteredRawInputDevices
extern GetRegisteredRawInputDevices
export GetRegisteredRawInputDevices

GetRegisteredRawInputDevices:
	mov eax, THUNK_USER32_GETREGISTEREDRAWINPUTDEVICES
	int SYSCALL_THUNK
	ret 0xc

global GetLayeredWindowAttributes
extern GetLayeredWindowAttributes
export GetLayeredWindowAttributes

GetLayeredWindowAttributes:
	mov eax, THUNK_USER32_GETLAYEREDWINDOWATTRIBUTES
	int SYSCALL_THUNK
	ret 0x10

global GetMenu
extern GetMenu
export GetMenu

GetMenu:
	mov eax, THUNK_USER32_GETMENU
	int SYSCALL_THUNK
	ret 0x4

global GetMenuBarInfo
extern GetMenuBarInfo
export GetMenuBarInfo

GetMenuBarInfo:
	mov eax, THUNK_USER32_GETMENUBARINFO
	int SYSCALL_THUNK
	ret 0x10

global GetMenuCheckMarkDimensions
extern GetMenuCheckMarkDimensions
export GetMenuCheckMarkDimensions

GetMenuCheckMarkDimensions:
	mov eax, THUNK_USER32_GETMENUCHECKMARKDIMENSIONS
	int SYSCALL_THUNK
	ret 0x0

global GetMenuContextHelpId
extern GetMenuContextHelpId
export GetMenuContextHelpId

GetMenuContextHelpId:
	mov eax, THUNK_USER32_GETMENUCONTEXTHELPID
	int SYSCALL_THUNK
	ret 0x4

global GetMenuDefaultItem
extern GetMenuDefaultItem
export GetMenuDefaultItem

GetMenuDefaultItem:
	mov eax, THUNK_USER32_GETMENUDEFAULTITEM
	int SYSCALL_THUNK
	ret 0xc

global GetMenuInfo
extern GetMenuInfo
export GetMenuInfo

GetMenuInfo:
	mov eax, THUNK_USER32_GETMENUINFO
	int SYSCALL_THUNK
	ret 0x8

global GetMenuItemCount
extern GetMenuItemCount
export GetMenuItemCount

GetMenuItemCount:
	mov eax, THUNK_USER32_GETMENUITEMCOUNT
	int SYSCALL_THUNK
	ret 0x4

global GetMenuItemID
extern GetMenuItemID
export GetMenuItemID

GetMenuItemID:
	mov eax, THUNK_USER32_GETMENUITEMID
	int SYSCALL_THUNK
	ret 0x8

global GetMenuItemInfoA
extern GetMenuItemInfoA
export GetMenuItemInfoA

GetMenuItemInfoA:
	mov eax, THUNK_USER32_GETMENUITEMINFOA
	int SYSCALL_THUNK
	ret 0x10

global GetMenuItemInfoW
extern GetMenuItemInfoW
export GetMenuItemInfoW

GetMenuItemInfoW:
	mov eax, THUNK_USER32_GETMENUITEMINFOW
	int SYSCALL_THUNK
	ret 0x10

global GetMenuItemRect
extern GetMenuItemRect
export GetMenuItemRect

GetMenuItemRect:
	mov eax, THUNK_USER32_GETMENUITEMRECT
	int SYSCALL_THUNK
	ret 0x10

global GetMenuState
extern GetMenuState
export GetMenuState

GetMenuState:
	mov eax, THUNK_USER32_GETMENUSTATE
	int SYSCALL_THUNK
	ret 0xc

global GetMenuStringA
extern GetMenuStringA
export GetMenuStringA

GetMenuStringA:
	mov eax, THUNK_USER32_GETMENUSTRINGA
	int SYSCALL_THUNK
	ret 0x14

global GetMenuStringW
extern GetMenuStringW
export GetMenuStringW

GetMenuStringW:
	mov eax, THUNK_USER32_GETMENUSTRINGW
	int SYSCALL_THUNK
	ret 0x14

global GetMessageA
extern GetMessageA
export GetMessageA

GetMessageA:
	mov eax, THUNK_USER32_GETMESSAGEA
	int SYSCALL_THUNK
	ret 0x10

global GetMessageW
extern GetMessageW
export GetMessageW

GetMessageW:
	mov eax, THUNK_USER32_GETMESSAGEW
	int SYSCALL_THUNK
	ret 0x10

global GetMessageExtraInfo
extern GetMessageExtraInfo
export GetMessageExtraInfo

GetMessageExtraInfo:
	mov eax, THUNK_USER32_GETMESSAGEEXTRAINFO
	int SYSCALL_THUNK
	ret 0x0

global GetMessagePos
extern GetMessagePos
export GetMessagePos

GetMessagePos:
	mov eax, THUNK_USER32_GETMESSAGEPOS
	int SYSCALL_THUNK
	ret 0x0

global GetMessageTime
extern GetMessageTime
export GetMessageTime

GetMessageTime:
	mov eax, THUNK_USER32_GETMESSAGETIME
	int SYSCALL_THUNK
	ret 0x0

global GetMonitorInfoA
extern GetMonitorInfoA
export GetMonitorInfoA

GetMonitorInfoA:
	mov eax, THUNK_USER32_GETMONITORINFOA
	int SYSCALL_THUNK
	ret 0x8

global GetMonitorInfoW
extern GetMonitorInfoW
export GetMonitorInfoW

GetMonitorInfoW:
	mov eax, THUNK_USER32_GETMONITORINFOW
	int SYSCALL_THUNK
	ret 0x8

global GetNextDlgGroupItem
extern GetNextDlgGroupItem
export GetNextDlgGroupItem

GetNextDlgGroupItem:
	mov eax, THUNK_USER32_GETNEXTDLGGROUPITEM
	int SYSCALL_THUNK
	ret 0xc

global GetNextDlgTabItem
extern GetNextDlgTabItem
export GetNextDlgTabItem

GetNextDlgTabItem:
	mov eax, THUNK_USER32_GETNEXTDLGTABITEM
	int SYSCALL_THUNK
	ret 0xc

global GetOpenClipboardWindow
extern GetOpenClipboardWindow
export GetOpenClipboardWindow

GetOpenClipboardWindow:
	mov eax, THUNK_USER32_GETOPENCLIPBOARDWINDOW
	int SYSCALL_THUNK
	ret 0x0

global GetParent
extern GetParent
export GetParent

GetParent:
	mov eax, THUNK_USER32_GETPARENT
	int SYSCALL_THUNK
	ret 0x4

global GetPhysicalCursorPos
extern GetPhysicalCursorPos
export GetPhysicalCursorPos

GetPhysicalCursorPos:
	mov eax, THUNK_USER32_GETPHYSICALCURSORPOS
	int SYSCALL_THUNK
	ret 0x4

global GetPointerDevice
extern GetPointerDevice
export GetPointerDevice

GetPointerDevice:
	mov eax, THUNK_USER32_GETPOINTERDEVICE
	int SYSCALL_THUNK
	ret 0x8

global GetPointerDeviceCursors
extern GetPointerDeviceCursors
export GetPointerDeviceCursors

GetPointerDeviceCursors:
	mov eax, THUNK_USER32_GETPOINTERDEVICECURSORS
	int SYSCALL_THUNK
	ret 0xc

global GetPointerDeviceProperties
extern GetPointerDeviceProperties
export GetPointerDeviceProperties

GetPointerDeviceProperties:
	mov eax, THUNK_USER32_GETPOINTERDEVICEPROPERTIES
	int SYSCALL_THUNK
	ret 0xc

global GetPointerDeviceRects
extern GetPointerDeviceRects
export GetPointerDeviceRects

GetPointerDeviceRects:
	mov eax, THUNK_USER32_GETPOINTERDEVICERECTS
	int SYSCALL_THUNK
	ret 0xc

global GetPointerDevices
extern GetPointerDevices
export GetPointerDevices

GetPointerDevices:
	mov eax, THUNK_USER32_GETPOINTERDEVICES
	int SYSCALL_THUNK
	ret 0x8

global GetPointerInputTransform
extern GetPointerInputTransform
export GetPointerInputTransform

GetPointerInputTransform:
	mov eax, THUNK_USER32_GETPOINTERINPUTTRANSFORM
	int SYSCALL_THUNK
	ret 0xc

global GetPointerPenInfo
extern GetPointerPenInfo
export GetPointerPenInfo

GetPointerPenInfo:
	mov eax, THUNK_USER32_GETPOINTERPENINFO
	int SYSCALL_THUNK
	ret 0x8

global GetPointerPenInfoHistory
extern GetPointerPenInfoHistory
export GetPointerPenInfoHistory

GetPointerPenInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERPENINFOHISTORY
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFramePenInfo
extern GetPointerFramePenInfo
export GetPointerFramePenInfo

GetPointerFramePenInfo:
	mov eax, THUNK_USER32_GETPOINTERFRAMEPENINFO
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFramePenInfoHistory
extern GetPointerFramePenInfoHistory
export GetPointerFramePenInfoHistory

GetPointerFramePenInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERFRAMEPENINFOHISTORY
	int SYSCALL_THUNK
	ret 0x10

global GetPointerType
extern GetPointerType
export GetPointerType

GetPointerType:
	mov eax, THUNK_USER32_GETPOINTERTYPE
	int SYSCALL_THUNK
	ret 0x8

global GetPointerCursorId
extern GetPointerCursorId
export GetPointerCursorId

GetPointerCursorId:
	mov eax, THUNK_USER32_GETPOINTERCURSORID
	int SYSCALL_THUNK
	ret 0x8

global GetPointerInfo
extern GetPointerInfo
export GetPointerInfo

GetPointerInfo:
	mov eax, THUNK_USER32_GETPOINTERINFO
	int SYSCALL_THUNK
	ret 0x8

global GetPointerInfoHistory
extern GetPointerInfoHistory
export GetPointerInfoHistory

GetPointerInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERINFOHISTORY
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFrameInfo
extern GetPointerFrameInfo
export GetPointerFrameInfo

GetPointerFrameInfo:
	mov eax, THUNK_USER32_GETPOINTERFRAMEINFO
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFrameInfoHistory
extern GetPointerFrameInfoHistory
export GetPointerFrameInfoHistory

GetPointerFrameInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERFRAMEINFOHISTORY
	int SYSCALL_THUNK
	ret 0x10

global GetPointerTouchInfo
extern GetPointerTouchInfo
export GetPointerTouchInfo

GetPointerTouchInfo:
	mov eax, THUNK_USER32_GETPOINTERTOUCHINFO
	int SYSCALL_THUNK
	ret 0x8

global GetPointerTouchInfoHistory
extern GetPointerTouchInfoHistory
export GetPointerTouchInfoHistory

GetPointerTouchInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERTOUCHINFOHISTORY
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFrameTouchInfo
extern GetPointerFrameTouchInfo
export GetPointerFrameTouchInfo

GetPointerFrameTouchInfo:
	mov eax, THUNK_USER32_GETPOINTERFRAMETOUCHINFO
	int SYSCALL_THUNK
	ret 0xc

global GetPointerFrameTouchInfoHistory
extern GetPointerFrameTouchInfoHistory
export GetPointerFrameTouchInfoHistory

GetPointerFrameTouchInfoHistory:
	mov eax, THUNK_USER32_GETPOINTERFRAMETOUCHINFOHISTORY
	int SYSCALL_THUNK
	ret 0x10

global GetPriorityClipboardFormat
extern GetPriorityClipboardFormat
export GetPriorityClipboardFormat

GetPriorityClipboardFormat:
	mov eax, THUNK_USER32_GETPRIORITYCLIPBOARDFORMAT
	int SYSCALL_THUNK
	ret 0x8

global GetProcessDefaultLayout
extern GetProcessDefaultLayout
export GetProcessDefaultLayout

GetProcessDefaultLayout:
	mov eax, THUNK_USER32_GETPROCESSDEFAULTLAYOUT
	int SYSCALL_THUNK
	ret 0x4

global GetPropA
extern GetPropA
export GetPropA

GetPropA:
	mov eax, THUNK_USER32_GETPROPA
	int SYSCALL_THUNK
	ret 0x8

global GetPropW
extern GetPropW
export GetPropW

GetPropW:
	mov eax, THUNK_USER32_GETPROPW
	int SYSCALL_THUNK
	ret 0x8

global GetQueueStatus
extern GetQueueStatus
export GetQueueStatus

GetQueueStatus:
	mov eax, THUNK_USER32_GETQUEUESTATUS
	int SYSCALL_THUNK
	ret 0x4

global GetRawPointerDeviceData
extern GetRawPointerDeviceData
export GetRawPointerDeviceData

GetRawPointerDeviceData:
	mov eax, THUNK_USER32_GETRAWPOINTERDEVICEDATA
	int SYSCALL_THUNK
	ret 0x14

global GetScrollInfo
extern GetScrollInfo
export GetScrollInfo

GetScrollInfo:
	mov eax, THUNK_USER32_GETSCROLLINFO
	int SYSCALL_THUNK
	ret 0xc

global GetScrollBarInfo
extern GetScrollBarInfo
export GetScrollBarInfo

GetScrollBarInfo:
	mov eax, THUNK_USER32_GETSCROLLBARINFO
	int SYSCALL_THUNK
	ret 0xc

global GetScrollPos
extern GetScrollPos
export GetScrollPos

GetScrollPos:
	mov eax, THUNK_USER32_GETSCROLLPOS
	int SYSCALL_THUNK
	ret 0x8

global GetScrollRange
extern GetScrollRange
export GetScrollRange

GetScrollRange:
	mov eax, THUNK_USER32_GETSCROLLRANGE
	int SYSCALL_THUNK
	ret 0x10

global GetShellWindow
extern GetShellWindow
export GetShellWindow

GetShellWindow:
	mov eax, THUNK_USER32_GETSHELLWINDOW
	int SYSCALL_THUNK
	ret 0x0

global GetSubMenu
extern GetSubMenu
export GetSubMenu

GetSubMenu:
	mov eax, THUNK_USER32_GETSUBMENU
	int SYSCALL_THUNK
	ret 0x8

global GetSysColor
extern GetSysColor
export GetSysColor

GetSysColor:
	mov eax, THUNK_USER32_GETSYSCOLOR
	int SYSCALL_THUNK
	ret 0x4

global GetSysColorBrush
extern GetSysColorBrush
export GetSysColorBrush

GetSysColorBrush:
	mov eax, THUNK_USER32_GETSYSCOLORBRUSH
	int SYSCALL_THUNK
	ret 0x4

global GetSystemMenu
extern GetSystemMenu
export GetSystemMenu

GetSystemMenu:
	mov eax, THUNK_USER32_GETSYSTEMMENU
	int SYSCALL_THUNK
	ret 0x8

global GetSystemMetrics
extern GetSystemMetrics
export GetSystemMetrics

GetSystemMetrics:
	mov eax, THUNK_USER32_GETSYSTEMMETRICS
	int SYSCALL_THUNK
	ret 0x4

global GetSystemMetricsForDpi
extern GetSystemMetricsForDpi
export GetSystemMetricsForDpi

GetSystemMetricsForDpi:
	mov eax, THUNK_USER32_GETSYSTEMMETRICSFORDPI
	int SYSCALL_THUNK
	ret 0x8

global GetTabbedTextExtentA
extern GetTabbedTextExtentA
export GetTabbedTextExtentA

GetTabbedTextExtentA:
	mov eax, THUNK_USER32_GETTABBEDTEXTEXTENTA
	int SYSCALL_THUNK
	ret 0x14

global GetTabbedTextExtentW
extern GetTabbedTextExtentW
export GetTabbedTextExtentW

GetTabbedTextExtentW:
	mov eax, THUNK_USER32_GETTABBEDTEXTEXTENTW
	int SYSCALL_THUNK
	ret 0x14

global GetTitleBarInfo
extern GetTitleBarInfo
export GetTitleBarInfo

GetTitleBarInfo:
	mov eax, THUNK_USER32_GETTITLEBARINFO
	int SYSCALL_THUNK
	ret 0x8

global GetThreadDesktop
extern GetThreadDesktop
export GetThreadDesktop

GetThreadDesktop:
	mov eax, THUNK_USER32_GETTHREADDESKTOP
	int SYSCALL_THUNK
	ret 0x4

global GetThreadDpiAwarenessContext
extern GetThreadDpiAwarenessContext
export GetThreadDpiAwarenessContext

GetThreadDpiAwarenessContext:
	mov eax, THUNK_USER32_GETTHREADDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x0

global GetTopWindow
extern GetTopWindow
export GetTopWindow

GetTopWindow:
	mov eax, THUNK_USER32_GETTOPWINDOW
	int SYSCALL_THUNK
	ret 0x4

global GetTouchInputInfo
extern GetTouchInputInfo
export GetTouchInputInfo

GetTouchInputInfo:
	mov eax, THUNK_USER32_GETTOUCHINPUTINFO
	int SYSCALL_THUNK
	ret 0x10

global GetUpdateRect
extern GetUpdateRect
export GetUpdateRect

GetUpdateRect:
	mov eax, THUNK_USER32_GETUPDATERECT
	int SYSCALL_THUNK
	ret 0xc

global GetUpdateRgn
extern GetUpdateRgn
export GetUpdateRgn

GetUpdateRgn:
	mov eax, THUNK_USER32_GETUPDATERGN
	int SYSCALL_THUNK
	ret 0xc

global GetUpdatedClipboardFormats
extern GetUpdatedClipboardFormats
export GetUpdatedClipboardFormats

GetUpdatedClipboardFormats:
	mov eax, THUNK_USER32_GETUPDATEDCLIPBOARDFORMATS
	int SYSCALL_THUNK
	ret 0xc

global GetUserObjectInformationA
extern GetUserObjectInformationA
export GetUserObjectInformationA

GetUserObjectInformationA:
	mov eax, THUNK_USER32_GETUSEROBJECTINFORMATIONA
	int SYSCALL_THUNK
	ret 0x14

global GetUserObjectInformationW
extern GetUserObjectInformationW
export GetUserObjectInformationW

GetUserObjectInformationW:
	mov eax, THUNK_USER32_GETUSEROBJECTINFORMATIONW
	int SYSCALL_THUNK
	ret 0x14

global GetUserObjectSecurity
extern GetUserObjectSecurity
export GetUserObjectSecurity

GetUserObjectSecurity:
	mov eax, THUNK_USER32_GETUSEROBJECTSECURITY
	int SYSCALL_THUNK
	ret 0x14

global GetWindow
extern GetWindow
export GetWindow

GetWindow:
	mov eax, THUNK_USER32_GETWINDOW
	int SYSCALL_THUNK
	ret 0x8

global GetWindowContextHelpId
extern GetWindowContextHelpId
export GetWindowContextHelpId

GetWindowContextHelpId:
	mov eax, THUNK_USER32_GETWINDOWCONTEXTHELPID
	int SYSCALL_THUNK
	ret 0x4

global GetWindowDC
extern GetWindowDC
export GetWindowDC

GetWindowDC:
	mov eax, THUNK_USER32_GETWINDOWDC
	int SYSCALL_THUNK
	ret 0x4

global GetWindowDisplayAffinity
extern GetWindowDisplayAffinity
export GetWindowDisplayAffinity

GetWindowDisplayAffinity:
	mov eax, THUNK_USER32_GETWINDOWDISPLAYAFFINITY
	int SYSCALL_THUNK
	ret 0x8

global GetWindowDpiAwarenessContext
extern GetWindowDpiAwarenessContext
export GetWindowDpiAwarenessContext

GetWindowDpiAwarenessContext:
	mov eax, THUNK_USER32_GETWINDOWDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x4

global GetWindowFeedbackSetting
extern GetWindowFeedbackSetting
export GetWindowFeedbackSetting

GetWindowFeedbackSetting:
	mov eax, THUNK_USER32_GETWINDOWFEEDBACKSETTING
	int SYSCALL_THUNK
	ret 0x14

global GetWindowInfo
extern GetWindowInfo
export GetWindowInfo

GetWindowInfo:
	mov eax, THUNK_USER32_GETWINDOWINFO
	int SYSCALL_THUNK
	ret 0x8

global GetWindowLongA
extern GetWindowLongA
export GetWindowLongA

GetWindowLongA:
	mov eax, THUNK_USER32_GETWINDOWLONGA
	int SYSCALL_THUNK
	ret 0x8

global GetWindowLongW
extern GetWindowLongW
export GetWindowLongW

GetWindowLongW:
	mov eax, THUNK_USER32_GETWINDOWLONGW
	int SYSCALL_THUNK
	ret 0x8

global GetWindowModuleFileNameA
extern GetWindowModuleFileNameA
export GetWindowModuleFileNameA

GetWindowModuleFileNameA:
	mov eax, THUNK_USER32_GETWINDOWMODULEFILENAMEA
	int SYSCALL_THUNK
	ret 0xc

global GetWindowModuleFileNameW
extern GetWindowModuleFileNameW
export GetWindowModuleFileNameW

GetWindowModuleFileNameW:
	mov eax, THUNK_USER32_GETWINDOWMODULEFILENAMEW
	int SYSCALL_THUNK
	ret 0xc

global GetWindowPlacement
extern GetWindowPlacement
export GetWindowPlacement

GetWindowPlacement:
	mov eax, THUNK_USER32_GETWINDOWPLACEMENT
	int SYSCALL_THUNK
	ret 0x8

global GetWindowRect
extern GetWindowRect
export GetWindowRect

GetWindowRect:
	mov eax, THUNK_USER32_GETWINDOWRECT
	int SYSCALL_THUNK
	ret 0x8

global GetWindowRgnBox
extern GetWindowRgnBox
export GetWindowRgnBox

GetWindowRgnBox:
	mov eax, THUNK_USER32_GETWINDOWRGNBOX
	int SYSCALL_THUNK
	ret 0x8

global GetWindowRgn
extern GetWindowRgn
export GetWindowRgn

GetWindowRgn:
	mov eax, THUNK_USER32_GETWINDOWRGN
	int SYSCALL_THUNK
	ret 0x8

global GetProcessWindowStation
extern GetProcessWindowStation
export GetProcessWindowStation

GetProcessWindowStation:
	mov eax, THUNK_USER32_GETPROCESSWINDOWSTATION
	int SYSCALL_THUNK
	ret 0x0

global GetWindowTextA
extern GetWindowTextA
export GetWindowTextA

GetWindowTextA:
	mov eax, THUNK_USER32_GETWINDOWTEXTA
	int SYSCALL_THUNK
	ret 0xc

global GetWindowTextW
extern GetWindowTextW
export GetWindowTextW

GetWindowTextW:
	mov eax, THUNK_USER32_GETWINDOWTEXTW
	int SYSCALL_THUNK
	ret 0xc

global GetWindowTextLengthA
extern GetWindowTextLengthA
export GetWindowTextLengthA

GetWindowTextLengthA:
	mov eax, THUNK_USER32_GETWINDOWTEXTLENGTHA
	int SYSCALL_THUNK
	ret 0x4

global GetWindowTextLengthW
extern GetWindowTextLengthW
export GetWindowTextLengthW

GetWindowTextLengthW:
	mov eax, THUNK_USER32_GETWINDOWTEXTLENGTHW
	int SYSCALL_THUNK
	ret 0x4

global GetWindowThreadProcessId
extern GetWindowThreadProcessId
export GetWindowThreadProcessId

GetWindowThreadProcessId:
	mov eax, THUNK_USER32_GETWINDOWTHREADPROCESSID
	int SYSCALL_THUNK
	ret 0x8

global GetWindowWord
extern GetWindowWord
export GetWindowWord

GetWindowWord:
	mov eax, THUNK_USER32_GETWINDOWWORD
	int SYSCALL_THUNK
	ret 0x8

global GrayStringA
extern GrayStringA
export GrayStringA

GrayStringA:
	mov eax, THUNK_USER32_GRAYSTRINGA
	int SYSCALL_THUNK
	ret 0x24

global GrayStringW
extern GrayStringW
export GrayStringW

GrayStringW:
	mov eax, THUNK_USER32_GRAYSTRINGW
	int SYSCALL_THUNK
	ret 0x24

global HideCaret
extern HideCaret
export HideCaret

HideCaret:
	mov eax, THUNK_USER32_HIDECARET
	int SYSCALL_THUNK
	ret 0x4

global HiliteMenuItem
extern HiliteMenuItem
export HiliteMenuItem

HiliteMenuItem:
	mov eax, THUNK_USER32_HILITEMENUITEM
	int SYSCALL_THUNK
	ret 0x10

global InitializeTouchInjection
extern InitializeTouchInjection
export InitializeTouchInjection

InitializeTouchInjection:
	mov eax, THUNK_USER32_INITIALIZETOUCHINJECTION
	int SYSCALL_THUNK
	ret 0x8

global InjectSyntheticPointerInput
extern InjectSyntheticPointerInput
export InjectSyntheticPointerInput

InjectSyntheticPointerInput:
	mov eax, THUNK_USER32_INJECTSYNTHETICPOINTERINPUT
	int SYSCALL_THUNK
	ret 0xc

global InjectTouchInput
extern InjectTouchInput
export InjectTouchInput

InjectTouchInput:
	mov eax, THUNK_USER32_INJECTTOUCHINPUT
	int SYSCALL_THUNK
	ret 0x8

global InSendMessage
extern InSendMessage
export InSendMessage

InSendMessage:
	mov eax, THUNK_USER32_INSENDMESSAGE
	int SYSCALL_THUNK
	ret 0x0

global InSendMessageEx
extern InSendMessageEx
export InSendMessageEx

InSendMessageEx:
	mov eax, THUNK_USER32_INSENDMESSAGEEX
	int SYSCALL_THUNK
	ret 0x4

global InsertMenuA
extern InsertMenuA
export InsertMenuA

InsertMenuA:
	mov eax, THUNK_USER32_INSERTMENUA
	int SYSCALL_THUNK
	ret 0x14

global InsertMenuW
extern InsertMenuW
export InsertMenuW

InsertMenuW:
	mov eax, THUNK_USER32_INSERTMENUW
	int SYSCALL_THUNK
	ret 0x14

global InsertMenuItemA
extern InsertMenuItemA
export InsertMenuItemA

InsertMenuItemA:
	mov eax, THUNK_USER32_INSERTMENUITEMA
	int SYSCALL_THUNK
	ret 0x10

global InsertMenuItemW
extern InsertMenuItemW
export InsertMenuItemW

InsertMenuItemW:
	mov eax, THUNK_USER32_INSERTMENUITEMW
	int SYSCALL_THUNK
	ret 0x10

global InternalGetWindowText
extern InternalGetWindowText
export InternalGetWindowText

InternalGetWindowText:
	mov eax, THUNK_USER32_INTERNALGETWINDOWTEXT
	int SYSCALL_THUNK
	ret 0xc

global IntersectRect
extern IntersectRect
export IntersectRect

IntersectRect:
	mov eax, THUNK_USER32_INTERSECTRECT
	int SYSCALL_THUNK
	ret 0xc

global InvalidateRect
extern InvalidateRect
export InvalidateRect

InvalidateRect:
	mov eax, THUNK_USER32_INVALIDATERECT
	int SYSCALL_THUNK
	ret 0xc

global InvalidateRgn
extern InvalidateRgn
export InvalidateRgn

InvalidateRgn:
	mov eax, THUNK_USER32_INVALIDATERGN
	int SYSCALL_THUNK
	ret 0xc

global InvertRect
extern InvertRect
export InvertRect

InvertRect:
	mov eax, THUNK_USER32_INVERTRECT
	int SYSCALL_THUNK
	ret 0x8

global IsCharAlphaA
extern IsCharAlphaA
export IsCharAlphaA

IsCharAlphaA:
	mov eax, THUNK_USER32_ISCHARALPHAA
	int SYSCALL_THUNK
	ret 0x4

global IsCharAlphaW
extern IsCharAlphaW
export IsCharAlphaW

IsCharAlphaW:
	mov eax, THUNK_USER32_ISCHARALPHAW
	int SYSCALL_THUNK
	ret 0x4

global IsCharAlphaNumericA
extern IsCharAlphaNumericA
export IsCharAlphaNumericA

IsCharAlphaNumericA:
	mov eax, THUNK_USER32_ISCHARALPHANUMERICA
	int SYSCALL_THUNK
	ret 0x4

global IsCharAlphaNumericW
extern IsCharAlphaNumericW
export IsCharAlphaNumericW

IsCharAlphaNumericW:
	mov eax, THUNK_USER32_ISCHARALPHANUMERICW
	int SYSCALL_THUNK
	ret 0x4

global IsCharLowerA
extern IsCharLowerA
export IsCharLowerA

IsCharLowerA:
	mov eax, THUNK_USER32_ISCHARLOWERA
	int SYSCALL_THUNK
	ret 0x4

global IsCharLowerW
extern IsCharLowerW
export IsCharLowerW

IsCharLowerW:
	mov eax, THUNK_USER32_ISCHARLOWERW
	int SYSCALL_THUNK
	ret 0x4

global IsCharUpperA
extern IsCharUpperA
export IsCharUpperA

IsCharUpperA:
	mov eax, THUNK_USER32_ISCHARUPPERA
	int SYSCALL_THUNK
	ret 0x4

global IsCharUpperW
extern IsCharUpperW
export IsCharUpperW

IsCharUpperW:
	mov eax, THUNK_USER32_ISCHARUPPERW
	int SYSCALL_THUNK
	ret 0x4

global IsChild
extern IsChild
export IsChild

IsChild:
	mov eax, THUNK_USER32_ISCHILD
	int SYSCALL_THUNK
	ret 0x8

global IsClipboardFormatAvailable
extern IsClipboardFormatAvailable
export IsClipboardFormatAvailable

IsClipboardFormatAvailable:
	mov eax, THUNK_USER32_ISCLIPBOARDFORMATAVAILABLE
	int SYSCALL_THUNK
	ret 0x4

global IsDialogMessageA
extern IsDialogMessageA
export IsDialogMessageA

IsDialogMessageA:
	mov eax, THUNK_USER32_ISDIALOGMESSAGEA
	int SYSCALL_THUNK
	ret 0x8

global IsDialogMessageW
extern IsDialogMessageW
export IsDialogMessageW

IsDialogMessageW:
	mov eax, THUNK_USER32_ISDIALOGMESSAGEW
	int SYSCALL_THUNK
	ret 0x8

global IsDlgButtonChecked
extern IsDlgButtonChecked
export IsDlgButtonChecked

IsDlgButtonChecked:
	mov eax, THUNK_USER32_ISDLGBUTTONCHECKED
	int SYSCALL_THUNK
	ret 0x8

global IsGUIThread
extern IsGUIThread
export IsGUIThread

IsGUIThread:
	mov eax, THUNK_USER32_ISGUITHREAD
	int SYSCALL_THUNK
	ret 0x4

global IsHungAppWindow
extern IsHungAppWindow
export IsHungAppWindow

IsHungAppWindow:
	mov eax, THUNK_USER32_ISHUNGAPPWINDOW
	int SYSCALL_THUNK
	ret 0x4

global IsIconic
extern IsIconic
export IsIconic

IsIconic:
	mov eax, THUNK_USER32_ISICONIC
	int SYSCALL_THUNK
	ret 0x4

global IsMenu
extern IsMenu
export IsMenu

IsMenu:
	mov eax, THUNK_USER32_ISMENU
	int SYSCALL_THUNK
	ret 0x4

global IsMouseInPointerEnabled
extern IsMouseInPointerEnabled
export IsMouseInPointerEnabled

IsMouseInPointerEnabled:
	mov eax, THUNK_USER32_ISMOUSEINPOINTERENABLED
	int SYSCALL_THUNK
	ret 0x0

global IsProcessDPIAware
extern IsProcessDPIAware
export IsProcessDPIAware

IsProcessDPIAware:
	mov eax, THUNK_USER32_ISPROCESSDPIAWARE
	int SYSCALL_THUNK
	ret 0x0

global IsTouchWindow
extern IsTouchWindow
export IsTouchWindow

IsTouchWindow:
	mov eax, THUNK_USER32_ISTOUCHWINDOW
	int SYSCALL_THUNK
	ret 0x8

global IsValidDpiAwarenessContext
extern IsValidDpiAwarenessContext
export IsValidDpiAwarenessContext

IsValidDpiAwarenessContext:
	mov eax, THUNK_USER32_ISVALIDDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x4

global IsWinEventHookInstalled
extern IsWinEventHookInstalled
export IsWinEventHookInstalled

IsWinEventHookInstalled:
	mov eax, THUNK_USER32_ISWINEVENTHOOKINSTALLED
	int SYSCALL_THUNK
	ret 0x4

global IsWindow
extern IsWindow
export IsWindow

IsWindow:
	mov eax, THUNK_USER32_ISWINDOW
	int SYSCALL_THUNK
	ret 0x4

global IsWindowEnabled
extern IsWindowEnabled
export IsWindowEnabled

IsWindowEnabled:
	mov eax, THUNK_USER32_ISWINDOWENABLED
	int SYSCALL_THUNK
	ret 0x4

global IsWindowUnicode
extern IsWindowUnicode
export IsWindowUnicode

IsWindowUnicode:
	mov eax, THUNK_USER32_ISWINDOWUNICODE
	int SYSCALL_THUNK
	ret 0x4

global IsWindowVisible
extern IsWindowVisible
export IsWindowVisible

IsWindowVisible:
	mov eax, THUNK_USER32_ISWINDOWVISIBLE
	int SYSCALL_THUNK
	ret 0x4

global IsZoomed
extern IsZoomed
export IsZoomed

IsZoomed:
	mov eax, THUNK_USER32_ISZOOMED
	int SYSCALL_THUNK
	ret 0x4

global KillTimer
extern KillTimer
export KillTimer

KillTimer:
	mov eax, THUNK_USER32_KILLTIMER
	int SYSCALL_THUNK
	ret 0x8

global LoadAcceleratorsA
extern LoadAcceleratorsA
export LoadAcceleratorsA

LoadAcceleratorsA:
	mov eax, THUNK_USER32_LOADACCELERATORSA
	int SYSCALL_THUNK
	ret 0x8

global LoadAcceleratorsW
extern LoadAcceleratorsW
export LoadAcceleratorsW

LoadAcceleratorsW:
	mov eax, THUNK_USER32_LOADACCELERATORSW
	int SYSCALL_THUNK
	ret 0x8

global LoadBitmapA
extern LoadBitmapA
export LoadBitmapA

LoadBitmapA:
	mov eax, THUNK_USER32_LOADBITMAPA
	int SYSCALL_THUNK
	ret 0x8

global LoadBitmapW
extern LoadBitmapW
export LoadBitmapW

LoadBitmapW:
	mov eax, THUNK_USER32_LOADBITMAPW
	int SYSCALL_THUNK
	ret 0x8

global LoadCursorA
extern LoadCursorA
export LoadCursorA

LoadCursorA:
	mov eax, THUNK_USER32_LOADCURSORA
	int SYSCALL_THUNK
	ret 0x8

global LoadCursorW
extern LoadCursorW
export LoadCursorW

LoadCursorW:
	mov eax, THUNK_USER32_LOADCURSORW
	int SYSCALL_THUNK
	ret 0x8

global LoadCursorFromFileA
extern LoadCursorFromFileA
export LoadCursorFromFileA

LoadCursorFromFileA:
	mov eax, THUNK_USER32_LOADCURSORFROMFILEA
	int SYSCALL_THUNK
	ret 0x4

global LoadCursorFromFileW
extern LoadCursorFromFileW
export LoadCursorFromFileW

LoadCursorFromFileW:
	mov eax, THUNK_USER32_LOADCURSORFROMFILEW
	int SYSCALL_THUNK
	ret 0x4

global LoadIconA
extern LoadIconA
export LoadIconA

LoadIconA:
	mov eax, THUNK_USER32_LOADICONA
	int SYSCALL_THUNK
	ret 0x8

global LoadIconW
extern LoadIconW
export LoadIconW

LoadIconW:
	mov eax, THUNK_USER32_LOADICONW
	int SYSCALL_THUNK
	ret 0x8

global LoadImageA
extern LoadImageA
export LoadImageA

LoadImageA:
	mov eax, THUNK_USER32_LOADIMAGEA
	int SYSCALL_THUNK
	ret 0x18

global LoadImageW
extern LoadImageW
export LoadImageW

LoadImageW:
	mov eax, THUNK_USER32_LOADIMAGEW
	int SYSCALL_THUNK
	ret 0x18

global LoadKeyboardLayoutA
extern LoadKeyboardLayoutA
export LoadKeyboardLayoutA

LoadKeyboardLayoutA:
	mov eax, THUNK_USER32_LOADKEYBOARDLAYOUTA
	int SYSCALL_THUNK
	ret 0x8

global LoadKeyboardLayoutW
extern LoadKeyboardLayoutW
export LoadKeyboardLayoutW

LoadKeyboardLayoutW:
	mov eax, THUNK_USER32_LOADKEYBOARDLAYOUTW
	int SYSCALL_THUNK
	ret 0x8

global LoadMenuA
extern LoadMenuA
export LoadMenuA

LoadMenuA:
	mov eax, THUNK_USER32_LOADMENUA
	int SYSCALL_THUNK
	ret 0x8

global LoadMenuW
extern LoadMenuW
export LoadMenuW

LoadMenuW:
	mov eax, THUNK_USER32_LOADMENUW
	int SYSCALL_THUNK
	ret 0x8

global LoadMenuIndirectA
extern LoadMenuIndirectA
export LoadMenuIndirectA

LoadMenuIndirectA:
	mov eax, THUNK_USER32_LOADMENUINDIRECTA
	int SYSCALL_THUNK
	ret 0x4

global LoadMenuIndirectW
extern LoadMenuIndirectW
export LoadMenuIndirectW

LoadMenuIndirectW:
	mov eax, THUNK_USER32_LOADMENUINDIRECTW
	int SYSCALL_THUNK
	ret 0x4

global LoadStringA
extern LoadStringA
export LoadStringA

LoadStringA:
	mov eax, THUNK_USER32_LOADSTRINGA
	int SYSCALL_THUNK
	ret 0x10

global LoadStringW
extern LoadStringW
export LoadStringW

LoadStringW:
	mov eax, THUNK_USER32_LOADSTRINGW
	int SYSCALL_THUNK
	ret 0x10

global LogicalToPhysicalPoint
extern LogicalToPhysicalPoint
export LogicalToPhysicalPoint

LogicalToPhysicalPoint:
	mov eax, THUNK_USER32_LOGICALTOPHYSICALPOINT
	int SYSCALL_THUNK
	ret 0x8

global LogicalToPhysicalPointForPerMonitorDPI
extern LogicalToPhysicalPointForPerMonitorDPI
export LogicalToPhysicalPointForPerMonitorDPI

LogicalToPhysicalPointForPerMonitorDPI:
	mov eax, THUNK_USER32_LOGICALTOPHYSICALPOINTFORPERMONITORDPI
	int SYSCALL_THUNK
	ret 0x8

global LockSetForegroundWindow
extern LockSetForegroundWindow
export LockSetForegroundWindow

LockSetForegroundWindow:
	mov eax, THUNK_USER32_LOCKSETFOREGROUNDWINDOW
	int SYSCALL_THUNK
	ret 0x4

global LockWindowUpdate
extern LockWindowUpdate
export LockWindowUpdate

LockWindowUpdate:
	mov eax, THUNK_USER32_LOCKWINDOWUPDATE
	int SYSCALL_THUNK
	ret 0x4

global LockWorkStation
extern LockWorkStation
export LockWorkStation

LockWorkStation:
	mov eax, THUNK_USER32_LOCKWORKSTATION
	int SYSCALL_THUNK
	ret 0x0

global LookupIconIdFromDirectory
extern LookupIconIdFromDirectory
export LookupIconIdFromDirectory

LookupIconIdFromDirectory:
	mov eax, THUNK_USER32_LOOKUPICONIDFROMDIRECTORY
	int SYSCALL_THUNK
	ret 0x8

global LookupIconIdFromDirectoryEx
extern LookupIconIdFromDirectoryEx
export LookupIconIdFromDirectoryEx

LookupIconIdFromDirectoryEx:
	mov eax, THUNK_USER32_LOOKUPICONIDFROMDIRECTORYEX
	int SYSCALL_THUNK
	ret 0x14

global MapVirtualKeyA
extern MapVirtualKeyA
export MapVirtualKeyA

MapVirtualKeyA:
	mov eax, THUNK_USER32_MAPVIRTUALKEYA
	int SYSCALL_THUNK
	ret 0x8

global MapVirtualKeyW
extern MapVirtualKeyW
export MapVirtualKeyW

MapVirtualKeyW:
	mov eax, THUNK_USER32_MAPVIRTUALKEYW
	int SYSCALL_THUNK
	ret 0x8

global MapVirtualKeyExA
extern MapVirtualKeyExA
export MapVirtualKeyExA

MapVirtualKeyExA:
	mov eax, THUNK_USER32_MAPVIRTUALKEYEXA
	int SYSCALL_THUNK
	ret 0xc

global MapVirtualKeyExW
extern MapVirtualKeyExW
export MapVirtualKeyExW

MapVirtualKeyExW:
	mov eax, THUNK_USER32_MAPVIRTUALKEYEXW
	int SYSCALL_THUNK
	ret 0xc

global MapDialogRect
extern MapDialogRect
export MapDialogRect

MapDialogRect:
	mov eax, THUNK_USER32_MAPDIALOGRECT
	int SYSCALL_THUNK
	ret 0x8

global MapWindowPoints
extern MapWindowPoints
export MapWindowPoints

MapWindowPoints:
	mov eax, THUNK_USER32_MAPWINDOWPOINTS
	int SYSCALL_THUNK
	ret 0x10

global MenuItemFromPoint
extern MenuItemFromPoint
export MenuItemFromPoint

MenuItemFromPoint:
	mov eax, THUNK_USER32_MENUITEMFROMPOINT
	int SYSCALL_THUNK
	ret 0xc

global MessageBeep
extern MessageBeep
export MessageBeep

MessageBeep:
	mov eax, THUNK_USER32_MESSAGEBEEP
	int SYSCALL_THUNK
	ret 0x4

global MessageBoxA
extern MessageBoxA
export MessageBoxA

MessageBoxA:
	mov eax, THUNK_USER32_MESSAGEBOXA
	int SYSCALL_THUNK
	ret 0x10

global MessageBoxW
extern MessageBoxW
export MessageBoxW

MessageBoxW:
	mov eax, THUNK_USER32_MESSAGEBOXW
	int SYSCALL_THUNK
	ret 0x10

global MessageBoxExA
extern MessageBoxExA
export MessageBoxExA

MessageBoxExA:
	mov eax, THUNK_USER32_MESSAGEBOXEXA
	int SYSCALL_THUNK
	ret 0x14

global MessageBoxExW
extern MessageBoxExW
export MessageBoxExW

MessageBoxExW:
	mov eax, THUNK_USER32_MESSAGEBOXEXW
	int SYSCALL_THUNK
	ret 0x14

global MessageBoxIndirectA
extern MessageBoxIndirectA
export MessageBoxIndirectA

MessageBoxIndirectA:
	mov eax, THUNK_USER32_MESSAGEBOXINDIRECTA
	int SYSCALL_THUNK
	ret 0x4

global MessageBoxIndirectW
extern MessageBoxIndirectW
export MessageBoxIndirectW

MessageBoxIndirectW:
	mov eax, THUNK_USER32_MESSAGEBOXINDIRECTW
	int SYSCALL_THUNK
	ret 0x4

global ModifyMenuA
extern ModifyMenuA
export ModifyMenuA

ModifyMenuA:
	mov eax, THUNK_USER32_MODIFYMENUA
	int SYSCALL_THUNK
	ret 0x14

global ModifyMenuW
extern ModifyMenuW
export ModifyMenuW

ModifyMenuW:
	mov eax, THUNK_USER32_MODIFYMENUW
	int SYSCALL_THUNK
	ret 0x14

global MonitorFromPoint
extern MonitorFromPoint
export MonitorFromPoint

MonitorFromPoint:
	mov eax, THUNK_USER32_MONITORFROMPOINT
	int SYSCALL_THUNK
	ret 0x8

global MonitorFromRect
extern MonitorFromRect
export MonitorFromRect

MonitorFromRect:
	mov eax, THUNK_USER32_MONITORFROMRECT
	int SYSCALL_THUNK
	ret 0x8

global MonitorFromWindow
extern MonitorFromWindow
export MonitorFromWindow

MonitorFromWindow:
	mov eax, THUNK_USER32_MONITORFROMWINDOW
	int SYSCALL_THUNK
	ret 0x8

global MoveWindow
extern MoveWindow
export MoveWindow

MoveWindow:
	mov eax, THUNK_USER32_MOVEWINDOW
	int SYSCALL_THUNK
	ret 0x18

global MsgWaitForMultipleObjects
extern MsgWaitForMultipleObjects
export MsgWaitForMultipleObjects

MsgWaitForMultipleObjects:
	mov eax, THUNK_USER32_MSGWAITFORMULTIPLEOBJECTS
	int SYSCALL_THUNK
	ret 0x14

global MsgWaitForMultipleObjectsEx
extern MsgWaitForMultipleObjectsEx
export MsgWaitForMultipleObjectsEx

MsgWaitForMultipleObjectsEx:
	mov eax, THUNK_USER32_MSGWAITFORMULTIPLEOBJECTSEX
	int SYSCALL_THUNK
	ret 0x14

global NotifyWinEvent
extern NotifyWinEvent
export NotifyWinEvent

NotifyWinEvent:
	mov eax, THUNK_USER32_NOTIFYWINEVENT
	int SYSCALL_THUNK
	ret 0x10

global OemKeyScan
extern OemKeyScan
export OemKeyScan

OemKeyScan:
	mov eax, THUNK_USER32_OEMKEYSCAN
	int SYSCALL_THUNK
	ret 0x4

global OemToCharA
extern OemToCharA
export OemToCharA

OemToCharA:
	mov eax, THUNK_USER32_OEMTOCHARA
	int SYSCALL_THUNK
	ret 0x8

global OemToCharW
extern OemToCharW
export OemToCharW

OemToCharW:
	mov eax, THUNK_USER32_OEMTOCHARW
	int SYSCALL_THUNK
	ret 0x8

global OemToCharBuffA
extern OemToCharBuffA
export OemToCharBuffA

OemToCharBuffA:
	mov eax, THUNK_USER32_OEMTOCHARBUFFA
	int SYSCALL_THUNK
	ret 0xc

global OemToCharBuffW
extern OemToCharBuffW
export OemToCharBuffW

OemToCharBuffW:
	mov eax, THUNK_USER32_OEMTOCHARBUFFW
	int SYSCALL_THUNK
	ret 0xc

global OpenClipboard
extern OpenClipboard
export OpenClipboard

OpenClipboard:
	mov eax, THUNK_USER32_OPENCLIPBOARD
	int SYSCALL_THUNK
	ret 0x4

global OpenDesktopA
extern OpenDesktopA
export OpenDesktopA

OpenDesktopA:
	mov eax, THUNK_USER32_OPENDESKTOPA
	int SYSCALL_THUNK
	ret 0x10

global OpenDesktopW
extern OpenDesktopW
export OpenDesktopW

OpenDesktopW:
	mov eax, THUNK_USER32_OPENDESKTOPW
	int SYSCALL_THUNK
	ret 0x10

global OpenIcon
extern OpenIcon
export OpenIcon

OpenIcon:
	mov eax, THUNK_USER32_OPENICON
	int SYSCALL_THUNK
	ret 0x4

global OpenInputDesktop
extern OpenInputDesktop
export OpenInputDesktop

OpenInputDesktop:
	mov eax, THUNK_USER32_OPENINPUTDESKTOP
	int SYSCALL_THUNK
	ret 0xc

global OpenWindowStationA
extern OpenWindowStationA
export OpenWindowStationA

OpenWindowStationA:
	mov eax, THUNK_USER32_OPENWINDOWSTATIONA
	int SYSCALL_THUNK
	ret 0xc

global OpenWindowStationW
extern OpenWindowStationW
export OpenWindowStationW

OpenWindowStationW:
	mov eax, THUNK_USER32_OPENWINDOWSTATIONW
	int SYSCALL_THUNK
	ret 0xc

global PaintDesktop
extern PaintDesktop
export PaintDesktop

PaintDesktop:
	mov eax, THUNK_USER32_PAINTDESKTOP
	int SYSCALL_THUNK
	ret 0x4

global PackTouchHitTestingProximityEvaluation
extern PackTouchHitTestingProximityEvaluation
export PackTouchHitTestingProximityEvaluation

PackTouchHitTestingProximityEvaluation:
	mov eax, THUNK_USER32_PACKTOUCHHITTESTINGPROXIMITYEVALUATION
	int SYSCALL_THUNK
	ret 0x8

global PeekMessageA
extern PeekMessageA
export PeekMessageA

PeekMessageA:
	mov eax, THUNK_USER32_PEEKMESSAGEA
	int SYSCALL_THUNK
	ret 0x14

global PeekMessageW
extern PeekMessageW
export PeekMessageW

PeekMessageW:
	mov eax, THUNK_USER32_PEEKMESSAGEW
	int SYSCALL_THUNK
	ret 0x14

global PhysicalToLogicalPoint
extern PhysicalToLogicalPoint
export PhysicalToLogicalPoint

PhysicalToLogicalPoint:
	mov eax, THUNK_USER32_PHYSICALTOLOGICALPOINT
	int SYSCALL_THUNK
	ret 0x8

global PhysicalToLogicalPointForPerMonitorDPI
extern PhysicalToLogicalPointForPerMonitorDPI
export PhysicalToLogicalPointForPerMonitorDPI

PhysicalToLogicalPointForPerMonitorDPI:
	mov eax, THUNK_USER32_PHYSICALTOLOGICALPOINTFORPERMONITORDPI
	int SYSCALL_THUNK
	ret 0x8

global PostMessageA
extern PostMessageA
export PostMessageA

PostMessageA:
	mov eax, THUNK_USER32_POSTMESSAGEA
	int SYSCALL_THUNK
	ret 0x10

global PostMessageW
extern PostMessageW
export PostMessageW

PostMessageW:
	mov eax, THUNK_USER32_POSTMESSAGEW
	int SYSCALL_THUNK
	ret 0x10

global PostQuitMessage
extern PostQuitMessage
export PostQuitMessage

PostQuitMessage:
	mov eax, THUNK_USER32_POSTQUITMESSAGE
	int SYSCALL_THUNK
	ret 0x4

global PostThreadMessageA
extern PostThreadMessageA
export PostThreadMessageA

PostThreadMessageA:
	mov eax, THUNK_USER32_POSTTHREADMESSAGEA
	int SYSCALL_THUNK
	ret 0x10

global PostThreadMessageW
extern PostThreadMessageW
export PostThreadMessageW

PostThreadMessageW:
	mov eax, THUNK_USER32_POSTTHREADMESSAGEW
	int SYSCALL_THUNK
	ret 0x10

global PrintWindow
extern PrintWindow
export PrintWindow

PrintWindow:
	mov eax, THUNK_USER32_PRINTWINDOW
	int SYSCALL_THUNK
	ret 0xc

global PrivateExtractIconsA
extern PrivateExtractIconsA
export PrivateExtractIconsA

PrivateExtractIconsA:
	mov eax, THUNK_USER32_PRIVATEEXTRACTICONSA
	int SYSCALL_THUNK
	ret 0x20

global PrivateExtractIconsW
extern PrivateExtractIconsW
export PrivateExtractIconsW

PrivateExtractIconsW:
	mov eax, THUNK_USER32_PRIVATEEXTRACTICONSW
	int SYSCALL_THUNK
	ret 0x20

global RealChildWindowFromPoint
extern RealChildWindowFromPoint
export RealChildWindowFromPoint

RealChildWindowFromPoint:
	mov eax, THUNK_USER32_REALCHILDWINDOWFROMPOINT
	int SYSCALL_THUNK
	ret 0x8

global RealGetWindowClassA
extern RealGetWindowClassA
export RealGetWindowClassA

RealGetWindowClassA:
	mov eax, THUNK_USER32_REALGETWINDOWCLASSA
	int SYSCALL_THUNK
	ret 0xc

global RealGetWindowClassW
extern RealGetWindowClassW
export RealGetWindowClassW

RealGetWindowClassW:
	mov eax, THUNK_USER32_REALGETWINDOWCLASSW
	int SYSCALL_THUNK
	ret 0xc

global RedrawWindow
extern RedrawWindow
export RedrawWindow

RedrawWindow:
	mov eax, THUNK_USER32_REDRAWWINDOW
	int SYSCALL_THUNK
	ret 0x10

global RegisterClassA
extern RegisterClassA
export RegisterClassA

RegisterClassA:
	mov eax, THUNK_USER32_REGISTERCLASSA
	int SYSCALL_THUNK
	ret 0x4

global RegisterClassW
extern RegisterClassW
export RegisterClassW

RegisterClassW:
	mov eax, THUNK_USER32_REGISTERCLASSW
	int SYSCALL_THUNK
	ret 0x4

global RegisterClassExA
extern RegisterClassExA
export RegisterClassExA

RegisterClassExA:
	mov eax, THUNK_USER32_REGISTERCLASSEXA
	int SYSCALL_THUNK
	ret 0x4

global RegisterClassExW
extern RegisterClassExW
export RegisterClassExW

RegisterClassExW:
	mov eax, THUNK_USER32_REGISTERCLASSEXW
	int SYSCALL_THUNK
	ret 0x4

global RegisterClipboardFormatA
extern RegisterClipboardFormatA
export RegisterClipboardFormatA

RegisterClipboardFormatA:
	mov eax, THUNK_USER32_REGISTERCLIPBOARDFORMATA
	int SYSCALL_THUNK
	ret 0x4

global RegisterClipboardFormatW
extern RegisterClipboardFormatW
export RegisterClipboardFormatW

RegisterClipboardFormatW:
	mov eax, THUNK_USER32_REGISTERCLIPBOARDFORMATW
	int SYSCALL_THUNK
	ret 0x4

global RegisterDeviceNotificationA
extern RegisterDeviceNotificationA
export RegisterDeviceNotificationA

RegisterDeviceNotificationA:
	mov eax, THUNK_USER32_REGISTERDEVICENOTIFICATIONA
	int SYSCALL_THUNK
	ret 0xc

global RegisterDeviceNotificationW
extern RegisterDeviceNotificationW
export RegisterDeviceNotificationW

RegisterDeviceNotificationW:
	mov eax, THUNK_USER32_REGISTERDEVICENOTIFICATIONW
	int SYSCALL_THUNK
	ret 0xc

global RegisterHotKey
extern RegisterHotKey
export RegisterHotKey

RegisterHotKey:
	mov eax, THUNK_USER32_REGISTERHOTKEY
	int SYSCALL_THUNK
	ret 0x10

global RegisterPointerDeviceNotifications
extern RegisterPointerDeviceNotifications
export RegisterPointerDeviceNotifications

RegisterPointerDeviceNotifications:
	mov eax, THUNK_USER32_REGISTERPOINTERDEVICENOTIFICATIONS
	int SYSCALL_THUNK
	ret 0x8

global RegisterPointerInputTarget
extern RegisterPointerInputTarget
export RegisterPointerInputTarget

RegisterPointerInputTarget:
	mov eax, THUNK_USER32_REGISTERPOINTERINPUTTARGET
	int SYSCALL_THUNK
	ret 0x8

global RegisterPointerInputTargetEx
extern RegisterPointerInputTargetEx
export RegisterPointerInputTargetEx

RegisterPointerInputTargetEx:
	mov eax, THUNK_USER32_REGISTERPOINTERINPUTTARGETEX
	int SYSCALL_THUNK
	ret 0xc

global RegisterPowerSettingNotification
extern RegisterPowerSettingNotification
export RegisterPowerSettingNotification

RegisterPowerSettingNotification:
	mov eax, THUNK_USER32_REGISTERPOWERSETTINGNOTIFICATION
	int SYSCALL_THUNK
	ret 0xc

global RegisterRawInputDevices
extern RegisterRawInputDevices
export RegisterRawInputDevices

RegisterRawInputDevices:
	mov eax, THUNK_USER32_REGISTERRAWINPUTDEVICES
	int SYSCALL_THUNK
	ret 0xc

global RegisterShellHookWindow
extern RegisterShellHookWindow
export RegisterShellHookWindow

RegisterShellHookWindow:
	mov eax, THUNK_USER32_REGISTERSHELLHOOKWINDOW
	int SYSCALL_THUNK
	ret 0x4

global RegisterSuspendResumeNotification
extern RegisterSuspendResumeNotification
export RegisterSuspendResumeNotification

RegisterSuspendResumeNotification:
	mov eax, THUNK_USER32_REGISTERSUSPENDRESUMENOTIFICATION
	int SYSCALL_THUNK
	ret 0x8

global RegisterTouchHitTestingWindow
extern RegisterTouchHitTestingWindow
export RegisterTouchHitTestingWindow

RegisterTouchHitTestingWindow:
	mov eax, THUNK_USER32_REGISTERTOUCHHITTESTINGWINDOW
	int SYSCALL_THUNK
	ret 0x8

global RegisterTouchWindow
extern RegisterTouchWindow
export RegisterTouchWindow

RegisterTouchWindow:
	mov eax, THUNK_USER32_REGISTERTOUCHWINDOW
	int SYSCALL_THUNK
	ret 0x8

global RegisterWindowMessageA
extern RegisterWindowMessageA
export RegisterWindowMessageA

RegisterWindowMessageA:
	mov eax, THUNK_USER32_REGISTERWINDOWMESSAGEA
	int SYSCALL_THUNK
	ret 0x4

global RegisterWindowMessageW
extern RegisterWindowMessageW
export RegisterWindowMessageW

RegisterWindowMessageW:
	mov eax, THUNK_USER32_REGISTERWINDOWMESSAGEW
	int SYSCALL_THUNK
	ret 0x4

global ReleaseCapture
extern ReleaseCapture
export ReleaseCapture

ReleaseCapture:
	mov eax, THUNK_USER32_RELEASECAPTURE
	int SYSCALL_THUNK
	ret 0x0

global ReleaseDC
extern ReleaseDC
export ReleaseDC

ReleaseDC:
	mov eax, THUNK_USER32_RELEASEDC
	int SYSCALL_THUNK
	ret 0x8

global RemoveClipboardFormatListener
extern RemoveClipboardFormatListener
export RemoveClipboardFormatListener

RemoveClipboardFormatListener:
	mov eax, THUNK_USER32_REMOVECLIPBOARDFORMATLISTENER
	int SYSCALL_THUNK
	ret 0x4

global RemoveMenu
extern RemoveMenu
export RemoveMenu

RemoveMenu:
	mov eax, THUNK_USER32_REMOVEMENU
	int SYSCALL_THUNK
	ret 0xc

global RemovePropA
extern RemovePropA
export RemovePropA

RemovePropA:
	mov eax, THUNK_USER32_REMOVEPROPA
	int SYSCALL_THUNK
	ret 0x8

global RemovePropW
extern RemovePropW
export RemovePropW

RemovePropW:
	mov eax, THUNK_USER32_REMOVEPROPW
	int SYSCALL_THUNK
	ret 0x8

global ReplyMessage
extern ReplyMessage
export ReplyMessage

ReplyMessage:
	mov eax, THUNK_USER32_REPLYMESSAGE
	int SYSCALL_THUNK
	ret 0x4

global ScreenToClient
extern ScreenToClient
export ScreenToClient

ScreenToClient:
	mov eax, THUNK_USER32_SCREENTOCLIENT
	int SYSCALL_THUNK
	ret 0x8

global ScrollDC
extern ScrollDC
export ScrollDC

ScrollDC:
	mov eax, THUNK_USER32_SCROLLDC
	int SYSCALL_THUNK
	ret 0x1c

global ScrollWindow
extern ScrollWindow
export ScrollWindow

ScrollWindow:
	mov eax, THUNK_USER32_SCROLLWINDOW
	int SYSCALL_THUNK
	ret 0x14

global ScrollWindowEx
extern ScrollWindowEx
export ScrollWindowEx

ScrollWindowEx:
	mov eax, THUNK_USER32_SCROLLWINDOWEX
	int SYSCALL_THUNK
	ret 0x20

global SendDlgItemMessageA
extern SendDlgItemMessageA
export SendDlgItemMessageA

SendDlgItemMessageA:
	mov eax, THUNK_USER32_SENDDLGITEMMESSAGEA
	int SYSCALL_THUNK
	ret 0x14

global SendDlgItemMessageW
extern SendDlgItemMessageW
export SendDlgItemMessageW

SendDlgItemMessageW:
	mov eax, THUNK_USER32_SENDDLGITEMMESSAGEW
	int SYSCALL_THUNK
	ret 0x14

global SendInput
extern SendInput
export SendInput

SendInput:
	mov eax, THUNK_USER32_SENDINPUT
	int SYSCALL_THUNK
	ret 0xc

global SendMessageA
extern SendMessageA
export SendMessageA

SendMessageA:
	mov eax, THUNK_USER32_SENDMESSAGEA
	int SYSCALL_THUNK
	ret 0x10

global SendMessageW
extern SendMessageW
export SendMessageW

SendMessageW:
	mov eax, THUNK_USER32_SENDMESSAGEW
	int SYSCALL_THUNK
	ret 0x10

global SendMessageCallbackA
extern SendMessageCallbackA
export SendMessageCallbackA

SendMessageCallbackA:
	mov eax, THUNK_USER32_SENDMESSAGECALLBACKA
	int SYSCALL_THUNK
	ret 0x18

global SendMessageCallbackW
extern SendMessageCallbackW
export SendMessageCallbackW

SendMessageCallbackW:
	mov eax, THUNK_USER32_SENDMESSAGECALLBACKW
	int SYSCALL_THUNK
	ret 0x18

global SendMessageTimeoutA
extern SendMessageTimeoutA
export SendMessageTimeoutA

SendMessageTimeoutA:
	mov eax, THUNK_USER32_SENDMESSAGETIMEOUTA
	int SYSCALL_THUNK
	ret 0x1c

global SendMessageTimeoutW
extern SendMessageTimeoutW
export SendMessageTimeoutW

SendMessageTimeoutW:
	mov eax, THUNK_USER32_SENDMESSAGETIMEOUTW
	int SYSCALL_THUNK
	ret 0x1c

global SendNotifyMessageA
extern SendNotifyMessageA
export SendNotifyMessageA

SendNotifyMessageA:
	mov eax, THUNK_USER32_SENDNOTIFYMESSAGEA
	int SYSCALL_THUNK
	ret 0x10

global SendNotifyMessageW
extern SendNotifyMessageW
export SendNotifyMessageW

SendNotifyMessageW:
	mov eax, THUNK_USER32_SENDNOTIFYMESSAGEW
	int SYSCALL_THUNK
	ret 0x10

global SetActiveWindow
extern SetActiveWindow
export SetActiveWindow

SetActiveWindow:
	mov eax, THUNK_USER32_SETACTIVEWINDOW
	int SYSCALL_THUNK
	ret 0x4

global SetCapture
extern SetCapture
export SetCapture

SetCapture:
	mov eax, THUNK_USER32_SETCAPTURE
	int SYSCALL_THUNK
	ret 0x4

global SetCaretBlinkTime
extern SetCaretBlinkTime
export SetCaretBlinkTime

SetCaretBlinkTime:
	mov eax, THUNK_USER32_SETCARETBLINKTIME
	int SYSCALL_THUNK
	ret 0x4

global SetCaretPos
extern SetCaretPos
export SetCaretPos

SetCaretPos:
	mov eax, THUNK_USER32_SETCARETPOS
	int SYSCALL_THUNK
	ret 0x8

global SetClassLongA
extern SetClassLongA
export SetClassLongA

SetClassLongA:
	mov eax, THUNK_USER32_SETCLASSLONGA
	int SYSCALL_THUNK
	ret 0xc

global SetClassLongW
extern SetClassLongW
export SetClassLongW

SetClassLongW:
	mov eax, THUNK_USER32_SETCLASSLONGW
	int SYSCALL_THUNK
	ret 0xc

global SetClassWord
extern SetClassWord
export SetClassWord

SetClassWord:
	mov eax, THUNK_USER32_SETCLASSWORD
	int SYSCALL_THUNK
	ret 0xc

global SetClipboardData
extern SetClipboardData
export SetClipboardData

SetClipboardData:
	mov eax, THUNK_USER32_SETCLIPBOARDDATA
	int SYSCALL_THUNK
	ret 0x8

global SetClipboardViewer
extern SetClipboardViewer
export SetClipboardViewer

SetClipboardViewer:
	mov eax, THUNK_USER32_SETCLIPBOARDVIEWER
	int SYSCALL_THUNK
	ret 0x4

global SetCoalescableTimer
extern SetCoalescableTimer
export SetCoalescableTimer

SetCoalescableTimer:
	mov eax, THUNK_USER32_SETCOALESCABLETIMER
	int SYSCALL_THUNK
	ret 0x14

global SetCursor
extern SetCursor
export SetCursor

SetCursor:
	mov eax, THUNK_USER32_SETCURSOR
	int SYSCALL_THUNK
	ret 0x4

global SetCursorPos
extern SetCursorPos
export SetCursorPos

SetCursorPos:
	mov eax, THUNK_USER32_SETCURSORPOS
	int SYSCALL_THUNK
	ret 0x8

global SetDebugErrorLevel
extern SetDebugErrorLevel
export SetDebugErrorLevel

SetDebugErrorLevel:
	mov eax, THUNK_USER32_SETDEBUGERRORLEVEL
	int SYSCALL_THUNK
	ret 0x4

global SetDlgItemInt
extern SetDlgItemInt
export SetDlgItemInt

SetDlgItemInt:
	mov eax, THUNK_USER32_SETDLGITEMINT
	int SYSCALL_THUNK
	ret 0x10

global SetDlgItemTextA
extern SetDlgItemTextA
export SetDlgItemTextA

SetDlgItemTextA:
	mov eax, THUNK_USER32_SETDLGITEMTEXTA
	int SYSCALL_THUNK
	ret 0xc

global SetDlgItemTextW
extern SetDlgItemTextW
export SetDlgItemTextW

SetDlgItemTextW:
	mov eax, THUNK_USER32_SETDLGITEMTEXTW
	int SYSCALL_THUNK
	ret 0xc

global SetDoubleClickTime
extern SetDoubleClickTime
export SetDoubleClickTime

SetDoubleClickTime:
	mov eax, THUNK_USER32_SETDOUBLECLICKTIME
	int SYSCALL_THUNK
	ret 0x4

global SetFocus
extern SetFocus
export SetFocus

SetFocus:
	mov eax, THUNK_USER32_SETFOCUS
	int SYSCALL_THUNK
	ret 0x4

global SetForegroundWindow
extern SetForegroundWindow
export SetForegroundWindow

SetForegroundWindow:
	mov eax, THUNK_USER32_SETFOREGROUNDWINDOW
	int SYSCALL_THUNK
	ret 0x4

global SetGestureConfig
extern SetGestureConfig
export SetGestureConfig

SetGestureConfig:
	mov eax, THUNK_USER32_SETGESTURECONFIG
	int SYSCALL_THUNK
	ret 0x14

global SetKeyboardState
extern SetKeyboardState
export SetKeyboardState

SetKeyboardState:
	mov eax, THUNK_USER32_SETKEYBOARDSTATE
	int SYSCALL_THUNK
	ret 0x4

global SetLastErrorEx
extern SetLastErrorEx
export SetLastErrorEx

SetLastErrorEx:
	mov eax, THUNK_USER32_SETLASTERROREX
	int SYSCALL_THUNK
	ret 0x8

global SetLayeredWindowAttributes
extern SetLayeredWindowAttributes
export SetLayeredWindowAttributes

SetLayeredWindowAttributes:
	mov eax, THUNK_USER32_SETLAYEREDWINDOWATTRIBUTES
	int SYSCALL_THUNK
	ret 0x10

global SetMenu
extern SetMenu
export SetMenu

SetMenu:
	mov eax, THUNK_USER32_SETMENU
	int SYSCALL_THUNK
	ret 0x8

global SetMenuContextHelpId
extern SetMenuContextHelpId
export SetMenuContextHelpId

SetMenuContextHelpId:
	mov eax, THUNK_USER32_SETMENUCONTEXTHELPID
	int SYSCALL_THUNK
	ret 0x8

global SetMenuDefaultItem
extern SetMenuDefaultItem
export SetMenuDefaultItem

SetMenuDefaultItem:
	mov eax, THUNK_USER32_SETMENUDEFAULTITEM
	int SYSCALL_THUNK
	ret 0xc

global SetMenuInfo
extern SetMenuInfo
export SetMenuInfo

SetMenuInfo:
	mov eax, THUNK_USER32_SETMENUINFO
	int SYSCALL_THUNK
	ret 0x8

global SetMenuItemBitmaps
extern SetMenuItemBitmaps
export SetMenuItemBitmaps

SetMenuItemBitmaps:
	mov eax, THUNK_USER32_SETMENUITEMBITMAPS
	int SYSCALL_THUNK
	ret 0x14

global SetMenuItemInfoA
extern SetMenuItemInfoA
export SetMenuItemInfoA

SetMenuItemInfoA:
	mov eax, THUNK_USER32_SETMENUITEMINFOA
	int SYSCALL_THUNK
	ret 0x10

global SetMenuItemInfoW
extern SetMenuItemInfoW
export SetMenuItemInfoW

SetMenuItemInfoW:
	mov eax, THUNK_USER32_SETMENUITEMINFOW
	int SYSCALL_THUNK
	ret 0x10

global SetMessageExtraInfo
extern SetMessageExtraInfo
export SetMessageExtraInfo

SetMessageExtraInfo:
	mov eax, THUNK_USER32_SETMESSAGEEXTRAINFO
	int SYSCALL_THUNK
	ret 0x4

global SetMessageQueue
extern SetMessageQueue
export SetMessageQueue

SetMessageQueue:
	mov eax, THUNK_USER32_SETMESSAGEQUEUE
	int SYSCALL_THUNK
	ret 0x4

global SetParent
extern SetParent
export SetParent

SetParent:
	mov eax, THUNK_USER32_SETPARENT
	int SYSCALL_THUNK
	ret 0x8

global SetPhysicalCursorPos
extern SetPhysicalCursorPos
export SetPhysicalCursorPos

SetPhysicalCursorPos:
	mov eax, THUNK_USER32_SETPHYSICALCURSORPOS
	int SYSCALL_THUNK
	ret 0x8

global SetProcessDPIAware
extern SetProcessDPIAware
export SetProcessDPIAware

SetProcessDPIAware:
	mov eax, THUNK_USER32_SETPROCESSDPIAWARE
	int SYSCALL_THUNK
	ret 0x0

global SetProcessDefaultLayout
extern SetProcessDefaultLayout
export SetProcessDefaultLayout

SetProcessDefaultLayout:
	mov eax, THUNK_USER32_SETPROCESSDEFAULTLAYOUT
	int SYSCALL_THUNK
	ret 0x4

global SetProcessDpiAwarenessContext
extern SetProcessDpiAwarenessContext
export SetProcessDpiAwarenessContext

SetProcessDpiAwarenessContext:
	mov eax, THUNK_USER32_SETPROCESSDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x4

global SetProcessWindowStation
extern SetProcessWindowStation
export SetProcessWindowStation

SetProcessWindowStation:
	mov eax, THUNK_USER32_SETPROCESSWINDOWSTATION
	int SYSCALL_THUNK
	ret 0x4

global SetPropA
extern SetPropA
export SetPropA

SetPropA:
	mov eax, THUNK_USER32_SETPROPA
	int SYSCALL_THUNK
	ret 0xc

global SetPropW
extern SetPropW
export SetPropW

SetPropW:
	mov eax, THUNK_USER32_SETPROPW
	int SYSCALL_THUNK
	ret 0xc

global SetScrollInfo
extern SetScrollInfo
export SetScrollInfo

SetScrollInfo:
	mov eax, THUNK_USER32_SETSCROLLINFO
	int SYSCALL_THUNK
	ret 0x10

global SetScrollPos
extern SetScrollPos
export SetScrollPos

SetScrollPos:
	mov eax, THUNK_USER32_SETSCROLLPOS
	int SYSCALL_THUNK
	ret 0x10

global SetScrollRange
extern SetScrollRange
export SetScrollRange

SetScrollRange:
	mov eax, THUNK_USER32_SETSCROLLRANGE
	int SYSCALL_THUNK
	ret 0x14

global SetSystemCursor
extern SetSystemCursor
export SetSystemCursor

SetSystemCursor:
	mov eax, THUNK_USER32_SETSYSTEMCURSOR
	int SYSCALL_THUNK
	ret 0x8

global SetThreadDesktop
extern SetThreadDesktop
export SetThreadDesktop

SetThreadDesktop:
	mov eax, THUNK_USER32_SETTHREADDESKTOP
	int SYSCALL_THUNK
	ret 0x4

global SetThreadDpiAwarenessContext
extern SetThreadDpiAwarenessContext
export SetThreadDpiAwarenessContext

SetThreadDpiAwarenessContext:
	mov eax, THUNK_USER32_SETTHREADDPIAWARENESSCONTEXT
	int SYSCALL_THUNK
	ret 0x4

global SetTimer
extern SetTimer
export SetTimer

SetTimer:
	mov eax, THUNK_USER32_SETTIMER
	int SYSCALL_THUNK
	ret 0x10

global SetUserObjectInformationA
extern SetUserObjectInformationA
export SetUserObjectInformationA

SetUserObjectInformationA:
	mov eax, THUNK_USER32_SETUSEROBJECTINFORMATIONA
	int SYSCALL_THUNK
	ret 0x10

global SetUserObjectInformationW
extern SetUserObjectInformationW
export SetUserObjectInformationW

SetUserObjectInformationW:
	mov eax, THUNK_USER32_SETUSEROBJECTINFORMATIONW
	int SYSCALL_THUNK
	ret 0x10

global SetUserObjectSecurity
extern SetUserObjectSecurity
export SetUserObjectSecurity

SetUserObjectSecurity:
	mov eax, THUNK_USER32_SETUSEROBJECTSECURITY
	int SYSCALL_THUNK
	ret 0xc

global SetWindowContextHelpId
extern SetWindowContextHelpId
export SetWindowContextHelpId

SetWindowContextHelpId:
	mov eax, THUNK_USER32_SETWINDOWCONTEXTHELPID
	int SYSCALL_THUNK
	ret 0x8

global SetWindowDisplayAffinity
extern SetWindowDisplayAffinity
export SetWindowDisplayAffinity

SetWindowDisplayAffinity:
	mov eax, THUNK_USER32_SETWINDOWDISPLAYAFFINITY
	int SYSCALL_THUNK
	ret 0x8

global SetWindowFeedbackSetting
extern SetWindowFeedbackSetting
export SetWindowFeedbackSetting

SetWindowFeedbackSetting:
	mov eax, THUNK_USER32_SETWINDOWFEEDBACKSETTING
	int SYSCALL_THUNK
	ret 0x14

global SetWindowLongA
extern SetWindowLongA
export SetWindowLongA

SetWindowLongA:
	mov eax, THUNK_USER32_SETWINDOWLONGA
	int SYSCALL_THUNK
	ret 0xc

global SetWindowLongW
extern SetWindowLongW
export SetWindowLongW

SetWindowLongW:
	mov eax, THUNK_USER32_SETWINDOWLONGW
	int SYSCALL_THUNK
	ret 0xc

global SetWindowPlacement
extern SetWindowPlacement
export SetWindowPlacement

SetWindowPlacement:
	mov eax, THUNK_USER32_SETWINDOWPLACEMENT
	int SYSCALL_THUNK
	ret 0x8

global SetWindowsHookA
extern SetWindowsHookA
export SetWindowsHookA

SetWindowsHookA:
	mov eax, THUNK_USER32_SETWINDOWSHOOKA
	int SYSCALL_THUNK
	ret 0x8

global SetWindowsHookW
extern SetWindowsHookW
export SetWindowsHookW

SetWindowsHookW:
	mov eax, THUNK_USER32_SETWINDOWSHOOKW
	int SYSCALL_THUNK
	ret 0x8

global SetWindowsHookExA
extern SetWindowsHookExA
export SetWindowsHookExA

SetWindowsHookExA:
	mov eax, THUNK_USER32_SETWINDOWSHOOKEXA
	int SYSCALL_THUNK
	ret 0x10

global SetWindowsHookExW
extern SetWindowsHookExW
export SetWindowsHookExW

SetWindowsHookExW:
	mov eax, THUNK_USER32_SETWINDOWSHOOKEXW
	int SYSCALL_THUNK
	ret 0x10

global SetWindowPos
extern SetWindowPos
export SetWindowPos

SetWindowPos:
	mov eax, THUNK_USER32_SETWINDOWPOS
	int SYSCALL_THUNK
	ret 0x1c

global SetWindowRgn
extern SetWindowRgn
export SetWindowRgn

SetWindowRgn:
	mov eax, THUNK_USER32_SETWINDOWRGN
	int SYSCALL_THUNK
	ret 0xc

global SetWindowTextA
extern SetWindowTextA
export SetWindowTextA

SetWindowTextA:
	mov eax, THUNK_USER32_SETWINDOWTEXTA
	int SYSCALL_THUNK
	ret 0x8

global SetWindowTextW
extern SetWindowTextW
export SetWindowTextW

SetWindowTextW:
	mov eax, THUNK_USER32_SETWINDOWTEXTW
	int SYSCALL_THUNK
	ret 0x8

global SetWindowWord
extern SetWindowWord
export SetWindowWord

SetWindowWord:
	mov eax, THUNK_USER32_SETWINDOWWORD
	int SYSCALL_THUNK
	ret 0xc

global SetWinEventHook
extern SetWinEventHook
export SetWinEventHook

SetWinEventHook:
	mov eax, THUNK_USER32_SETWINEVENTHOOK
	int SYSCALL_THUNK
	ret 0x1c

global ShowCaret
extern ShowCaret
export ShowCaret

ShowCaret:
	mov eax, THUNK_USER32_SHOWCARET
	int SYSCALL_THUNK
	ret 0x4

global ShowCursor
extern ShowCursor
export ShowCursor

ShowCursor:
	mov eax, THUNK_USER32_SHOWCURSOR
	int SYSCALL_THUNK
	ret 0x4

global ShowScrollBar
extern ShowScrollBar
export ShowScrollBar

ShowScrollBar:
	mov eax, THUNK_USER32_SHOWSCROLLBAR
	int SYSCALL_THUNK
	ret 0xc

global ShowOwnedPopups
extern ShowOwnedPopups
export ShowOwnedPopups

ShowOwnedPopups:
	mov eax, THUNK_USER32_SHOWOWNEDPOPUPS
	int SYSCALL_THUNK
	ret 0x8

global ShowWindow
extern ShowWindow
export ShowWindow

ShowWindow:
	mov eax, THUNK_USER32_SHOWWINDOW
	int SYSCALL_THUNK
	ret 0x8

global ShowWindowAsync
extern ShowWindowAsync
export ShowWindowAsync

ShowWindowAsync:
	mov eax, THUNK_USER32_SHOWWINDOWASYNC
	int SYSCALL_THUNK
	ret 0x8

global ShutdownBlockReasonCreate
extern ShutdownBlockReasonCreate
export ShutdownBlockReasonCreate

ShutdownBlockReasonCreate:
	mov eax, THUNK_USER32_SHUTDOWNBLOCKREASONCREATE
	int SYSCALL_THUNK
	ret 0x8

global ShutdownBlockReasonDestroy
extern ShutdownBlockReasonDestroy
export ShutdownBlockReasonDestroy

ShutdownBlockReasonDestroy:
	mov eax, THUNK_USER32_SHUTDOWNBLOCKREASONDESTROY
	int SYSCALL_THUNK
	ret 0x4

global SkipPointerFrameMessages
extern SkipPointerFrameMessages
export SkipPointerFrameMessages

SkipPointerFrameMessages:
	mov eax, THUNK_USER32_SKIPPOINTERFRAMEMESSAGES
	int SYSCALL_THUNK
	ret 0x4

global SubtractRect
extern SubtractRect
export SubtractRect

SubtractRect:
	mov eax, THUNK_USER32_SUBTRACTRECT
	int SYSCALL_THUNK
	ret 0xc

global SwapMouseButton
extern SwapMouseButton
export SwapMouseButton

SwapMouseButton:
	mov eax, THUNK_USER32_SWAPMOUSEBUTTON
	int SYSCALL_THUNK
	ret 0x4

global SwitchDesktop
extern SwitchDesktop
export SwitchDesktop

SwitchDesktop:
	mov eax, THUNK_USER32_SWITCHDESKTOP
	int SYSCALL_THUNK
	ret 0x4

global SwitchToThisWindow
extern SwitchToThisWindow
export SwitchToThisWindow

SwitchToThisWindow:
	mov eax, THUNK_USER32_SWITCHTOTHISWINDOW
	int SYSCALL_THUNK
	ret 0x8

global SystemParametersInfoA
extern SystemParametersInfoA
export SystemParametersInfoA

SystemParametersInfoA:
	mov eax, THUNK_USER32_SYSTEMPARAMETERSINFOA
	int SYSCALL_THUNK
	ret 0x10

global SystemParametersInfoW
extern SystemParametersInfoW
export SystemParametersInfoW

SystemParametersInfoW:
	mov eax, THUNK_USER32_SYSTEMPARAMETERSINFOW
	int SYSCALL_THUNK
	ret 0x10

global SystemParametersInfoForDpi
extern SystemParametersInfoForDpi
export SystemParametersInfoForDpi

SystemParametersInfoForDpi:
	mov eax, THUNK_USER32_SYSTEMPARAMETERSINFOFORDPI
	int SYSCALL_THUNK
	ret 0x14

global TabbedTextOutA
extern TabbedTextOutA
export TabbedTextOutA

TabbedTextOutA:
	mov eax, THUNK_USER32_TABBEDTEXTOUTA
	int SYSCALL_THUNK
	ret 0x20

global TabbedTextOutW
extern TabbedTextOutW
export TabbedTextOutW

TabbedTextOutW:
	mov eax, THUNK_USER32_TABBEDTEXTOUTW
	int SYSCALL_THUNK
	ret 0x20

global TileWindows
extern TileWindows
export TileWindows

TileWindows:
	mov eax, THUNK_USER32_TILEWINDOWS
	int SYSCALL_THUNK
	ret 0x14

global ToAscii
extern ToAscii
export ToAscii

ToAscii:
	mov eax, THUNK_USER32_TOASCII
	int SYSCALL_THUNK
	ret 0x14

global ToAsciiEx
extern ToAsciiEx
export ToAsciiEx

ToAsciiEx:
	mov eax, THUNK_USER32_TOASCIIEX
	int SYSCALL_THUNK
	ret 0x18

global ToUnicode
extern ToUnicode
export ToUnicode

ToUnicode:
	mov eax, THUNK_USER32_TOUNICODE
	int SYSCALL_THUNK
	ret 0x18

global ToUnicodeEx
extern ToUnicodeEx
export ToUnicodeEx

ToUnicodeEx:
	mov eax, THUNK_USER32_TOUNICODEEX
	int SYSCALL_THUNK
	ret 0x1c

global TrackMouseEvent
extern TrackMouseEvent
export TrackMouseEvent

TrackMouseEvent:
	mov eax, THUNK_USER32_TRACKMOUSEEVENT
	int SYSCALL_THUNK
	ret 0x4

global TrackPopupMenu
extern TrackPopupMenu
export TrackPopupMenu

TrackPopupMenu:
	mov eax, THUNK_USER32_TRACKPOPUPMENU
	int SYSCALL_THUNK
	ret 0x1c

global TrackPopupMenuEx
extern TrackPopupMenuEx
export TrackPopupMenuEx

TrackPopupMenuEx:
	mov eax, THUNK_USER32_TRACKPOPUPMENUEX
	int SYSCALL_THUNK
	ret 0x18

global TranslateAcceleratorA
extern TranslateAcceleratorA
export TranslateAcceleratorA

TranslateAcceleratorA:
	mov eax, THUNK_USER32_TRANSLATEACCELERATORA
	int SYSCALL_THUNK
	ret 0xc

global TranslateAcceleratorW
extern TranslateAcceleratorW
export TranslateAcceleratorW

TranslateAcceleratorW:
	mov eax, THUNK_USER32_TRANSLATEACCELERATORW
	int SYSCALL_THUNK
	ret 0xc

global TranslateMDISysAccel
extern TranslateMDISysAccel
export TranslateMDISysAccel

TranslateMDISysAccel:
	mov eax, THUNK_USER32_TRANSLATEMDISYSACCEL
	int SYSCALL_THUNK
	ret 0x8

global TranslateMessage
extern TranslateMessage
export TranslateMessage

TranslateMessage:
	mov eax, THUNK_USER32_TRANSLATEMESSAGE
	int SYSCALL_THUNK
	ret 0x4

global UnhookWinEvent
extern UnhookWinEvent
export UnhookWinEvent

UnhookWinEvent:
	mov eax, THUNK_USER32_UNHOOKWINEVENT
	int SYSCALL_THUNK
	ret 0x4

global UnhookWindowsHook
extern UnhookWindowsHook
export UnhookWindowsHook

UnhookWindowsHook:
	mov eax, THUNK_USER32_UNHOOKWINDOWSHOOK
	int SYSCALL_THUNK
	ret 0x8

global UnhookWindowsHookEx
extern UnhookWindowsHookEx
export UnhookWindowsHookEx

UnhookWindowsHookEx:
	mov eax, THUNK_USER32_UNHOOKWINDOWSHOOKEX
	int SYSCALL_THUNK
	ret 0x4

global UnloadKeyboardLayout
extern UnloadKeyboardLayout
export UnloadKeyboardLayout

UnloadKeyboardLayout:
	mov eax, THUNK_USER32_UNLOADKEYBOARDLAYOUT
	int SYSCALL_THUNK
	ret 0x4

global UnionRect
extern UnionRect
export UnionRect

UnionRect:
	mov eax, THUNK_USER32_UNIONRECT
	int SYSCALL_THUNK
	ret 0xc

global UnregisterClassA
extern UnregisterClassA
export UnregisterClassA

UnregisterClassA:
	mov eax, THUNK_USER32_UNREGISTERCLASSA
	int SYSCALL_THUNK
	ret 0x8

global UnregisterClassW
extern UnregisterClassW
export UnregisterClassW

UnregisterClassW:
	mov eax, THUNK_USER32_UNREGISTERCLASSW
	int SYSCALL_THUNK
	ret 0x8

global UnregisterDeviceNotification
extern UnregisterDeviceNotification
export UnregisterDeviceNotification

UnregisterDeviceNotification:
	mov eax, THUNK_USER32_UNREGISTERDEVICENOTIFICATION
	int SYSCALL_THUNK
	ret 0x4

global UnregisterHotKey
extern UnregisterHotKey
export UnregisterHotKey

UnregisterHotKey:
	mov eax, THUNK_USER32_UNREGISTERHOTKEY
	int SYSCALL_THUNK
	ret 0x8

global UnregisterPointerInputTarget
extern UnregisterPointerInputTarget
export UnregisterPointerInputTarget

UnregisterPointerInputTarget:
	mov eax, THUNK_USER32_UNREGISTERPOINTERINPUTTARGET
	int SYSCALL_THUNK
	ret 0x8

global UnregisterPointerInputTargetEx
extern UnregisterPointerInputTargetEx
export UnregisterPointerInputTargetEx

UnregisterPointerInputTargetEx:
	mov eax, THUNK_USER32_UNREGISTERPOINTERINPUTTARGETEX
	int SYSCALL_THUNK
	ret 0x8

global UnregisterPowerSettingNotification
extern UnregisterPowerSettingNotification
export UnregisterPowerSettingNotification

UnregisterPowerSettingNotification:
	mov eax, THUNK_USER32_UNREGISTERPOWERSETTINGNOTIFICATION
	int SYSCALL_THUNK
	ret 0x4

global UnregisterSuspendResumeNotification
extern UnregisterSuspendResumeNotification
export UnregisterSuspendResumeNotification

UnregisterSuspendResumeNotification:
	mov eax, THUNK_USER32_UNREGISTERSUSPENDRESUMENOTIFICATION
	int SYSCALL_THUNK
	ret 0x4

global UnregisterTouchWindow
extern UnregisterTouchWindow
export UnregisterTouchWindow

UnregisterTouchWindow:
	mov eax, THUNK_USER32_UNREGISTERTOUCHWINDOW
	int SYSCALL_THUNK
	ret 0x4

global UpdateWindow
extern UpdateWindow
export UpdateWindow

UpdateWindow:
	mov eax, THUNK_USER32_UPDATEWINDOW
	int SYSCALL_THUNK
	ret 0x4

global UserHandleGrantAccess
extern UserHandleGrantAccess
export UserHandleGrantAccess

UserHandleGrantAccess:
	mov eax, THUNK_USER32_USERHANDLEGRANTACCESS
	int SYSCALL_THUNK
	ret 0xc

global ValidateRect
extern ValidateRect
export ValidateRect

ValidateRect:
	mov eax, THUNK_USER32_VALIDATERECT
	int SYSCALL_THUNK
	ret 0x8

global ValidateRgn
extern ValidateRgn
export ValidateRgn

ValidateRgn:
	mov eax, THUNK_USER32_VALIDATERGN
	int SYSCALL_THUNK
	ret 0x8

global VkKeyScanA
extern VkKeyScanA
export VkKeyScanA

VkKeyScanA:
	mov eax, THUNK_USER32_VKKEYSCANA
	int SYSCALL_THUNK
	ret 0x4

global VkKeyScanW
extern VkKeyScanW
export VkKeyScanW

VkKeyScanW:
	mov eax, THUNK_USER32_VKKEYSCANW
	int SYSCALL_THUNK
	ret 0x4

global VkKeyScanExA
extern VkKeyScanExA
export VkKeyScanExA

VkKeyScanExA:
	mov eax, THUNK_USER32_VKKEYSCANEXA
	int SYSCALL_THUNK
	ret 0x8

global VkKeyScanExW
extern VkKeyScanExW
export VkKeyScanExW

VkKeyScanExW:
	mov eax, THUNK_USER32_VKKEYSCANEXW
	int SYSCALL_THUNK
	ret 0x8

global WaitForInputIdle
extern WaitForInputIdle
export WaitForInputIdle

WaitForInputIdle:
	mov eax, THUNK_USER32_WAITFORINPUTIDLE
	int SYSCALL_THUNK
	ret 0x8

global WaitMessage
extern WaitMessage
export WaitMessage

WaitMessage:
	mov eax, THUNK_USER32_WAITMESSAGE
	int SYSCALL_THUNK
	ret 0x0

global WindowFromDC
extern WindowFromDC
export WindowFromDC

WindowFromDC:
	mov eax, THUNK_USER32_WINDOWFROMDC
	int SYSCALL_THUNK
	ret 0x4

global WindowFromPoint
extern WindowFromPoint
export WindowFromPoint

WindowFromPoint:
	mov eax, THUNK_USER32_WINDOWFROMPOINT
	int SYSCALL_THUNK
	ret 0x4

global WinHelpA
extern WinHelpA
export WinHelpA

WinHelpA:
	mov eax, THUNK_USER32_WINHELPA
	int SYSCALL_THUNK
	ret 0x10

global WinHelpW
extern WinHelpW
export WinHelpW

WinHelpW:
	mov eax, THUNK_USER32_WINHELPW
	int SYSCALL_THUNK
	ret 0x10

global keybd_event
extern keybd_event
export keybd_event

keybd_event:
	mov eax, THUNK_USER32_KEYBD_EVENT
	int SYSCALL_THUNK
	ret 0x10

global mouse_event
extern mouse_event
export mouse_event

mouse_event:
	mov eax, THUNK_USER32_MOUSE_EVENT
	int SYSCALL_THUNK
	ret 0x14

global wsprintfA
extern wsprintfA
export wsprintfA

wsprintfA:
	mov eax, THUNK_USER32_WSPRINTFA
	int SYSCALL_THUNK
	ret 0x0

global wsprintfW
extern wsprintfW
export wsprintfW

wsprintfW:
	mov eax, THUNK_USER32_WSPRINTFW
	int SYSCALL_THUNK
	ret 0x0

global SetRect
extern SetRect
export SetRect

SetRect:
	mov eax, THUNK_USER32_SETRECT
	int SYSCALL_THUNK
	ret 0x14

global PtInRect
extern PtInRect
export PtInRect

PtInRect:
	mov eax, THUNK_USER32_PTINRECT
	int SYSCALL_THUNK
	ret 0x8

THUNK_USER32_CHANGEDISPLAYSETTINGSA equ 0x800
THUNK_USER32_CHANGEDISPLAYSETTINGSW equ 0x801
THUNK_USER32_CHANGEDISPLAYSETTINGSEXA equ 0x802
THUNK_USER32_CHANGEDISPLAYSETTINGSEXW equ 0x803
THUNK_USER32_CREATEDESKTOPA equ 0x804
THUNK_USER32_CREATEDESKTOPW equ 0x805
THUNK_USER32_DISPLAYCONFIGGETDEVICEINFO equ 0x806
THUNK_USER32_ENUMDISPLAYDEVICESA equ 0x807
THUNK_USER32_ENUMDISPLAYDEVICESW equ 0x808
THUNK_USER32_ENUMDISPLAYSETTINGSA equ 0x809
THUNK_USER32_ENUMDISPLAYSETTINGSW equ 0x80a
THUNK_USER32_ENUMDISPLAYSETTINGSEXA equ 0x80b
THUNK_USER32_ENUMDISPLAYSETTINGSEXW equ 0x80c
THUNK_USER32_GETDISPLAYCONFIGBUFFERSIZES equ 0x80d
THUNK_USER32_UPDATELAYEREDWINDOW equ 0x80e
THUNK_USER32_UPDATELAYEREDWINDOWINDIRECT equ 0x80f
THUNK_USER32_ACTIVATEKEYBOARDLAYOUT equ 0x810
THUNK_USER32_ADJUSTWINDOWRECT equ 0x811
THUNK_USER32_ADJUSTWINDOWRECTEX equ 0x812
THUNK_USER32_ANYPOPUP equ 0x813
THUNK_USER32_APPENDMENUA equ 0x814
THUNK_USER32_APPENDMENUW equ 0x815
THUNK_USER32_ARRANGEICONICWINDOWS equ 0x816
THUNK_USER32_ATTACHTHREADINPUT equ 0x817
THUNK_USER32_BEGINDEFERWINDOWPOS equ 0x818
THUNK_USER32_BEGINPAINT equ 0x819
THUNK_USER32_BRINGWINDOWTOTOP equ 0x81a
THUNK_USER32_BROADCASTSYSTEMMESSAGE equ 0x81b
THUNK_USER32_BROADCASTSYSTEMMESSAGEA equ 0x81c
THUNK_USER32_BROADCASTSYSTEMMESSAGEW equ 0x81d
THUNK_USER32_CALLMSGFILTERA equ 0x81e
THUNK_USER32_CALLMSGFILTERW equ 0x81f
THUNK_USER32_CALLNEXTHOOKEX equ 0x820
THUNK_USER32_CALLWINDOWPROCA equ 0x821
THUNK_USER32_CALLWINDOWPROCW equ 0x822
THUNK_USER32_CASCADEWINDOWS equ 0x823
THUNK_USER32_CHANGECLIPBOARDCHAIN equ 0x824
THUNK_USER32_CHANGEMENUA equ 0x825
THUNK_USER32_CHANGEMENUW equ 0x826
THUNK_USER32_CHANGEWINDOWMESSAGEFILTER equ 0x827
THUNK_USER32_CHANGEWINDOWMESSAGEFILTEREX equ 0x828
THUNK_USER32_CHARLOWERA equ 0x829
THUNK_USER32_CHARLOWERW equ 0x82a
THUNK_USER32_CHARLOWERBUFFA equ 0x82b
THUNK_USER32_CHARLOWERBUFFW equ 0x82c
THUNK_USER32_CHARNEXTA equ 0x82d
THUNK_USER32_CHARNEXTW equ 0x82e
THUNK_USER32_CHARNEXTEXA equ 0x82f
THUNK_USER32_CHARPREVA equ 0x830
THUNK_USER32_CHARPREVW equ 0x831
THUNK_USER32_CHARPREVEXA equ 0x832
THUNK_USER32_CHARUPPERA equ 0x833
THUNK_USER32_CHARUPPERW equ 0x834
THUNK_USER32_CHARUPPERBUFFA equ 0x835
THUNK_USER32_CHARUPPERBUFFW equ 0x836
THUNK_USER32_CHARTOOEMA equ 0x837
THUNK_USER32_CHARTOOEMW equ 0x838
THUNK_USER32_CHARTOOEMBUFFA equ 0x839
THUNK_USER32_CHARTOOEMBUFFW equ 0x83a
THUNK_USER32_CHECKDLGBUTTON equ 0x83b
THUNK_USER32_CHECKMENUITEM equ 0x83c
THUNK_USER32_CHECKMENURADIOITEM equ 0x83d
THUNK_USER32_CHECKRADIOBUTTON equ 0x83e
THUNK_USER32_CHILDWINDOWFROMPOINT equ 0x83f
THUNK_USER32_CHILDWINDOWFROMPOINTEX equ 0x840
THUNK_USER32_CLIENTTOSCREEN equ 0x841
THUNK_USER32_CLIPCURSOR equ 0x842
THUNK_USER32_CLOSECLIPBOARD equ 0x843
THUNK_USER32_CLOSEDESKTOP equ 0x844
THUNK_USER32_CLOSETOUCHINPUTHANDLE equ 0x845
THUNK_USER32_CLOSEGESTUREINFOHANDLE equ 0x846
THUNK_USER32_CLOSEWINDOW equ 0x847
THUNK_USER32_CLOSEWINDOWSTATION equ 0x848
THUNK_USER32_COPYACCELERATORTABLEA equ 0x849
THUNK_USER32_COPYACCELERATORTABLEW equ 0x84a
THUNK_USER32_COPYICON equ 0x84b
THUNK_USER32_COPYIMAGE equ 0x84c
THUNK_USER32_COPYRECT equ 0x84d
THUNK_USER32_COUNTCLIPBOARDFORMATS equ 0x84e
THUNK_USER32_CREATEACCELERATORTABLEA equ 0x84f
THUNK_USER32_CREATEACCELERATORTABLEW equ 0x850
THUNK_USER32_CREATEICONINDIRECT equ 0x851
THUNK_USER32_CREATECARET equ 0x852
THUNK_USER32_CREATECURSOR equ 0x853
THUNK_USER32_CREATEDIALOGINDIRECTPARAMA equ 0x854
THUNK_USER32_CREATEDIALOGINDIRECTPARAMW equ 0x855
THUNK_USER32_CREATEDIALOGPARAMA equ 0x856
THUNK_USER32_CREATEDIALOGPARAMW equ 0x857
THUNK_USER32_CREATEICON equ 0x858
THUNK_USER32_CREATEICONFROMRESOURCE equ 0x859
THUNK_USER32_CREATEICONFROMRESOURCEEX equ 0x85a
THUNK_USER32_CREATEMENU equ 0x85b
THUNK_USER32_CREATEPOPUPMENU equ 0x85c
THUNK_USER32_CREATEWINDOWEXA equ 0x85d
THUNK_USER32_CREATEWINDOWEXW equ 0x85e
THUNK_USER32_CREATEWINDOWSTATIONA equ 0x85f
THUNK_USER32_CREATEWINDOWSTATIONW equ 0x860
THUNK_USER32_CREATEMDIWINDOWA equ 0x861
THUNK_USER32_CREATEMDIWINDOWW equ 0x862
THUNK_USER32_CREATESYNTHETICPOINTERDEVICE equ 0x863
THUNK_USER32_DEFDLGPROCA equ 0x864
THUNK_USER32_DEFDLGPROCW equ 0x865
THUNK_USER32_DEFERWINDOWPOS equ 0x866
THUNK_USER32_DEFFRAMEPROCA equ 0x867
THUNK_USER32_DEFFRAMEPROCW equ 0x868
THUNK_USER32_DEFMDICHILDPROCA equ 0x869
THUNK_USER32_DEFMDICHILDPROCW equ 0x86a
THUNK_USER32_DEFRAWINPUTPROC equ 0x86b
THUNK_USER32_DEFWINDOWPROCA equ 0x86c
THUNK_USER32_DEFWINDOWPROCW equ 0x86d
THUNK_USER32_DELETEMENU equ 0x86e
THUNK_USER32_DEREGISTERSHELLHOOKWINDOW equ 0x86f
THUNK_USER32_DESTROYACCELERATORTABLE equ 0x870
THUNK_USER32_DESTROYCARET equ 0x871
THUNK_USER32_DESTROYCURSOR equ 0x872
THUNK_USER32_DESTROYICON equ 0x873
THUNK_USER32_DESTROYMENU equ 0x874
THUNK_USER32_DESTROYSYNTHETICPOINTERDEVICE equ 0x875
THUNK_USER32_DESTROYWINDOW equ 0x876
THUNK_USER32_DIALOGBOXINDIRECTPARAMA equ 0x877
THUNK_USER32_DIALOGBOXINDIRECTPARAMW equ 0x878
THUNK_USER32_DIALOGBOXPARAMA equ 0x879
THUNK_USER32_DIALOGBOXPARAMW equ 0x87a
THUNK_USER32_DISABLEPROCESSWINDOWSGHOSTING equ 0x87b
THUNK_USER32_DISPATCHMESSAGEA equ 0x87c
THUNK_USER32_DISPATCHMESSAGEW equ 0x87d
THUNK_USER32_DLGDIRLISTA equ 0x87e
THUNK_USER32_DLGDIRLISTW equ 0x87f
THUNK_USER32_DLGDIRLISTCOMBOBOXA equ 0x880
THUNK_USER32_DLGDIRLISTCOMBOBOXW equ 0x881
THUNK_USER32_DLGDIRSELECTCOMBOBOXEXA equ 0x882
THUNK_USER32_DLGDIRSELECTCOMBOBOXEXW equ 0x883
THUNK_USER32_DLGDIRSELECTEXA equ 0x884
THUNK_USER32_DLGDIRSELECTEXW equ 0x885
THUNK_USER32_DRAGDETECT equ 0x886
THUNK_USER32_DRAGOBJECT equ 0x887
THUNK_USER32_DRAWANIMATEDRECTS equ 0x888
THUNK_USER32_DRAWCAPTION equ 0x889
THUNK_USER32_DRAWEDGE equ 0x88a
THUNK_USER32_DRAWFOCUSRECT equ 0x88b
THUNK_USER32_DRAWFRAMECONTROL equ 0x88c
THUNK_USER32_DRAWICON equ 0x88d
THUNK_USER32_DRAWICONEX equ 0x88e
THUNK_USER32_DRAWMENUBAR equ 0x88f
THUNK_USER32_DRAWSTATEA equ 0x890
THUNK_USER32_DRAWSTATEW equ 0x891
THUNK_USER32_DRAWTEXTA equ 0x892
THUNK_USER32_DRAWTEXTW equ 0x893
THUNK_USER32_DRAWTEXTEXA equ 0x894
THUNK_USER32_DRAWTEXTEXW equ 0x895
THUNK_USER32_EMPTYCLIPBOARD equ 0x896
THUNK_USER32_ENABLEMENUITEM equ 0x897
THUNK_USER32_ENABLEMOUSEINPOINTER equ 0x898
THUNK_USER32_ENABLENONCLIENTDPISCALING equ 0x899
THUNK_USER32_ENABLESCROLLBAR equ 0x89a
THUNK_USER32_ENABLEWINDOW equ 0x89b
THUNK_USER32_ENDDEFERWINDOWPOS equ 0x89c
THUNK_USER32_ENDDIALOG equ 0x89d
THUNK_USER32_ENDMENU equ 0x89e
THUNK_USER32_ENDPAINT equ 0x89f
THUNK_USER32_ENUMCHILDWINDOWS equ 0x8a0
THUNK_USER32_ENUMCLIPBOARDFORMATS equ 0x8a1
THUNK_USER32_ENUMDESKTOPSA equ 0x8a2
THUNK_USER32_ENUMDESKTOPSW equ 0x8a3
THUNK_USER32_ENUMDESKTOPWINDOWS equ 0x8a4
THUNK_USER32_ENUMDISPLAYMONITORS equ 0x8a5
THUNK_USER32_ENUMPROPSA equ 0x8a6
THUNK_USER32_ENUMPROPSW equ 0x8a7
THUNK_USER32_ENUMPROPSEXA equ 0x8a8
THUNK_USER32_ENUMPROPSEXW equ 0x8a9
THUNK_USER32_ENUMTHREADWINDOWS equ 0x8aa
THUNK_USER32_ENUMWINDOWS equ 0x8ab
THUNK_USER32_ENUMWINDOWSTATIONSA equ 0x8ac
THUNK_USER32_ENUMWINDOWSTATIONSW equ 0x8ad
THUNK_USER32_EVALUATEPROXIMITYTORECT equ 0x8ae
THUNK_USER32_EVALUATEPROXIMITYTOPOLYGON equ 0x8af
THUNK_USER32_EXCLUDEUPDATERGN equ 0x8b0
THUNK_USER32_EXITWINDOWSEX equ 0x8b1
THUNK_USER32_FILLRECT equ 0x8b2
THUNK_USER32_FINDWINDOWA equ 0x8b3
THUNK_USER32_FINDWINDOWW equ 0x8b4
THUNK_USER32_FINDWINDOWEXA equ 0x8b5
THUNK_USER32_FINDWINDOWEXW equ 0x8b6
THUNK_USER32_FLASHWINDOW equ 0x8b7
THUNK_USER32_FLASHWINDOWEX equ 0x8b8
THUNK_USER32_FRAMERECT equ 0x8b9
THUNK_USER32_GETACTIVEWINDOW equ 0x8ba
THUNK_USER32_GETALTTABINFOA equ 0x8bb
THUNK_USER32_GETALTTABINFOW equ 0x8bc
THUNK_USER32_GETANCESTOR equ 0x8bd
THUNK_USER32_GETASYNCKEYSTATE equ 0x8be
THUNK_USER32_GETAUTOROTATIONSTATE equ 0x8bf
THUNK_USER32_GETAWARENESSFROMDPIAWARENESSCONTEXT equ 0x8c0
THUNK_USER32_GETCAPTURE equ 0x8c1
THUNK_USER32_GETCARETBLINKTIME equ 0x8c2
THUNK_USER32_GETCARETPOS equ 0x8c3
THUNK_USER32_GETCLASSINFOA equ 0x8c4
THUNK_USER32_GETCLASSINFOW equ 0x8c5
THUNK_USER32_GETCLASSINFOEXA equ 0x8c6
THUNK_USER32_GETCLASSINFOEXW equ 0x8c7
THUNK_USER32_GETCLASSLONGA equ 0x8c8
THUNK_USER32_GETCLASSLONGW equ 0x8c9
THUNK_USER32_GETCLASSNAMEA equ 0x8ca
THUNK_USER32_GETCLASSNAMEW equ 0x8cb
THUNK_USER32_GETCLASSWORD equ 0x8cc
THUNK_USER32_GETCLIENTRECT equ 0x8cd
THUNK_USER32_GETCLIPBOARDDATA equ 0x8ce
THUNK_USER32_GETCLIPBOARDFORMATNAMEA equ 0x8cf
THUNK_USER32_GETCLIPBOARDFORMATNAMEW equ 0x8d0
THUNK_USER32_GETCLIPBOARDOWNER equ 0x8d1
THUNK_USER32_GETCLIPBOARDSEQUENCENUMBER equ 0x8d2
THUNK_USER32_GETCLIPBOARDVIEWER equ 0x8d3
THUNK_USER32_GETCLIPCURSOR equ 0x8d4
THUNK_USER32_GETCOMBOBOXINFO equ 0x8d5
THUNK_USER32_GETCURRENTINPUTMESSAGESOURCE equ 0x8d6
THUNK_USER32_GETCURSOR equ 0x8d7
THUNK_USER32_GETCURSORINFO equ 0x8d8
THUNK_USER32_GETCURSORPOS equ 0x8d9
THUNK_USER32_GETDC equ 0x8da
THUNK_USER32_GETDCEX equ 0x8db
THUNK_USER32_GETDESKTOPWINDOW equ 0x8dc
THUNK_USER32_GETDIALOGBASEUNITS equ 0x8dd
THUNK_USER32_GETDISPLAYAUTOROTATIONPREFERENCES equ 0x8de
THUNK_USER32_GETDLGCTRLID equ 0x8df
THUNK_USER32_GETDLGITEM equ 0x8e0
THUNK_USER32_GETDLGITEMINT equ 0x8e1
THUNK_USER32_GETDLGITEMTEXTA equ 0x8e2
THUNK_USER32_GETDLGITEMTEXTW equ 0x8e3
THUNK_USER32_GETDOUBLECLICKTIME equ 0x8e4
THUNK_USER32_GETDPIFORWINDOW equ 0x8e5
THUNK_USER32_GETDPIFORSYSTEM equ 0x8e6
THUNK_USER32_GETFOCUS equ 0x8e7
THUNK_USER32_GETFOREGROUNDWINDOW equ 0x8e8
THUNK_USER32_GETGESTURECONFIG equ 0x8e9
THUNK_USER32_GETGESTUREEXTRAARGS equ 0x8ea
THUNK_USER32_GETGESTUREINFO equ 0x8eb
THUNK_USER32_GETGUITHREADINFO equ 0x8ec
THUNK_USER32_GETGUIRESOURCES equ 0x8ed
THUNK_USER32_GETICONINFO equ 0x8ee
THUNK_USER32_GETICONINFOEXA equ 0x8ef
THUNK_USER32_GETICONINFOEXW equ 0x8f0
THUNK_USER32_GETINPUTSTATE equ 0x8f1
THUNK_USER32_GETKBCODEPAGE equ 0x8f2
THUNK_USER32_GETKEYBOARDLAYOUT equ 0x8f3
THUNK_USER32_GETKEYBOARDLAYOUTLIST equ 0x8f4
THUNK_USER32_GETKEYBOARDSTATE equ 0x8f5
THUNK_USER32_GETKEYBOARDTYPE equ 0x8f6
THUNK_USER32_GETKEYNAMETEXTA equ 0x8f7
THUNK_USER32_GETKEYNAMETEXTW equ 0x8f8
THUNK_USER32_GETKEYBOARDLAYOUTNAMEA equ 0x8f9
THUNK_USER32_GETKEYBOARDLAYOUTNAMEW equ 0x8fa
THUNK_USER32_GETKEYSTATE equ 0x8fb
THUNK_USER32_GETLASTACTIVEPOPUP equ 0x8fc
THUNK_USER32_GETLASTINPUTINFO equ 0x8fd
THUNK_USER32_GETLISTBOXINFO equ 0x8fe
THUNK_USER32_GETRAWINPUTBUFFER equ 0x8ff
THUNK_USER32_GETRAWINPUTDATA equ 0x900
THUNK_USER32_GETRAWINPUTDEVICEINFOA equ 0x901
THUNK_USER32_GETRAWINPUTDEVICEINFOW equ 0x902
THUNK_USER32_GETRAWINPUTDEVICELIST equ 0x903
THUNK_USER32_GETREGISTEREDRAWINPUTDEVICES equ 0x904
THUNK_USER32_GETLAYEREDWINDOWATTRIBUTES equ 0x905
THUNK_USER32_GETMENU equ 0x906
THUNK_USER32_GETMENUBARINFO equ 0x907
THUNK_USER32_GETMENUCHECKMARKDIMENSIONS equ 0x908
THUNK_USER32_GETMENUCONTEXTHELPID equ 0x909
THUNK_USER32_GETMENUDEFAULTITEM equ 0x90a
THUNK_USER32_GETMENUINFO equ 0x90b
THUNK_USER32_GETMENUITEMCOUNT equ 0x90c
THUNK_USER32_GETMENUITEMID equ 0x90d
THUNK_USER32_GETMENUITEMINFOA equ 0x90e
THUNK_USER32_GETMENUITEMINFOW equ 0x90f
THUNK_USER32_GETMENUITEMRECT equ 0x910
THUNK_USER32_GETMENUSTATE equ 0x911
THUNK_USER32_GETMENUSTRINGA equ 0x912
THUNK_USER32_GETMENUSTRINGW equ 0x913
THUNK_USER32_GETMESSAGEA equ 0x914
THUNK_USER32_GETMESSAGEW equ 0x915
THUNK_USER32_GETMESSAGEEXTRAINFO equ 0x916
THUNK_USER32_GETMESSAGEPOS equ 0x917
THUNK_USER32_GETMESSAGETIME equ 0x918
THUNK_USER32_GETMONITORINFOA equ 0x919
THUNK_USER32_GETMONITORINFOW equ 0x91a
THUNK_USER32_GETNEXTDLGGROUPITEM equ 0x91b
THUNK_USER32_GETNEXTDLGTABITEM equ 0x91c
THUNK_USER32_GETOPENCLIPBOARDWINDOW equ 0x91d
THUNK_USER32_GETPARENT equ 0x91e
THUNK_USER32_GETPHYSICALCURSORPOS equ 0x91f
THUNK_USER32_GETPOINTERDEVICE equ 0x920
THUNK_USER32_GETPOINTERDEVICECURSORS equ 0x921
THUNK_USER32_GETPOINTERDEVICEPROPERTIES equ 0x922
THUNK_USER32_GETPOINTERDEVICERECTS equ 0x923
THUNK_USER32_GETPOINTERDEVICES equ 0x924
THUNK_USER32_GETPOINTERINPUTTRANSFORM equ 0x925
THUNK_USER32_GETPOINTERPENINFO equ 0x926
THUNK_USER32_GETPOINTERPENINFOHISTORY equ 0x927
THUNK_USER32_GETPOINTERFRAMEPENINFO equ 0x928
THUNK_USER32_GETPOINTERFRAMEPENINFOHISTORY equ 0x929
THUNK_USER32_GETPOINTERTYPE equ 0x92a
THUNK_USER32_GETPOINTERCURSORID equ 0x92b
THUNK_USER32_GETPOINTERINFO equ 0x92c
THUNK_USER32_GETPOINTERINFOHISTORY equ 0x92d
THUNK_USER32_GETPOINTERFRAMEINFO equ 0x92e
THUNK_USER32_GETPOINTERFRAMEINFOHISTORY equ 0x92f
THUNK_USER32_GETPOINTERTOUCHINFO equ 0x930
THUNK_USER32_GETPOINTERTOUCHINFOHISTORY equ 0x931
THUNK_USER32_GETPOINTERFRAMETOUCHINFO equ 0x932
THUNK_USER32_GETPOINTERFRAMETOUCHINFOHISTORY equ 0x933
THUNK_USER32_GETPRIORITYCLIPBOARDFORMAT equ 0x934
THUNK_USER32_GETPROCESSDEFAULTLAYOUT equ 0x935
THUNK_USER32_GETPROPA equ 0x936
THUNK_USER32_GETPROPW equ 0x937
THUNK_USER32_GETQUEUESTATUS equ 0x938
THUNK_USER32_GETRAWPOINTERDEVICEDATA equ 0x939
THUNK_USER32_GETSCROLLINFO equ 0x93a
THUNK_USER32_GETSCROLLBARINFO equ 0x93b
THUNK_USER32_GETSCROLLPOS equ 0x93c
THUNK_USER32_GETSCROLLRANGE equ 0x93d
THUNK_USER32_GETSHELLWINDOW equ 0x93e
THUNK_USER32_GETSUBMENU equ 0x93f
THUNK_USER32_GETSYSCOLOR equ 0x940
THUNK_USER32_GETSYSCOLORBRUSH equ 0x941
THUNK_USER32_GETSYSTEMMENU equ 0x942
THUNK_USER32_GETSYSTEMMETRICS equ 0x943
THUNK_USER32_GETSYSTEMMETRICSFORDPI equ 0x944
THUNK_USER32_GETTABBEDTEXTEXTENTA equ 0x945
THUNK_USER32_GETTABBEDTEXTEXTENTW equ 0x946
THUNK_USER32_GETTITLEBARINFO equ 0x947
THUNK_USER32_GETTHREADDESKTOP equ 0x948
THUNK_USER32_GETTHREADDPIAWARENESSCONTEXT equ 0x949
THUNK_USER32_GETTOPWINDOW equ 0x94a
THUNK_USER32_GETTOUCHINPUTINFO equ 0x94b
THUNK_USER32_GETUPDATERECT equ 0x94c
THUNK_USER32_GETUPDATERGN equ 0x94d
THUNK_USER32_GETUPDATEDCLIPBOARDFORMATS equ 0x94e
THUNK_USER32_GETUSEROBJECTINFORMATIONA equ 0x94f
THUNK_USER32_GETUSEROBJECTINFORMATIONW equ 0x950
THUNK_USER32_GETUSEROBJECTSECURITY equ 0x951
THUNK_USER32_GETWINDOW equ 0x952
THUNK_USER32_GETWINDOWCONTEXTHELPID equ 0x953
THUNK_USER32_GETWINDOWDC equ 0x954
THUNK_USER32_GETWINDOWDISPLAYAFFINITY equ 0x955
THUNK_USER32_GETWINDOWDPIAWARENESSCONTEXT equ 0x956
THUNK_USER32_GETWINDOWFEEDBACKSETTING equ 0x957
THUNK_USER32_GETWINDOWINFO equ 0x958
THUNK_USER32_GETWINDOWLONGA equ 0x959
THUNK_USER32_GETWINDOWLONGW equ 0x95a
THUNK_USER32_GETWINDOWMODULEFILENAMEA equ 0x95b
THUNK_USER32_GETWINDOWMODULEFILENAMEW equ 0x95c
THUNK_USER32_GETWINDOWPLACEMENT equ 0x95d
THUNK_USER32_GETWINDOWRECT equ 0x95e
THUNK_USER32_GETWINDOWRGNBOX equ 0x95f
THUNK_USER32_GETWINDOWRGN equ 0x960
THUNK_USER32_GETPROCESSWINDOWSTATION equ 0x961
THUNK_USER32_GETWINDOWTEXTA equ 0x962
THUNK_USER32_GETWINDOWTEXTW equ 0x963
THUNK_USER32_GETWINDOWTEXTLENGTHA equ 0x964
THUNK_USER32_GETWINDOWTEXTLENGTHW equ 0x965
THUNK_USER32_GETWINDOWTHREADPROCESSID equ 0x966
THUNK_USER32_GETWINDOWWORD equ 0x967
THUNK_USER32_GRAYSTRINGA equ 0x968
THUNK_USER32_GRAYSTRINGW equ 0x969
THUNK_USER32_HIDECARET equ 0x96a
THUNK_USER32_HILITEMENUITEM equ 0x96b
THUNK_USER32_INITIALIZETOUCHINJECTION equ 0x96c
THUNK_USER32_INJECTSYNTHETICPOINTERINPUT equ 0x96d
THUNK_USER32_INJECTTOUCHINPUT equ 0x96e
THUNK_USER32_INSENDMESSAGE equ 0x96f
THUNK_USER32_INSENDMESSAGEEX equ 0x970
THUNK_USER32_INSERTMENUA equ 0x971
THUNK_USER32_INSERTMENUW equ 0x972
THUNK_USER32_INSERTMENUITEMA equ 0x973
THUNK_USER32_INSERTMENUITEMW equ 0x974
THUNK_USER32_INTERNALGETWINDOWTEXT equ 0x975
THUNK_USER32_INTERSECTRECT equ 0x976
THUNK_USER32_INVALIDATERECT equ 0x977
THUNK_USER32_INVALIDATERGN equ 0x978
THUNK_USER32_INVERTRECT equ 0x979
THUNK_USER32_ISCHARALPHAA equ 0x97a
THUNK_USER32_ISCHARALPHAW equ 0x97b
THUNK_USER32_ISCHARALPHANUMERICA equ 0x97c
THUNK_USER32_ISCHARALPHANUMERICW equ 0x97d
THUNK_USER32_ISCHARLOWERA equ 0x97e
THUNK_USER32_ISCHARLOWERW equ 0x97f
THUNK_USER32_ISCHARUPPERA equ 0x980
THUNK_USER32_ISCHARUPPERW equ 0x981
THUNK_USER32_ISCHILD equ 0x982
THUNK_USER32_ISCLIPBOARDFORMATAVAILABLE equ 0x983
THUNK_USER32_ISDIALOGMESSAGEA equ 0x984
THUNK_USER32_ISDIALOGMESSAGEW equ 0x985
THUNK_USER32_ISDLGBUTTONCHECKED equ 0x986
THUNK_USER32_ISGUITHREAD equ 0x987
THUNK_USER32_ISHUNGAPPWINDOW equ 0x988
THUNK_USER32_ISICONIC equ 0x989
THUNK_USER32_ISMENU equ 0x98a
THUNK_USER32_ISMOUSEINPOINTERENABLED equ 0x98b
THUNK_USER32_ISPROCESSDPIAWARE equ 0x98c
THUNK_USER32_ISTOUCHWINDOW equ 0x98d
THUNK_USER32_ISVALIDDPIAWARENESSCONTEXT equ 0x98e
THUNK_USER32_ISWINEVENTHOOKINSTALLED equ 0x98f
THUNK_USER32_ISWINDOW equ 0x990
THUNK_USER32_ISWINDOWENABLED equ 0x991
THUNK_USER32_ISWINDOWUNICODE equ 0x992
THUNK_USER32_ISWINDOWVISIBLE equ 0x993
THUNK_USER32_ISZOOMED equ 0x994
THUNK_USER32_KILLTIMER equ 0x995
THUNK_USER32_LOADACCELERATORSA equ 0x996
THUNK_USER32_LOADACCELERATORSW equ 0x997
THUNK_USER32_LOADBITMAPA equ 0x998
THUNK_USER32_LOADBITMAPW equ 0x999
THUNK_USER32_LOADCURSORA equ 0x99a
THUNK_USER32_LOADCURSORW equ 0x99b
THUNK_USER32_LOADCURSORFROMFILEA equ 0x99c
THUNK_USER32_LOADCURSORFROMFILEW equ 0x99d
THUNK_USER32_LOADICONA equ 0x99e
THUNK_USER32_LOADICONW equ 0x99f
THUNK_USER32_LOADIMAGEA equ 0x9a0
THUNK_USER32_LOADIMAGEW equ 0x9a1
THUNK_USER32_LOADKEYBOARDLAYOUTA equ 0x9a2
THUNK_USER32_LOADKEYBOARDLAYOUTW equ 0x9a3
THUNK_USER32_LOADMENUA equ 0x9a4
THUNK_USER32_LOADMENUW equ 0x9a5
THUNK_USER32_LOADMENUINDIRECTA equ 0x9a6
THUNK_USER32_LOADMENUINDIRECTW equ 0x9a7
THUNK_USER32_LOADSTRINGA equ 0x9a8
THUNK_USER32_LOADSTRINGW equ 0x9a9
THUNK_USER32_LOGICALTOPHYSICALPOINT equ 0x9aa
THUNK_USER32_LOGICALTOPHYSICALPOINTFORPERMONITORDPI equ 0x9ab
THUNK_USER32_LOCKSETFOREGROUNDWINDOW equ 0x9ac
THUNK_USER32_LOCKWINDOWUPDATE equ 0x9ad
THUNK_USER32_LOCKWORKSTATION equ 0x9ae
THUNK_USER32_LOOKUPICONIDFROMDIRECTORY equ 0x9af
THUNK_USER32_LOOKUPICONIDFROMDIRECTORYEX equ 0x9b0
THUNK_USER32_MAPVIRTUALKEYA equ 0x9b1
THUNK_USER32_MAPVIRTUALKEYW equ 0x9b2
THUNK_USER32_MAPVIRTUALKEYEXA equ 0x9b3
THUNK_USER32_MAPVIRTUALKEYEXW equ 0x9b4
THUNK_USER32_MAPDIALOGRECT equ 0x9b5
THUNK_USER32_MAPWINDOWPOINTS equ 0x9b6
THUNK_USER32_MENUITEMFROMPOINT equ 0x9b7
THUNK_USER32_MESSAGEBEEP equ 0x9b8
THUNK_USER32_MESSAGEBOXA equ 0x9b9
THUNK_USER32_MESSAGEBOXW equ 0x9ba
THUNK_USER32_MESSAGEBOXEXA equ 0x9bb
THUNK_USER32_MESSAGEBOXEXW equ 0x9bc
THUNK_USER32_MESSAGEBOXINDIRECTA equ 0x9bd
THUNK_USER32_MESSAGEBOXINDIRECTW equ 0x9be
THUNK_USER32_MODIFYMENUA equ 0x9bf
THUNK_USER32_MODIFYMENUW equ 0x9c0
THUNK_USER32_MONITORFROMPOINT equ 0x9c1
THUNK_USER32_MONITORFROMRECT equ 0x9c2
THUNK_USER32_MONITORFROMWINDOW equ 0x9c3
THUNK_USER32_MOVEWINDOW equ 0x9c4
THUNK_USER32_MSGWAITFORMULTIPLEOBJECTS equ 0x9c5
THUNK_USER32_MSGWAITFORMULTIPLEOBJECTSEX equ 0x9c6
THUNK_USER32_NOTIFYWINEVENT equ 0x9c7
THUNK_USER32_OEMKEYSCAN equ 0x9c8
THUNK_USER32_OEMTOCHARA equ 0x9c9
THUNK_USER32_OEMTOCHARW equ 0x9ca
THUNK_USER32_OEMTOCHARBUFFA equ 0x9cb
THUNK_USER32_OEMTOCHARBUFFW equ 0x9cc
THUNK_USER32_OPENCLIPBOARD equ 0x9cd
THUNK_USER32_OPENDESKTOPA equ 0x9ce
THUNK_USER32_OPENDESKTOPW equ 0x9cf
THUNK_USER32_OPENICON equ 0x9d0
THUNK_USER32_OPENINPUTDESKTOP equ 0x9d1
THUNK_USER32_OPENWINDOWSTATIONA equ 0x9d2
THUNK_USER32_OPENWINDOWSTATIONW equ 0x9d3
THUNK_USER32_PAINTDESKTOP equ 0x9d4
THUNK_USER32_PACKTOUCHHITTESTINGPROXIMITYEVALUATION equ 0x9d5
THUNK_USER32_PEEKMESSAGEA equ 0x9d6
THUNK_USER32_PEEKMESSAGEW equ 0x9d7
THUNK_USER32_PHYSICALTOLOGICALPOINT equ 0x9d8
THUNK_USER32_PHYSICALTOLOGICALPOINTFORPERMONITORDPI equ 0x9d9
THUNK_USER32_POSTMESSAGEA equ 0x9da
THUNK_USER32_POSTMESSAGEW equ 0x9db
THUNK_USER32_POSTQUITMESSAGE equ 0x9dc
THUNK_USER32_POSTTHREADMESSAGEA equ 0x9dd
THUNK_USER32_POSTTHREADMESSAGEW equ 0x9de
THUNK_USER32_PRINTWINDOW equ 0x9df
THUNK_USER32_PRIVATEEXTRACTICONSA equ 0x9e0
THUNK_USER32_PRIVATEEXTRACTICONSW equ 0x9e1
THUNK_USER32_REALCHILDWINDOWFROMPOINT equ 0x9e2
THUNK_USER32_REALGETWINDOWCLASSA equ 0x9e3
THUNK_USER32_REALGETWINDOWCLASSW equ 0x9e4
THUNK_USER32_REDRAWWINDOW equ 0x9e5
THUNK_USER32_REGISTERCLASSA equ 0x9e6
THUNK_USER32_REGISTERCLASSW equ 0x9e7
THUNK_USER32_REGISTERCLASSEXA equ 0x9e8
THUNK_USER32_REGISTERCLASSEXW equ 0x9e9
THUNK_USER32_REGISTERCLIPBOARDFORMATA equ 0x9ea
THUNK_USER32_REGISTERCLIPBOARDFORMATW equ 0x9eb
THUNK_USER32_REGISTERDEVICENOTIFICATIONA equ 0x9ec
THUNK_USER32_REGISTERDEVICENOTIFICATIONW equ 0x9ed
THUNK_USER32_REGISTERHOTKEY equ 0x9ee
THUNK_USER32_REGISTERPOINTERDEVICENOTIFICATIONS equ 0x9ef
THUNK_USER32_REGISTERPOINTERINPUTTARGET equ 0x9f0
THUNK_USER32_REGISTERPOINTERINPUTTARGETEX equ 0x9f1
THUNK_USER32_REGISTERPOWERSETTINGNOTIFICATION equ 0x9f2
THUNK_USER32_REGISTERRAWINPUTDEVICES equ 0x9f3
THUNK_USER32_REGISTERSHELLHOOKWINDOW equ 0x9f4
THUNK_USER32_REGISTERSUSPENDRESUMENOTIFICATION equ 0x9f5
THUNK_USER32_REGISTERTOUCHHITTESTINGWINDOW equ 0x9f6
THUNK_USER32_REGISTERTOUCHWINDOW equ 0x9f7
THUNK_USER32_REGISTERWINDOWMESSAGEA equ 0x9f8
THUNK_USER32_REGISTERWINDOWMESSAGEW equ 0x9f9
THUNK_USER32_RELEASECAPTURE equ 0x9fa
THUNK_USER32_RELEASEDC equ 0x9fb
THUNK_USER32_REMOVECLIPBOARDFORMATLISTENER equ 0x9fc
THUNK_USER32_REMOVEMENU equ 0x9fd
THUNK_USER32_REMOVEPROPA equ 0x9fe
THUNK_USER32_REMOVEPROPW equ 0x9ff
THUNK_USER32_REPLYMESSAGE equ 0xa00
THUNK_USER32_SCREENTOCLIENT equ 0xa01
THUNK_USER32_SCROLLDC equ 0xa02
THUNK_USER32_SCROLLWINDOW equ 0xa03
THUNK_USER32_SCROLLWINDOWEX equ 0xa04
THUNK_USER32_SENDDLGITEMMESSAGEA equ 0xa05
THUNK_USER32_SENDDLGITEMMESSAGEW equ 0xa06
THUNK_USER32_SENDINPUT equ 0xa07
THUNK_USER32_SENDMESSAGEA equ 0xa08
THUNK_USER32_SENDMESSAGEW equ 0xa09
THUNK_USER32_SENDMESSAGECALLBACKA equ 0xa0a
THUNK_USER32_SENDMESSAGECALLBACKW equ 0xa0b
THUNK_USER32_SENDMESSAGETIMEOUTA equ 0xa0c
THUNK_USER32_SENDMESSAGETIMEOUTW equ 0xa0d
THUNK_USER32_SENDNOTIFYMESSAGEA equ 0xa0e
THUNK_USER32_SENDNOTIFYMESSAGEW equ 0xa0f
THUNK_USER32_SETACTIVEWINDOW equ 0xa10
THUNK_USER32_SETCAPTURE equ 0xa11
THUNK_USER32_SETCARETBLINKTIME equ 0xa12
THUNK_USER32_SETCARETPOS equ 0xa13
THUNK_USER32_SETCLASSLONGA equ 0xa14
THUNK_USER32_SETCLASSLONGW equ 0xa15
THUNK_USER32_SETCLASSWORD equ 0xa16
THUNK_USER32_SETCLIPBOARDDATA equ 0xa17
THUNK_USER32_SETCLIPBOARDVIEWER equ 0xa18
THUNK_USER32_SETCOALESCABLETIMER equ 0xa19
THUNK_USER32_SETCURSOR equ 0xa1a
THUNK_USER32_SETCURSORPOS equ 0xa1b
THUNK_USER32_SETDEBUGERRORLEVEL equ 0xa1c
THUNK_USER32_SETDLGITEMINT equ 0xa1d
THUNK_USER32_SETDLGITEMTEXTA equ 0xa1e
THUNK_USER32_SETDLGITEMTEXTW equ 0xa1f
THUNK_USER32_SETDOUBLECLICKTIME equ 0xa20
THUNK_USER32_SETFOCUS equ 0xa21
THUNK_USER32_SETFOREGROUNDWINDOW equ 0xa22
THUNK_USER32_SETGESTURECONFIG equ 0xa23
THUNK_USER32_SETKEYBOARDSTATE equ 0xa24
THUNK_USER32_SETLASTERROREX equ 0xa25
THUNK_USER32_SETLAYEREDWINDOWATTRIBUTES equ 0xa26
THUNK_USER32_SETMENU equ 0xa27
THUNK_USER32_SETMENUCONTEXTHELPID equ 0xa28
THUNK_USER32_SETMENUDEFAULTITEM equ 0xa29
THUNK_USER32_SETMENUINFO equ 0xa2a
THUNK_USER32_SETMENUITEMBITMAPS equ 0xa2b
THUNK_USER32_SETMENUITEMINFOA equ 0xa2c
THUNK_USER32_SETMENUITEMINFOW equ 0xa2d
THUNK_USER32_SETMESSAGEEXTRAINFO equ 0xa2e
THUNK_USER32_SETMESSAGEQUEUE equ 0xa2f
THUNK_USER32_SETPARENT equ 0xa30
THUNK_USER32_SETPHYSICALCURSORPOS equ 0xa31
THUNK_USER32_SETPROCESSDPIAWARE equ 0xa32
THUNK_USER32_SETPROCESSDEFAULTLAYOUT equ 0xa33
THUNK_USER32_SETPROCESSDPIAWARENESSCONTEXT equ 0xa34
THUNK_USER32_SETPROCESSWINDOWSTATION equ 0xa35
THUNK_USER32_SETPROPA equ 0xa36
THUNK_USER32_SETPROPW equ 0xa37
THUNK_USER32_SETSCROLLINFO equ 0xa38
THUNK_USER32_SETSCROLLPOS equ 0xa39
THUNK_USER32_SETSCROLLRANGE equ 0xa3a
THUNK_USER32_SETSYSTEMCURSOR equ 0xa3b
THUNK_USER32_SETTHREADDESKTOP equ 0xa3c
THUNK_USER32_SETTHREADDPIAWARENESSCONTEXT equ 0xa3d
THUNK_USER32_SETTIMER equ 0xa3e
THUNK_USER32_SETUSEROBJECTINFORMATIONA equ 0xa3f
THUNK_USER32_SETUSEROBJECTINFORMATIONW equ 0xa40
THUNK_USER32_SETUSEROBJECTSECURITY equ 0xa41
THUNK_USER32_SETWINDOWCONTEXTHELPID equ 0xa42
THUNK_USER32_SETWINDOWDISPLAYAFFINITY equ 0xa43
THUNK_USER32_SETWINDOWFEEDBACKSETTING equ 0xa44
THUNK_USER32_SETWINDOWLONGA equ 0xa45
THUNK_USER32_SETWINDOWLONGW equ 0xa46
THUNK_USER32_SETWINDOWPLACEMENT equ 0xa47
THUNK_USER32_SETWINDOWSHOOKA equ 0xa48
THUNK_USER32_SETWINDOWSHOOKW equ 0xa49
THUNK_USER32_SETWINDOWSHOOKEXA equ 0xa4a
THUNK_USER32_SETWINDOWSHOOKEXW equ 0xa4b
THUNK_USER32_SETWINDOWPOS equ 0xa4c
THUNK_USER32_SETWINDOWRGN equ 0xa4d
THUNK_USER32_SETWINDOWTEXTA equ 0xa4e
THUNK_USER32_SETWINDOWTEXTW equ 0xa4f
THUNK_USER32_SETWINDOWWORD equ 0xa50
THUNK_USER32_SETWINEVENTHOOK equ 0xa51
THUNK_USER32_SHOWCARET equ 0xa52
THUNK_USER32_SHOWCURSOR equ 0xa53
THUNK_USER32_SHOWSCROLLBAR equ 0xa54
THUNK_USER32_SHOWOWNEDPOPUPS equ 0xa55
THUNK_USER32_SHOWWINDOW equ 0xa56
THUNK_USER32_SHOWWINDOWASYNC equ 0xa57
THUNK_USER32_SHUTDOWNBLOCKREASONCREATE equ 0xa58
THUNK_USER32_SHUTDOWNBLOCKREASONDESTROY equ 0xa59
THUNK_USER32_SKIPPOINTERFRAMEMESSAGES equ 0xa5a
THUNK_USER32_SUBTRACTRECT equ 0xa5b
THUNK_USER32_SWAPMOUSEBUTTON equ 0xa5c
THUNK_USER32_SWITCHDESKTOP equ 0xa5d
THUNK_USER32_SWITCHTOTHISWINDOW equ 0xa5e
THUNK_USER32_SYSTEMPARAMETERSINFOA equ 0xa5f
THUNK_USER32_SYSTEMPARAMETERSINFOW equ 0xa60
THUNK_USER32_SYSTEMPARAMETERSINFOFORDPI equ 0xa61
THUNK_USER32_TABBEDTEXTOUTA equ 0xa62
THUNK_USER32_TABBEDTEXTOUTW equ 0xa63
THUNK_USER32_TILEWINDOWS equ 0xa64
THUNK_USER32_TOASCII equ 0xa65
THUNK_USER32_TOASCIIEX equ 0xa66
THUNK_USER32_TOUNICODE equ 0xa67
THUNK_USER32_TOUNICODEEX equ 0xa68
THUNK_USER32_TRACKMOUSEEVENT equ 0xa69
THUNK_USER32_TRACKPOPUPMENU equ 0xa6a
THUNK_USER32_TRACKPOPUPMENUEX equ 0xa6b
THUNK_USER32_TRANSLATEACCELERATORA equ 0xa6c
THUNK_USER32_TRANSLATEACCELERATORW equ 0xa6d
THUNK_USER32_TRANSLATEMDISYSACCEL equ 0xa6e
THUNK_USER32_TRANSLATEMESSAGE equ 0xa6f
THUNK_USER32_UNHOOKWINEVENT equ 0xa70
THUNK_USER32_UNHOOKWINDOWSHOOK equ 0xa71
THUNK_USER32_UNHOOKWINDOWSHOOKEX equ 0xa72
THUNK_USER32_UNLOADKEYBOARDLAYOUT equ 0xa73
THUNK_USER32_UNIONRECT equ 0xa74
THUNK_USER32_UNREGISTERCLASSA equ 0xa75
THUNK_USER32_UNREGISTERCLASSW equ 0xa76
THUNK_USER32_UNREGISTERDEVICENOTIFICATION equ 0xa77
THUNK_USER32_UNREGISTERHOTKEY equ 0xa78
THUNK_USER32_UNREGISTERPOINTERINPUTTARGET equ 0xa79
THUNK_USER32_UNREGISTERPOINTERINPUTTARGETEX equ 0xa7a
THUNK_USER32_UNREGISTERPOWERSETTINGNOTIFICATION equ 0xa7b
THUNK_USER32_UNREGISTERSUSPENDRESUMENOTIFICATION equ 0xa7c
THUNK_USER32_UNREGISTERTOUCHWINDOW equ 0xa7d
THUNK_USER32_UPDATEWINDOW equ 0xa7e
THUNK_USER32_USERHANDLEGRANTACCESS equ 0xa7f
THUNK_USER32_VALIDATERECT equ 0xa80
THUNK_USER32_VALIDATERGN equ 0xa81
THUNK_USER32_VKKEYSCANA equ 0xa82
THUNK_USER32_VKKEYSCANW equ 0xa83
THUNK_USER32_VKKEYSCANEXA equ 0xa84
THUNK_USER32_VKKEYSCANEXW equ 0xa85
THUNK_USER32_WAITFORINPUTIDLE equ 0xa86
THUNK_USER32_WAITMESSAGE equ 0xa87
THUNK_USER32_WINDOWFROMDC equ 0xa88
THUNK_USER32_WINDOWFROMPOINT equ 0xa89
THUNK_USER32_WINHELPA equ 0xa8a
THUNK_USER32_WINHELPW equ 0xa8b
THUNK_USER32_KEYBD_EVENT equ 0xa8c
THUNK_USER32_MOUSE_EVENT equ 0xa8d
THUNK_USER32_WSPRINTFA equ 0xa8e
THUNK_USER32_WSPRINTFW equ 0xa8f
THUNK_USER32_SETRECT equ 0xa90
THUNK_USER32_PTINRECT equ 0xa91

SYSCALL_THUNK equ 0x80