#ifndef __TLSTL_TYPE_TRAITS_IS_CORRESPONDING_MEMBER_H__
#define __TLSTL_TYPE_TRAITS_IS_CORRESPONDING_MEMBER_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

template <typename T1, typename T2, typename M1, typename M2>
constexpr bool is_corresponding_member(M1 T1::* mp, M2 T2::* mq) noexcept {
#ifdef _TL_COMPILER_MSVC
	return __is_corresponding_member(T1, T2, mp, mq);
#else
	return __builtin_is_corresponding_member(mp, mq);
#endif
}

#endif // _TL_HAS_CPP20

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_CORRESPONDING_MEMBER_H__
