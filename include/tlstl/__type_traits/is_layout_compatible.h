#ifndef __TLSTL_TYPE_TRAITS_IS_LAYOUT_COMPATIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_LAYOUT_COMPATIBLE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if _TL_HAS_CPP20
template <typename T, typename U>
struct is_layout_compatible : _Bool_constant<__is_layout_compatible(T, U)> { };

_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_layout_compatible);
#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_LAYOUT_COMPATIBLE_H__
#pragma once
