global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

global AbortDoc
extern AbortDoc
export AbortDoc

AbortDoc:
	mov eax, THUNK_GDI32_ABORTDOC
	int SYSCALL_THUNK
	ret 0x4

global AbortPath
extern AbortPath
export AbortPath

AbortPath:
	mov eax, THUNK_GDI32_ABORTPATH
	int SYSCALL_THUNK
	ret 0x4

global AddFontResourceA
extern AddFontResourceA
export AddFontResourceA

AddFontResourceA:
	mov eax, THUNK_GDI32_ADDFONTRESOURCEA
	int SYSCALL_THUNK
	ret 0x4

global AddFontResourceW
extern AddFontResourceW
export AddFontResourceW

AddFontResourceW:
	mov eax, THUNK_GDI32_ADDFONTRESOURCEW
	int SYSCALL_THUNK
	ret 0x4

global AngleArc
extern AngleArc
export AngleArc

AngleArc:
	mov eax, THUNK_GDI32_ANGLEARC
	int SYSCALL_THUNK
	ret 0x18

global AnimatePalette
extern AnimatePalette
export AnimatePalette

AnimatePalette:
	mov eax, THUNK_GDI32_ANIMATEPALETTE
	int SYSCALL_THUNK
	ret 0x10

global Arc
extern Arc
export Arc

Arc:
	mov eax, THUNK_GDI32_ARC
	int SYSCALL_THUNK
	ret 0x24

global ArcTo
extern ArcTo
export ArcTo

ArcTo:
	mov eax, THUNK_GDI32_ARCTO
	int SYSCALL_THUNK
	ret 0x24

global BeginPath
extern BeginPath
export BeginPath

BeginPath:
	mov eax, THUNK_GDI32_BEGINPATH
	int SYSCALL_THUNK
	ret 0x4

global BitBlt
extern BitBlt
export BitBlt

BitBlt:
	mov eax, THUNK_GDI32_BITBLT
	int SYSCALL_THUNK
	ret 0x24

global CancelDC
extern CancelDC
export CancelDC

CancelDC:
	mov eax, THUNK_GDI32_CANCELDC
	int SYSCALL_THUNK
	ret 0x4

global CheckColorsInGamut
extern CheckColorsInGamut
export CheckColorsInGamut

CheckColorsInGamut:
	mov eax, THUNK_GDI32_CHECKCOLORSINGAMUT
	int SYSCALL_THUNK
	ret 0x10

global ChoosePixelFormat
extern ChoosePixelFormat
export ChoosePixelFormat

ChoosePixelFormat:
	mov eax, THUNK_GDI32_CHOOSEPIXELFORMAT
	int SYSCALL_THUNK
	ret 0x8

global Chord
extern Chord
export Chord

Chord:
	mov eax, THUNK_GDI32_CHORD
	int SYSCALL_THUNK
	ret 0x24

global CloseEnhMetaFile
extern CloseEnhMetaFile
export CloseEnhMetaFile

CloseEnhMetaFile:
	mov eax, THUNK_GDI32_CLOSEENHMETAFILE
	int SYSCALL_THUNK
	ret 0x4

global CloseFigure
extern CloseFigure
export CloseFigure

CloseFigure:
	mov eax, THUNK_GDI32_CLOSEFIGURE
	int SYSCALL_THUNK
	ret 0x4

global CloseMetaFile
extern CloseMetaFile
export CloseMetaFile

CloseMetaFile:
	mov eax, THUNK_GDI32_CLOSEMETAFILE
	int SYSCALL_THUNK
	ret 0x4

global ColorMatchToTarget
extern ColorMatchToTarget
export ColorMatchToTarget

ColorMatchToTarget:
	mov eax, THUNK_GDI32_COLORMATCHTOTARGET
	int SYSCALL_THUNK
	ret 0xc

global CombineRgn
extern CombineRgn
export CombineRgn

CombineRgn:
	mov eax, THUNK_GDI32_COMBINERGN
	int SYSCALL_THUNK
	ret 0x10

global CombineTransform
extern CombineTransform
export CombineTransform

CombineTransform:
	mov eax, THUNK_GDI32_COMBINETRANSFORM
	int SYSCALL_THUNK
	ret 0xc

global CopyEnhMetaFileA
extern CopyEnhMetaFileA
export CopyEnhMetaFileA

CopyEnhMetaFileA:
	mov eax, THUNK_GDI32_COPYENHMETAFILEA
	int SYSCALL_THUNK
	ret 0x8

global CopyEnhMetaFileW
extern CopyEnhMetaFileW
export CopyEnhMetaFileW

CopyEnhMetaFileW:
	mov eax, THUNK_GDI32_COPYENHMETAFILEW
	int SYSCALL_THUNK
	ret 0x8

global CopyMetaFileA
extern CopyMetaFileA
export CopyMetaFileA

CopyMetaFileA:
	mov eax, THUNK_GDI32_COPYMETAFILEA
	int SYSCALL_THUNK
	ret 0x8

global CopyMetaFileW
extern CopyMetaFileW
export CopyMetaFileW

CopyMetaFileW:
	mov eax, THUNK_GDI32_COPYMETAFILEW
	int SYSCALL_THUNK
	ret 0x8

global CreateBitmap
extern CreateBitmap
export CreateBitmap

CreateBitmap:
	mov eax, THUNK_GDI32_CREATEBITMAP
	int SYSCALL_THUNK
	ret 0x14

global CreateBitmapIndirect
extern CreateBitmapIndirect
export CreateBitmapIndirect

CreateBitmapIndirect:
	mov eax, THUNK_GDI32_CREATEBITMAPINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreateBrushIndirect
extern CreateBrushIndirect
export CreateBrushIndirect

CreateBrushIndirect:
	mov eax, THUNK_GDI32_CREATEBRUSHINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreateColorSpaceA
extern CreateColorSpaceA
export CreateColorSpaceA

CreateColorSpaceA:
	mov eax, THUNK_GDI32_CREATECOLORSPACEA
	int SYSCALL_THUNK
	ret 0x4

global CreateColorSpaceW
extern CreateColorSpaceW
export CreateColorSpaceW

CreateColorSpaceW:
	mov eax, THUNK_GDI32_CREATECOLORSPACEW
	int SYSCALL_THUNK
	ret 0x4

global CreateCompatibleBitmap
extern CreateCompatibleBitmap
export CreateCompatibleBitmap

CreateCompatibleBitmap:
	mov eax, THUNK_GDI32_CREATECOMPATIBLEBITMAP
	int SYSCALL_THUNK
	ret 0xc

global CreateCompatibleDC
extern CreateCompatibleDC
export CreateCompatibleDC

CreateCompatibleDC:
	mov eax, THUNK_GDI32_CREATECOMPATIBLEDC
	int SYSCALL_THUNK
	ret 0x4

global CreateDCA
extern CreateDCA
export CreateDCA

CreateDCA:
	mov eax, THUNK_GDI32_CREATEDCA
	int SYSCALL_THUNK
	ret 0x10

global CreateDCW
extern CreateDCW
export CreateDCW

CreateDCW:
	mov eax, THUNK_GDI32_CREATEDCW
	int SYSCALL_THUNK
	ret 0x10

global CreateDIBPatternBrush
extern CreateDIBPatternBrush
export CreateDIBPatternBrush

CreateDIBPatternBrush:
	mov eax, THUNK_GDI32_CREATEDIBPATTERNBRUSH
	int SYSCALL_THUNK
	ret 0x8

global CreateDIBPatternBrushPt
extern CreateDIBPatternBrushPt
export CreateDIBPatternBrushPt

CreateDIBPatternBrushPt:
	mov eax, THUNK_GDI32_CREATEDIBPATTERNBRUSHPT
	int SYSCALL_THUNK
	ret 0x8

global CreateDIBSection
extern CreateDIBSection
export CreateDIBSection

CreateDIBSection:
	mov eax, THUNK_GDI32_CREATEDIBSECTION
	int SYSCALL_THUNK
	ret 0x18

global CreateDIBitmap
extern CreateDIBitmap
export CreateDIBitmap

CreateDIBitmap:
	mov eax, THUNK_GDI32_CREATEDIBITMAP
	int SYSCALL_THUNK
	ret 0x18

global CreateEllipticRgn
extern CreateEllipticRgn
export CreateEllipticRgn

CreateEllipticRgn:
	mov eax, THUNK_GDI32_CREATEELLIPTICRGN
	int SYSCALL_THUNK
	ret 0x10

global CreateEllipticRgnIndirect
extern CreateEllipticRgnIndirect
export CreateEllipticRgnIndirect

CreateEllipticRgnIndirect:
	mov eax, THUNK_GDI32_CREATEELLIPTICRGNINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreateEnhMetaFileA
extern CreateEnhMetaFileA
export CreateEnhMetaFileA

CreateEnhMetaFileA:
	mov eax, THUNK_GDI32_CREATEENHMETAFILEA
	int SYSCALL_THUNK
	ret 0x10

global CreateFontA
extern CreateFontA
export CreateFontA

CreateFontA:
	mov eax, THUNK_GDI32_CREATEFONTA
	int SYSCALL_THUNK
	ret 0x38

global CreateFontIndirectA
extern CreateFontIndirectA
export CreateFontIndirectA

CreateFontIndirectA:
	mov eax, THUNK_GDI32_CREATEFONTINDIRECTA
	int SYSCALL_THUNK
	ret 0x4

global CreateFontIndirectW
extern CreateFontIndirectW
export CreateFontIndirectW

CreateFontIndirectW:
	mov eax, THUNK_GDI32_CREATEFONTINDIRECTW
	int SYSCALL_THUNK
	ret 0x4

global CreateFontW
extern CreateFontW
export CreateFontW

CreateFontW:
	mov eax, THUNK_GDI32_CREATEFONTW
	int SYSCALL_THUNK
	ret 0x38

global CreateHalftonePalette
extern CreateHalftonePalette
export CreateHalftonePalette

CreateHalftonePalette:
	mov eax, THUNK_GDI32_CREATEHALFTONEPALETTE
	int SYSCALL_THUNK
	ret 0x4

global CreateHatchBrush
extern CreateHatchBrush
export CreateHatchBrush

CreateHatchBrush:
	mov eax, THUNK_GDI32_CREATEHATCHBRUSH
	int SYSCALL_THUNK
	ret 0x8

global CreateICA
extern CreateICA
export CreateICA

CreateICA:
	mov eax, THUNK_GDI32_CREATEICA
	int SYSCALL_THUNK
	ret 0x10

global CreateICW
extern CreateICW
export CreateICW

CreateICW:
	mov eax, THUNK_GDI32_CREATEICW
	int SYSCALL_THUNK
	ret 0x10

global CreateMetaFileA
extern CreateMetaFileA
export CreateMetaFileA

CreateMetaFileA:
	mov eax, THUNK_GDI32_CREATEMETAFILEA
	int SYSCALL_THUNK
	ret 0x4

global CreateMetaFileW
extern CreateMetaFileW
export CreateMetaFileW

CreateMetaFileW:
	mov eax, THUNK_GDI32_CREATEMETAFILEW
	int SYSCALL_THUNK
	ret 0x4

global CreatePalette
extern CreatePalette
export CreatePalette

CreatePalette:
	mov eax, THUNK_GDI32_CREATEPALETTE
	int SYSCALL_THUNK
	ret 0x4

global CreatePatternBrush
extern CreatePatternBrush
export CreatePatternBrush

CreatePatternBrush:
	mov eax, THUNK_GDI32_CREATEPATTERNBRUSH
	int SYSCALL_THUNK
	ret 0x4

global CreatePen
extern CreatePen
export CreatePen

CreatePen:
	mov eax, THUNK_GDI32_CREATEPEN
	int SYSCALL_THUNK
	ret 0xc

global CreatePenIndirect
extern CreatePenIndirect
export CreatePenIndirect

