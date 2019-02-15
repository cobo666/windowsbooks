// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__DRIVER_TEMPLATE)
#define AFX_STDAFX_H__DRIVER_TEMPLATE

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// TODO: reference additional headers your program requires here
#define i386 1
#define _X86_ 1
#define STD_CALL
#define CONDITION_HANDLING 1
#define NT_INST 0
#define _NT1X_ 100
#define WINNT 1
#define _WIN32_WINNT 0x0400 /* minimum required OS version */
#define WIN32_LEAN_AND_MEAN 1
#define DEVL 1
#define FPO 1

extern "C" {
#pragma pack(push, 8)
#include <ntddk.h>
//#include <ntifs.h>
#pragma pack(pop)
};

#endif // !defined(AFX_STDAFX_H__DRIVER_TEMPLATE)
