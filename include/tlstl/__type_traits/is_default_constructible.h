#ifndef __TLSTL_TYPE_TRAITS_IS_DEFAULT_CONSTRUCTIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_DEFAULT_CONSTRUCTIBLE_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/is_constructible.h>

_TL_BEGIN

template <typename T>
struct is_default_constructible : is_constructible<T> {};

template <typename T>
struct is_trivially_default_constructible : is_trivially_constructible<T> {};

template <typename T>
struct is_nothrow_default_constructible : is_nothrow_constructible<T> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_default_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_trivially_default_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_nothrow_default_constructible);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_DEFAULT_CONSTRUCTIBLE_H__
