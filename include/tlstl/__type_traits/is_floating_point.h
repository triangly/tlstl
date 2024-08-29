#ifndef __TLSTL_TYPE_TRAITS_IS_FLOATING_POINT_H__
#define __TLSTL_TYPE_TRAITS_IS_FLOATING_POINT_H__

#include <tlstl/__type_traits/remove_cv.h>
#include <tlstl/__type_traits/is_same.h>

_TL_BEGIN

template <typename T>
struct is_floating_point : _Bool_constant
<
	is_same<typename remove_cv<T>::type, float>::value       ||
	is_same<typename remove_cv<T>::type, double>::value      ||
	is_same<typename remove_cv<T>::type, long double>::value
#if _TL_HAS_CPP23
	// TODO: Add C++23 extended float types.
#endif
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_floating_point);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_FLOATING_POINT_H__
