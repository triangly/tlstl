#ifndef __TLSTL_TYPE_TRAITS_NEGATION_H__
#define __TLSTL_TYPE_TRAITS_NEGATION_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

#if _TL_HAS_CPP17
template <typename T>
struct negation : _Bool_constant<!bool(T::value)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(negation);
#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_NEGATION_H__
