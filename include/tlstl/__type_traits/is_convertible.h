#ifndef __TLSTL_TYPE_TRAITS_IS_CONVERIBLE_H__
#define __TLSTL_TYPE_TRAITS_IS_CONVERIBLE_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__utility/declval.h>

_TL_BEGIN

template <typename From, typename To>
struct is_convertible : _Bool_constant
<
#ifdef _TL_COMPILER_MSVC
	__is_convertible_to(From, To)
#else
	__is_convertible(From, To)
#endif
>
{
};

#if _TL_HAS_CPP17

template <typename From, typename To>
inline constexpr bool is_convertible_v = is_convertible<From, To>::value;

#if _TL_HAS_CPP20

namespace detail {
	template <typename T>
	T sig_T(T) noexcept;
}

template <typename From, typename To> // NOTE: might wanna reevaluate how this is done...
struct is_nothrow_convertible : _Bool_constant<is_convertible<From, To>::value && noexcept(_TL detail::sig_T<To>(_TL declval<From>()))> { };

template <typename From, typename To>
inline constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<From, To>::value;

#endif // _TL_HAS_CPP20

#endif // _TL_HAS_CPP17

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_CONVERIBLE_H__
