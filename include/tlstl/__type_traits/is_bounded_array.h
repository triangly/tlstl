#ifndef __TLSTL_TYPE_TRAITS_IS_BOUNDED_ARRAY_H__
#define __TLSTL_TYPE_TRAITS_IS_BOUNDED_ARRAY_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

template <typename T>               struct is_bounded_array       : false_type {};
template <typename T, _TL size_t N> struct is_bounded_array<T[N]> : true_type  {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_bounded_array);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_BOUNDED_ARRAY_H__
