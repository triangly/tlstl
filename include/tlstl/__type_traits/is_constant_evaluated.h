#ifndef __TLSTL_TYPE_TRAITS_IS_CONSTANT_EVALUATED_H__
#define __TLSTL_TYPE_TRAITS_IS_CONSTANT_EVALUATED_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

#if _TL_HAS_CPP20

constexpr bool is_constant_evaluated() noexcept {
	return __builtin_is_constant_evaluated();
}

#endif // _TL_HAS_CPP20

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_CONSTANT_EVALUATED_H__
