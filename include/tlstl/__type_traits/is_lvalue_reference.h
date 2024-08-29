#ifndef __TLSTL_TYPE_TRAITS_IS_LVALUE_REFERENCE_H__
#define __TLSTL_TYPE_TRAITS_IS_LVALUE_REFERENCE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_lvalue_reference     : false_type {};
template <typename T> struct is_lvalue_reference<T&> : true_type  {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_lvalue_reference);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_LVALUE_REFERENCE_H__
