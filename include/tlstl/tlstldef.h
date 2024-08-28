#ifndef __TLSTL_TLSTLDEF_H__
#define __TLSTL_TLSTLDEF_H__

// Definitely check for clang first, after that, order of GCC and MSVC doesn't matter.
#ifdef __clang__
	#define _TL_COMPILER_CLANG 1
#elif defined _MSC_VER
	#define _TL_COMPILER_MSVC 1
#elif defined __GNUC__
	#define _TL_COMPILER_GCC 1
#else
	#error This compiler isn't supported by tlstl! Use either Clang, GCC or MSVC.
#endif

// MSVC doesn't report the C++ standard properly via __cplusplus if a compiler flag isn't set and we cannot check if it is at compile-time.
// Though, it does always report it correctly via _MSVC_LANG. So, use that for MSVC and __cplusplus for the others.
#ifdef _TL_COMPILER_MSVC
	#define _TL_LANGSTD _MSVC_LANG
#else
	#define _TL_LANGSTD __cplusplus
#endif

#define _TL_LANGSTD_CPP11 201103L
#define _TL_LANGSTD_CPP14 201402L
#define _TL_LANGSTD_CPP17 201703L
#define _TL_LANGSTD_CPP20 202002L
#define _TL_LANGSTD_CPP23 202302L

#if _TL_LANGSTD < _TL_LANGSTD_CPP11
	#error tlstl only supports C++11 and onwards!
#endif

#define _TL_HAS_CPP11     1
#define _TL_HAS_CPP14     _TL_LANGSTD >= _TL_LANGSTD_CPP14
#define _TL_HAS_CPP17     _TL_LANGSTD >= _TL_LANGSTD_CPP17
#define _TL_HAS_CPP20     _TL_LANGSTD >= _TL_LANGSTD_CPP20
#define _TL_HAS_CPP23     _TL_LANGSTD >= _TL_LANGSTD_CPP23

// You can modify this on your own projects to change the namespace of the library.
// By default, "stl" is used.
#ifndef _TL_NAMESPACE_NAME
	#define _TL_NAMESPACE_NAME stl
#endif

#define _FROM_TL ::_TL_NAMESPACE_NAME::
#define _TL_BEGIN namespace _TL_NAMESPACE_NAME {
#define _TL_END   }

#endif __TLSTL_TLSTLDEF_H__
