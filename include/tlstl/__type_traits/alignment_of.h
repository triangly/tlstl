#ifndef __TLSTL_TYPE_TRAITS_ALIGNMENT_OF_H__
#define __TLSTL_TYPE_TRAITS_ALIGNMENT_OF_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/cstddef.h>

_TL_BEGIN

template <typename T>
struct alignment_of : integral_constant<_TL size_t, alignof(T)> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_CR(_TL size_t, alignment_of);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_ALIGNMENT_OF_H__
