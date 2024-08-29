#ifndef __TLSTL_TYPE_TRAITS_IS_MEMBER_OBJECT_POINTER_H__
#define __TLSTL_TYPE_TRAITS_IS_MEMBER_OBJECT_POINTER_H__

#include <tlstl/__type_traits/is_member_function_pointer.h>
#include <tlstl/__type_traits/is_member_pointer.h>

_TL_BEGIN

template <typename T> struct is_member_object_pointer : _Bool_constant<is_member_pointer<T>::value && !is_member_function_pointer<T>::value> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_member_object_pointer);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_MEMBER_OBJECT_POINTER_H__
