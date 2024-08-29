#ifndef __TLSTL_TYPE_TRAITS_REMOVE_POINTER_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_POINTER_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename T> struct remove_pointer                    { typedef T type; };
template <typename T> struct remove_pointer<T*>                { typedef T type; };
template <typename T> struct remove_pointer<T* const>          { typedef T type; };
template <typename T> struct remove_pointer<T* volatile>       { typedef T type; };
template <typename T> struct remove_pointer<T* const volatile> { typedef T type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_pointer);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_POINTER_H__
