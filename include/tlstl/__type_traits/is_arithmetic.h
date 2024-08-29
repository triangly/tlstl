#ifndef __TLSTL_TYPE_TRAITS_IS_ARITHMETIC_H__
#define __TLSTL_TYPE_TRAITS_IS_ARITHMETIC_H__

#include <tlstl/__type_traits/is_floating_point.h>
#include <tlstl/__type_traits/is_integral.h>

_TL_BEGIN

template <typename T> struct is_arithmetic : _Bool_constant<is_integral<T>::value ||is_floating_point<T>::value> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_arithmetic);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_ARITHMETIC_H__
