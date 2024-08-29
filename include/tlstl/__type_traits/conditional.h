#ifndef __TLSTL_TYPE_TRAITS_CONDITIONAL_H__
#define __TLSTL_TYPE_TRAITS_CONDITIONAL_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <bool B, typename T, typename U>
struct conditional { typedef T type; };

template <typename T, typename U>
struct conditional<false, T, U> { typedef U type; };

#if _TL_HAS_CPP14

template <bool B, typename T, typename U>
using conditional_t = typename conditional<B, T, U>::type;

#endif // _TL_HAS_CPP14

_TL_END

#endif // __TLSTL_TYPE_TRAITS_CONDITIONAL_H__
