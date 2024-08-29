#ifndef __TLSTL_TYPE_TRAITS_IS_POINTER_H__
#define __TLSTL_TYPE_TRAITS_IS_POINTER_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct is_pointer                    : false_type { };
template <typename T> struct is_pointer<T*>                : true_type { };
template <typename T> struct is_pointer<T* const>          : true_type { };
template <typename T> struct is_pointer<T* volatile>       : true_type { };
template <typename T> struct is_pointer<T* const volatile> : true_type { };

_TL_DECLARE_CPP17_VALUE_VARIANT(is_pointer);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_POINTER_H__
