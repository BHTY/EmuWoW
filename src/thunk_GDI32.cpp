#include <windows.h>
#include <winternl.h>
#include "thunk_GDI32.h"
#include "thunks.h"

int thunk_AbortDoc(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!AbortDoc(%p)", hdc);
	return AbortDoc(hdc);
}
BOOL thunk_AbortPath(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!AbortPath(%p)", hdc);
	return AbortPath(hdc);
}
int thunk_AddFontResourceA(CPU* cpu){
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!AddFontResourceA(%p)", unnamedParam1);
	return AddFontResourceA(unnamedParam1);
}
int thunk_AddFontResourceW(CPU* cpu){
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!AddFontResourceW(%p)", unnamedParam1);
	return AddFontResourceW(unnamedParam1);
}
BOOL thunk_AngleArc(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	DWORD r = cpu->fn_arg(cpu, 3);
	FLOAT StartAngle = cpu->fn_arg(cpu, 4);
	FLOAT SweepAngle = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!AngleArc(%p, %p, %p, %p, %p, %p)", hdc, x, y, r, StartAngle, SweepAngle);
	return AngleArc(hdc, x, y, r, StartAngle, SweepAngle);
}
BOOL thunk_AnimatePalette(CPU* cpu){
	HPALETTE hPal = cpu->fn_arg(cpu, 0);
	UINT iStartIndex = cpu->fn_arg(cpu, 1);
	UINT cEntries = cpu->fn_arg(cpu, 2);
	const PALETTEENTRY * ppe = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!AnimatePalette(%p, %p, %p, %p)", hPal, iStartIndex, cEntries, ppe);
	return AnimatePalette(hPal, iStartIndex, cEntries, ppe);
}
BOOL thunk_Arc(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x1 = cpu->fn_arg(cpu, 1);
	int y1 = cpu->fn_arg(cpu, 2);
	int x2 = cpu->fn_arg(cpu, 3);
	int y2 = cpu->fn_arg(cpu, 4);
	int x3 = cpu->fn_arg(cpu, 5);
	int y3 = cpu->fn_arg(cpu, 6);
	int x4 = cpu->fn_arg(cpu, 7);
	int y4 = cpu->fn_arg(cpu, 8);
	printf("\nCalling GDI32!Arc(%p, %p, %p, %p, %p, %p, %p, %p, %p)", hdc, x1, y1, x2, y2, x3, y3, x4, y4);
	return Arc(hdc, x1, y1, x2, y2, x3, y3, x4, y4);
}
BOOL thunk_ArcTo(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	int left = cpu->fn_arg(cpu, 1);
	int top = cpu->fn_arg(cpu, 2);
	int right = cpu->fn_arg(cpu, 3);
	int bottom = cpu->fn_arg(cpu, 4);
	int xr1 = cpu->fn_arg(cpu, 5);
	int yr1 = cpu->fn_arg(cpu, 6);
	int xr2 = cpu->fn_arg(cpu, 7);
	int yr2 = cpu->fn_arg(cpu, 8);
	printf("\nCalling GDI32!ArcTo(%p, %p, %p, %p, %p, %p, %p, %p, %p)", hdc, left, top, right, bottom, xr1, yr1, xr2, yr2);
	return ArcTo(hdc, left, top, right, bottom, xr1, yr1, xr2, yr2);
}
BOOL thunk_BeginPath(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!BeginPath(%p)", hdc);
	return BeginPath(hdc);
}
BOOL thunk_BitBlt(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x = cpu->fn_arg(cpu, 1);
	int y = cpu->fn_arg(cpu, 2);
	int cx = cpu->fn_arg(cpu, 3);
	int cy = cpu->fn_arg(cpu, 4);
	HDC hdcSrc = cpu->fn_arg(cpu, 5);
	int x1 = cpu->fn_arg(cpu, 6);
	int y1 = cpu->fn_arg(cpu, 7);
	DWORD rop = cpu->fn_arg(cpu, 8);
	printf("\nCalling GDI32!BitBlt(%p, %p, %p, %p, %p, %p, %p, %p, %p)", hdc, x, y, cx, cy, hdcSrc, x1, y1, rop);
	return BitBlt(hdc, x, y, cx, cy, hdcSrc, x1, y1, rop);
}
BOOL thunk_CancelDC(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CancelDC(%p)", hdc);
	return CancelDC(hdc);
}
BOOL thunk_CheckColorsInGamut(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	LPRGBTRIPLE lpRGBTriple = cpu->fn_arg(cpu, 1);
	LPVOID dlpBuffer = cpu->fn_arg(cpu, 2);
	DWORD nCount = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CheckColorsInGamut(%p, %p, %p, %p)", hdc, lpRGBTriple, dlpBuffer, nCount);
	return CheckColorsInGamut(hdc, lpRGBTriple, dlpBuffer, nCount);
}
int thunk_ChoosePixelFormat(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	const PIXELFORMATDESCRIPTOR * ppfd = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!ChoosePixelFormat(%p, %p)", hdc, ppfd);
	return ChoosePixelFormat(hdc, ppfd);
}
BOOL thunk_Chord(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	int x1 = cpu->fn_arg(cpu, 1);
	int y1 = cpu->fn_arg(cpu, 2);
	int x2 = cpu->fn_arg(cpu, 3);
	int y2 = cpu->fn_arg(cpu, 4);
	int x3 = cpu->fn_arg(cpu, 5);
	int y3 = cpu->fn_arg(cpu, 6);
	int x4 = cpu->fn_arg(cpu, 7);
	int y4 = cpu->fn_arg(cpu, 8);
	printf("\nCalling GDI32!Chord(%p, %p, %p, %p, %p, %p, %p, %p, %p)", hdc, x1, y1, x2, y2, x3, y3, x4, y4);
	return Chord(hdc, x1, y1, x2, y2, x3, y3, x4, y4);
}
HENHMETAFILE thunk_CloseEnhMetaFile(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CloseEnhMetaFile(%p)", hdc);
	return CloseEnhMetaFile(hdc);
}
BOOL thunk_CloseFigure(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CloseFigure(%p)", hdc);
	return CloseFigure(hdc);
}
HMETAFILE thunk_CloseMetaFile(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CloseMetaFile(%p)", hdc);
	return CloseMetaFile(hdc);
}
BOOL thunk_ColorMatchToTarget(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	HDC hdcTarget = cpu->fn_arg(cpu, 1);
	DWORD action = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!ColorMatchToTarget(%p, %p, %p)", hdc, hdcTarget, action);
	return ColorMatchToTarget(hdc, hdcTarget, action);
}
int thunk_CombineRgn(CPU* cpu){
	HRGN hrgnDst = cpu->fn_arg(cpu, 0);
	HRGN hrgnSrc1 = cpu->fn_arg(cpu, 1);
	HRGN hrgnSrc2 = cpu->fn_arg(cpu, 2);
	int iMode = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CombineRgn(%p, %p, %p, %p)", hrgnDst, hrgnSrc1, hrgnSrc2, iMode);
	return CombineRgn(hrgnDst, hrgnSrc1, hrgnSrc2, iMode);
}
BOOL thunk_CombineTransform(CPU* cpu){
	LPXFORM lpxfOut = cpu->fn_arg(cpu, 0);
	const XFORM * lpxf1 = cpu->fn_arg(cpu, 1);
	const XFORM * lpxf2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!CombineTransform(%p, %p, %p)", lpxfOut, lpxf1, lpxf2);
	return CombineTransform(lpxfOut, lpxf1, lpxf2);
}
HENHMETAFILE thunk_CopyEnhMetaFileA(CPU* cpu){
	HENHMETAFILE hEnh = cpu->fn_arg(cpu, 0);
	LPCSTR lpFileName = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CopyEnhMetaFileA(%p, %p)", hEnh, lpFileName);
	return CopyEnhMetaFileA(hEnh, lpFileName);
}
HENHMETAFILE thunk_CopyEnhMetaFileW(CPU* cpu){
	HENHMETAFILE hEnh = cpu->fn_arg(cpu, 0);
	LPCWSTR lpFileName = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CopyEnhMetaFileW(%p, %p)", hEnh, lpFileName);
	return CopyEnhMetaFileW(hEnh, lpFileName);
}
HMETAFILE thunk_CopyMetaFileA(CPU* cpu){
	HMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CopyMetaFileA(%p, %p)", unnamedParam1, unnamedParam2);
	return CopyMetaFileA(unnamedParam1, unnamedParam2);
}
HMETAFILE thunk_CopyMetaFileW(CPU* cpu){
	HMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CopyMetaFileW(%p, %p)", unnamedParam1, unnamedParam2);
	return CopyMetaFileW(unnamedParam1, unnamedParam2);
}
HBITMAP thunk_CreateBitmap(CPU* cpu){
	int nWidth = cpu->fn_arg(cpu, 0);
	int nHeight = cpu->fn_arg(cpu, 1);
	UINT nPlanes = cpu->fn_arg(cpu, 2);
	UINT nBitCount = cpu->fn_arg(cpu, 3);
	const VOID * lpBits = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!CreateBitmap(%p, %p, %p, %p, %p)", nWidth, nHeight, nPlanes, nBitCount, lpBits);
	return CreateBitmap(nWidth, nHeight, nPlanes, nBitCount, lpBits);
}
HBITMAP thunk_CreateBitmapIndirect(CPU* cpu){
	const BITMAP * pbm = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateBitmapIndirect(%p)", pbm);
	return CreateBitmapIndirect(pbm);
}
HBRUSH thunk_CreateBrushIndirect(CPU* cpu){
	const LOGBRUSH * plbrush = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateBrushIndirect(%p)", plbrush);
	return CreateBrushIndirect(plbrush);
}
HCOLORSPACE thunk_CreateColorSpaceA(CPU* cpu){
	LPLOGCOLORSPACEA lplcs = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateColorSpaceA(%p)", lplcs);
	return CreateColorSpaceA(lplcs);
}
HCOLORSPACE thunk_CreateColorSpaceW(CPU* cpu){
	LPLOGCOLORSPACEW lplcs = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateColorSpaceW(%p)", lplcs);
	return CreateColorSpaceW(lplcs);
}
HBITMAP thunk_CreateCompatibleBitmap(CPU* cpu) {
	HDC hdc = cpu->fn_arg(cpu, 0);
	int cx = cpu->fn_arg(cpu, 1);
	int cy = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!CreateCompatibleBitmap(%p, %p, %p)", hdc, cx, cy);
	return CreateCompatibleBitmap(hdc, cx, cy);
}
HDC thunk_CreateCompatibleDC(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateCompatibleDC(%p)", hdc);
	return CreateCompatibleDC(hdc);
}
HDC thunk_CreateDCA(CPU* cpu){
	LPCSTR pwszDriver = cpu->fn_arg(cpu, 0);
	LPCSTR pwszDevice = cpu->fn_arg(cpu, 1);
	LPCSTR pszPort = cpu->fn_arg(cpu, 2);
	const DEVMODEA * pdm = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateDCA(%p, %p, %p, %p)", pwszDriver, pwszDevice, pszPort, pdm);
	return CreateDCA(pwszDriver, pwszDevice, pszPort, pdm);
}
HDC thunk_CreateDCW(CPU* cpu){
	LPCWSTR pwszDriver = cpu->fn_arg(cpu, 0);
	LPCWSTR pwszDevice = cpu->fn_arg(cpu, 1);
	LPCWSTR pszPort = cpu->fn_arg(cpu, 2);
	const DEVMODEW * pdm = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateDCW(%p, %p, %p, %p)", pwszDriver, pwszDevice, pszPort, pdm);
	return CreateDCW(pwszDriver, pwszDevice, pszPort, pdm);
}
HBRUSH thunk_CreateDIBPatternBrush(CPU* cpu){
	HGLOBAL h = cpu->fn_arg(cpu, 0);
	UINT iUsage = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CreateDIBPatternBrush(%p, %p)", h, iUsage);
	return CreateDIBPatternBrush(h, iUsage);
}
HBRUSH thunk_CreateDIBPatternBrushPt(CPU* cpu){
	const VOID * lpPackedDIB = cpu->fn_arg(cpu, 0);
	UINT iUsage = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CreateDIBPatternBrushPt(%p, %p)", lpPackedDIB, iUsage);
	return CreateDIBPatternBrushPt(lpPackedDIB, iUsage);
}
HBITMAP thunk_CreateDIBSection(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	const BITMAPINFO * pbmi = cpu->fn_arg(cpu, 1);
	UINT usage = cpu->fn_arg(cpu, 2);
	VOID * * ppvBits = cpu->fn_arg(cpu, 3);
	HANDLE hSection = cpu->fn_arg(cpu, 4);
	DWORD offset = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!CreateDIBSection(%p, %p, %p, %p, %p, %p)", hdc, pbmi, usage, ppvBits, hSection, offset);
	return CreateDIBSection(hdc, pbmi, usage, ppvBits, hSection, offset);
}
HBITMAP thunk_CreateDIBitmap(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	const BITMAPINFOHEADER * pbmih = cpu->fn_arg(cpu, 1);
	DWORD flInit = cpu->fn_arg(cpu, 2);
	const VOID * pjBits = cpu->fn_arg(cpu, 3);
	const BITMAPINFO * pbmi = cpu->fn_arg(cpu, 4);
	UINT iUsage = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!CreateDIBitmap(%p, %p, %p, %p, %p, %p)", hdc, pbmih, flInit, pjBits, pbmi, iUsage);
	return CreateDIBitmap(hdc, pbmih, flInit, pjBits, pbmi, iUsage);
}
HRGN thunk_CreateEllipticRgn(CPU* cpu){
	int x1 = cpu->fn_arg(cpu, 0);
	int y1 = cpu->fn_arg(cpu, 1);
	int x2 = cpu->fn_arg(cpu, 2);
	int y2 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateEllipticRgn(%p, %p, %p, %p)", x1, y1, x2, y2);
	return CreateEllipticRgn(x1, y1, x2, y2);
}
HRGN thunk_CreateEllipticRgnIndirect(CPU* cpu){
	const RECT * lprect = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateEllipticRgnIndirect(%p)", lprect);
	return CreateEllipticRgnIndirect(lprect);
}
HDC thunk_CreateEnhMetaFileA(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	LPCSTR lpFilename = cpu->fn_arg(cpu, 1);
	const RECT * lprc = cpu->fn_arg(cpu, 2);
	LPCSTR lpDesc = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateEnhMetaFileA(%p, %p, %p, %p)", hdc, lpFilename, lprc, lpDesc);
	return CreateEnhMetaFileA(hdc, lpFilename, lprc, lpDesc);
}
HFONT thunk_CreateFontA(CPU* cpu){
	int cHeight = cpu->fn_arg(cpu, 0);
	int cWidth = cpu->fn_arg(cpu, 1);
	int cEscapement = cpu->fn_arg(cpu, 2);
	int cOrientation = cpu->fn_arg(cpu, 3);
	int cWeight = cpu->fn_arg(cpu, 4);
	DWORD bItalic = cpu->fn_arg(cpu, 5);
	DWORD bUnderline = cpu->fn_arg(cpu, 6);
	DWORD bStrikeOut = cpu->fn_arg(cpu, 7);
	DWORD iCharSet = cpu->fn_arg(cpu, 8);
	DWORD iOutPrecision = cpu->fn_arg(cpu, 9);
	DWORD iClipPrecision = cpu->fn_arg(cpu, 10);
	DWORD iQuality = cpu->fn_arg(cpu, 11);
	DWORD iPitchAndFamily = cpu->fn_arg(cpu, 12);
	LPCSTR pszFaceName = cpu->fn_arg(cpu, 13);
	printf("\nCalling GDI32!CreateFontA(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", cHeight, cWidth, cEscapement, cOrientation, cWeight, bItalic, bUnderline, bStrikeOut, iCharSet, iOutPrecision, iClipPrecision, iQuality, iPitchAndFamily, pszFaceName);
	return CreateFontA(cHeight, cWidth, cEscapement, cOrientation, cWeight, bItalic, bUnderline, bStrikeOut, iCharSet, iOutPrecision, iClipPrecision, iQuality, iPitchAndFamily, pszFaceName);
}
HFONT thunk_CreateFontIndirectA(CPU* cpu){
	const LOGFONTA * lplf = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateFontIndirectA(%p)", lplf);
	return CreateFontIndirectA(lplf);
}
HFONT thunk_CreateFontIndirectW(CPU* cpu){
	const LOGFONTW * lplf = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateFontIndirectW(%p)", lplf);
	return CreateFontIndirectW(lplf);
}
HFONT thunk_CreateFontW(CPU* cpu){
	int cHeight = cpu->fn_arg(cpu, 0);
	int cWidth = cpu->fn_arg(cpu, 1);
	int cEscapement = cpu->fn_arg(cpu, 2);
	int cOrientation = cpu->fn_arg(cpu, 3);
	int cWeight = cpu->fn_arg(cpu, 4);
	DWORD bItalic = cpu->fn_arg(cpu, 5);
	DWORD bUnderline = cpu->fn_arg(cpu, 6);
	DWORD bStrikeOut = cpu->fn_arg(cpu, 7);
	DWORD iCharSet = cpu->fn_arg(cpu, 8);
	DWORD iOutPrecision = cpu->fn_arg(cpu, 9);
	DWORD iClipPrecision = cpu->fn_arg(cpu, 10);
	DWORD iQuality = cpu->fn_arg(cpu, 11);
	DWORD iPitchAndFamily = cpu->fn_arg(cpu, 12);
	LPCWSTR pszFaceName = cpu->fn_arg(cpu, 13);
	printf("\nCalling GDI32!CreateFontW(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", cHeight, cWidth, cEscapement, cOrientation, cWeight, bItalic, bUnderline, bStrikeOut, iCharSet, iOutPrecision, iClipPrecision, iQuality, iPitchAndFamily, pszFaceName);
	return CreateFontW(cHeight, cWidth, cEscapement, cOrientation, cWeight, bItalic, bUnderline, bStrikeOut, iCharSet, iOutPrecision, iClipPrecision, iQuality, iPitchAndFamily, pszFaceName);
}
HPALETTE thunk_CreateHalftonePalette(CPU* cpu){
	HDC hdc = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateHalftonePalette(%p)", hdc);
	return CreateHalftonePalette(hdc);
}
HBRUSH thunk_CreateHatchBrush(CPU* cpu){
	int iHatch = cpu->fn_arg(cpu, 0);
	COLORREF color = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!CreateHatchBrush(%p, %p)", iHatch, color);
	return CreateHatchBrush(iHatch, color);
}
HDC thunk_CreateICA(CPU* cpu){
	LPCSTR pszDriver = cpu->fn_arg(cpu, 0);
	LPCSTR pszDevice = cpu->fn_arg(cpu, 1);
	LPCSTR pszPort = cpu->fn_arg(cpu, 2);
	const DEVMODEA * pdm = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateICA(%p, %p, %p, %p)", pszDriver, pszDevice, pszPort, pdm);
	return CreateICA(pszDriver, pszDevice, pszPort, pdm);
}
HDC thunk_CreateICW(CPU* cpu){
	LPCWSTR pszDriver = cpu->fn_arg(cpu, 0);
	LPCWSTR pszDevice = cpu->fn_arg(cpu, 1);
	LPCWSTR pszPort = cpu->fn_arg(cpu, 2);
	const DEVMODEW * pdm = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateICW(%p, %p, %p, %p)", pszDriver, pszDevice, pszPort, pdm);
	return CreateICW(pszDriver, pszDevice, pszPort, pdm);
}
HDC thunk_CreateMetaFileA(CPU* cpu){
	LPCSTR pszFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateMetaFileA(%p)", pszFile);
	return CreateMetaFileA(pszFile);
}
HDC thunk_CreateMetaFileW(CPU* cpu){
	LPCWSTR pszFile = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateMetaFileW(%p)", pszFile);
	return CreateMetaFileW(pszFile);
}
HPALETTE thunk_CreatePalette(CPU* cpu){
	const LOGPALETTE * plpal = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreatePalette(%p)", plpal);
	return CreatePalette(plpal);
}
HBRUSH thunk_CreatePatternBrush(CPU* cpu){
	HBITMAP hbm = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreatePatternBrush(%p)", hbm);
	return CreatePatternBrush(hbm);
}
HPEN thunk_CreatePen(CPU* cpu){
	int iStyle = cpu->fn_arg(cpu, 0);
	int cWidth = cpu->fn_arg(cpu, 1);
	COLORREF color = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!CreatePen(%p, %p, %p)", iStyle, cWidth, color);
	return CreatePen(iStyle, cWidth, color);
}
HPEN thunk_CreatePenIndirect(CPU* cpu){
	const LOGPEN * plpen = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreatePenIndirect(%p)", plpen);
	return CreatePenIndirect(plpen);
}
HRGN thunk_CreatePolyPolygonRgn(CPU* cpu){
	const POINT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	const INT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreatePolyPolygonRgn(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreatePolyPolygonRgn(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HRGN thunk_CreatePolygonRgn(CPU* cpu){
	const POINT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!CreatePolygonRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return CreatePolygonRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
HRGN thunk_CreateRectRgn(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateRectRgn(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateRectRgn(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HRGN thunk_CreateRectRgnIndirect(CPU* cpu){
	const RECT * unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateRectRgnIndirect(%p)", unnamedParam0);
	return CreateRectRgnIndirect(unnamedParam0);
}
HRGN thunk_CreateRoundRectRgn(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!CreateRoundRectRgn(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return CreateRoundRectRgn(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_CreateScalableFontResourceA(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateScalableFontResourceA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateScalableFontResourceA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_CreateScalableFontResourceW(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!CreateScalableFontResourceW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return CreateScalableFontResourceW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HBRUSH thunk_CreateSolidBrush(CPU* cpu){
	COLORREF unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!CreateSolidBrush(%p)", unnamedParam0);
	return CreateSolidBrush(unnamedParam0);
}
BOOL thunk_DPtoLP(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!DPtoLP(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return DPtoLP(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_DeleteColorSpace(CPU* cpu){
	HCOLORSPACE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!DeleteColorSpace(%p)", unnamedParam0);
	return DeleteColorSpace(unnamedParam0);
}
BOOL thunk_DeleteDC(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!DeleteDC(%p)", unnamedParam0);
	return DeleteDC(unnamedParam0);
}
BOOL thunk_DeleteEnhMetaFile(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!DeleteEnhMetaFile(%p)", unnamedParam0);
	return DeleteEnhMetaFile(unnamedParam0);
}
BOOL thunk_DeleteMetaFile(CPU* cpu){
	HMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!DeleteMetaFile(%p)", unnamedParam0);
	return DeleteMetaFile(unnamedParam0);
}
BOOL thunk_DeleteObject(CPU* cpu){
	HGDIOBJ unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!DeleteObject(%p)", unnamedParam0);
	return DeleteObject(unnamedParam0);
}
INT thunk_DescribePixelFormat(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPIXELFORMATDESCRIPTOR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!DescribePixelFormat(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DescribePixelFormat(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_DrawEscape(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!DrawEscape(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return DrawEscape(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_Ellipse(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!Ellipse(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return Ellipse(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_EndDoc(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!EndDoc(%p)", unnamedParam0);
	return EndDoc(unnamedParam0);
}
BOOL thunk_EndPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!EndPath(%p)", unnamedParam0);
	return EndPath(unnamedParam0);
}
BOOL thunk_EnumEnhMetaFile(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HENHMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 1);
	ENHMFENUMPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPVOID unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!EnumEnhMetaFile(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return EnumEnhMetaFile(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_EnumFontFamiliesA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCA unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumFontFamiliesA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumFontFamiliesA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumFontFamiliesW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCW unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumFontFamiliesW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumFontFamiliesW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumFontFamiliesExA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPLOGFONTA unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCA unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!EnumFontFamiliesExA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return EnumFontFamiliesExA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_EnumFontFamiliesExW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPLOGFONTW unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCW unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!EnumFontFamiliesExW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return EnumFontFamiliesExW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_EnumFontsA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCA unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumFontsA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumFontsA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumFontsW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	FONTENUMPROCW unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumFontsW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumFontsW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumICMProfilesA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	ICMENUMPROCA unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!EnumICMProfilesA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumICMProfilesA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_EnumICMProfilesW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	ICMENUMPROCW unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPARAM unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!EnumICMProfilesW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return EnumICMProfilesW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_EnumMetaFile(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 1);
	MFENUMPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumMetaFile(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumMetaFile(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_EnumObjects(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	GOBJENUMPROC unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPARAM unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!EnumObjects(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return EnumObjects(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_EqualRgn(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!EqualRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return EqualRgn(unnamedParam0, unnamedParam1);
}
INT thunk_Escape(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPVOID unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!Escape(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return Escape(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_ExcludeClipRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!ExcludeClipRect(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ExcludeClipRect(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HPEN thunk_ExtCreatePen(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	const LOGBRUSH * unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	const DWORD * unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!ExtCreatePen(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ExtCreatePen(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
HRGN thunk_ExtCreateRegion(CPU* cpu){
	const XFORM * unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RGNDATA * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!ExtCreateRegion(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return ExtCreateRegion(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_ExtEscape(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPSTR unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!ExtEscape(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return ExtEscape(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_ExtFloodFill(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	COLORREF unnamedParam3 = cpu->fn_arg(cpu, 3);
	UINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!ExtFloodFill(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return ExtFloodFill(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_ExtSelectClipRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!ExtSelectClipRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return ExtSelectClipRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_ExtTextOutA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPCSTR unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	const INT * unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling GDI32!ExtTextOutA(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return ExtTextOutA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
BOOL thunk_ExtTextOutW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	const RECT * unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPCWSTR unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	const INT * unnamedParam7 = cpu->fn_arg(cpu, 7);
	printf("\nCalling GDI32!ExtTextOutW(%p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
	return ExtTextOutW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7);
}
BOOL thunk_FillPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!FillPath(%p)", unnamedParam0);
	return FillPath(unnamedParam0);
}
BOOL thunk_FillRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	HBRUSH unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!FillRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return FillRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_FixBrushOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!FixBrushOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return FixBrushOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_FlattenPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!FlattenPath(%p)", unnamedParam0);
	return FlattenPath(unnamedParam0);
}
BOOL thunk_FloodFill(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	COLORREF unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!FloodFill(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return FloodFill(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_FrameRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	HBRUSH unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!FrameRgn(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return FrameRgn(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_GetArcDirection(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetArcDirection(%p)", unnamedParam0);
	return GetArcDirection(unnamedParam0);
}
BOOL thunk_GetAspectRatioFilterEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSIZE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetAspectRatioFilterEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetAspectRatioFilterEx(unnamedParam0, unnamedParam1);
}
LONG thunk_GetBitmapBits(CPU* cpu){
	HBITMAP unnamedParam0 = cpu->fn_arg(cpu, 0);
	LONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetBitmapBits(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetBitmapBits(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetBitmapDimensionEx(CPU* cpu){
	HBITMAP unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSIZE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetBitmapDimensionEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetBitmapDimensionEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetBrushOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetBrushOrgEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetBrushOrgEx(unnamedParam0, unnamedParam1);
}
COLORREF thunk_GetBkColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetBkColor(%p)", unnamedParam0);
	return GetBkColor(unnamedParam0);
}
INT thunk_GetBkMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetBkMode(%p)", unnamedParam0);
	return GetBkMode(unnamedParam0);
}
UINT thunk_GetBoundsRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetBoundsRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetBoundsRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetCharABCWidthsA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPABC unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharABCWidthsA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharABCWidthsA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharABCWidthsW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPABC unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharABCWidthsW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharABCWidthsW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharABCWidthsFloatA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPABCFLOAT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharABCWidthsFloatA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharABCWidthsFloatA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharABCWidthsFloatW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPABCFLOAT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharABCWidthsFloatW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharABCWidthsFloatW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharABCWidthsI(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPABC unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!GetCharABCWidthsI(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetCharABCWidthsI(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
DWORD thunk_GetCharacterPlacementA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	GCP_RESULTSA * unnamedParam4 = cpu->fn_arg(cpu, 4);
	DWORD unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!GetCharacterPlacementA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return GetCharacterPlacementA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
DWORD thunk_GetCharacterPlacementW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	GCP_RESULTSW * unnamedParam4 = cpu->fn_arg(cpu, 4);
	DWORD unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!GetCharacterPlacementW(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return GetCharacterPlacementW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_GetCharWidth32A(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidth32A(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidth32A(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharWidth32W(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidth32W(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidth32W(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharWidthA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidthA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidthA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharWidthI(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!GetCharWidthI(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetCharWidthI(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetCharWidthW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidthW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidthW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharWidthFloatA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	PFLOAT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidthFloatA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidthFloatA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetCharWidthFloatW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	PFLOAT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetCharWidthFloatW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetCharWidthFloatW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_GetClipBox(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetClipBox(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClipBox(unnamedParam0, unnamedParam1);
}
INT thunk_GetClipRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetClipRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return GetClipRgn(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetColorAdjustment(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCOLORADJUSTMENT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetColorAdjustment(%p, %p)", unnamedParam0, unnamedParam1);
	return GetColorAdjustment(unnamedParam0, unnamedParam1);
}
HCOLORSPACE thunk_GetColorSpace(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetColorSpace(%p)", unnamedParam0);
	return GetColorSpace(unnamedParam0);
}
HGDIOBJ thunk_GetCurrentObject(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetCurrentObject(%p, %p)", unnamedParam0, unnamedParam1);
	return GetCurrentObject(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetCurrentPositionEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetCurrentPositionEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetCurrentPositionEx(unnamedParam0, unnamedParam1);
}
INT thunk_GetDeviceCaps(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetDeviceCaps(%p, %p)", unnamedParam0, unnamedParam1);
	return GetDeviceCaps(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetDeviceGammaRamp(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPVOID unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetDeviceGammaRamp(%p, %p)", unnamedParam0, unnamedParam1);
	return GetDeviceGammaRamp(unnamedParam0, unnamedParam1);
}
COLORREF thunk_GetDCBrushColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetDCBrushColor(%p)", unnamedParam0);
	return GetDCBrushColor(unnamedParam0);
}
BOOL thunk_GetDCOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetDCOrgEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetDCOrgEx(unnamedParam0, unnamedParam1);
}
COLORREF thunk_GetDCPenColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetDCPenColor(%p)", unnamedParam0);
	return GetDCPenColor(unnamedParam0);
}
UINT thunk_GetDIBColorTable(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	RGBQUAD * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetDIBColorTable(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetDIBColorTable(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_GetDIBits(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBITMAP unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPVOID unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPBITMAPINFO unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetDIBits(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetDIBits(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
HENHMETAFILE thunk_GetEnhMetaFileA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetEnhMetaFileA(%p)", unnamedParam0);
	return GetEnhMetaFileA(unnamedParam0);
}
HENHMETAFILE thunk_GetEnhMetaFileW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetEnhMetaFileW(%p)", unnamedParam0);
	return GetEnhMetaFileW(unnamedParam0);
}
UINT thunk_GetEnhMetaFileBits(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPBYTE unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetEnhMetaFileBits(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetEnhMetaFileBits(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetEnhMetaFileDescriptionA(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetEnhMetaFileDescriptionA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetEnhMetaFileDescriptionA(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetEnhMetaFileDescriptionW(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetEnhMetaFileDescriptionW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetEnhMetaFileDescriptionW(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetEnhMetaFileHeader(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPENHMETAHEADER unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetEnhMetaFileHeader(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetEnhMetaFileHeader(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetEnhMetaFilePaletteEntries(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPPALETTEENTRY unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetEnhMetaFilePaletteEntries(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetEnhMetaFilePaletteEntries(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_GetFontData(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPVOID unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!GetFontData(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetFontData(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
DWORD thunk_GetFontLanguageInfo(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetFontLanguageInfo(%p)", unnamedParam0);
	return GetFontLanguageInfo(unnamedParam0);
}
DWORD thunk_GetGlyphOutline(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPGLYPHMETRICS unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPVOID unnamedParam5 = cpu->fn_arg(cpu, 5);
	const MAT2 * unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetGlyphOutline(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetGlyphOutline(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
DWORD thunk_GetGlyphOutlineA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPGLYPHMETRICS unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPVOID unnamedParam5 = cpu->fn_arg(cpu, 5);
	const MAT2 * unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetGlyphOutlineA(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetGlyphOutlineA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
DWORD thunk_GetGlyphOutlineW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPGLYPHMETRICS unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPVOID unnamedParam5 = cpu->fn_arg(cpu, 5);
	const MAT2 * unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetGlyphOutlineW(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetGlyphOutlineW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
INT thunk_GetGraphicsMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetGraphicsMode(%p)", unnamedParam0);
	return GetGraphicsMode(unnamedParam0);
}
BOOL thunk_GetICMProfileA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetICMProfileA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetICMProfileA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetICMProfileW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPDWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetICMProfileW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetICMProfileW(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_GetKerningPairsA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPKERNINGPAIR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetKerningPairsA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetKerningPairsA(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_GetKerningPairsW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPKERNINGPAIR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetKerningPairsW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetKerningPairsW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetLogColorSpaceA(CPU* cpu){
	HCOLORSPACE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPLOGCOLORSPACEA unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetLogColorSpaceA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetLogColorSpaceA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetLogColorSpaceW(CPU* cpu){
	HCOLORSPACE unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPLOGCOLORSPACEW unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetLogColorSpaceW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetLogColorSpaceW(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetMapMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetMapMode(%p)", unnamedParam0);
	return GetMapMode(unnamedParam0);
}
HMETAFILE thunk_GetMetaFileA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetMetaFileA(%p)", unnamedParam0);
	return GetMetaFileA(unnamedParam0);
}
HMETAFILE thunk_GetMetaFileW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetMetaFileW(%p)", unnamedParam0);
	return GetMetaFileW(unnamedParam0);
}
UINT thunk_GetMetaFileBitsEx(CPU* cpu){
	HMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetMetaFileBitsEx(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetMetaFileBitsEx(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetMetaRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetMetaRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMetaRgn(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetMiterLimit(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	PFLOAT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetMiterLimit(%p, %p)", unnamedParam0, unnamedParam1);
	return GetMiterLimit(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetNearestColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetNearestColor(%p, %p)", unnamedParam0, unnamedParam1);
	return GetNearestColor(unnamedParam0, unnamedParam1);
}
UINT thunk_GetNearestPaletteIndex(CPU* cpu){
	HPALETTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetNearestPaletteIndex(%p, %p)", unnamedParam0, unnamedParam1);
	return GetNearestPaletteIndex(unnamedParam0, unnamedParam1);
}
INT thunk_GetObjectA(CPU* cpu){
	HGDIOBJ unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetObjectA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetObjectA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetObjectW(CPU* cpu){
	HGDIOBJ unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetObjectW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetObjectW(unnamedParam0, unnamedParam1, unnamedParam2);
}
DWORD thunk_GetObjectType(CPU* cpu){
	HGDIOBJ unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetObjectType(%p)", unnamedParam0);
	return GetObjectType(unnamedParam0);
}
UINT thunk_GetOutlineTextMetricsA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPOUTLINETEXTMETRICA unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetOutlineTextMetricsA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetOutlineTextMetricsA(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetOutlineTextMetricsW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPOUTLINETEXTMETRICW unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetOutlineTextMetricsW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetOutlineTextMetricsW(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_GetPaletteEntries(CPU* cpu){
	HPALETTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPALETTEENTRY unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetPaletteEntries(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetPaletteEntries(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_GetPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPBYTE unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetPath(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetPath(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
COLORREF thunk_GetPixel(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetPixel(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetPixel(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetPixelFormat(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetPixelFormat(%p)", unnamedParam0);
	return GetPixelFormat(unnamedParam0);
}
INT thunk_GetPolyFillMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetPolyFillMode(%p)", unnamedParam0);
	return GetPolyFillMode(unnamedParam0);
}
INT thunk_GetRandomRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetRandomRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetRandomRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetRasterizerCaps(CPU* cpu){
	LPRASTERIZER_STATUS unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetRasterizerCaps(%p, %p)", unnamedParam0, unnamedParam1);
	return GetRasterizerCaps(unnamedParam0, unnamedParam1);
}
DWORD thunk_GetRegionData(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPRGNDATA unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetRegionData(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetRegionData(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetRgnBox(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPRECT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetRgnBox(%p, %p)", unnamedParam0, unnamedParam1);
	return GetRgnBox(unnamedParam0, unnamedParam1);
}
INT thunk_GetROP2(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetROP2(%p)", unnamedParam0);
	return GetROP2(unnamedParam0);
}
HGDIOBJ thunk_GetStockObject(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetStockObject(%p)", unnamedParam0);
	return GetStockObject(unnamedParam0);
}
INT thunk_GetStretchBltMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetStretchBltMode(%p)", unnamedParam0);
	return GetStretchBltMode(unnamedParam0);
}
UINT thunk_GetSystemPaletteEntries(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPALETTEENTRY unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetSystemPaletteEntries(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetSystemPaletteEntries(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
UINT thunk_GetSystemPaletteUse(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetSystemPaletteUse(%p)", unnamedParam0);
	return GetSystemPaletteUse(unnamedParam0);
}
UINT thunk_GetTextAlign(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetTextAlign(%p)", unnamedParam0);
	return GetTextAlign(unnamedParam0);
}
INT thunk_GetTextCharacterExtra(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetTextCharacterExtra(%p)", unnamedParam0);
	return GetTextCharacterExtra(unnamedParam0);
}
UINT thunk_GetTextCharset(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetTextCharset(%p)", unnamedParam0);
	return GetTextCharset(unnamedParam0);
}
UINT thunk_GetTextCharsetInfo(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPFONTSIGNATURE unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetTextCharsetInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetTextCharsetInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
COLORREF thunk_GetTextColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!GetTextColor(%p)", unnamedParam0);
	return GetTextColor(unnamedParam0);
}
BOOL thunk_GetTextExtentExPointA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPSIZE unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetTextExtentExPointA(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetTextExtentExPointA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_GetTextExtentExPointW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPINT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPINT unnamedParam5 = cpu->fn_arg(cpu, 5);
	LPSIZE unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!GetTextExtentExPointW(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return GetTextExtentExPointW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
BOOL thunk_GetTextExtentPointA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetTextExtentPointA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetTextExtentPointA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetTextExtentPointW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetTextExtentPointW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetTextExtentPointW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetTextExtentPoint32A(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetTextExtentPoint32A(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetTextExtentPoint32A(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_GetTextExtentPoint32W(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!GetTextExtentPoint32W(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return GetTextExtentPoint32W(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_GetTextFaceA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetTextFaceA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetTextFaceA(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_GetTextFaceW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!GetTextFaceW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return GetTextFaceW(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_GetTextMetricsA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPTEXTMETRICA unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetTextMetricsA(%p, %p)", unnamedParam0, unnamedParam1);
	return GetTextMetricsA(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetTextMetricsW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPTEXTMETRICW unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetTextMetricsW(%p, %p)", unnamedParam0, unnamedParam1);
	return GetTextMetricsW(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetViewportExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSIZE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetViewportExtEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetViewportExtEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetViewportOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetViewportOrgEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetViewportOrgEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetWindowExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSIZE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetWindowExtEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowExtEx(unnamedParam0, unnamedParam1);
}
BOOL thunk_GetWindowOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetWindowOrgEx(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWindowOrgEx(unnamedParam0, unnamedParam1);
}
UINT thunk_GetWinMetaFileBits(CPU* cpu){
	HENHMETAFILE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPBYTE unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	HDC unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!GetWinMetaFileBits(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return GetWinMetaFileBits(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_GetWorldTransform(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPXFORM unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!GetWorldTransform(%p, %p)", unnamedParam0, unnamedParam1);
	return GetWorldTransform(unnamedParam0, unnamedParam1);
}
INT thunk_IntersectClipRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!IntersectClipRect(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return IntersectClipRect(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_InvertRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!InvertRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return InvertRgn(unnamedParam0, unnamedParam1);
}
BOOL thunk_LineDDA(CPU* cpu){
	INT unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	LINEDDAPROC unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPARAM unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!LineDDA(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return LineDDA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_LineTo(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!LineTo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return LineTo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_LPtoDP(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPPOINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!LPtoDP(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return LPtoDP(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_MaskBlt(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	HDC unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	HBITMAP unnamedParam8 = cpu->fn_arg(cpu, 8);
	INT unnamedParam9 = cpu->fn_arg(cpu, 9);
	INT unnamedParam10 = cpu->fn_arg(cpu, 10);
	DWORD unnamedParam11 = cpu->fn_arg(cpu, 11);
	printf("\nCalling GDI32!MaskBlt(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
	return MaskBlt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
}
BOOL thunk_ModifyWorldTransform(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const XFORM * unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!ModifyWorldTransform(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return ModifyWorldTransform(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_MoveToEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!MoveToEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return MoveToEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_OffsetClipRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!OffsetClipRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OffsetClipRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_OffsetRgn(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!OffsetRgn(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return OffsetRgn(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_OffsetViewportOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!OffsetViewportOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return OffsetViewportOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_OffsetWindowOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!OffsetWindowOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return OffsetWindowOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PaintRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!PaintRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return PaintRgn(unnamedParam0, unnamedParam1);
}
BOOL thunk_PatBlt(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	DWORD unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!PatBlt(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return PatBlt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
HRGN thunk_PathToRegion(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!PathToRegion(%p)", unnamedParam0);
	return PathToRegion(unnamedParam0);
}
BOOL thunk_Pie(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	printf("\nCalling GDI32!Pie(%p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
	return Pie(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8);
}
BOOL thunk_PlayEnhMetaFile(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HENHMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 1);
	const RECT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PlayEnhMetaFile(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PlayEnhMetaFile(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PlayEnhMetaFileRecord(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPHANDLETABLE unnamedParam1 = cpu->fn_arg(cpu, 1);
	const ENHMETARECORD * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!PlayEnhMetaFileRecord(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PlayEnhMetaFileRecord(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PlayMetaFile(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HMETAFILE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!PlayMetaFile(%p, %p)", unnamedParam0, unnamedParam1);
	return PlayMetaFile(unnamedParam0, unnamedParam1);
}
BOOL thunk_PlayMetaFileRecord(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPHANDLETABLE unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPMETARECORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!PlayMetaFileRecord(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PlayMetaFileRecord(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PlgBlt(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	HDC unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	HBITMAP unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	INT unnamedParam9 = cpu->fn_arg(cpu, 9);
	printf("\nCalling GDI32!PlgBlt(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
	return PlgBlt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9);
}
BOOL thunk_PolyBezier(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PolyBezier(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PolyBezier(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PolyBezierTo(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PolyBezierTo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PolyBezierTo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PolyDraw(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const BYTE * unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!PolyDraw(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PolyDraw(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PolyPolygon(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const INT * unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!PolyPolygon(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PolyPolygon(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_PolyPolyline(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	const DWORD * unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!PolyPolyline(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return PolyPolyline(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_Polygon(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!Polygon(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return Polygon(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_Polyline(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!Polyline(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return Polyline(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PolylineTo(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const POINT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PolylineTo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PolylineTo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PtInRegion(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PtInRegion(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PtInRegion(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_PtVisible(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!PtVisible(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return PtVisible(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_RealizePalette(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!RealizePalette(%p)", unnamedParam0);
	return RealizePalette(unnamedParam0);
}
BOOL thunk_Rectangle(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!Rectangle(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return Rectangle(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_RectInRegion(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!RectInRegion(%p, %p)", unnamedParam0, unnamedParam1);
	return RectInRegion(unnamedParam0, unnamedParam1);
}
BOOL thunk_RectVisible(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!RectVisible(%p, %p)", unnamedParam0, unnamedParam1);
	return RectVisible(unnamedParam0, unnamedParam1);
}
BOOL thunk_RemoveFontMemResourceEx(CPU* cpu){
	HANDLE unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!RemoveFontMemResourceEx(%p)", unnamedParam0);
	return RemoveFontMemResourceEx(unnamedParam0);
}
BOOL thunk_RemoveFontResourceA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!RemoveFontResourceA(%p)", unnamedParam0);
	return RemoveFontResourceA(unnamedParam0);
}
BOOL thunk_RemoveFontResourceW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!RemoveFontResourceW(%p)", unnamedParam0);
	return RemoveFontResourceW(unnamedParam0);
}
BOOL thunk_RemoveFontResourceExA(CPU* cpu){
	LPCSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	PVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!RemoveFontResourceExA(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RemoveFontResourceExA(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_RemoveFontResourceExW(CPU* cpu){
	LPCWSTR unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	PVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!RemoveFontResourceExW(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return RemoveFontResourceExW(unnamedParam0, unnamedParam1, unnamedParam2);
}
HDC thunk_ResetDCA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const DEVMODEA * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!ResetDCA(%p, %p)", unnamedParam0, unnamedParam1);
	return ResetDCA(unnamedParam0, unnamedParam1);
}
HDC thunk_ResetDCW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const DEVMODEW * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!ResetDCW(%p, %p)", unnamedParam0, unnamedParam1);
	return ResetDCW(unnamedParam0, unnamedParam1);
}
BOOL thunk_ResizePalette(CPU* cpu){
	HPALETTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!ResizePalette(%p, %p)", unnamedParam0, unnamedParam1);
	return ResizePalette(unnamedParam0, unnamedParam1);
}
BOOL thunk_RestoreDC(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!RestoreDC(%p, %p)", unnamedParam0, unnamedParam1);
	return RestoreDC(unnamedParam0, unnamedParam1);
}
BOOL thunk_RoundRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!RoundRect(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return RoundRect(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
INT thunk_SaveDC(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!SaveDC(%p)", unnamedParam0);
	return SaveDC(unnamedParam0);
}
BOOL thunk_ScaleViewportExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPSIZE unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!ScaleViewportExtEx(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return ScaleViewportExtEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_ScaleWindowExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	LPSIZE unnamedParam5 = cpu->fn_arg(cpu, 5);
	printf("\nCalling GDI32!ScaleWindowExtEx(%p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
	return ScaleWindowExtEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5);
}
BOOL thunk_SelectClipPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SelectClipPath(%p, %p)", unnamedParam0, unnamedParam1);
	return SelectClipPath(unnamedParam0, unnamedParam1);
}
INT thunk_SelectClipRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HRGN unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SelectClipRgn(%p, %p)", unnamedParam0, unnamedParam1);
	return SelectClipRgn(unnamedParam0, unnamedParam1);
}
HGDIOBJ thunk_SelectObject(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HGDIOBJ unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SelectObject(%p, %p)", unnamedParam0, unnamedParam1);
	return SelectObject(unnamedParam0, unnamedParam1);
}
HPALETTE thunk_SelectPalette(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HPALETTE unnamedParam1 = cpu->fn_arg(cpu, 1);
	BOOL unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SelectPalette(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SelectPalette(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_SetAbortProc(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	ABORTPROC unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetAbortProc(%p, %p)", unnamedParam0, unnamedParam1);
	return SetAbortProc(unnamedParam0, unnamedParam1);
}
INT thunk_SetArcDirection(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetArcDirection(%p, %p)", unnamedParam0, unnamedParam1);
	return SetArcDirection(unnamedParam0, unnamedParam1);
}
LONG thunk_SetBitmapBits(CPU* cpu){
	HBITMAP unnamedParam0 = cpu->fn_arg(cpu, 0);
	LONG unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPCVOID unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SetBitmapBits(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetBitmapBits(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetBitmapDimensionEx(CPU* cpu){
	HBITMAP unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetBitmapDimensionEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetBitmapDimensionEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
COLORREF thunk_SetBkColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetBkColor(%p, %p)", unnamedParam0, unnamedParam1);
	return SetBkColor(unnamedParam0, unnamedParam1);
}
INT thunk_SetBkMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetBkMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetBkMode(unnamedParam0, unnamedParam1);
}
UINT thunk_SetBoundsRect(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const RECT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SetBoundsRect(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetBoundsRect(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetBrushOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetBrushOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetBrushOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetColorAdjustment(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const COLORADJUSTMENT * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetColorAdjustment(%p, %p)", unnamedParam0, unnamedParam1);
	return SetColorAdjustment(unnamedParam0, unnamedParam1);
}
HCOLORSPACE thunk_SetColorSpace(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HCOLORSPACE unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetColorSpace(%p, %p)", unnamedParam0, unnamedParam1);
	return SetColorSpace(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetDeviceGammaRamp(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPVOID unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetDeviceGammaRamp(%p, %p)", unnamedParam0, unnamedParam1);
	return SetDeviceGammaRamp(unnamedParam0, unnamedParam1);
}
COLORREF thunk_SetDCBrushColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetDCBrushColor(%p, %p)", unnamedParam0, unnamedParam1);
	return SetDCBrushColor(unnamedParam0, unnamedParam1);
}
COLORREF thunk_SetDCPenColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetDCPenColor(%p, %p)", unnamedParam0, unnamedParam1);
	return SetDCPenColor(unnamedParam0, unnamedParam1);
}
UINT thunk_SetDIBColorTable(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	const RGBQUAD * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetDIBColorTable(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetDIBColorTable(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
INT thunk_SetDIBits(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	HBITMAP unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	LPCVOID unnamedParam4 = cpu->fn_arg(cpu, 4);
	const BITMAPINFO * unnamedParam5 = cpu->fn_arg(cpu, 5);
	UINT unnamedParam6 = cpu->fn_arg(cpu, 6);
	printf("\nCalling GDI32!SetDIBits(%p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
	return SetDIBits(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6);
}
INT thunk_SetDIBitsToDevice(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	DWORD unnamedParam3 = cpu->fn_arg(cpu, 3);
	DWORD unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	UINT unnamedParam7 = cpu->fn_arg(cpu, 7);
	UINT unnamedParam8 = cpu->fn_arg(cpu, 8);
	LPCVOID unnamedParam9 = cpu->fn_arg(cpu, 9);
	const BITMAPINFO * unnamedParam10 = cpu->fn_arg(cpu, 10);
	UINT unnamedParam11 = cpu->fn_arg(cpu, 11);
	printf("\nCalling GDI32!SetDIBitsToDevice(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
	return SetDIBitsToDevice(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11);
}
HENHMETAFILE thunk_SetEnhMetaFileBits(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const BYTE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetEnhMetaFileBits(%p, %p)", unnamedParam0, unnamedParam1);
	return SetEnhMetaFileBits(unnamedParam0, unnamedParam1);
}
INT thunk_SetGraphicsMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetGraphicsMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetGraphicsMode(unnamedParam0, unnamedParam1);
}
INT thunk_SetICMMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetICMMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetICMMode(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetICMProfileA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetICMProfileA(%p, %p)", unnamedParam0, unnamedParam1);
	return SetICMProfileA(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetICMProfileW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetICMProfileW(%p, %p)", unnamedParam0, unnamedParam1);
	return SetICMProfileW(unnamedParam0, unnamedParam1);
}
DWORD thunk_SetLayout(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetLayout(%p, %p)", unnamedParam0, unnamedParam1);
	return SetLayout(unnamedParam0, unnamedParam1);
}
INT thunk_SetMapMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetMapMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMapMode(unnamedParam0, unnamedParam1);
}
DWORD thunk_SetMapperFlags(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	DWORD unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetMapperFlags(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMapperFlags(unnamedParam0, unnamedParam1);
}
HMETAFILE thunk_SetMetaFileBitsEx(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const BYTE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetMetaFileBitsEx(%p, %p)", unnamedParam0, unnamedParam1);
	return SetMetaFileBitsEx(unnamedParam0, unnamedParam1);
}
INT thunk_SetMetaRgn(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!SetMetaRgn(%p)", unnamedParam0);
	return SetMetaRgn(unnamedParam0);
}
BOOL thunk_SetMiterLimit(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	FLOAT unnamedParam1 = cpu->fn_arg(cpu, 1);
	PFLOAT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SetMiterLimit(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetMiterLimit(unnamedParam0, unnamedParam1, unnamedParam2);
}
UINT thunk_SetPaletteEntries(CPU* cpu){
	HPALETTE unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	UINT unnamedParam2 = cpu->fn_arg(cpu, 2);
	const PALETTEENTRY * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetPaletteEntries(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetPaletteEntries(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
COLORREF thunk_SetPixel(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	COLORREF unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetPixel(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetPixel(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetPixelV(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	COLORREF unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetPixelV(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetPixelV(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetPixelFormat(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	int unnamedParam1 = cpu->fn_arg(cpu, 1);
	const PIXELFORMATDESCRIPTOR * unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SetPixelFormat(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetPixelFormat(unnamedParam0, unnamedParam1, unnamedParam2);
}
INT thunk_SetPolyFillMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetPolyFillMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetPolyFillMode(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetRectRgn(CPU* cpu){
	HRGN unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!SetRectRgn(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return SetRectRgn(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
INT thunk_SetROP2(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetROP2(%p, %p)", unnamedParam0, unnamedParam1);
	return SetROP2(unnamedParam0, unnamedParam1);
}
INT thunk_SetStretchBltMode(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetStretchBltMode(%p, %p)", unnamedParam0, unnamedParam1);
	return SetStretchBltMode(unnamedParam0, unnamedParam1);
}
UINT thunk_SetSystemPaletteUse(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetSystemPaletteUse(%p, %p)", unnamedParam0, unnamedParam1);
	return SetSystemPaletteUse(unnamedParam0, unnamedParam1);
}
UINT thunk_SetTextAlign(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	UINT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetTextAlign(%p, %p)", unnamedParam0, unnamedParam1);
	return SetTextAlign(unnamedParam0, unnamedParam1);
}
INT thunk_SetTextCharacterExtra(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetTextCharacterExtra(%p, %p)", unnamedParam0, unnamedParam1);
	return SetTextCharacterExtra(unnamedParam0, unnamedParam1);
}
COLORREF thunk_SetTextColor(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	COLORREF unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetTextColor(%p, %p)", unnamedParam0, unnamedParam1);
	return SetTextColor(unnamedParam0, unnamedParam1);
}
BOOL thunk_SetTextJustification(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!SetTextJustification(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return SetTextJustification(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_SetViewportExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetViewportExtEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetViewportExtEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetViewportOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetViewportOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetViewportOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetWindowExtEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPSIZE unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetWindowExtEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetWindowExtEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetWindowOrgEx(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPPOINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetWindowOrgEx(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetWindowOrgEx(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
HENHMETAFILE thunk_SetWinMetaFileBits(CPU* cpu){
	UINT unnamedParam0 = cpu->fn_arg(cpu, 0);
	const BYTE * unnamedParam1 = cpu->fn_arg(cpu, 1);
	HDC unnamedParam2 = cpu->fn_arg(cpu, 2);
	const METAFILEPICT * unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!SetWinMetaFileBits(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return SetWinMetaFileBits(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_SetWorldTransform(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const XFORM * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!SetWorldTransform(%p, %p)", unnamedParam0, unnamedParam1);
	return SetWorldTransform(unnamedParam0, unnamedParam1);
}
INT thunk_StartDocA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const DOCINFOA * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!StartDocA(%p, %p)", unnamedParam0, unnamedParam1);
	return StartDocA(unnamedParam0, unnamedParam1);
}
INT thunk_StartDocW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	const DOCINFOW * unnamedParam1 = cpu->fn_arg(cpu, 1);
	printf("\nCalling GDI32!StartDocW(%p, %p)", unnamedParam0, unnamedParam1);
	return StartDocW(unnamedParam0, unnamedParam1);
}
INT thunk_StartPage(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!StartPage(%p)", unnamedParam0);
	return StartPage(unnamedParam0);
}
INT thunk_EndPage(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!EndPage(%p)", unnamedParam0);
	return EndPage(unnamedParam0);
}
BOOL thunk_StretchBlt(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	HDC unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	INT unnamedParam9 = cpu->fn_arg(cpu, 9);
	DWORD unnamedParam10 = cpu->fn_arg(cpu, 10);
	printf("\nCalling GDI32!StretchBlt(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10);
	return StretchBlt(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10);
}
INT thunk_StretchDIBits(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	INT unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	INT unnamedParam5 = cpu->fn_arg(cpu, 5);
	INT unnamedParam6 = cpu->fn_arg(cpu, 6);
	INT unnamedParam7 = cpu->fn_arg(cpu, 7);
	INT unnamedParam8 = cpu->fn_arg(cpu, 8);
	const VOID * unnamedParam9 = cpu->fn_arg(cpu, 9);
	const BITMAPINFO * unnamedParam10 = cpu->fn_arg(cpu, 10);
	UINT unnamedParam11 = cpu->fn_arg(cpu, 11);
	DWORD unnamedParam12 = cpu->fn_arg(cpu, 12);
	printf("\nCalling GDI32!StretchDIBits(%p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11, unnamedParam12);
	return StretchDIBits(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4, unnamedParam5, unnamedParam6, unnamedParam7, unnamedParam8, unnamedParam9, unnamedParam10, unnamedParam11, unnamedParam12);
}
BOOL thunk_StrokeAndFillPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!StrokeAndFillPath(%p)", unnamedParam0);
	return StrokeAndFillPath(unnamedParam0);
}
BOOL thunk_StrokePath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!StrokePath(%p)", unnamedParam0);
	return StrokePath(unnamedParam0);
}
BOOL thunk_SwapBuffers(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!SwapBuffers(%p)", unnamedParam0);
	return SwapBuffers(unnamedParam0);
}
BOOL thunk_TextOutA(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!TextOutA(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return TextOutA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_TextOutW(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	INT unnamedParam1 = cpu->fn_arg(cpu, 1);
	INT unnamedParam2 = cpu->fn_arg(cpu, 2);
	LPCWSTR unnamedParam3 = cpu->fn_arg(cpu, 3);
	INT unnamedParam4 = cpu->fn_arg(cpu, 4);
	printf("\nCalling GDI32!TextOutW(%p, %p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
	return TextOutW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3, unnamedParam4);
}
BOOL thunk_TranslateCharsetInfo(CPU* cpu){
	LPDWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPCHARSETINFO unnamedParam1 = cpu->fn_arg(cpu, 1);
	DWORD unnamedParam2 = cpu->fn_arg(cpu, 2);
	printf("\nCalling GDI32!TranslateCharsetInfo(%p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2);
	return TranslateCharsetInfo(unnamedParam0, unnamedParam1, unnamedParam2);
}
BOOL thunk_UnrealizeObject(CPU* cpu){
	HGDIOBJ unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!UnrealizeObject(%p)", unnamedParam0);
	return UnrealizeObject(unnamedParam0);
}
BOOL thunk_UpdateColors(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!UpdateColors(%p)", unnamedParam0);
	return UpdateColors(unnamedParam0);
}
BOOL thunk_UpdateICMRegKeyA(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!UpdateICMRegKeyA(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return UpdateICMRegKeyA(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_UpdateICMRegKeyW(CPU* cpu){
	DWORD unnamedParam0 = cpu->fn_arg(cpu, 0);
	LPWSTR unnamedParam1 = cpu->fn_arg(cpu, 1);
	LPWSTR unnamedParam2 = cpu->fn_arg(cpu, 2);
	UINT unnamedParam3 = cpu->fn_arg(cpu, 3);
	printf("\nCalling GDI32!UpdateICMRegKeyW(%p, %p, %p, %p)", unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
	return UpdateICMRegKeyW(unnamedParam0, unnamedParam1, unnamedParam2, unnamedParam3);
}
BOOL thunk_WidenPath(CPU* cpu){
	HDC unnamedParam0 = cpu->fn_arg(cpu, 0);
	printf("\nCalling GDI32!WidenPath(%p)", unnamedParam0);
	return WidenPath(unnamedParam0);
}
