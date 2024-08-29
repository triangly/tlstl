#ifndef __TLSTL_TYPE_TRAITS_IS_SIGNED_H__
#define __TLSTL_TYPE_TRAITS_IS_SIGNED_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/is_arithmetic.h>

_TL_BEGIN

template <typename T> struct is_signed : _Bool_constant<is_arithmetic<T>::value && (T(-1) < T(0))> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_signed);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_SIGNED_H__
