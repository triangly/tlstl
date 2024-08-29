#ifndef __TLSTL_TYPE_TRAITS_IS_COMPOUND_H__
#define __TLSTL_TYPE_TRAITS_IS_COMPOUND_H__

#include <tlstl/__type_traits/is_fundamental.h>

_TL_BEGIN

template <typename T> struct is_compound : _Bool_constant<!is_fundamental<T>::value> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_compound);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_COMPOUND_H__
