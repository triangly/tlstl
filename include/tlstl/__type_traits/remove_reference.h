#ifndef __TLSTL_TYPE_TRAITS_REMOVE_REFERENCE_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_REFERENCE_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename T> struct remove_reference      { typedef T type; };
template <typename T> struct remove_reference<T&>  { typedef T type; };
template <typename T> struct remove_reference<T&&> { typedef T type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_reference);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_REFERENCE_H__
