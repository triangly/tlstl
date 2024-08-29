#ifndef __TLSTL_TYPE_TRAITS_REMOVE_ALL_EXTENTS_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_ALL_EXTENTS_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T> struct remove_all_extents                     { typedef T type; };
template <typename T> struct remove_all_extents<T[]>                { typedef typename remove_all_extents<T>::type type; };
template <typename T, _TL size_t N> struct remove_all_extents<T[N]> { typedef typename remove_all_extents<T>::type type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_all_extents);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_ALL_EXTENTS_H__
