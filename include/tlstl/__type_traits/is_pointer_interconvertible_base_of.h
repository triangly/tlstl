#ifndef __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_BASE_OF_H__
#define __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_BASE_OF_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if _TL_HAS_CPP20
template <typename T, typename U>
struct is_pointer_interconvertible_base_of : _Bool_constant<__is_pointer_interconvertible_base_of(T, U)> { };

_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_pointer_interconvertible_base_of);
#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_BASE_OF_H__
#pragma once
