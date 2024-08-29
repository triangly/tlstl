#ifndef __TLSTL_TYPE_TRAITS_IS_TRIVIAL_H__
#define __TLSTL_TYPE_TRAITS_IS_TRIVIAL_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_trivial : _Bool_constant<__is_trivial(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_trivial);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_TRIVIAL_H__
