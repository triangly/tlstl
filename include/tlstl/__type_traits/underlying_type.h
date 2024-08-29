#ifndef __TLSTL_TYPE_TRAITS_UNDERLYING_TYPE_H__
#define __TLSTL_TYPE_TRAITS_UNDERLYING_TYPE_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/is_enum.h>

_TL_BEGIN

template <typename T, bool = is_enum<T>::value>
struct underlying_type {
	typedef __underlying_type(T) type;
};

template <typename T>
struct underlying_type<T, false> {
};

_TL_END

#endif // __TLSTL_TYPE_TRAITS_UNDERLYING_TYPE_H__
