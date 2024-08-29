#ifndef __TLSTL_TYPE_TRAITS_RANK_H__
#define __TLSTL_TYPE_TRAITS_RANK_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T>               struct rank       : public integral_constant<_TL size_t, 0> {};
template <typename T>               struct rank<T[]>  : public integral_constant<_TL size_t, rank<T>::value + 1>{};
template <typename T, _TL size_t N> struct rank<T[N]> : public integral_constant<_TL size_t, rank<T>::value + 1>{};

_TL_DECLARE_CPP17_VALUE_VARIANT_CR(_TL size_t, rank);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_RANK_H__