CreatePenIndirect:
	mov eax, THUNK_GDI32_CREATEPENINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreatePolyPolygonRgn
extern CreatePolyPolygonRgn
export CreatePolyPolygonRgn

CreatePolyPolygonRgn:
	mov eax, THUNK_GDI32_CREATEPOLYPOLYGONRGN
	int SYSCALL_THUNK
	ret 0x10

global CreatePolygonRgn
extern CreatePolygonRgn
export CreatePolygonRgn

CreatePolygonRgn:
	mov eax, THUNK_GDI32_CREATEPOLYGONRGN
	int SYSCALL_THUNK
	ret 0xc

global CreateRectRgn
extern CreateRectRgn
export CreateRectRgn

CreateRectRgn:
	mov eax, THUNK_GDI32_CREATERECTRGN
	int SYSCALL_THUNK
	ret 0x10

global CreateRectRgnIndirect
extern CreateRectRgnIndirect
export CreateRectRgnIndirect

CreateRectRgnIndirect:
	mov eax, THUNK_GDI32_CREATERECTRGNINDIRECT
	int SYSCALL_THUNK
	ret 0x4

global CreateRoundRectRgn
extern CreateRoundRectRgn
export CreateRoundRectRgn

CreateRoundRectRgn:
	mov eax, THUNK_GDI32_CREATEROUNDRECTRGN
	int SYSCALL_THUNK
	ret 0x18

global CreateScalableFontResourceA
extern CreateScalableFontResourceA
export CreateScalableFontResourceA

CreateScalableFontResourceA:
	mov eax, THUNK_GDI32_CREATESCALABLEFONTRESOURCEA
	int SYSCALL_THUNK
	ret 0x10

global CreateScalableFontResourceW
extern CreateScalableFontResourceW
export CreateScalableFontResourceW

CreateScalableFontResourceW:
	mov eax, THUNK_GDI32_CREATESCALABLEFONTRESOURCEW
	int SYSCALL_THUNK
	ret 0x10

global CreateSolidBrush
extern CreateSolidBrush
export CreateSolidBrush

CreateSolidBrush:
	mov eax, THUNK_GDI32_CREATESOLIDBRUSH
	int SYSCALL_THUNK
	ret 0x4

global DPtoLP
extern DPtoLP
export DPtoLP

DPtoLP:
	mov eax, THUNK_GDI32_DPTOLP
	int SYSCALL_THUNK
	ret 0xc

global DeleteColorSpace
extern DeleteColorSpace
export DeleteColorSpace

DeleteColorSpace:
	mov eax, THUNK_GDI32_DELETECOLORSPACE
	int SYSCALL_THUNK
	ret 0x4

global DeleteDC
extern DeleteDC
export DeleteDC

DeleteDC:
	mov eax, THUNK_GDI32_DELETEDC
	int SYSCALL_THUNK
	ret 0x4

global DeleteEnhMetaFile
extern DeleteEnhMetaFile
export DeleteEnhMetaFile

DeleteEnhMetaFile:
	mov eax, THUNK_GDI32_DELETEENHMETAFILE
	int SYSCALL_THUNK
	ret 0x4

global DeleteMetaFile
extern DeleteMetaFile
export DeleteMetaFile

DeleteMetaFile:
	mov eax, THUNK_GDI32_DELETEMETAFILE
	int SYSCALL_THUNK
	ret 0x4

global DeleteObject
extern DeleteObject
export DeleteObject

DeleteObject:
	mov eax, THUNK_GDI32_DELETEOBJECT
	int SYSCALL_THUNK
	ret 0x4

global DescribePixelFormat
extern DescribePixelFormat
export DescribePixelFormat

DescribePixelFormat:
	mov eax, THUNK_GDI32_DESCRIBEPIXELFORMAT
	int SYSCALL_THUNK
	ret 0x10

global DrawEscape
extern DrawEscape
export DrawEscape

DrawEscape:
	mov eax, THUNK_GDI32_DRAWESCAPE
	int SYSCALL_THUNK
	ret 0x10

global Ellipse
extern Ellipse
export Ellipse

Ellipse:
	mov eax, THUNK_GDI32_ELLIPSE
	int SYSCALL_THUNK
	ret 0x14

global EndDoc
extern EndDoc
export EndDoc

EndDoc:
	mov eax, THUNK_GDI32_ENDDOC
	int SYSCALL_THUNK
	ret 0x4

global EndPath
extern EndPath
export EndPath

EndPath:
	mov eax, THUNK_GDI32_ENDPATH
	int SYSCALL_THUNK
	ret 0x4

global EnumEnhMetaFile
extern EnumEnhMetaFile
export EnumEnhMetaFile

EnumEnhMetaFile:
	mov eax, THUNK_GDI32_ENUMENHMETAFILE
	int SYSCALL_THUNK
	ret 0x14

global EnumFontFamiliesA
extern EnumFontFamiliesA
export EnumFontFamiliesA

EnumFontFamiliesA:
	mov eax, THUNK_GDI32_ENUMFONTFAMILIESA
	int SYSCALL_THUNK
	ret 0x10

global EnumFontFamiliesW
extern EnumFontFamiliesW
export EnumFontFamiliesW

EnumFontFamiliesW:
	mov eax, THUNK_GDI32_ENUMFONTFAMILIESW
	int SYSCALL_THUNK
	ret 0x10

global EnumFontFamiliesExA
extern EnumFontFamiliesExA
export EnumFontFamiliesExA

EnumFontFamiliesExA:
	mov eax, THUNK_GDI32_ENUMFONTFAMILIESEXA
	int SYSCALL_THUNK
	ret 0x14

global EnumFontFamiliesExW
extern EnumFontFamiliesExW
export EnumFontFamiliesExW

EnumFontFamiliesExW:
	mov eax, THUNK_GDI32_ENUMFONTFAMILIESEXW
	int SYSCALL_THUNK
	ret 0x14

global EnumFontsA
extern EnumFontsA
export EnumFontsA

EnumFontsA:
	mov eax, THUNK_GDI32_ENUMFONTSA
	int SYSCALL_THUNK
	ret 0x10

global EnumFontsW
extern EnumFontsW
export EnumFontsW

EnumFontsW:
	mov eax, THUNK_GDI32_ENUMFONTSW
	int SYSCALL_THUNK
	ret 0x10

global EnumICMProfilesA
extern EnumICMProfilesA
export EnumICMProfilesA

EnumICMProfilesA:
	mov eax, THUNK_GDI32_ENUMICMPROFILESA
	int SYSCALL_THUNK
	ret 0xc

global EnumICMProfilesW
extern EnumICMProfilesW
export EnumICMProfilesW

EnumICMProfilesW:
	mov eax, THUNK_GDI32_ENUMICMPROFILESW
	int SYSCALL_THUNK
	ret 0xc

global EnumMetaFile
extern EnumMetaFile
export EnumMetaFile

EnumMetaFile:
	mov eax, THUNK_GDI32_ENUMMETAFILE
	int SYSCALL_THUNK
	ret 0x10

global EnumObjects
extern EnumObjects
export EnumObjects

EnumObjects:
	mov eax, THUNK_GDI32_ENUMOBJECTS
	int SYSCALL_THUNK
	ret 0x10

global EqualRgn
extern EqualRgn
export EqualRgn

EqualRgn:
	mov eax, THUNK_GDI32_EQUALRGN
	int SYSCALL_THUNK
	ret 0x8

global Escape
extern Escape
export Escape

Escape:
	mov eax, THUNK_GDI32_ESCAPE
	int SYSCALL_THUNK
	ret 0x14

global ExcludeClipRect
extern ExcludeClipRect
export ExcludeClipRect

ExcludeClipRect:
	mov eax, THUNK_GDI32_EXCLUDECLIPRECT
	int SYSCALL_THUNK
	ret 0x14

global ExtCreatePen
extern ExtCreatePen
export ExtCreatePen

ExtCreatePen:
	mov eax, THUNK_GDI32_EXTCREATEPEN
	int SYSCALL_THUNK
	ret 0x14

global ExtCreateRegion
extern ExtCreateRegion
export ExtCreateRegion

ExtCreateRegion:
	mov eax, THUNK_GDI32_EXTCREATEREGION
	int SYSCALL_THUNK
	ret 0xc

global ExtEscape
extern ExtEscape
export ExtEscape

ExtEscape:
	mov eax, THUNK_GDI32_EXTESCAPE
	int SYSCALL_THUNK
	ret 0x18

global ExtFloodFill
extern ExtFloodFill
export ExtFloodFill

ExtFloodFill:
	mov eax, THUNK_GDI32_EXTFLOODFILL
	int SYSCALL_THUNK
	ret 0x14

global ExtSelectClipRgn
extern ExtSelectClipRgn
export ExtSelectClipRgn

ExtSelectClipRgn:
	mov eax, THUNK_GDI32_EXTSELECTCLIPRGN
	int SYSCALL_THUNK
	ret 0xc

global ExtTextOutA
extern ExtTextOutA
export ExtTextOutA

ExtTextOutA:
	mov eax, THUNK_GDI32_EXTTEXTOUTA
	int SYSCALL_THUNK
	ret 0x20

global ExtTextOutW
extern ExtTextOutW
export ExtTextOutW

ExtTextOutW:
	mov eax, THUNK_GDI32_EXTTEXTOUTW
	int SYSCALL_THUNK
	ret 0x20

global FillPath
extern FillPath
export FillPath

FillPath:
	mov eax, THUNK_GDI32_FILLPATH
	int SYSCALL_THUNK
	ret 0x4

global FillRgn
extern FillRgn
export FillRgn

FillRgn:
	mov eax, THUNK_GDI32_FILLRGN
	int SYSCALL_THUNK
	ret 0xc

global FixBrushOrgEx
extern FixBrushOrgEx
export FixBrushOrgEx

FixBrushOrgEx:
	mov eax, THUNK_GDI32_FIXBRUSHORGEX
	int SYSCALL_THUNK
	ret 0x10

global FlattenPath
extern FlattenPath
export FlattenPath

FlattenPath:
	mov eax, THUNK_GDI32_FLATTENPATH
	int SYSCALL_THUNK
	ret 0x4

global FloodFill
extern FloodFill
export FloodFill

FloodFill:
	mov eax, THUNK_GDI32_FLOODFILL
	int SYSCALL_THUNK
	ret 0x10

global FrameRgn
extern FrameRgn
export FrameRgn

FrameRgn:
	mov eax, THUNK_GDI32_FRAMERGN
	int SYSCALL_THUNK
	ret 0x14

global GetArcDirection
extern GetArcDirection
export GetArcDirection

GetArcDirection:
	mov eax, THUNK_GDI32_GETARCDIRECTION
	int SYSCALL_THUNK
	ret 0x4

global GetAspectRatioFilterEx
extern GetAspectRatioFilterEx
export GetAspectRatioFilterEx

GetAspectRatioFilterEx:
	mov eax, THUNK_GDI32_GETASPECTRATIOFILTEREX
	int SYSCALL_THUNK
	ret 0x8

global GetBitmapBits
extern GetBitmapBits
export GetBitmapBits

GetBitmapBits:
	mov eax, THUNK_GDI32_GETBITMAPBITS
	int SYSCALL_THUNK
	ret 0xc

global GetBitmapDimensionEx
extern GetBitmapDimensionEx
export GetBitmapDimensionEx

GetBitmapDimensionEx:
	mov eax, THUNK_GDI32_GETBITMAPDIMENSIONEX
	int SYSCALL_THUNK
	ret 0x8

global GetBrushOrgEx
extern GetBrushOrgEx
export GetBrushOrgEx

GetBrushOrgEx:
	mov eax, THUNK_GDI32_GETBRUSHORGEX
	int SYSCALL_THUNK
	ret 0x8

global GetBkColor
extern GetBkColor
export GetBkColor

