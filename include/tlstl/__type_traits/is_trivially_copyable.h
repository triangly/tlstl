#ifndef __TLSTL_TYPE_TRAITS_IS_TRIVIALLY_COPYABLE_H__
#define __TLSTL_TYPE_TRAITS_IS_TRIVIALLY_COPYABLE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_trivially_copyable : _Bool_constant<__is_trivially_copyable(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_trivially_copyable);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_TRIVIALLY_COPYABLE_H__
