#ifndef __TLSTL_UTILITY_DECLVAL_H__
#define __TLSTL_UTILITY_DECLVAL_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/add_lrvalue_reference.h>

_TL_BEGIN

template <typename T>
typename add_rvalue_reference<T>::type declval() noexcept
{
	static_assert(false, "declval is not allowed in unevaluated context!");
}

_TL_END

#endif // __TLSTL_UTILITY_DECLVAL_H__