GetBkColor:
	mov eax, THUNK_GDI32_GETBKCOLOR
	int SYSCALL_THUNK
	ret 0x4

global GetBkMode
extern GetBkMode
export GetBkMode

GetBkMode:
	mov eax, THUNK_GDI32_GETBKMODE
	int SYSCALL_THUNK
	ret 0x4

global GetBoundsRect
extern GetBoundsRect
export GetBoundsRect

GetBoundsRect:
	mov eax, THUNK_GDI32_GETBOUNDSRECT
	int SYSCALL_THUNK
	ret 0xc

global GetCharABCWidthsA
extern GetCharABCWidthsA
export GetCharABCWidthsA

GetCharABCWidthsA:
	mov eax, THUNK_GDI32_GETCHARABCWIDTHSA
	int SYSCALL_THUNK
	ret 0x10

global GetCharABCWidthsW
extern GetCharABCWidthsW
export GetCharABCWidthsW

GetCharABCWidthsW:
	mov eax, THUNK_GDI32_GETCHARABCWIDTHSW
	int SYSCALL_THUNK
	ret 0x10

global GetCharABCWidthsFloatA
extern GetCharABCWidthsFloatA
export GetCharABCWidthsFloatA

GetCharABCWidthsFloatA:
	mov eax, THUNK_GDI32_GETCHARABCWIDTHSFLOATA
	int SYSCALL_THUNK
	ret 0x10

global GetCharABCWidthsFloatW
extern GetCharABCWidthsFloatW
export GetCharABCWidthsFloatW

GetCharABCWidthsFloatW:
	mov eax, THUNK_GDI32_GETCHARABCWIDTHSFLOATW
	int SYSCALL_THUNK
	ret 0x10

global GetCharABCWidthsI
extern GetCharABCWidthsI
export GetCharABCWidthsI

GetCharABCWidthsI:
	mov eax, THUNK_GDI32_GETCHARABCWIDTHSI
	int SYSCALL_THUNK
	ret 0x14

global GetCharacterPlacementA
extern GetCharacterPlacementA
export GetCharacterPlacementA

GetCharacterPlacementA:
	mov eax, THUNK_GDI32_GETCHARACTERPLACEMENTA
	int SYSCALL_THUNK
	ret 0x18

global GetCharacterPlacementW
extern GetCharacterPlacementW
export GetCharacterPlacementW

GetCharacterPlacementW:
	mov eax, THUNK_GDI32_GETCHARACTERPLACEMENTW
	int SYSCALL_THUNK
	ret 0x18

global GetCharWidth32A
extern GetCharWidth32A
export GetCharWidth32A

GetCharWidth32A:
	mov eax, THUNK_GDI32_GETCHARWIDTH32A
	int SYSCALL_THUNK
	ret 0x10

global GetCharWidth32W
extern GetCharWidth32W
export GetCharWidth32W

GetCharWidth32W:
	mov eax, THUNK_GDI32_GETCHARWIDTH32W
	int SYSCALL_THUNK
	ret 0x10

global GetCharWidthA
extern GetCharWidthA
export GetCharWidthA

GetCharWidthA:
	mov eax, THUNK_GDI32_GETCHARWIDTHA
	int SYSCALL_THUNK
	ret 0x10

global GetCharWidthI
extern GetCharWidthI
export GetCharWidthI

GetCharWidthI:
	mov eax, THUNK_GDI32_GETCHARWIDTHI
	int SYSCALL_THUNK
	ret 0x14

global GetCharWidthW
extern GetCharWidthW
export GetCharWidthW

GetCharWidthW:
	mov eax, THUNK_GDI32_GETCHARWIDTHW
	int SYSCALL_THUNK
	ret 0x10

global GetCharWidthFloatA
extern GetCharWidthFloatA
export GetCharWidthFloatA

GetCharWidthFloatA:
	mov eax, THUNK_GDI32_GETCHARWIDTHFLOATA
	int SYSCALL_THUNK
	ret 0x10

global GetCharWidthFloatW
extern GetCharWidthFloatW
export GetCharWidthFloatW

GetCharWidthFloatW:
	mov eax, THUNK_GDI32_GETCHARWIDTHFLOATW
	int SYSCALL_THUNK
	ret 0x10

global GetClipBox
extern GetClipBox
export GetClipBox

GetClipBox:
	mov eax, THUNK_GDI32_GETCLIPBOX
	int SYSCALL_THUNK
	ret 0x8

global GetClipRgn
extern GetClipRgn
export GetClipRgn

GetClipRgn:
	mov eax, THUNK_GDI32_GETCLIPRGN
	int SYSCALL_THUNK
	ret 0x8

global GetColorAdjustment
extern GetColorAdjustment
export GetColorAdjustment

GetColorAdjustment:
	mov eax, THUNK_GDI32_GETCOLORADJUSTMENT
	int SYSCALL_THUNK
	ret 0x8

global GetColorSpace
extern GetColorSpace
export GetColorSpace

GetColorSpace:
	mov eax, THUNK_GDI32_GETCOLORSPACE
	int SYSCALL_THUNK
	ret 0x4

global GetCurrentObject
extern GetCurrentObject
export GetCurrentObject

GetCurrentObject:
	mov eax, THUNK_GDI32_GETCURRENTOBJECT
	int SYSCALL_THUNK
	ret 0x8

global GetCurrentPositionEx
extern GetCurrentPositionEx
export GetCurrentPositionEx

GetCurrentPositionEx:
	mov eax, THUNK_GDI32_GETCURRENTPOSITIONEX
	int SYSCALL_THUNK
	ret 0x8

global GetDeviceCaps
extern GetDeviceCaps
export GetDeviceCaps

GetDeviceCaps:
	mov eax, THUNK_GDI32_GETDEVICECAPS
	int SYSCALL_THUNK
	ret 0x8

global GetDeviceGammaRamp
extern GetDeviceGammaRamp
export GetDeviceGammaRamp

GetDeviceGammaRamp:
	mov eax, THUNK_GDI32_GETDEVICEGAMMARAMP
	int SYSCALL_THUNK
	ret 0x8

global GetDCBrushColor
extern GetDCBrushColor
export GetDCBrushColor

GetDCBrushColor:
	mov eax, THUNK_GDI32_GETDCBRUSHCOLOR
	int SYSCALL_THUNK
	ret 0x4

global GetDCOrgEx
extern GetDCOrgEx
export GetDCOrgEx

GetDCOrgEx:
	mov eax, THUNK_GDI32_GETDCORGEX
	int SYSCALL_THUNK
	ret 0x8

global GetDCPenColor
extern GetDCPenColor
export GetDCPenColor

GetDCPenColor:
	mov eax, THUNK_GDI32_GETDCPENCOLOR
	int SYSCALL_THUNK
	ret 0x4

global GetDIBColorTable
extern GetDIBColorTable
export GetDIBColorTable

GetDIBColorTable:
	mov eax, THUNK_GDI32_GETDIBCOLORTABLE
	int SYSCALL_THUNK
	ret 0x10

global GetDIBits
extern GetDIBits
export GetDIBits

GetDIBits:
	mov eax, THUNK_GDI32_GETDIBITS
	int SYSCALL_THUNK
	ret 0x1c

global GetEnhMetaFileA
extern GetEnhMetaFileA
export GetEnhMetaFileA

GetEnhMetaFileA:
	mov eax, THUNK_GDI32_GETENHMETAFILEA
	int SYSCALL_THUNK
	ret 0x4

global GetEnhMetaFileW
extern GetEnhMetaFileW
export GetEnhMetaFileW

GetEnhMetaFileW:
	mov eax, THUNK_GDI32_GETENHMETAFILEW
	int SYSCALL_THUNK
	ret 0x4

global GetEnhMetaFileBits
extern GetEnhMetaFileBits
export GetEnhMetaFileBits

GetEnhMetaFileBits:
	mov eax, THUNK_GDI32_GETENHMETAFILEBITS
	int SYSCALL_THUNK
	ret 0xc

global GetEnhMetaFileDescriptionA
extern GetEnhMetaFileDescriptionA
export GetEnhMetaFileDescriptionA

GetEnhMetaFileDescriptionA:
	mov eax, THUNK_GDI32_GETENHMETAFILEDESCRIPTIONA
	int SYSCALL_THUNK
	ret 0xc

global GetEnhMetaFileDescriptionW
extern GetEnhMetaFileDescriptionW
export GetEnhMetaFileDescriptionW

GetEnhMetaFileDescriptionW:
	mov eax, THUNK_GDI32_GETENHMETAFILEDESCRIPTIONW
	int SYSCALL_THUNK
	ret 0xc

global GetEnhMetaFileHeader
extern GetEnhMetaFileHeader
export GetEnhMetaFileHeader

GetEnhMetaFileHeader:
	mov eax, THUNK_GDI32_GETENHMETAFILEHEADER
	int SYSCALL_THUNK
	ret 0xc

global GetEnhMetaFilePaletteEntries
extern GetEnhMetaFilePaletteEntries
export GetEnhMetaFilePaletteEntries

GetEnhMetaFilePaletteEntries:
	mov eax, THUNK_GDI32_GETENHMETAFILEPALETTEENTRIES
	int SYSCALL_THUNK
	ret 0xc

global GetFontData
extern GetFontData
export GetFontData

GetFontData:
	mov eax, THUNK_GDI32_GETFONTDATA
	int SYSCALL_THUNK
	ret 0x14

global GetFontLanguageInfo
extern GetFontLanguageInfo
export GetFontLanguageInfo

GetFontLanguageInfo:
	mov eax, THUNK_GDI32_GETFONTLANGUAGEINFO
	int SYSCALL_THUNK
	ret 0x4

global GetGlyphOutline
extern GetGlyphOutline
export GetGlyphOutline

GetGlyphOutline:
	mov eax, THUNK_GDI32_GETGLYPHOUTLINE
	int SYSCALL_THUNK
	ret 0x1c

global GetGlyphOutlineA
extern GetGlyphOutlineA
export GetGlyphOutlineA

GetGlyphOutlineA:
	mov eax, THUNK_GDI32_GETGLYPHOUTLINEA
	int SYSCALL_THUNK
	ret 0x1c

global GetGlyphOutlineW
extern GetGlyphOutlineW
export GetGlyphOutlineW

GetGlyphOutlineW:
	mov eax, THUNK_GDI32_GETGLYPHOUTLINEW
	int SYSCALL_THUNK
	ret 0x1c

global GetGraphicsMode
extern GetGraphicsMode
export GetGraphicsMode

GetGraphicsMode:
	mov eax, THUNK_GDI32_GETGRAPHICSMODE
	int SYSCALL_THUNK
	ret 0x4

global GetICMProfileA
extern GetICMProfileA
export GetICMProfileA

GetICMProfileA:
	mov eax, THUNK_GDI32_GETICMPROFILEA
	int SYSCALL_THUNK
	ret 0xc

global GetICMProfileW
extern GetICMProfileW
export GetICMProfileW

GetICMProfileW:
	mov eax, THUNK_GDI32_GETICMPROFILEW
	int SYSCALL_THUNK
	ret 0xc

global GetKerningPairsA
extern GetKerningPairsA
export GetKerningPairsA

GetKerningPairsA:
	mov eax, THUNK_GDI32_GETKERNINGPAIRSA
	int SYSCALL_THUNK
	ret 0xc

global GetKerningPairsW
extern GetKerningPairsW
export GetKerningPairsW

GetKerningPairsW:
	mov eax, THUNK_GDI32_GETKERNINGPAIRSW
	int SYSCALL_THUNK
	ret 0xc

global GetLogColorSpaceA
extern GetLogColorSpaceA
export GetLogColorSpaceA

GetLogColorSpaceA:
	mov eax, THUNK_GDI32_GETLOGCOLORSPACEA
	int SYSCALL_THUNK
	ret 0xc

global GetLogColorSpaceW
extern GetLogColorSpaceW
export GetLogColorSpaceW

