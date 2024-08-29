#ifndef __TLSTL_TYPE_TRAITS_IS_SCOPED_ENUM_H__
#define __TLSTL_TYPE_TRAITS_IS_SCOPED_ENUM_H__

#include <tlstl/__type_traits/underlying_type.h>
#include <tlstl/__type_traits/is_convertible.h>
#include <tlstl/__type_traits/is_enum.h>

_TL_BEGIN

#if _TL_HAS_CPP23

template <typename T> struct is_scoped_enum : _Bool_constant
<
	requires
	{
		requires is_enum<T>::value;
		requires !is_convertible<T, typename underlying_type<T>::type>::value;
	}
>
{
};


_TL_DECLARE_CPP17_VALUE_VARIANT(is_scoped_enum);
#endif // _TL_HAS_CPP23

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_SCOPED_ENUM_H__
