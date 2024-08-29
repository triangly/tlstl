#ifndef __TLSTL_TYPE_TRAITS_HAS_VIRTUAL_DESTRUCTOR_H__
#define __TLSTL_TYPE_TRAITS_HAS_VIRTUAL_DESTRUCTOR_H__

#include <tlstl/__type_traits/integral_constant.h>

_TL_BEGIN

template <typename T> struct has_virtual_destructor : _Bool_constant<__has_virtual_destructor(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(has_virtual_destructor);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_HAS_VIRTUAL_DESTRUCTOR_H__
