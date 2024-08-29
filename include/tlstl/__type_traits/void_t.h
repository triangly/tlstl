#ifndef __TLSTL_TYPE_TRAITS_VOID_T_H__
#define __TLSTL_TYPE_TRAITS_VOID_T_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

template <typename...>
struct _Void_t_helper {
	typedef void type;
};

#if _TL_HAS_CPP17
template <typename... Args>
using void_t = typename _Void_t_helper<Args...>::type;
#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_VOID_T_H__
