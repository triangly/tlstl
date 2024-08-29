#ifndef __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_WITH_CLASS_H__
#define __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_WITH_CLASS_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

template <typename S, typename M>
constexpr bool is_pointer_interconvertible_with_class(M S::* mp) noexcept {
#ifdef _TL_COMPILER_MSVC
	return __is_pointer_interconvertible_with_class(S, mp);
#else
	return __builtin_is_pointer_interconvertible_with_class(mp);
#endif
}

#endif // _TL_HAS_CPP20

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_POINTER_INTERCONVERTIBLE_WITH_CLASS_H__