GetLogColorSpaceW:
	mov eax, THUNK_GDI32_GETLOGCOLORSPACEW
	int SYSCALL_THUNK
	ret 0xc

global GetMapMode
extern GetMapMode
export GetMapMode

GetMapMode:
	mov eax, THUNK_GDI32_GETMAPMODE
	int SYSCALL_THUNK
	ret 0x4

global GetMetaFileA
extern GetMetaFileA
export GetMetaFileA

GetMetaFileA:
	mov eax, THUNK_GDI32_GETMETAFILEA
	int SYSCALL_THUNK
	ret 0x4

global GetMetaFileW
extern GetMetaFileW
export GetMetaFileW

GetMetaFileW:
	mov eax, THUNK_GDI32_GETMETAFILEW
	int SYSCALL_THUNK
	ret 0x4

global GetMetaFileBitsEx
extern GetMetaFileBitsEx
export GetMetaFileBitsEx

GetMetaFileBitsEx:
	mov eax, THUNK_GDI32_GETMETAFILEBITSEX
	int SYSCALL_THUNK
	ret 0xc

global GetMetaRgn
extern GetMetaRgn
export GetMetaRgn

GetMetaRgn:
	mov eax, THUNK_GDI32_GETMETARGN
	int SYSCALL_THUNK
	ret 0x8

global GetMiterLimit
extern GetMiterLimit
export GetMiterLimit

GetMiterLimit:
	mov eax, THUNK_GDI32_GETMITERLIMIT
	int SYSCALL_THUNK
	ret 0x8

global GetNearestColor
extern GetNearestColor
export GetNearestColor

GetNearestColor:
	mov eax, THUNK_GDI32_GETNEARESTCOLOR
	int SYSCALL_THUNK
	ret 0x8

global GetNearestPaletteIndex
extern GetNearestPaletteIndex
export GetNearestPaletteIndex

GetNearestPaletteIndex:
	mov eax, THUNK_GDI32_GETNEARESTPALETTEINDEX
	int SYSCALL_THUNK
	ret 0x8

global GetObjectA
extern GetObjectA
export GetObjectA

GetObjectA:
	mov eax, THUNK_GDI32_GETOBJECTA
	int SYSCALL_THUNK
	ret 0xc

global GetObjectW
extern GetObjectW
export GetObjectW

GetObjectW:
	mov eax, THUNK_GDI32_GETOBJECTW
	int SYSCALL_THUNK
	ret 0xc

global GetObjectType
extern GetObjectType
export GetObjectType

GetObjectType:
	mov eax, THUNK_GDI32_GETOBJECTTYPE
	int SYSCALL_THUNK
	ret 0x4

global GetOutlineTextMetricsA
extern GetOutlineTextMetricsA
export GetOutlineTextMetricsA

GetOutlineTextMetricsA:
	mov eax, THUNK_GDI32_GETOUTLINETEXTMETRICSA
	int SYSCALL_THUNK
	ret 0xc

global GetOutlineTextMetricsW
extern GetOutlineTextMetricsW
export GetOutlineTextMetricsW

GetOutlineTextMetricsW:
	mov eax, THUNK_GDI32_GETOUTLINETEXTMETRICSW
	int SYSCALL_THUNK
	ret 0xc

global GetPaletteEntries
extern GetPaletteEntries
export GetPaletteEntries

GetPaletteEntries:
	mov eax, THUNK_GDI32_GETPALETTEENTRIES
	int SYSCALL_THUNK
	ret 0x10

global GetPath
extern GetPath
export GetPath

GetPath:
	mov eax, THUNK_GDI32_GETPATH
	int SYSCALL_THUNK
	ret 0x10

global GetPixel
extern GetPixel
export GetPixel

GetPixel:
	mov eax, THUNK_GDI32_GETPIXEL
	int SYSCALL_THUNK
	ret 0xc

global GetPixelFormat
extern GetPixelFormat
export GetPixelFormat

GetPixelFormat:
	mov eax, THUNK_GDI32_GETPIXELFORMAT
	int SYSCALL_THUNK
	ret 0x4

global GetPolyFillMode
extern GetPolyFillMode
export GetPolyFillMode

GetPolyFillMode:
	mov eax, THUNK_GDI32_GETPOLYFILLMODE
	int SYSCALL_THUNK
	ret 0x4

global GetRandomRgn
extern GetRandomRgn
export GetRandomRgn

GetRandomRgn:
	mov eax, THUNK_GDI32_GETRANDOMRGN
	int SYSCALL_THUNK
	ret 0xc

global GetRasterizerCaps
extern GetRasterizerCaps
export GetRasterizerCaps

GetRasterizerCaps:
	mov eax, THUNK_GDI32_GETRASTERIZERCAPS
	int SYSCALL_THUNK
	ret 0x8

global GetRegionData
extern GetRegionData
export GetRegionData

GetRegionData:
	mov eax, THUNK_GDI32_GETREGIONDATA
	int SYSCALL_THUNK
	ret 0xc

global GetRgnBox
extern GetRgnBox
export GetRgnBox

GetRgnBox:
	mov eax, THUNK_GDI32_GETRGNBOX
	int SYSCALL_THUNK
	ret 0x8

global GetROP2
extern GetROP2
export GetROP2

GetROP2:
	mov eax, THUNK_GDI32_GETROP2
	int SYSCALL_THUNK
	ret 0x4

global GetStockObject
extern GetStockObject
export GetStockObject

GetStockObject:
	mov eax, THUNK_GDI32_GETSTOCKOBJECT
	int SYSCALL_THUNK
	ret 0x4

global GetStretchBltMode
extern GetStretchBltMode
export GetStretchBltMode

GetStretchBltMode:
	mov eax, THUNK_GDI32_GETSTRETCHBLTMODE
	int SYSCALL_THUNK
	ret 0x4

global GetSystemPaletteEntries
extern GetSystemPaletteEntries
export GetSystemPaletteEntries

GetSystemPaletteEntries:
	mov eax, THUNK_GDI32_GETSYSTEMPALETTEENTRIES
	int SYSCALL_THUNK
	ret 0x10

global GetSystemPaletteUse
extern GetSystemPaletteUse
export GetSystemPaletteUse

GetSystemPaletteUse:
	mov eax, THUNK_GDI32_GETSYSTEMPALETTEUSE
	int SYSCALL_THUNK
	ret 0x4

global GetTextAlign
extern GetTextAlign
export GetTextAlign

GetTextAlign:
	mov eax, THUNK_GDI32_GETTEXTALIGN
	int SYSCALL_THUNK
	ret 0x4

global GetTextCharacterExtra
extern GetTextCharacterExtra
export GetTextCharacterExtra

GetTextCharacterExtra:
	mov eax, THUNK_GDI32_GETTEXTCHARACTEREXTRA
	int SYSCALL_THUNK
	ret 0x4

global GetTextCharset
extern GetTextCharset
export GetTextCharset

GetTextCharset:
	mov eax, THUNK_GDI32_GETTEXTCHARSET
	int SYSCALL_THUNK
	ret 0x4

global GetTextCharsetInfo
extern GetTextCharsetInfo
export GetTextCharsetInfo

GetTextCharsetInfo:
	mov eax, THUNK_GDI32_GETTEXTCHARSETINFO
	int SYSCALL_THUNK
	ret 0xc

global GetTextColor
extern GetTextColor
export GetTextColor

GetTextColor:
	mov eax, THUNK_GDI32_GETTEXTCOLOR
	int SYSCALL_THUNK
	ret 0x4

global GetTextExtentExPointA
extern GetTextExtentExPointA
export GetTextExtentExPointA

GetTextExtentExPointA:
	mov eax, THUNK_GDI32_GETTEXTEXTENTEXPOINTA
	int SYSCALL_THUNK
	ret 0x1c

global GetTextExtentExPointW
extern GetTextExtentExPointW
export GetTextExtentExPointW

GetTextExtentExPointW:
	mov eax, THUNK_GDI32_GETTEXTEXTENTEXPOINTW
	int SYSCALL_THUNK
	ret 0x1c

global GetTextExtentPointA
extern GetTextExtentPointA
export GetTextExtentPointA

GetTextExtentPointA:
	mov eax, THUNK_GDI32_GETTEXTEXTENTPOINTA
	int SYSCALL_THUNK
	ret 0x10

global GetTextExtentPointW
extern GetTextExtentPointW
export GetTextExtentPointW

GetTextExtentPointW:
	mov eax, THUNK_GDI32_GETTEXTEXTENTPOINTW
	int SYSCALL_THUNK
	ret 0x10

global GetTextExtentPoint32A
extern GetTextExtentPoint32A
export GetTextExtentPoint32A

GetTextExtentPoint32A:
	mov eax, THUNK_GDI32_GETTEXTEXTENTPOINT32A
	int SYSCALL_THUNK
	ret 0x10

global GetTextExtentPoint32W
extern GetTextExtentPoint32W
export GetTextExtentPoint32W

GetTextExtentPoint32W:
	mov eax, THUNK_GDI32_GETTEXTEXTENTPOINT32W
	int SYSCALL_THUNK
	ret 0x10

global GetTextFaceA
extern GetTextFaceA
export GetTextFaceA

GetTextFaceA:
	mov eax, THUNK_GDI32_GETTEXTFACEA
	int SYSCALL_THUNK
	ret 0xc

global GetTextFaceW
extern GetTextFaceW
export GetTextFaceW

GetTextFaceW:
	mov eax, THUNK_GDI32_GETTEXTFACEW
	int SYSCALL_THUNK
	ret 0xc

global GetTextMetricsA
extern GetTextMetricsA
export GetTextMetricsA

GetTextMetricsA:
	mov eax, THUNK_GDI32_GETTEXTMETRICSA
	int SYSCALL_THUNK
	ret 0x8

global GetTextMetricsW
extern GetTextMetricsW
export GetTextMetricsW

GetTextMetricsW:
	mov eax, THUNK_GDI32_GETTEXTMETRICSW
	int SYSCALL_THUNK
	ret 0x8

global GetViewportExtEx
extern GetViewportExtEx
export GetViewportExtEx

GetViewportExtEx:
	mov eax, THUNK_GDI32_GETVIEWPORTEXTEX
	int SYSCALL_THUNK
	ret 0x8

global GetViewportOrgEx
extern GetViewportOrgEx
export GetViewportOrgEx

GetViewportOrgEx:
	mov eax, THUNK_GDI32_GETVIEWPORTORGEX
	int SYSCALL_THUNK
	ret 0x8

global GetWindowExtEx
extern GetWindowExtEx
export GetWindowExtEx

GetWindowExtEx:
	mov eax, THUNK_GDI32_GETWINDOWEXTEX
	int SYSCALL_THUNK
	ret 0x8

global GetWindowOrgEx
extern GetWindowOrgEx
export GetWindowOrgEx

GetWindowOrgEx:
	mov eax, THUNK_GDI32_GETWINDOWORGEX
	int SYSCALL_THUNK
	ret 0x8

global GetWinMetaFileBits
extern GetWinMetaFileBits
export GetWinMetaFileBits

GetWinMetaFileBits:
	mov eax, THUNK_GDI32_GETWINMETAFILEBITS
	int SYSCALL_THUNK
	ret 0x14

global GetWorldTransform
extern GetWorldTransform
export GetWorldTransform

GetWorldTransform:
	mov eax, THUNK_GDI32_GETWORLDTRANSFORM
	int SYSCALL_THUNK
	ret 0x8

global IntersectClipRect
extern IntersectClipRect
export IntersectClipRect

IntersectClipRect:
	mov eax, THUNK_GDI32_INTERSECTCLIPRECT
	int SYSCALL_THUNK
	ret 0x14

global InvertRgn
extern InvertRgn
export InvertRgn

InvertRgn:
	mov eax, THUNK_GDI32_INVERTRGN
	int SYSCALL_THUNK
	ret 0x8

