#ifndef __TLSTL_TYPE_TRAITS_INTEGRAL_CONSTANT_H__
#define __TLSTL_TYPE_TRAITS_INTEGRAL_CONSTANT_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename T, T val>
struct integral_constant
{
	static constexpr T value = val;

	using value_type = T;
	using type = integral_constant<T, val>;

	constexpr operator T() const noexcept { return val; }
#if _TL_HAS_CPP14
	constexpr T operator()() const noexcept { return val; }
#endif
};

template <bool value>
using bool_constant = integral_constant<bool, value>;

using false_type = bool_constant<false>;
using true_type  = bool_constant<true>;

_TL_END

#endif // __TLSTL_TYPE_TRAITS_INTEGRAL_CONSTANT_H__
