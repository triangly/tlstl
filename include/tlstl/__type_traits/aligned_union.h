#ifndef __TLSTL_TYPE_TRAITS_ALIGNED_UNION_H__
#define __TLSTL_TYPE_TRAITS_ALIGNED_UNION_H__

#include <tlstl/__algorithm/max.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <_TL size_t L, typename... Types>
struct _TL_DEPRECATE_CPP23("aligned_union has been deprecated as of C++23. You can define _TLSTL_NO_CPP23_DEPRECATIONS to silence this.")
aligned_union {
	static constexpr _TL size_t alignment_value = _TL max({ alignof(Types)... });
	struct type {
		alignas(alignment_value) char _s[_TL max({ L, sizeof(Types)... })];
	};
};

#if _TL_HAS_CPP14
template <_TL size_t L, typename... Types>
using _TL_DEPRECATE_CPP23("aligned_union_t has been deprecated as of C++23. You can define _TLSTL_NO_CPP23_DEPRECATIONS to silence this.")
aligned_union_t = typename aligned_union<L, Types...>::type;
#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_ALIGNED_UNION_H__