global LineDDA
extern LineDDA
export LineDDA

LineDDA:
	mov eax, THUNK_GDI32_LINEDDA
	int SYSCALL_THUNK
	ret 0x18

global LineTo
extern LineTo
export LineTo

LineTo:
	mov eax, THUNK_GDI32_LINETO
	int SYSCALL_THUNK
	ret 0xc

global LPtoDP
extern LPtoDP
export LPtoDP

LPtoDP:
	mov eax, THUNK_GDI32_LPTODP
	int SYSCALL_THUNK
	ret 0xc

global MaskBlt
extern MaskBlt
export MaskBlt

MaskBlt:
	mov eax, THUNK_GDI32_MASKBLT
	int SYSCALL_THUNK
	ret 0x30

global ModifyWorldTransform
extern ModifyWorldTransform
export ModifyWorldTransform

ModifyWorldTransform:
	mov eax, THUNK_GDI32_MODIFYWORLDTRANSFORM
	int SYSCALL_THUNK
	ret 0xc

global MoveToEx
extern MoveToEx
export MoveToEx

MoveToEx:
	mov eax, THUNK_GDI32_MOVETOEX
	int SYSCALL_THUNK
	ret 0x10

global OffsetClipRgn
extern OffsetClipRgn
export OffsetClipRgn

OffsetClipRgn:
	mov eax, THUNK_GDI32_OFFSETCLIPRGN
	int SYSCALL_THUNK
	ret 0xc

global OffsetRgn
extern OffsetRgn
export OffsetRgn

OffsetRgn:
	mov eax, THUNK_GDI32_OFFSETRGN
	int SYSCALL_THUNK
	ret 0xc

global OffsetViewportOrgEx
extern OffsetViewportOrgEx
export OffsetViewportOrgEx

OffsetViewportOrgEx:
	mov eax, THUNK_GDI32_OFFSETVIEWPORTORGEX
	int SYSCALL_THUNK
	ret 0x10

global OffsetWindowOrgEx
extern OffsetWindowOrgEx
export OffsetWindowOrgEx

OffsetWindowOrgEx:
	mov eax, THUNK_GDI32_OFFSETWINDOWORGEX
	int SYSCALL_THUNK
	ret 0x10

global PaintRgn
extern PaintRgn
export PaintRgn

PaintRgn:
	mov eax, THUNK_GDI32_PAINTRGN
	int SYSCALL_THUNK
	ret 0x8

global PatBlt
extern PatBlt
export PatBlt

PatBlt:
	mov eax, THUNK_GDI32_PATBLT
	int SYSCALL_THUNK
	ret 0x18

global PathToRegion
extern PathToRegion
export PathToRegion

PathToRegion:
	mov eax, THUNK_GDI32_PATHTOREGION
	int SYSCALL_THUNK
	ret 0x4

global Pie
extern Pie
export Pie

Pie:
	mov eax, THUNK_GDI32_PIE
	int SYSCALL_THUNK
	ret 0x24

global PlayEnhMetaFile
extern PlayEnhMetaFile
export PlayEnhMetaFile

PlayEnhMetaFile:
	mov eax, THUNK_GDI32_PLAYENHMETAFILE
	int SYSCALL_THUNK
	ret 0xc

global PlayEnhMetaFileRecord
extern PlayEnhMetaFileRecord
export PlayEnhMetaFileRecord

PlayEnhMetaFileRecord:
	mov eax, THUNK_GDI32_PLAYENHMETAFILERECORD
	int SYSCALL_THUNK
	ret 0x10

global PlayMetaFile
extern PlayMetaFile
export PlayMetaFile

PlayMetaFile:
	mov eax, THUNK_GDI32_PLAYMETAFILE
	int SYSCALL_THUNK
	ret 0x8

global PlayMetaFileRecord
extern PlayMetaFileRecord
export PlayMetaFileRecord

PlayMetaFileRecord:
	mov eax, THUNK_GDI32_PLAYMETAFILERECORD
	int SYSCALL_THUNK
	ret 0x10

global PlgBlt
extern PlgBlt
export PlgBlt

PlgBlt:
	mov eax, THUNK_GDI32_PLGBLT
	int SYSCALL_THUNK
	ret 0x28

global PolyBezier
extern PolyBezier
export PolyBezier

PolyBezier:
	mov eax, THUNK_GDI32_POLYBEZIER
	int SYSCALL_THUNK
	ret 0xc

global PolyBezierTo
extern PolyBezierTo
export PolyBezierTo

PolyBezierTo:
	mov eax, THUNK_GDI32_POLYBEZIERTO
	int SYSCALL_THUNK
	ret 0xc

global PolyDraw
extern PolyDraw
export PolyDraw

PolyDraw:
	mov eax, THUNK_GDI32_POLYDRAW
	int SYSCALL_THUNK
	ret 0x10

global PolyPolygon
extern PolyPolygon
export PolyPolygon

PolyPolygon:
	mov eax, THUNK_GDI32_POLYPOLYGON
	int SYSCALL_THUNK
	ret 0x10

global PolyPolyline
extern PolyPolyline
export PolyPolyline

PolyPolyline:
	mov eax, THUNK_GDI32_POLYPOLYLINE
	int SYSCALL_THUNK
	ret 0x10

global Polygon
extern Polygon
export Polygon

Polygon:
	mov eax, THUNK_GDI32_POLYGON
	int SYSCALL_THUNK
	ret 0xc

global Polyline
extern Polyline
export Polyline

Polyline:
	mov eax, THUNK_GDI32_POLYLINE
	int SYSCALL_THUNK
	ret 0xc

global PolylineTo
extern PolylineTo
export PolylineTo

PolylineTo:
	mov eax, THUNK_GDI32_POLYLINETO
	int SYSCALL_THUNK
	ret 0xc

global PtInRegion
extern PtInRegion
export PtInRegion

PtInRegion:
	mov eax, THUNK_GDI32_PTINREGION
	int SYSCALL_THUNK
	ret 0xc

global PtVisible
extern PtVisible
export PtVisible

PtVisible:
	mov eax, THUNK_GDI32_PTVISIBLE
	int SYSCALL_THUNK
	ret 0xc

global RealizePalette
extern RealizePalette
export RealizePalette

RealizePalette:
	mov eax, THUNK_GDI32_REALIZEPALETTE
	int SYSCALL_THUNK
	ret 0x4

global Rectangle
extern Rectangle
export Rectangle

Rectangle:
	mov eax, THUNK_GDI32_RECTANGLE
	int SYSCALL_THUNK
	ret 0x14

global RectInRegion
extern RectInRegion
export RectInRegion

RectInRegion:
	mov eax, THUNK_GDI32_RECTINREGION
	int SYSCALL_THUNK
	ret 0x8

global RectVisible
extern RectVisible
export RectVisible

RectVisible:
	mov eax, THUNK_GDI32_RECTVISIBLE
	int SYSCALL_THUNK
	ret 0x8

global RemoveFontMemResourceEx
extern RemoveFontMemResourceEx
export RemoveFontMemResourceEx

RemoveFontMemResourceEx:
	mov eax, THUNK_GDI32_REMOVEFONTMEMRESOURCEEX
	int SYSCALL_THUNK
	ret 0x4

global RemoveFontResourceA
extern RemoveFontResourceA
export RemoveFontResourceA

RemoveFontResourceA:
	mov eax, THUNK_GDI32_REMOVEFONTRESOURCEA
	int SYSCALL_THUNK
	ret 0x4

global RemoveFontResourceW
extern RemoveFontResourceW
export RemoveFontResourceW

RemoveFontResourceW:
	mov eax, THUNK_GDI32_REMOVEFONTRESOURCEW
	int SYSCALL_THUNK
	ret 0x4

global RemoveFontResourceExA
extern RemoveFontResourceExA
export RemoveFontResourceExA

RemoveFontResourceExA:
	mov eax, THUNK_GDI32_REMOVEFONTRESOURCEEXA
	int SYSCALL_THUNK
	ret 0xc

global RemoveFontResourceExW
extern RemoveFontResourceExW
export RemoveFontResourceExW

RemoveFontResourceExW:
	mov eax, THUNK_GDI32_REMOVEFONTRESOURCEEXW
	int SYSCALL_THUNK
	ret 0xc

global ResetDCA
extern ResetDCA
export ResetDCA

ResetDCA:
	mov eax, THUNK_GDI32_RESETDCA
	int SYSCALL_THUNK
	ret 0x8

global ResetDCW
extern ResetDCW
export ResetDCW

ResetDCW:
	mov eax, THUNK_GDI32_RESETDCW
	int SYSCALL_THUNK
	ret 0x8

global ResizePalette
extern ResizePalette
export ResizePalette

ResizePalette:
	mov eax, THUNK_GDI32_RESIZEPALETTE
	int SYSCALL_THUNK
	ret 0x8

global RestoreDC
extern RestoreDC
export RestoreDC

RestoreDC:
	mov eax, THUNK_GDI32_RESTOREDC
	int SYSCALL_THUNK
	ret 0x8

global RoundRect
extern RoundRect
export RoundRect

RoundRect:
	mov eax, THUNK_GDI32_ROUNDRECT
	int SYSCALL_THUNK
	ret 0x1c

global SaveDC
extern SaveDC
export SaveDC

SaveDC:
	mov eax, THUNK_GDI32_SAVEDC
	int SYSCALL_THUNK
	ret 0x4

global ScaleViewportExtEx
extern ScaleViewportExtEx
export ScaleViewportExtEx

ScaleViewportExtEx:
	mov eax, THUNK_GDI32_SCALEVIEWPORTEXTEX
	int SYSCALL_THUNK
	ret 0x18

global ScaleWindowExtEx
extern ScaleWindowExtEx
export ScaleWindowExtEx

ScaleWindowExtEx:
	mov eax, THUNK_GDI32_SCALEWINDOWEXTEX
	int SYSCALL_THUNK
	ret 0x18

global SelectClipPath
extern SelectClipPath
export SelectClipPath

SelectClipPath:
	mov eax, THUNK_GDI32_SELECTCLIPPATH
	int SYSCALL_THUNK
	ret 0x8

global SelectClipRgn
extern SelectClipRgn
export SelectClipRgn

SelectClipRgn:
	mov eax, THUNK_GDI32_SELECTCLIPRGN
	int SYSCALL_THUNK
	ret 0x8

global SelectObject
extern SelectObject
export SelectObject

SelectObject:
	mov eax, THUNK_GDI32_SELECTOBJECT
	int SYSCALL_THUNK
	ret 0x8

global SelectPalette
extern SelectPalette
export SelectPalette

SelectPalette:
	mov eax, THUNK_GDI32_SELECTPALETTE
	int SYSCALL_THUNK
	ret 0xc

global SetAbortProc
extern SetAbortProc
export SetAbortProc

SetAbortProc:
	mov eax, THUNK_GDI32_SETABORTPROC
	int SYSCALL_THUNK
	ret 0x8

global SetArcDirection
extern SetArcDirection
export SetArcDirection

SetArcDirection:
	mov eax, THUNK_GDI32_SETARCDIRECTION
	int SYSCALL_THUNK
	ret 0x8

global SetBitmapBits
extern SetBitmapBits
export SetBitmapBits

SetBitmapBits:
	mov eax, THUNK_GDI32_SETBITMAPBITS
	int SYSCALL_THUNK
	ret 0xc

global SetBitmapDimensionEx
extern SetBitmapDimensionEx
export SetBitmapDimensionEx

SetBitmapDimensionEx:
	mov eax, THUNK_GDI32_SETBITMAPDIMENSIONEX
	int SYSCALL_THUNK
	ret 0x10

global SetBkColor
extern SetBkColor
export SetBkColor

SetBkColor:
	mov eax, THUNK_GDI32_SETBKCOLOR
	int SYSCALL_THUNK
	ret 0x8

