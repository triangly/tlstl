#ifndef __TLSTL_TYPE_TRAITS_CONJUNCTION_H__
#define __TLSTL_TYPE_TRAITS_CONJUNCTION_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/conditional.h>

_TL_BEGIN

#if _TL_HAS_CPP17
template <typename...>   struct conjunction       : true_type {};
template <typename T1st> struct conjunction<T1st> : T1st {};

template <typename T1st, typename... Ts>
struct conjunction<T1st, Ts...> : conditional_t<bool(T1st::value), conjunction<Ts...>, T1st> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(conjunction);
#endif // _TL_HAS_CPP17

_TL_END

#endif // __TLSTL_TYPE_TRAITS_CONJUNCTION_H__
