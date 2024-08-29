#ifndef __TLSTL_TYPE_TRAITS_IS_SWAPPABLE_H__
#define __TLSTL_TYPE_TRAITS_IS_SWAPPABLE_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__utility/declval.h>

_TL_BEGIN

namespace detail {
	template <typename T, typename = decltype(swap(_TL declval<T&>(), _TL declval<T&>()))>
	static true_type _Swappability_test(int);

	template <typename>
	static false_type _Swappability_test(...);

	template <typename T>
	static _Bool_constant<noexcept(swap(_TL declval<T&>(), _TL declval<T&>()))> _Nothrow_swappability_test(int);

	template <typename>
	static false_type _Nothrow_swappability_test(...);

	template
	<
		typename T,
		typename U,
		typename = decltype(swap(_TL declval<T>(), _TL declval<U>())),
		typename = decltype(swap(_TL declval<U>(), _TL declval<T>()))
	>
	static true_type _Swappable_with_test(int);

	template <typename, typename>
	static false_type _Swappable_with_test(...);

	template <typename T, typename U>
	static _Bool_constant<noexcept(swap(_TL declval<T>(), _TL declval<U>())) && noexcept(swap(_TL declval<U>(), _TL declval<T>()))> _Nothrow_wappable_with_test(int);

	template <typename, typename>
	static false_type _Nothrow_wappable_with_test(...);
}

#if _TL_HAS_CPP17

template <typename T>
struct is_swappable : decltype(detail::_Swappability_test<T>(0)) {};

template <typename T>
struct is_nothrow_swappable : decltype(detail::_Nothrow_swappability_test<T>(0)) {};

template <typename T, typename U>
struct is_swappable_with : decltype(detail::_Swappable_with_test<T, U>(0)) {};

template <typename T, typename U>
struct is_nothrow_swappable_with : decltype(detail::_Nothrow_wappable_with_test<T, U>(0)) {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_swappable);
_TL_DECLARE_CPP17_VALUE_VARIANT(is_nothrow_swappable);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_swappable_with);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_nothrow_swappable_with);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_SWAPPABLE_H__
