#ifndef __TLSTL_TYPE_TRAITS_IS_SAME_H__
#define __TLSTL_TYPE_TRAITS_IS_SAME_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T, typename U> struct is_same       : false_type { };
template <typename T>             struct is_same<T, T> : true_type { };

_TL_DECLARE_CPP17_VALUE_VARIANT(is_same);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_SAME_H__
