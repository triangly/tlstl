#ifndef __TLSTL_TYPE_TRAITS_REMOVE_EXTENT_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_EXTENT_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T>               struct remove_extent       { typedef T type; };
template <typename T>               struct remove_extent<T[]>  { typedef T type; };
template <typename T, _TL size_t N> struct remove_extent<T[N]> { typedef T type; };

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_extent);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_EXTENT_H__
