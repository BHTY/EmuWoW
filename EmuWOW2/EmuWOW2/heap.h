#include <windows.h>

#define ALIGNMENT   4
#define align(x,a)	((((x) % (a)) == 0) ? (x) : ((x) + (a)) - (x) % (a))

#define HeapAlloc(a, b, c) WillAlloc((c))
#define malloc(a) WillAlloc((a))

LPVOID WillAlloc(SIZE_T);
