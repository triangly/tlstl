#ifndef __TLSTL_TYPE_TRAITS_IS_POD_H__
#define __TLSTL_TYPE_TRAITS_IS_POD_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct
	_TL_DEPRECATE_CPP20("is_pod has been deprecated on C++20. You can define _TLSTL_NO_CPP20_DEPRECATIONS to silence this.")
	is_pod : _Bool_constant<__is_pod(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_pod);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_POP_H__