global SetBkMode
extern SetBkMode
export SetBkMode

SetBkMode:
	mov eax, THUNK_GDI32_SETBKMODE
	int SYSCALL_THUNK
	ret 0x8

global SetBoundsRect
extern SetBoundsRect
export SetBoundsRect

SetBoundsRect:
	mov eax, THUNK_GDI32_SETBOUNDSRECT
	int SYSCALL_THUNK
	ret 0xc

global SetBrushOrgEx
extern SetBrushOrgEx
export SetBrushOrgEx

SetBrushOrgEx:
	mov eax, THUNK_GDI32_SETBRUSHORGEX
	int SYSCALL_THUNK
	ret 0x10

global SetColorAdjustment
extern SetColorAdjustment
export SetColorAdjustment

SetColorAdjustment:
	mov eax, THUNK_GDI32_SETCOLORADJUSTMENT
	int SYSCALL_THUNK
	ret 0x8

global SetColorSpace
extern SetColorSpace
export SetColorSpace

SetColorSpace:
	mov eax, THUNK_GDI32_SETCOLORSPACE
	int SYSCALL_THUNK
	ret 0x8

global SetDeviceGammaRamp
extern SetDeviceGammaRamp
export SetDeviceGammaRamp

SetDeviceGammaRamp:
	mov eax, THUNK_GDI32_SETDEVICEGAMMARAMP
	int SYSCALL_THUNK
	ret 0x8

global SetDCBrushColor
extern SetDCBrushColor
export SetDCBrushColor

SetDCBrushColor:
	mov eax, THUNK_GDI32_SETDCBRUSHCOLOR
	int SYSCALL_THUNK
	ret 0x8

global SetDCPenColor
extern SetDCPenColor
export SetDCPenColor

SetDCPenColor:
	mov eax, THUNK_GDI32_SETDCPENCOLOR
	int SYSCALL_THUNK
	ret 0x8

global SetDIBColorTable
extern SetDIBColorTable
export SetDIBColorTable

SetDIBColorTable:
	mov eax, THUNK_GDI32_SETDIBCOLORTABLE
	int SYSCALL_THUNK
	ret 0x10

global SetDIBits
extern SetDIBits
export SetDIBits

SetDIBits:
	mov eax, THUNK_GDI32_SETDIBITS
	int SYSCALL_THUNK
	ret 0x1c

global SetDIBitsToDevice
extern SetDIBitsToDevice
export SetDIBitsToDevice

SetDIBitsToDevice:
	mov eax, THUNK_GDI32_SETDIBITSTODEVICE
	int SYSCALL_THUNK
	ret 0x30

global SetEnhMetaFileBits
extern SetEnhMetaFileBits
export SetEnhMetaFileBits

SetEnhMetaFileBits:
	mov eax, THUNK_GDI32_SETENHMETAFILEBITS
	int SYSCALL_THUNK
	ret 0x8

global SetGraphicsMode
extern SetGraphicsMode
export SetGraphicsMode

SetGraphicsMode:
	mov eax, THUNK_GDI32_SETGRAPHICSMODE
	int SYSCALL_THUNK
	ret 0x8

global SetICMMode
extern SetICMMode
export SetICMMode

SetICMMode:
	mov eax, THUNK_GDI32_SETICMMODE
	int SYSCALL_THUNK
	ret 0x8

global SetICMProfileA
extern SetICMProfileA
export SetICMProfileA

SetICMProfileA:
	mov eax, THUNK_GDI32_SETICMPROFILEA
	int SYSCALL_THUNK
	ret 0x8

global SetICMProfileW
extern SetICMProfileW
export SetICMProfileW

SetICMProfileW:
	mov eax, THUNK_GDI32_SETICMPROFILEW
	int SYSCALL_THUNK
	ret 0x8

global SetLayout
extern SetLayout
export SetLayout

SetLayout:
	mov eax, THUNK_GDI32_SETLAYOUT
	int SYSCALL_THUNK
	ret 0x8

global SetMapMode
extern SetMapMode
export SetMapMode

SetMapMode:
	mov eax, THUNK_GDI32_SETMAPMODE
	int SYSCALL_THUNK
	ret 0x8

global SetMapperFlags
extern SetMapperFlags
export SetMapperFlags

SetMapperFlags:
	mov eax, THUNK_GDI32_SETMAPPERFLAGS
	int SYSCALL_THUNK
	ret 0x8

global SetMetaFileBitsEx
extern SetMetaFileBitsEx
export SetMetaFileBitsEx

SetMetaFileBitsEx:
	mov eax, THUNK_GDI32_SETMETAFILEBITSEX
	int SYSCALL_THUNK
	ret 0x8

global SetMetaRgn
extern SetMetaRgn
export SetMetaRgn

SetMetaRgn:
	mov eax, THUNK_GDI32_SETMETARGN
	int SYSCALL_THUNK
	ret 0x4

global SetMiterLimit
extern SetMiterLimit
export SetMiterLimit

SetMiterLimit:
	mov eax, THUNK_GDI32_SETMITERLIMIT
	int SYSCALL_THUNK
	ret 0xc

global SetPaletteEntries
extern SetPaletteEntries
export SetPaletteEntries

SetPaletteEntries:
	mov eax, THUNK_GDI32_SETPALETTEENTRIES
	int SYSCALL_THUNK
	ret 0x10

global SetPixel
extern SetPixel
export SetPixel

SetPixel:
	mov eax, THUNK_GDI32_SETPIXEL
	int SYSCALL_THUNK
	ret 0x10

global SetPixelV
extern SetPixelV
export SetPixelV

SetPixelV:
	mov eax, THUNK_GDI32_SETPIXELV
	int SYSCALL_THUNK
	ret 0x10

global SetPixelFormat
extern SetPixelFormat
export SetPixelFormat

SetPixelFormat:
	mov eax, THUNK_GDI32_SETPIXELFORMAT
	int SYSCALL_THUNK
	ret 0xc

global SetPolyFillMode
extern SetPolyFillMode
export SetPolyFillMode

SetPolyFillMode:
	mov eax, THUNK_GDI32_SETPOLYFILLMODE
	int SYSCALL_THUNK
	ret 0x8

global SetRectRgn
extern SetRectRgn
export SetRectRgn

SetRectRgn:
	mov eax, THUNK_GDI32_SETRECTRGN
	int SYSCALL_THUNK
	ret 0x14

global SetROP2
extern SetROP2
export SetROP2

SetROP2:
	mov eax, THUNK_GDI32_SETROP2
	int SYSCALL_THUNK
	ret 0x8

global SetStretchBltMode
extern SetStretchBltMode
export SetStretchBltMode

SetStretchBltMode:
	mov eax, THUNK_GDI32_SETSTRETCHBLTMODE
	int SYSCALL_THUNK
	ret 0x8

global SetSystemPaletteUse
extern SetSystemPaletteUse
export SetSystemPaletteUse

SetSystemPaletteUse:
	mov eax, THUNK_GDI32_SETSYSTEMPALETTEUSE
	int SYSCALL_THUNK
	ret 0x8

global SetTextAlign
extern SetTextAlign
export SetTextAlign

SetTextAlign:
	mov eax, THUNK_GDI32_SETTEXTALIGN
	int SYSCALL_THUNK
	ret 0x8

global SetTextCharacterExtra
extern SetTextCharacterExtra
export SetTextCharacterExtra

SetTextCharacterExtra:
	mov eax, THUNK_GDI32_SETTEXTCHARACTEREXTRA
	int SYSCALL_THUNK
	ret 0x8

global SetTextColor
extern SetTextColor
export SetTextColor

SetTextColor:
	mov eax, THUNK_GDI32_SETTEXTCOLOR
	int SYSCALL_THUNK
	ret 0x8

global SetTextJustification
extern SetTextJustification
export SetTextJustification

SetTextJustification:
	mov eax, THUNK_GDI32_SETTEXTJUSTIFICATION
	int SYSCALL_THUNK
	ret 0xc

global SetViewportExtEx
extern SetViewportExtEx
export SetViewportExtEx

SetViewportExtEx:
	mov eax, THUNK_GDI32_SETVIEWPORTEXTEX
	int SYSCALL_THUNK
	ret 0x10

global SetViewportOrgEx
extern SetViewportOrgEx
export SetViewportOrgEx

SetViewportOrgEx:
	mov eax, THUNK_GDI32_SETVIEWPORTORGEX
	int SYSCALL_THUNK
	ret 0x10

global SetWindowExtEx
extern SetWindowExtEx
export SetWindowExtEx

SetWindowExtEx:
	mov eax, THUNK_GDI32_SETWINDOWEXTEX
	int SYSCALL_THUNK
	ret 0x10

global SetWindowOrgEx
extern SetWindowOrgEx
export SetWindowOrgEx

SetWindowOrgEx:
	mov eax, THUNK_GDI32_SETWINDOWORGEX
	int SYSCALL_THUNK
	ret 0x10

global SetWinMetaFileBits
extern SetWinMetaFileBits
export SetWinMetaFileBits

SetWinMetaFileBits:
	mov eax, THUNK_GDI32_SETWINMETAFILEBITS
	int SYSCALL_THUNK
	ret 0x10

global SetWorldTransform
extern SetWorldTransform
export SetWorldTransform

SetWorldTransform:
	mov eax, THUNK_GDI32_SETWORLDTRANSFORM
	int SYSCALL_THUNK
	ret 0x8

global StartDocA
extern StartDocA
export StartDocA

StartDocA:
	mov eax, THUNK_GDI32_STARTDOCA
	int SYSCALL_THUNK
	ret 0x8

global StartDocW
extern StartDocW
export StartDocW

StartDocW:
	mov eax, THUNK_GDI32_STARTDOCW
	int SYSCALL_THUNK
	ret 0x8

global StartPage
extern StartPage
export StartPage

StartPage:
	mov eax, THUNK_GDI32_STARTPAGE
	int SYSCALL_THUNK
	ret 0x4

global EndPage
extern EndPage
export EndPage

EndPage:
	mov eax, THUNK_GDI32_ENDPAGE
	int SYSCALL_THUNK
	ret 0x4

global StretchBlt
extern StretchBlt
export StretchBlt

StretchBlt:
	mov eax, THUNK_GDI32_STRETCHBLT
	int SYSCALL_THUNK
	ret 0x2c

global StretchDIBits
extern StretchDIBits
export StretchDIBits

StretchDIBits:
	mov eax, THUNK_GDI32_STRETCHDIBITS
	int SYSCALL_THUNK
	ret 0x34

global StrokeAndFillPath
extern StrokeAndFillPath
export StrokeAndFillPath

StrokeAndFillPath:
	mov eax, THUNK_GDI32_STROKEANDFILLPATH
	int SYSCALL_THUNK
	ret 0x4

global StrokePath
extern StrokePath
export StrokePath

StrokePath:
	mov eax, THUNK_GDI32_STROKEPATH
	int SYSCALL_THUNK
	ret 0x4

global SwapBuffers
extern SwapBuffers
export SwapBuffers

SwapBuffers:
	mov eax, THUNK_GDI32_SWAPBUFFERS
	int SYSCALL_THUNK
	ret 0x4

global TextOutA
extern TextOutA
export TextOutA

TextOutA:
	mov eax, THUNK_GDI32_TEXTOUTA
	int SYSCALL_THUNK
	ret 0x14

global TextOutW
extern TextOutW
export TextOutW

TextOutW:
	mov eax, THUNK_GDI32_TEXTOUTW
	int SYSCALL_THUNK
	ret 0x14

global TranslateCharsetInfo
extern TranslateCharsetInfo
export TranslateCharsetInfo

TranslateCharsetInfo:
	mov eax, THUNK_GDI32_TRANSLATECHARSETINFO
	int SYSCALL_THUNK
	ret 0xc

global UnrealizeObject
extern UnrealizeObject
export UnrealizeObject

