#ifndef __TLSTL_TYPE_TRAITS_IS_CONSTRUCTIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_CONSTRUCTIBLE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T, typename... Args>
struct is_constructible : _Bool_constant<__is_constructible(T, Args...)> {};

template <typename T, typename... Args>
struct is_trivially_constructible : _Bool_constant<__is_trivially_constructible(T, Args...)> {};

template <typename T, typename... Args>
struct is_nothrow_constructible : _Bool_constant<__is_nothrow_constructible(T, Args...)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_trivially_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_nothrow_constructible);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_CONSTRUCTIBLE_H__
