#ifndef __TLSTL_TYPE_TRAITS_HAS_UNIQUE_OBJECT_REPRESENTATIONS_H__
#define __TLSTL_TYPE_TRAITS_HAS_UNIQUE_OBJECT_REPRESENTATIONS_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/remove_all_extents.h>
#include <tlstl/__type_traits/remove_cv.h>

_TL_BEGIN

#if _TL_HAS_CPP17

template <typename T> struct has_unique_object_representations : _Bool_constant
<
	__has_unique_object_representations(typename remove_cv<typename remove_all_extents<T>::type>::type)
>
{
};

_TL_DECLARE_CPP17_VALUE_VARIANT(has_unique_object_representations);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_HAS_UNIQUE_OBJECT_REPRESENTATIONS_H__
