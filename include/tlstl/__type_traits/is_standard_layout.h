#ifndef __TLSTL_TYPE_TRAITS_IS_STANDARD_LAYOUT_H__
#define __TLSTL_TYPE_TRAITS_IS_STANDARD_LAYOUT_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_standard_layout : _Bool_constant<__is_standard_layout(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_standard_layout);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_STANDARD_LAYOUT_H__
