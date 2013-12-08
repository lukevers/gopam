/* Created by cgo - DO NOT EDIT. */

typedef unsigned int uint;
typedef signed char schar;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef long long int64;
typedef unsigned long long uint64;
typedef __SIZE_TYPE__ uintptr;

typedef struct { char *p; int n; } GoString;
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;


/* Return type for goPAMConv */
struct goPAMConv_return {
	schar* r0;
	int r1;
};

extern struct goPAMConv_return goPAMConv(int p0, schar* p1, void* p2);
