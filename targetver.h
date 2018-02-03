#pragma once

#define _WIN32_WINNT 0x502
#include <SDKDDKVer.h>

#pragma warning(disable: 4100)
#pragma warning(disable: 4324)
#pragma warning(disable: 4458)
#pragma warning(disable: 4459)
// #pragma warning(disable: 4838)

#define _USE_MATH_DEFINES 1
#define _CRT_OBSOLETE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#define _SCL_SECURE_NO_WARNINGS 1
#define _CRT_NON_CONFORMING_SWPRINTFS 1
#define _STRALIGN_USE_SECURE_CRT 0
#define _ATL_NO_COM 1
#define _ATL_NO_AUTOMATIC_NAMESPACE 1
#define _WTL_NO_AUTOMATIC_NAMESPACE 1
#define _WTL_USE_VSSYM32 1
#define STRICT 1
#define NOMINMAX 1
#define BUILD_WINDOWS 1
#define BOOST_ALL_NO_LIB 1

#ifndef _DEBUG
#define _SECURE_SCL 0
#define _ITERATOR_DEBUG_LEVEL 0
#define __STDC_WANT_SECURE_LIB__ 0
#define _STRALIGN_USE_SECURE_CRT 0
#define __SIZEOF_LONG_LONG__ (ULLONG_MAX / (UCHAR_MAX + 1U) + 1)
#define __SIZEOF_WCHAR_T__ (WCHAR_MAX / (UCHAR_MAX + 1U) + 1)
#endif