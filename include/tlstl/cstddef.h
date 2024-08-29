#ifndef __TLSTL_CSTDDEF_H__
#define __TLSTL_CSTDDEF_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/enable_if.h>
#include <tlstl/__type_traits/is_integral.h>

#include <stddef.h>

_TL_BEGIN

using size_t      = ::size_t;
using ptrdiff_t   = ::ptrdiff_t;
using nullptr_t   = decltype(nullptr);
using max_align_t = double;

#if _TL_HAS_CPP17

enum class byte : unsigned char { };

template <typename T, typename enable_if<is_integral<T>::value, void*>::type = nullptr>
constexpr T to_integer(_TL byte b) noexcept {
	return T(b);
}

template <typename T, typename enable_if<is_integral<T>::value, void*>::type = nullptr>
constexpr _TL byte operator<<(_TL byte b, T shift) noexcept {
	return _TL byte(static_cast<unsigned int>(b) << shift);
}

template <typename T, typename enable_if<is_integral<T>::value, void*>::type = nullptr>
constexpr _TL byte operator>>(_TL byte b, T shift) noexcept {
	return _TL byte(static_cast<unsigned int>(b) >> shift);
}

template <typename T, typename enable_if<is_integral<T>::value, void*>::type = nullptr>
constexpr _TL byte& operator<<=(_TL byte& b, T shift) noexcept {
	return b = b << shift;
}

template <typename T, typename enable_if<is_integral<T>::value, void*>::type = nullptr>
constexpr _TL byte& operator>>=(_TL byte& b, T shift) noexcept {
	return b = b >> shift;
}

constexpr _TL byte operator|(_TL byte lhs, _TL byte rhs) noexcept {
	return _TL byte(static_cast<unsigned int>(lhs) | static_cast<unsigned int>(rhs));
}

constexpr _TL byte operator&(_TL byte lhs, _TL byte rhs) noexcept {
	return _TL byte(static_cast<unsigned int>(lhs) & static_cast<unsigned int>(rhs));
}

constexpr _TL byte operator^(_TL byte lhs, _TL byte rhs) noexcept {
	return _TL byte(static_cast<unsigned int>(lhs) ^ static_cast<unsigned int>(rhs));
}

constexpr _TL byte operator~(_TL byte b) noexcept {
	return _TL byte(~static_cast<unsigned int>(b));
}

constexpr _TL byte& operator|=(_TL byte& b, _TL byte other) noexcept {
	return b = b | other;
}

constexpr _TL byte& operator&=(_TL byte& b, _TL byte other) noexcept {
	return b = b & other;
}

constexpr _TL byte& operator^=(_TL byte& b, _TL byte other) noexcept {
	return b = b ^ other;
}

#endif // _TL_HAS_CPP17

_TL_END

#endif // __TLSTL_CSTDDEF_H__
