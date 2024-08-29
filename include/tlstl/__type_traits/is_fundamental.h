#ifndef __TLSTL_TYPE_TRAITS_IS_FUNDAMENTAL_H__
#define __TLSTL_TYPE_TRAITS_IS_FUNDAMENTAL_H__

#include <tlstl/__type_traits/is_arithmetic.h>
#include <tlstl/__type_traits/remove_cv.h>
#include <tlstl/__type_traits/is_void.h>
#include <tlstl/__type_traits/is_same.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T> struct is_fundamental : _Bool_constant
<
	is_arithmetic<T>::value ||
	is_void<T>::value       ||
	is_same<_TL nullptr_t, typename remove_cv<T>::type>::value
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_fundamental);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_FUNDAMENTAL_H__
