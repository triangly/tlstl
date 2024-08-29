#ifndef __TLSTL_TYPE_TRAITS_IS_BASE_OF_H__
#define __TLSTL_TYPE_TRAITS_IS_BASE_OF_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename Base, typename Derived> struct is_base_of : _Bool_constant<__is_base_of(Base, Derived)> {};

#if _TL_HAS_CPP17

template <typename Base, typename Derived>
inline constexpr bool is_base_of_v = is_base_of<Base, Derived>::value;

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_BASE_OF_H__
