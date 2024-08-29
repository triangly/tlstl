#ifndef __TLSTL_TYPE_TRAITS_IS_UNION_H__
#define __TLSTL_TYPE_TRAITS_IS_UNION_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T>
struct is_union : _Bool_constant<__is_union(T)> { };

_TL_DECLARE_CPP17_VALUE_VARIANT(is_union);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_UNION_H__
