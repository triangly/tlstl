#ifndef __TLSTL_TYPE_TRAITS_IS_INTEGRAL_H__
#define __TLSTL_TYPE_TRAITS_IS_INTEGRAL_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/remove_cv.h>
#include <tlstl/__type_traits/is_same.h>

_TL_BEGIN

template <typename T>
struct is_integral : _Bool_constant
<
	is_same<typename remove_cv<T>::type, bool>::value           ||
	is_same<typename remove_cv<T>::type, char>::value           ||
	is_same<typename remove_cv<T>::type, char16_t>::value       ||
	is_same<typename remove_cv<T>::type, char32_t>::value       ||
	is_same<typename remove_cv<T>::type, wchar_t>::value        ||
	is_same<typename remove_cv<T>::type, short>::value          ||
	is_same<typename remove_cv<T>::type, int>::value            ||
	is_same<typename remove_cv<T>::type, long>::value           ||
	is_same<typename remove_cv<T>::type, long long>::value      ||
	is_same<typename remove_cv<T>::type, unsigned char>::value  ||
	is_same<typename remove_cv<T>::type, unsigned short>::value ||
	is_same<typename remove_cv<T>::type, unsigned int>::value   ||
	is_same<typename remove_cv<T>::type, unsigned long>::value  ||
	is_same<typename remove_cv<T>::type, unsigned long long>::value
#if _TL_HAS_CPP20
	|| is_same<typename remove_cv<T>::type, char8_t>::value
#endif
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_integral);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_INTEGRAL_H__
