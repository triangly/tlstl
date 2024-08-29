#ifndef __TLSTL_TYPE_TRAITS_IS_ASSIGNABLE_H__
#define __TLSTL_TYPE_TRAITS_IS_ASSIGNABLE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T, typename U>
struct is_assignable : _Bool_constant<__is_assignable(T, U)> {};

template <typename T, typename U>
struct is_trivially_assignable : _Bool_constant<__is_trivially_assignable(T, U)> {};

template <typename T, typename U>
struct is_nothrow_assignable : _Bool_constant<__is_nothrow_assignable(T, U)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_assignable);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_trivially_assignable);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_nothrow_assignable);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_ASSIGNABLE_H__
