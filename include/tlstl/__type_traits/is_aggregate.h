#ifndef __TLSTL_TYPE_TRAITS_IS_AGGREGATE_H__
#define __TLSTL_TYPE_TRAITS_IS_AGGREGATE_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if _TL_HAS_CPP17

template <typename T> struct is_aggregate : _Bool_constant<__is_aggregate(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_aggregate);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_AGGREGATE_H__
