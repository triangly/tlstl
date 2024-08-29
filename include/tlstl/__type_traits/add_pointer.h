#ifndef __TLSTL_TYPE_TRATIS_ADD_POINTER_H__
#define __TLSTL_TYPE_TRATIS_ADD_POINTER_H__

#include <tlstl/tlstldef.h>
#include <tlstl/__type_traits/remove_reference.h>

_TL_BEGIN

namespace detail {

	template <typename T> struct _Type_identity_detail2 { typedef T type; };

	template <typename T> auto _Try_add_ptr(int) -> _Type_identity_detail2<typename remove_reference<T>::type*>;
	template <typename T> auto _Try_add_ptr(...) -> _Type_identity_detail2<T>;

}

template <typename T>
struct add_pointer : decltype(detail::_Try_add_ptr<T>(0)) {};

_TL_DECLARE_CPP14_TYPE_VARIANT(add_pointer);

_TL_END

#endif // __TLSTL_TYPE_TRATIS_ADD_POINTER_H__
