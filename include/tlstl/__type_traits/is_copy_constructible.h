#ifndef __TLSTL_TYPE_TRAITS_IS_COPY_CONSTRUCTIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_COPY_CONSTRUCTIBLE_H__

#include <tlstl/__type_traits/add_lrvalue_reference.h>
#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/is_constructible.h>
#include <tlstl/__type_traits/add_cv.h>

_TL_BEGIN

template <typename T>
struct is_copy_constructible : is_constructible<T, typename add_lvalue_reference<typename add_const<T>::type>::type> {};

template <typename T>
struct is_trivially_copy_constructible : is_trivially_constructible<T, typename add_lvalue_reference<typename add_const<T>::type>::type> {};

template <typename T>
struct is_nothrow_copy_constructible : is_nothrow_constructible<T, typename add_lvalue_reference<typename add_const<T>::type>::type> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_copy_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_trivially_copy_constructible);
_TL_DECLARE_CPP17_VALUE_VARIANT_VARIADIC(is_nothrow_copy_constructible);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_COPY_CONSTRUCTIBLE_H__
