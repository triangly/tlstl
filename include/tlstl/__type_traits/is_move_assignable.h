#ifndef __TLSTL_TYPE_TRAITS_IS_MOVE_ASSIGNABLE_H__
#define __TLSTL_TYPE_TRAITS_IS_MOVE_ASSIGNABLE_H__

#include <tlstl/__type_traits/add_lrvalue_reference.h>
#include <tlstl/__type_traits/is_assignable.h>

_TL_BEGIN

template <typename T>
struct is_move_assignable : is_assignable<typename add_lvalue_reference<T>::type, typename add_rvalue_reference<T>::type> {};

template <typename T>
struct is_trivially_move_assignable : is_trivially_assignable<typename add_lvalue_reference<T>::type, typename add_rvalue_reference<T>::type> {};

template <typename T>
struct is_nothrow_move_assignable : is_nothrow_assignable<typename add_lvalue_reference<T>::type, typename add_rvalue_reference<T>::type> {};

_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_move_assignable);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_trivially_move_assignable);
_TL_DECLARE_CPP17_VALUE_VARIANT_TWO(is_nothrow_move_assignable);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_IS_MOVE_ASSIGNABLE_H__
