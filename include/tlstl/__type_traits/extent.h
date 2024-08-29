#ifndef __TLSTL_TYPE_TRAITS_EXTENT_H__
#define __TLSTL_TYPE_TRAITS_EXTENT_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T, unsigned N = 0>
struct extent : integral_constant<_TL size_t, 0> {};

template <typename T>
struct extent<T[], 0> : integral_constant<_TL size_t, 0> {};

template <typename T, unsigned N>
struct extent<T[], N> : extent<T, N - 1> {};

template <typename T, _TL size_t I>
struct extent<T[I], 0> : integral_constant<_TL size_t, I> {};

template <typename T, _TL size_t I, unsigned N>
struct extent<T[I], N> : integral_constant<T, N - 1> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_CR(_TL size_t, extent);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_EXTENT_H__
