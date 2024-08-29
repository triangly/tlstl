#ifndef __TLSTL_TYPE_TRAITS_IS_FINAL_H__
#define __TLSTL_TYPE_TRAITS_IS_FINAL_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if _TL_HAS_CPP14

template <typename T> struct is_final : _Bool_constant<__is_final(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_final);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_FINAL_H__
