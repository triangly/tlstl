#ifndef __TLSTL_TYPE_TRAITS_TYPE_IDENTITY_H__
#define __TLSTL_TYPE_TRAITS_TYPE_IDENTITY_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

template <typename T> struct type_identity { typedef T type; };
_TL_DECLARE_CPP14_TYPE_VARIANT(type_identity);

#endif // _TL_HAS_CPP20

_TL_END

#endif // __TLSTL_TYPE_TRAITS_TYPE_IDENTITY_H__
