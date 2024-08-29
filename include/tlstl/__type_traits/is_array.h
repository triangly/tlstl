#ifndef __TLSTL_TYPE_TRAITS_IS_ARRAY_H__
#define __TLSTL_TYPE_TRAITS_IS_ARRAY_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T>               struct is_array       : false_type { };
template <typename T>               struct is_array<T[]>  : true_type { };
template <typename T, _TL size_t N> struct is_array<T[N]> : true_type { };

_TL_DECLARE_CPP17_VALUE_VARIANT(is_array);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_ARRAY_H__
