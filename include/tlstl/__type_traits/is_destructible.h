#ifndef __TLSTL_TYPE_TRAITS_IS_DESTRUCTIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_DESTRUCTIBLE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T>
struct is_destructible : _Bool_constant<__is_destructible(T)> {};

template <typename T>
struct is_trivially_destructible : _Bool_constant<__is_trivially_destructible(T)> {};

template <typename T>
struct is_nothrow_destructible : _Bool_constant<__is_nothrow_destructible(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_destructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_trivially_destructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_nothrow_destructible);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_DESTRUCTIBLE_H__
