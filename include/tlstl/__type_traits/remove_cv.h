#ifndef __TLSTL_TYPE_TRAITS_REMOVE_CV_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_CV_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename T> struct remove_const { typedef T type; };
template <typename T> struct remove_const<const T> { typedef T type; };

template <typename T> struct remove_volatile { typedef T type; };
template <typename T> struct remove_volatile<volatile T> { typedef T type; };

template <typename T> struct remove_cv { typedef T type; };
template <typename T> struct remove_cv<const T> { typedef T type; };
template <typename T> struct remove_cv<volatile T> { typedef T type; };
template <typename T> struct remove_cv<const volatile T> { typedef T type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_const);
_TL_DECLARE_CPP14_TYPE_VARIANT(remove_volatile);
_TL_DECLARE_CPP14_TYPE_VARIANT(remove_cv);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_CV_H__
