#ifndef __TLSTL_TYPE_TRAITS_IS_FUNCTION_H__
#define __TLSTL_TYPE_TRAITS_IS_FUNCTION_H__

#include <tlstl/__type_traits/is_reference.h>
#include <tlstl/__type_traits/is_const.h>
#include <tlstl/__type_traits/add_cv.h>

_TL_BEGIN

template <typename T>
struct is_function : _Bool_constant
<
	// Only functions and references are cv-unqualified.
	// We'll try to make T const, and if the result isn't const, that means it's either a reference or function.
	// Then we'll just make sure it's not a reference with !stl::is_reference, if not, then it means that it's a function.
	!is_const<typename add_const<T>::type>::value && !is_reference<T>::value
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_function);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_FUNCTION_H__
#pragma once
