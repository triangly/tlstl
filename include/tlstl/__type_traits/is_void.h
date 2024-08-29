#ifndef __TLSTL_TYPE_TRAITS_IS_VOID_H__
#define __TLSTL_TYPE_TRAITS_IS_VOID_H__

#include <tlstl/__type_traits/remove_cv.h>
#include <tlstl/__type_traits/is_same.h>

_TL_BEGIN

template <typename T> struct is_void : integral_constant<bool, is_same<void, typename remove_cv<T>::type>::value> { };

_TL_DECLARE_CPP17_VALUE_VARIANT(is_void);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_VOID_H__
