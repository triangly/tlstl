#ifndef __TLSTL_TYPE_TRAITS_DISJUNCTION_H__
#define __TLSTL_TYPE_TRAITS_DISJUNCTION_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/conditional.h>

_TL_BEGIN

#if _TL_HAS_CPP17
template <typename...>   struct disjunction       : false_type {};
template <typename T1st> struct disjunction<T1st> : T1st {};

template <typename T1st, typename... Ts>
struct disjunction<T1st, Ts...> : conditional_t<bool(T1st::value), T1st, disjunction<Ts...>> { };

_TL_DECLARE_CPP17_VALUE_VARIANT(disjunction);
#endif // _TL_HAS_CPP17

_TL_END

#endif // __TLSTL_TYPE_TRAITS_DISJUNCTION_H__
