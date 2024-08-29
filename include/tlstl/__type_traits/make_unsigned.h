#ifndef __TLSTL_TYPE_TRAITS_MAKE_UNSIGNED_H__
#define __TLSTL_TYPE_TRAITS_MAKE_UNSIGNED_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/underlying_type.h>

_TL_BEGIN

template <typename T, bool = !is_enum<T>::value>
struct make_unsigned {
#if _TL_HAS_CPP20
	static_assert
	(
		false, "Program ill-formed due to T not being integral, char type, nor an enum. Program is ill-formed according to the C++20 standard."
	);
#endif
};

namespace detail {
	template <int N>
	struct make_unsigned_by_size {};

	template <> struct make_unsigned_by_size<sizeof(char)>      { typedef unsigned char type; };
	template <> struct make_unsigned_by_size<sizeof(short)>     { typedef unsigned short type; };
	template <> struct make_unsigned_by_size<sizeof(int)>       { typedef unsigned int type; };
	template <> struct make_unsigned_by_size<sizeof(long long)> { typedef unsigned long long type; };
}

template <> struct make_unsigned<char>               : detail::make_unsigned_by_size<sizeof(char)> {};
template <> struct make_unsigned<short>              : detail::make_unsigned_by_size<sizeof(short)> {};
template <> struct make_unsigned<int>                : detail::make_unsigned_by_size<sizeof(int)> {};
template <> struct make_unsigned<long>               { typedef unsigned long type; };
template <> struct make_unsigned<long long>          : detail::make_unsigned_by_size<sizeof(long long)> {};
template <> struct make_unsigned<unsigned char>      : detail::make_unsigned_by_size<sizeof(char)> {};
template <> struct make_unsigned<unsigned short>     : detail::make_unsigned_by_size<sizeof(short)> {};
template <> struct make_unsigned<unsigned int>       : detail::make_unsigned_by_size<sizeof(int)> {};
template <> struct make_unsigned<unsigned long>      { typedef unsigned long type; };
template <> struct make_unsigned<unsigned long long> : detail::make_unsigned_by_size<sizeof(long long)> {};
template <> struct make_unsigned<wchar_t>            : detail::make_unsigned_by_size<sizeof(wchar_t)> {};
template <> struct make_unsigned<char16_t>           : detail::make_unsigned_by_size<sizeof(char16_t)> {};
template <> struct make_unsigned<char32_t>           : detail::make_unsigned_by_size<sizeof(char32_t)> {};

#if _TL_HAS_CPP20
template <> struct make_unsigned<char8_t>            : detail::make_unsigned_by_size<sizeof(char8_t)> {};
#endif

template <typename T> // For enums, use make_unsigned on the underlying type of the enum
struct make_unsigned<T, false> : make_unsigned<typename underlying_type<T>::type> {};

/* bool doesn't define type but doesn't ill-form the program */
template <> struct make_unsigned<bool>;
template <> struct make_unsigned<bool const>;
template <> struct make_unsigned<bool volatile>;
template <> struct make_unsigned<bool const volatile>;

_TL_DECLARE_CPP14_TYPE_VARIANT(make_unsigned);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_MAKE_UNSIGNED_H__
