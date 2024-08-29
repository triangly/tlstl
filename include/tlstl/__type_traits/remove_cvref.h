#ifndef __TLSTL_TYPE_TRAITS_REMOVE_CVREF_H__
#define __TLSTL_TYPE_TRAITS_REMOVE_CVREF_H__

#include <tlstl/__type_traits/remove_reference.h>
#include <tlstl/__type_traits/remove_cv.h>

_TL_BEGIN

template <typename T>
struct _Remove_cvref_cpp11 {
	typedef typename remove_cv<typename remove_reference<T>::type>::type type;
};

#if _TL_HAS_CPP20

template <typename T>
struct remove_cvref : _Remove_cvref_cpp11<T> {};

_TL_DECLARE_CPP14_TYPE_VARIANT(remove_cvref);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_REMOVE_CVREF_H__
