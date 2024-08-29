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

// Since C++11 and C++14 don't have bool_constant and it's such a convenient thing to have, tlstl implements a dirty, non-standard version of it with an obfuscated name.
// This is used in place of bool_constant everywhere in the library. Don't use this in user products. The standard bool_constant is defined if C++17 is available.
template <bool value>
using _Bool_constant = integral_constant<bool, value>;

#if _TL_HAS_CPP17
template <bool value>
using bool_constant = _Bool_constant<value>;
#endif

using false_type = integral_constant<bool, false>;
using true_type  = integral_constant<bool, true>;

_TL_END

#endif // __TLSTL_TYPE_TRAITS_INTEGRAL_CONSTANT_H__
