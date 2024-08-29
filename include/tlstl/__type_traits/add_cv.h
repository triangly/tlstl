#ifndef __TLSTL_TYPE_TRAITS_ADD_CV_H__
#define __TLSTL_TYPE_TRAITS_ADD_CV_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename T> struct add_volatile { typedef volatile T type; };
template <typename T> struct add_const    { typedef const T type; };
template <typename T> struct add_cv       { typedef const volatile T type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(add_volatile);
_TL_DECLARE_CPP14_TYPE_VARIANT(add_const);
_TL_DECLARE_CPP14_TYPE_VARIANT(add_cv);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_ADD_CV_H__
