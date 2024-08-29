#ifndef __TLSTL_TYPE_TRAITS_IS_UNBOUNDED_ARRAY_H__
#define __TLSTL_TYPE_TRAITS_IS_UNBOUNDED_ARRAY_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

template <typename T> struct is_unbounded_array      : false_type {};
template <typename T> struct is_unbounded_array<T[]> : true_type {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_unbounded_array);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_UNBOUNDED_ARRAY_H__
