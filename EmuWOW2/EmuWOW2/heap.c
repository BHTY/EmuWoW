#include "heap.h"

LPVOID WillAlloc(SIZE_T dwSize) {
	SIZE_T allocSize = align(dwSize, 65536);
	LPBYTE lpRegion = VirtualAlloc(NULL, allocSize + 65536, MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	VirtualAlloc(lpRegion, allocSize, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	return lpRegion + allocSize - dwSize;
}