#ifndef __TLSTL_TYPE_TRAITS_ENABLE_IF_H__
#define __TLSTL_TYPE_TRAITS_ENABLE_IF_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <bool expr, typename T = void> struct enable_if { };
template <typename T>                   struct enable_if<true, T> { typedef T type; };

#if _TL_HAS_CPP14

template <bool expr, typename T = void>
using enable_if_t = typename enable_if<expr, T>::type;

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_ENABLE_IF_H__
