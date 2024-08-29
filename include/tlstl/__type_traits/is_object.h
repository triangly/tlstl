#ifndef __TLSTL_TYPE_TRAITS_IS_OBJECT_H__
#define __TLSTL_TYPE_TRAITS_IS_OBJECT_H__

#include <tlstl/__type_traits/is_scalar.h>
#include <tlstl/__type_traits/is_array.h>
#include <tlstl/__type_traits/is_union.h>
#include <tlstl/__type_traits/is_class.h>

_TL_BEGIN

template <typename T>
struct is_object : _Bool_constant
<
	is_scalar<T>::value ||
	is_array<T>::value  ||
	is_union<T>::value  ||
	is_class<T>::value
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_object);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_OBJECT_H__
