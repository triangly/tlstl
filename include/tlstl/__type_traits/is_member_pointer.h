#ifndef __TLSTL_TYPE_TRAITS_IS_MEMBER_POINTER_H__
#define __TLSTL_TYPE_TRAITS_IS_MEMBER_POINTER_H__

#include <tlstl/__type_traits/integral_constant.h>
#include <tlstl/__type_traits/remove_cv.h>

_TL_BEGIN

namespace detail {
	template <typename T>             struct is_member_pointer_detail         : false_type {};
	template <typename T, typename U> struct is_member_pointer_detail<T U::*> : true_type  {};
} // namespace detail

template <typename T> struct is_member_pointer : detail::is_member_pointer_detail<typename remove_cv<T>::type> {};

_TL_DECLARE_CPP17_VALUE_VARIANT(is_member_pointer);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_MEMBER_POINTER_H__
