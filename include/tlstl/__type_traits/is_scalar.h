#ifndef __TLSTL_TYPE_TRAITS_IS_SCALAR_H__
#define __TLSTL_TYPE_TRAITS_IS_SCALAR_H__

#include <tlstl/__type_traits/is_arithmetic.h>
#include <tlstl/__type_traits/is_enum.h>
#include <tlstl/__type_traits/is_pointer.h>
#include <tlstl/__type_traits/is_member_pointer.h>
#include <tlstl/__type_traits/is_null_pointer.h>

_TL_BEGIN

template <typename T>
struct is_scalar : _Bool_constant
<
	is_member_pointer<T>::value ||
	is_null_pointer<T>::value   ||
	is_arithmetic<T>::value     ||
	is_pointer<T>::value        ||
	is_enum<T>::value
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_scalar);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_SCALAR_H__
