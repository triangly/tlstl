#ifndef __TLSTL_TYPE_TRAITS_IS_POD_H__
#define __TLSTL_TYPE_TRAITS_IS_POD_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if !_TL_HAS_CPP20

template <typename T> struct
_TL_DEPRECATE_CPP17("is_literal_type has been deprecated on C++17. You can define _TLSTL_NO_CPP17_DEPRECATIONS to silence this.")
is_literal_type : _Bool_constant<__is_literal_type(T)>{};

template <typename T>
_TL_DEPRECATE_CPP17("is_literal_type has been deprecated on C++17. You can define _TLSTL_NO_CPP17_DEPRECATIONS to silence this.")
inline constexpr bool is_literal_type_v = is_literal_type<T>::value;

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_POP_H__