UnrealizeObject:
	mov eax, THUNK_GDI32_UNREALIZEOBJECT
	int SYSCALL_THUNK
	ret 0x4

global UpdateColors
extern UpdateColors
export UpdateColors

UpdateColors:
	mov eax, THUNK_GDI32_UPDATECOLORS
	int SYSCALL_THUNK
	ret 0x4

global UpdateICMRegKeyA
extern UpdateICMRegKeyA
export UpdateICMRegKeyA

UpdateICMRegKeyA:
	mov eax, THUNK_GDI32_UPDATEICMREGKEYA
	int SYSCALL_THUNK
	ret 0x10

global UpdateICMRegKeyW
extern UpdateICMRegKeyW
export UpdateICMRegKeyW

UpdateICMRegKeyW:
	mov eax, THUNK_GDI32_UPDATEICMREGKEYW
	int SYSCALL_THUNK
	ret 0x10

global WidenPath
extern WidenPath
export WidenPath

WidenPath:
	mov eax, THUNK_GDI32_WIDENPATH
	int SYSCALL_THUNK
	ret 0x4

THUNK_GDI32_ABORTDOC equ 0x400
THUNK_GDI32_ABORTPATH equ 0x401
THUNK_GDI32_ADDFONTRESOURCEA equ 0x402
THUNK_GDI32_ADDFONTRESOURCEW equ 0x403
THUNK_GDI32_ANGLEARC equ 0x404
THUNK_GDI32_ANIMATEPALETTE equ 0x405
THUNK_GDI32_ARC equ 0x406
THUNK_GDI32_ARCTO equ 0x407
THUNK_GDI32_BEGINPATH equ 0x408
THUNK_GDI32_BITBLT equ 0x409
THUNK_GDI32_CANCELDC equ 0x40a
THUNK_GDI32_CHECKCOLORSINGAMUT equ 0x40b
THUNK_GDI32_CHOOSEPIXELFORMAT equ 0x40c
THUNK_GDI32_CHORD equ 0x40d
THUNK_GDI32_CLOSEENHMETAFILE equ 0x40e
THUNK_GDI32_CLOSEFIGURE equ 0x40f
THUNK_GDI32_CLOSEMETAFILE equ 0x410
THUNK_GDI32_COLORMATCHTOTARGET equ 0x411
THUNK_GDI32_COMBINERGN equ 0x412
THUNK_GDI32_COMBINETRANSFORM equ 0x413
THUNK_GDI32_COPYENHMETAFILEA equ 0x414
THUNK_GDI32_COPYENHMETAFILEW equ 0x415
THUNK_GDI32_COPYMETAFILEA equ 0x416
THUNK_GDI32_COPYMETAFILEW equ 0x417
THUNK_GDI32_CREATEBITMAP equ 0x418
THUNK_GDI32_CREATEBITMAPINDIRECT equ 0x419
THUNK_GDI32_CREATEBRUSHINDIRECT equ 0x41a
THUNK_GDI32_CREATECOLORSPACEA equ 0x41b
THUNK_GDI32_CREATECOLORSPACEW equ 0x41c
THUNK_GDI32_CREATECOMPATIBLEBITMAP equ 0x41d
THUNK_GDI32_CREATECOMPATIBLEDC equ 0x41e
THUNK_GDI32_CREATEDCA equ 0x41f
THUNK_GDI32_CREATEDCW equ 0x420
THUNK_GDI32_CREATEDIBPATTERNBRUSH equ 0x421
THUNK_GDI32_CREATEDIBPATTERNBRUSHPT equ 0x422
THUNK_GDI32_CREATEDIBSECTION equ 0x423
THUNK_GDI32_CREATEDIBITMAP equ 0x424
THUNK_GDI32_CREATEELLIPTICRGN equ 0x425
THUNK_GDI32_CREATEELLIPTICRGNINDIRECT equ 0x426
THUNK_GDI32_CREATEENHMETAFILEA equ 0x427
THUNK_GDI32_CREATEFONTA equ 0x428
THUNK_GDI32_CREATEFONTINDIRECTA equ 0x429
THUNK_GDI32_CREATEFONTINDIRECTW equ 0x42a
THUNK_GDI32_CREATEFONTW equ 0x42b
THUNK_GDI32_CREATEHALFTONEPALETTE equ 0x42c
THUNK_GDI32_CREATEHATCHBRUSH equ 0x42d
THUNK_GDI32_CREATEICA equ 0x42e
THUNK_GDI32_CREATEICW equ 0x42f
THUNK_GDI32_CREATEMETAFILEA equ 0x430
THUNK_GDI32_CREATEMETAFILEW equ 0x431
THUNK_GDI32_CREATEPALETTE equ 0x432
THUNK_GDI32_CREATEPATTERNBRUSH equ 0x433
THUNK_GDI32_CREATEPEN equ 0x434
THUNK_GDI32_CREATEPENINDIRECT equ 0x435
THUNK_GDI32_CREATEPOLYPOLYGONRGN equ 0x436
THUNK_GDI32_CREATEPOLYGONRGN equ 0x437
THUNK_GDI32_CREATERECTRGN equ 0x438
THUNK_GDI32_CREATERECTRGNINDIRECT equ 0x439
THUNK_GDI32_CREATEROUNDRECTRGN equ 0x43a
THUNK_GDI32_CREATESCALABLEFONTRESOURCEA equ 0x43b
THUNK_GDI32_CREATESCALABLEFONTRESOURCEW equ 0x43c
THUNK_GDI32_CREATESOLIDBRUSH equ 0x43d
THUNK_GDI32_DPTOLP equ 0x43e
THUNK_GDI32_DELETECOLORSPACE equ 0x43f
THUNK_GDI32_DELETEDC equ 0x440
THUNK_GDI32_DELETEENHMETAFILE equ 0x441
THUNK_GDI32_DELETEMETAFILE equ 0x442
THUNK_GDI32_DELETEOBJECT equ 0x443
THUNK_GDI32_DESCRIBEPIXELFORMAT equ 0x444
THUNK_GDI32_DRAWESCAPE equ 0x445
THUNK_GDI32_ELLIPSE equ 0x446
THUNK_GDI32_ENDDOC equ 0x447
THUNK_GDI32_ENDPATH equ 0x448
THUNK_GDI32_ENUMENHMETAFILE equ 0x449
THUNK_GDI32_ENUMFONTFAMILIESA equ 0x44a
THUNK_GDI32_ENUMFONTFAMILIESW equ 0x44b
THUNK_GDI32_ENUMFONTFAMILIESEXA equ 0x44c
THUNK_GDI32_ENUMFONTFAMILIESEXW equ 0x44d
THUNK_GDI32_ENUMFONTSA equ 0x44e
THUNK_GDI32_ENUMFONTSW equ 0x44f
THUNK_GDI32_ENUMICMPROFILESA equ 0x450
THUNK_GDI32_ENUMICMPROFILESW equ 0x451
THUNK_GDI32_ENUMMETAFILE equ 0x452
THUNK_GDI32_ENUMOBJECTS equ 0x453
THUNK_GDI32_EQUALRGN equ 0x454
THUNK_GDI32_ESCAPE equ 0x455
THUNK_GDI32_EXCLUDECLIPRECT equ 0x456
THUNK_GDI32_EXTCREATEPEN equ 0x457
THUNK_GDI32_EXTCREATEREGION equ 0x458
THUNK_GDI32_EXTESCAPE equ 0x459
THUNK_GDI32_EXTFLOODFILL equ 0x45a
THUNK_GDI32_EXTSELECTCLIPRGN equ 0x45b
THUNK_GDI32_EXTTEXTOUTA equ 0x45c
THUNK_GDI32_EXTTEXTOUTW equ 0x45d
THUNK_GDI32_FILLPATH equ 0x45e
THUNK_GDI32_FILLRGN equ 0x45f
THUNK_GDI32_FIXBRUSHORGEX equ 0x460
THUNK_GDI32_FLATTENPATH equ 0x461
THUNK_GDI32_FLOODFILL equ 0x462
THUNK_GDI32_FRAMERGN equ 0x463
THUNK_GDI32_GETARCDIRECTION equ 0x464
THUNK_GDI32_GETASPECTRATIOFILTEREX equ 0x465
THUNK_GDI32_GETBITMAPBITS equ 0x466
THUNK_GDI32_GETBITMAPDIMENSIONEX equ 0x467
THUNK_GDI32_GETBRUSHORGEX equ 0x468
THUNK_GDI32_GETBKCOLOR equ 0x469
THUNK_GDI32_GETBKMODE equ 0x46a
THUNK_GDI32_GETBOUNDSRECT equ 0x46b
THUNK_GDI32_GETCHARABCWIDTHSA equ 0x46c
THUNK_GDI32_GETCHARABCWIDTHSW equ 0x46d
THUNK_GDI32_GETCHARABCWIDTHSFLOATA equ 0x46e
THUNK_GDI32_GETCHARABCWIDTHSFLOATW equ 0x46f
THUNK_GDI32_GETCHARABCWIDTHSI equ 0x470
THUNK_GDI32_GETCHARACTERPLACEMENTA equ 0x471
THUNK_GDI32_GETCHARACTERPLACEMENTW equ 0x472
THUNK_GDI32_GETCHARWIDTH32A equ 0x473
THUNK_GDI32_GETCHARWIDTH32W equ 0x474
THUNK_GDI32_GETCHARWIDTHA equ 0x475
THUNK_GDI32_GETCHARWIDTHI equ 0x476
THUNK_GDI32_GETCHARWIDTHW equ 0x477
THUNK_GDI32_GETCHARWIDTHFLOATA equ 0x478
THUNK_GDI32_GETCHARWIDTHFLOATW equ 0x479
THUNK_GDI32_GETCLIPBOX equ 0x47a
THUNK_GDI32_GETCLIPRGN equ 0x47b
THUNK_GDI32_GETCOLORADJUSTMENT equ 0x47c
THUNK_GDI32_GETCOLORSPACE equ 0x47d
THUNK_GDI32_GETCURRENTOBJECT equ 0x47e
THUNK_GDI32_GETCURRENTPOSITIONEX equ 0x47f
THUNK_GDI32_GETDEVICECAPS equ 0x480
THUNK_GDI32_GETDEVICEGAMMARAMP equ 0x481
THUNK_GDI32_GETDCBRUSHCOLOR equ 0x482
THUNK_GDI32_GETDCORGEX equ 0x483
THUNK_GDI32_GETDCPENCOLOR equ 0x484
THUNK_GDI32_GETDIBCOLORTABLE equ 0x485
THUNK_GDI32_GETDIBITS equ 0x486
THUNK_GDI32_GETENHMETAFILEA equ 0x487
THUNK_GDI32_GETENHMETAFILEW equ 0x488
THUNK_GDI32_GETENHMETAFILEBITS equ 0x489
THUNK_GDI32_GETENHMETAFILEDESCRIPTIONA equ 0x48a
THUNK_GDI32_GETENHMETAFILEDESCRIPTIONW equ 0x48b
THUNK_GDI32_GETENHMETAFILEHEADER equ 0x48c
THUNK_GDI32_GETENHMETAFILEPALETTEENTRIES equ 0x48d
THUNK_GDI32_GETFONTDATA equ 0x48e
THUNK_GDI32_GETFONTLANGUAGEINFO equ 0x48f
THUNK_GDI32_GETGLYPHOUTLINE equ 0x490
THUNK_GDI32_GETGLYPHOUTLINEA equ 0x491
THUNK_GDI32_GETGLYPHOUTLINEW equ 0x492
THUNK_GDI32_GETGRAPHICSMODE equ 0x493
THUNK_GDI32_GETICMPROFILEA equ 0x494
THUNK_GDI32_GETICMPROFILEW equ 0x495
THUNK_GDI32_GETKERNINGPAIRSA equ 0x496
THUNK_GDI32_GETKERNINGPAIRSW equ 0x497
THUNK_GDI32_GETLOGCOLORSPACEA equ 0x498
THUNK_GDI32_GETLOGCOLORSPACEW equ 0x499
THUNK_GDI32_GETMAPMODE equ 0x49a
THUNK_GDI32_GETMETAFILEA equ 0x49b
THUNK_GDI32_GETMETAFILEW equ 0x49c
THUNK_GDI32_GETMETAFILEBITSEX equ 0x49d
THUNK_GDI32_GETMETARGN equ 0x49e
THUNK_GDI32_GETMITERLIMIT equ 0x49f
THUNK_GDI32_GETNEARESTCOLOR equ 0x4a0
THUNK_GDI32_GETNEARESTPALETTEINDEX equ 0x4a1
THUNK_GDI32_GETOBJECTA equ 0x4a2
THUNK_GDI32_GETOBJECTW equ 0x4a3
THUNK_GDI32_GETOBJECTTYPE equ 0x4a4
THUNK_GDI32_GETOUTLINETEXTMETRICSA equ 0x4a5
THUNK_GDI32_GETOUTLINETEXTMETRICSW equ 0x4a6
THUNK_GDI32_GETPALETTEENTRIES equ 0x4a7
THUNK_GDI32_GETPATH equ 0x4a8
THUNK_GDI32_GETPIXEL equ 0x4a9
THUNK_GDI32_GETPIXELFORMAT equ 0x4aa
THUNK_GDI32_GETPOLYFILLMODE equ 0x4ab
THUNK_GDI32_GETRANDOMRGN equ 0x4ac
THUNK_GDI32_GETRASTERIZERCAPS equ 0x4ad
THUNK_GDI32_GETREGIONDATA equ 0x4ae
THUNK_GDI32_GETRGNBOX equ 0x4af
THUNK_GDI32_GETROP2 equ 0x4b0
THUNK_GDI32_GETSTOCKOBJECT equ 0x4b1
THUNK_GDI32_GETSTRETCHBLTMODE equ 0x4b2
THUNK_GDI32_GETSYSTEMPALETTEENTRIES equ 0x4b3
THUNK_GDI32_GETSYSTEMPALETTEUSE equ 0x4b4
THUNK_GDI32_GETTEXTALIGN equ 0x4b5
THUNK_GDI32_GETTEXTCHARACTEREXTRA equ 0x4b6
THUNK_GDI32_GETTEXTCHARSET equ 0x4b7
THUNK_GDI32_GETTEXTCHARSETINFO equ 0x4b8
THUNK_GDI32_GETTEXTCOLOR equ 0x4b9
THUNK_GDI32_GETTEXTEXTENTEXPOINTA equ 0x4ba
THUNK_GDI32_GETTEXTEXTENTEXPOINTW equ 0x4bb
THUNK_GDI32_GETTEXTEXTENTPOINTA equ 0x4bc
THUNK_GDI32_GETTEXTEXTENTPOINTW equ 0x4bd
THUNK_GDI32_GETTEXTEXTENTPOINT32A equ 0x4be
THUNK_GDI32_GETTEXTEXTENTPOINT32W equ 0x4bf
THUNK_GDI32_GETTEXTFACEA equ 0x4c0
THUNK_GDI32_GETTEXTFACEW equ 0x4c1
THUNK_GDI32_GETTEXTMETRICSA equ 0x4c2
THUNK_GDI32_GETTEXTMETRICSW equ 0x4c3
THUNK_GDI32_GETVIEWPORTEXTEX equ 0x4c4
THUNK_GDI32_GETVIEWPORTORGEX equ 0x4c5
THUNK_GDI32_GETWINDOWEXTEX equ 0x4c6
THUNK_GDI32_GETWINDOWORGEX equ 0x4c7
THUNK_GDI32_GETWINMETAFILEBITS equ 0x4c8
THUNK_GDI32_GETWORLDTRANSFORM equ 0x4c9
THUNK_GDI32_INTERSECTCLIPRECT equ 0x4ca
THUNK_GDI32_INVERTRGN equ 0x4cb
THUNK_GDI32_LINEDDA equ 0x4cc
THUNK_GDI32_LINETO equ 0x4cd
THUNK_GDI32_LPTODP equ 0x4ce
THUNK_GDI32_MASKBLT equ 0x4cf
THUNK_GDI32_MODIFYWORLDTRANSFORM equ 0x4d0
THUNK_GDI32_MOVETOEX equ 0x4d1
THUNK_GDI32_OFFSETCLIPRGN equ 0x4d2
THUNK_GDI32_OFFSETRGN equ 0x4d3
THUNK_GDI32_OFFSETVIEWPORTORGEX equ 0x4d4
THUNK_GDI32_OFFSETWINDOWORGEX equ 0x4d5
THUNK_GDI32_PAINTRGN equ 0x4d6
THUNK_GDI32_PATBLT equ 0x4d7
THUNK_GDI32_PATHTOREGION equ 0x4d8
THUNK_GDI32_PIE equ 0x4d9
THUNK_GDI32_PLAYENHMETAFILE equ 0x4da
THUNK_GDI32_PLAYENHMETAFILERECORD equ 0x4db
THUNK_GDI32_PLAYMETAFILE equ 0x4dc
THUNK_GDI32_PLAYMETAFILERECORD equ 0x4dd
THUNK_GDI32_PLGBLT equ 0x4de
THUNK_GDI32_POLYBEZIER equ 0x4df
THUNK_GDI32_POLYBEZIERTO equ 0x4e0
THUNK_GDI32_POLYDRAW equ 0x4e1
THUNK_GDI32_POLYPOLYGON equ 0x4e2
THUNK_GDI32_POLYPOLYLINE equ 0x4e3
THUNK_GDI32_POLYGON equ 0x4e4
THUNK_GDI32_POLYLINE equ 0x4e5
THUNK_GDI32_POLYLINETO equ 0x4e6
THUNK_GDI32_PTINREGION equ 0x4e7
THUNK_GDI32_PTVISIBLE equ 0x4e8
THUNK_GDI32_REALIZEPALETTE equ 0x4e9
THUNK_GDI32_RECTANGLE equ 0x4ea
THUNK_GDI32_RECTINREGION equ 0x4eb
THUNK_GDI32_RECTVISIBLE equ 0x4ec
THUNK_GDI32_REMOVEFONTMEMRESOURCEEX equ 0x4ed
THUNK_GDI32_REMOVEFONTRESOURCEA equ 0x4ee
THUNK_GDI32_REMOVEFONTRESOURCEW equ 0x4ef
THUNK_GDI32_REMOVEFONTRESOURCEEXA equ 0x4f0
THUNK_GDI32_REMOVEFONTRESOURCEEXW equ 0x4f1
THUNK_GDI32_RESETDCA equ 0x4f2
THUNK_GDI32_RESETDCW equ 0x4f3
THUNK_GDI32_RESIZEPALETTE equ 0x4f4
THUNK_GDI32_RESTOREDC equ 0x4f5
THUNK_GDI32_ROUNDRECT equ 0x4f6
THUNK_GDI32_SAVEDC equ 0x4f7
THUNK_GDI32_SCALEVIEWPORTEXTEX equ 0x4f8
THUNK_GDI32_SCALEWINDOWEXTEX equ 0x4f9
THUNK_GDI32_SELECTCLIPPATH equ 0x4fa
THUNK_GDI32_SELECTCLIPRGN equ 0x4fb
THUNK_GDI32_SELECTOBJECT equ 0x4fc
THUNK_GDI32_SELECTPALETTE equ 0x4fd
THUNK_GDI32_SETABORTPROC equ 0x4fe
THUNK_GDI32_SETARCDIRECTION equ 0x4ff
THUNK_GDI32_SETBITMAPBITS equ 0x500
THUNK_GDI32_SETBITMAPDIMENSIONEX equ 0x501
THUNK_GDI32_SETBKCOLOR equ 0x502
THUNK_GDI32_SETBKMODE equ 0x503
THUNK_GDI32_SETBOUNDSRECT equ 0x504
THUNK_GDI32_SETBRUSHORGEX equ 0x505
THUNK_GDI32_SETCOLORADJUSTMENT equ 0x506
THUNK_GDI32_SETCOLORSPACE equ 0x507
THUNK_GDI32_SETDEVICEGAMMARAMP equ 0x508
THUNK_GDI32_SETDCBRUSHCOLOR equ 0x509
THUNK_GDI32_SETDCPENCOLOR equ 0x50a
THUNK_GDI32_SETDIBCOLORTABLE equ 0x50b
THUNK_GDI32_SETDIBITS equ 0x50c
THUNK_GDI32_SETDIBITSTODEVICE equ 0x50d
THUNK_GDI32_SETENHMETAFILEBITS equ 0x50e
THUNK_GDI32_SETGRAPHICSMODE equ 0x50f
THUNK_GDI32_SETICMMODE equ 0x510
THUNK_GDI32_SETICMPROFILEA equ 0x511
THUNK_GDI32_SETICMPROFILEW equ 0x512
THUNK_GDI32_SETLAYOUT equ 0x513
THUNK_GDI32_SETMAPMODE equ 0x514
THUNK_GDI32_SETMAPPERFLAGS equ 0x515
THUNK_GDI32_SETMETAFILEBITSEX equ 0x516
THUNK_GDI32_SETMETARGN equ 0x517
THUNK_GDI32_SETMITERLIMIT equ 0x518
THUNK_GDI32_SETPALETTEENTRIES equ 0x519
THUNK_GDI32_SETPIXEL equ 0x51a
THUNK_GDI32_SETPIXELV equ 0x51b
THUNK_GDI32_SETPIXELFORMAT equ 0x51c
THUNK_GDI32_SETPOLYFILLMODE equ 0x51d
THUNK_GDI32_SETRECTRGN equ 0x51e
THUNK_GDI32_SETROP2 equ 0x51f
THUNK_GDI32_SETSTRETCHBLTMODE equ 0x520
THUNK_GDI32_SETSYSTEMPALETTEUSE equ 0x521
THUNK_GDI32_SETTEXTALIGN equ 0x522
THUNK_GDI32_SETTEXTCHARACTEREXTRA equ 0x523
THUNK_GDI32_SETTEXTCOLOR equ 0x524
THUNK_GDI32_SETTEXTJUSTIFICATION equ 0x525
THUNK_GDI32_SETVIEWPORTEXTEX equ 0x526
THUNK_GDI32_SETVIEWPORTORGEX equ 0x527
THUNK_GDI32_SETWINDOWEXTEX equ 0x528
THUNK_GDI32_SETWINDOWORGEX equ 0x529
THUNK_GDI32_SETWINMETAFILEBITS equ 0x52a
THUNK_GDI32_SETWORLDTRANSFORM equ 0x52b
THUNK_GDI32_STARTDOCA equ 0x52c
THUNK_GDI32_STARTDOCW equ 0x52d
THUNK_GDI32_STARTPAGE equ 0x52e
THUNK_GDI32_ENDPAGE equ 0x52f
THUNK_GDI32_STRETCHBLT equ 0x530
THUNK_GDI32_STRETCHDIBITS equ 0x531
THUNK_GDI32_STROKEANDFILLPATH equ 0x532
THUNK_GDI32_STROKEPATH equ 0x533
THUNK_GDI32_SWAPBUFFERS equ 0x534
THUNK_GDI32_TEXTOUTA equ 0x535
THUNK_GDI32_TEXTOUTW equ 0x536
THUNK_GDI32_TRANSLATECHARSETINFO equ 0x537
THUNK_GDI32_UNREALIZEOBJECT equ 0x538
THUNK_GDI32_UPDATECOLORS equ 0x539
THUNK_GDI32_UPDATEICMREGKEYA equ 0x53a
THUNK_GDI32_UPDATEICMREGKEYW equ 0x53b
THUNK_GDI32_WIDENPATH equ 0x53c

SYSCALL_THUNK equ 0x80