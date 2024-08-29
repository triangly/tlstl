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
#define _TL_HAS_CPP14     (_TL_LANGSTD >= _TL_LANGSTD_CPP14)
#define _TL_HAS_CPP17     (_TL_LANGSTD >= _TL_LANGSTD_CPP17)
#define _TL_HAS_CPP20     (_TL_LANGSTD >= _TL_LANGSTD_CPP20)
#define _TL_HAS_CPP23     (_TL_LANGSTD >= _TL_LANGSTD_CPP23)

#if _TL_HAS_CPP14 && !defined _TLSTL_NO_CPP14_DEPRECATIONS
	#define _TL_DEPRECATE_CPP14(message) [[deprecated(message)]]
#else
	#define _TL_DEPRECATE_CPP14(message)
#endif

#if _TL_HAS_CPP17 && !defined _TLSTL_NO_CPP17_DEPRECATIONS
	#define _TL_DEPRECATE_CPP17(message) [[deprecated(message)]]
#else
	#define _TL_DEPRECATE_CPP17(message)
#endif

#if _TL_HAS_CPP20 && !defined _TLSTL_NO_CPP20_DEPRECATIONS
	#define _TL_DEPRECATE_CPP20(message) [[deprecated(message)]]
#else
	#define _TL_DEPRECATE_CPP20(message)
#endif

#if _TL_HAS_CPP23 && !defined _TLSTL_NO_CPP23_DEPRECATIONS
	#define _TL_DEPRECATE_CPP23(message) [[deprecated(message)]]
#else
	#define _TL_DEPRECATE_CPP23(message)
#endif

#if _TL_HAS_CPP14
	#define _TL_CONSTEXPR14 constexpr
#else
	#define _TL_CONSTEXPR14
#endif

// You can modify this on your own projects to change the namespace of the library.
// By default, "stl" is used.
#ifndef _TL_NAMESPACE_NAME
	#define _TL_NAMESPACE_NAME stl
#endif

#define _TL              ::_TL_NAMESPACE_NAME::
#define _TL_DETAIL       ::_TL_DETAIL_NAMESPACE_NAME::
#define _TL_BEGIN        namespace _TL_NAMESPACE_NAME {
#define _TL_END          }

// Macros to make life easier while writing type traits stuff
#if _TL_HAS_CPP14
	#define _TL_DECLARE_CPP14_TYPE_VARIANT(thing_name)     template <typename T>             using thing_name##_t = typename thing_name<T>::type
	#define _TL_DECLARE_CPP14_TYPE_VARIANT_TWO(thing_name) template <typename T, typename U> using thing_name##_t = typename thing_name<T, U>::type
#else
	#define _TL_DECLARE_CPP14_TYPE_VARIANT(thing_name)
	#define _TL_DECLARE_CPP14_TYPE_VARIANT_TWO(thing_name)
#endif

#if _TL_HAS_CPP17
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_CR(crtype, thing_name)          template <typename T>                   inline constexpr crtype thing_name##_v = thing_name<T>::value
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_TWO_CR(crtype, thing_name)      template <typename T, typename U>       inline constexpr crtype thing_name##_v = thing_name<T, U>::value
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC_CR(crtype, thing_name) template <typename T, typename... Args> inline constexpr crtype thing_name##_v = thing_name<T, Args...>::value

	#define _TL_DECLARE_CPP17_VALUE_VARIANT(thing_name)          _TL_DECLARE_CPP17_VALUE_VARIANT_CR(bool, thing_name)
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_TWO(thing_name)      _TL_DECLARE_CPP17_VALUE_VARIANT_TWO_CR(bool, thing_name)
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(thing_name) _TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC_CR(bool, thing_name)
#else
	#define _TL_DECLARE_CPP17_VALUE_VARIANT(thing_name)
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_TWO(thing_name)
	#define _TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(thing_name)
#endif

#endif __TLSTL_TLSTLDEF_H__
