#ifndef __TLSTL_TYPE_TRAITS_IS_ABSTRACT_H__
#define __TLSTL_TYPE_TRAITS_IS_ABSTRACT_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_abstract : _Bool_constant<__is_abstract(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_abstract);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_ABSTRACT_H__
