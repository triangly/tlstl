#ifndef __TLSTL_TYPE_TRAITS_IS_EMPTY_H__
#define __TLSTL_TYPE_TRAITS_IS_EMPTY_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_empty : _Bool_constant<__is_empty(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_empty);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_EMPTY_H__
