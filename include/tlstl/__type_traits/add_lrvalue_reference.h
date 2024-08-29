#ifndef __TLSTL_TYPE_TRAITS_ADD_LRVALUE_REFERENCE_H__
#define __TLSTL_TYPE_TRAITS_ADD_LRVALUE_REFERENCE_H__

#include <tlstl/tlstldef.h>

_TL_BEGIN

namespace detail {
	template <typename T> struct _Type_identity_detail { typedef T type; };

	template <typename T> auto _Try_add_lvalue_reference(int) -> _Type_identity_detail<T&>;
	template <typename T> auto _Try_add_lvalue_reference(...) -> _Type_identity_detail<T>;

	template <typename T> auto _Try_add_rvalue_reference(int) -> _Type_identity_detail<T&&>;
	template <typename T> auto _Try_add_rvalue_reference(...) -> _Type_identity_detail<T>;
}

// Versions for C++11 (non-standard) below

template <typename T>
struct _Add_lvalue_reference : decltype(detail::_Try_add_lvalue_reference<T>(0)) {};

template <typename T>
struct _Add_rvalue_reference : decltype(detail::_Try_add_rvalue_reference<T>(0)) {};

#if _TL_HAS_CPP14

template <typename T>
using add_lvalue_reference = _Add_lvalue_reference<T>;

template <typename T>
using add_rvalue_reference = _Add_rvalue_reference<T>;

_TL_DECLARE_CPP14_TYPE_VARIANT(add_lvalue_reference);
_TL_DECLARE_CPP14_TYPE_VARIANT(add_rvalue_reference);

#endif

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_CLASS_H__
#pragma once
