#ifndef __TLSTL_TYPE_TRAITS_MAKE_SIGNED_H__
#define __TLSTL_TYPE_TRAITS_MAKE_SIGNED_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/underlying_type.h>

_TL_BEGIN

template <typename T, bool = !is_enum<T>::value>
struct make_signed {
#if _TL_HAS_CPP20
	static_assert
	(
		false, "Program ill-formed due to T not being integral, char type, nor an enum. Program is ill-formed according to the C++20 standard."
	);
#endif
};

namespace detail {
	template <int N>
	struct make_signed_by_size {};

	template <> struct make_signed_by_size<sizeof(char)>      { typedef signed char type; };
	template <> struct make_signed_by_size<sizeof(short)>     { typedef signed short type; };
	template <> struct make_signed_by_size<sizeof(int)>       { typedef signed int type; };
	template <> struct make_signed_by_size<sizeof(long long)> { typedef signed long long type; };
}

template <> struct make_signed<char>               : detail::make_signed_by_size<sizeof(char)> {};
template <> struct make_signed<short>              : detail::make_signed_by_size<sizeof(short)> {};
template <> struct make_signed<int>                : detail::make_signed_by_size<sizeof(int)> {};
template <> struct make_signed<long>               { typedef signed long type; };
template <> struct make_signed<long long>          : detail::make_signed_by_size<sizeof(long long)> {};
template <> struct make_signed<unsigned char>      : detail::make_signed_by_size<sizeof(char)> {};
template <> struct make_signed<unsigned short>     : detail::make_signed_by_size<sizeof(short)> {};
template <> struct make_signed<unsigned int>       : detail::make_signed_by_size<sizeof(int)> {};
template <> struct make_signed<unsigned long>      { typedef signed long type; };
template <> struct make_signed<unsigned long long> : detail::make_signed_by_size<sizeof(long long)> {};
template <> struct make_signed<wchar_t>            : detail::make_signed_by_size<sizeof(wchar_t)> {};
template <> struct make_signed<char16_t>           : detail::make_signed_by_size<sizeof(char16_t)> {};
template <> struct make_signed<char32_t>           : detail::make_signed_by_size<sizeof(char32_t)> {};

#if _TL_HAS_CPP20
template <> struct make_signed<char8_t>            : detail::make_signed_by_size<sizeof(char8_t)> {};
#endif

template <typename T> // For enums, use make_signed on the underlying type of the enum
struct make_signed<T, false> : make_signed<typename underlying_type<T>::type> {};

/* bool doesn't define type but doesn't ill-form the program */
template <> struct make_signed<bool>;
template <> struct make_signed<bool const>;
template <> struct make_signed<bool volatile>;
template <> struct make_signed<bool const volatile>;

_TL_DECLARE_CPP14_TYPE_VARIANT(make_signed);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_MAKE_SIGNED_H__
