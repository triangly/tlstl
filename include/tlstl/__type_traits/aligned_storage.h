#ifndef __TLSTL_TYPE_TRAITS_ALIGNED_STORAGE_H__
#define __TLSTL_TYPE_TRAITS_ALIGNED_STORAGE_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <_TL size_t L, _TL size_t Align = alignof(max_align_t)>
struct _TL_DEPRECATE_CPP23("aligned_storage has been deprecated as of C++23. You can define _TLSTL_NO_CPP23_DEPRECATIONS to silence this.")
aligned_storage {
	struct type {
		alignas(Align) unsigned char data[L];
	};
};

#if _TL_HAS_CPP14
template <_TL size_t L, _TL size_t Align = alignof(max_align_t)>
using _TL_DEPRECATE_CPP23("aligned_storage_t has been deprecated as of C++23. You can define _TLSTL_NO_CPP23_DEPRECATIONS to silence this.")
aligned_storage_t = typename aligned_storage<L, Align>::type;
#endif // _TL_HAS_CPP14

_TL_END

#endif // __TLSTL_TYPE_TRAITS_ALIGNED_STORAGE_H__
