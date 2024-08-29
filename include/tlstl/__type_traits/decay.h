#ifndef __TLSTL_TYPE_TRAITS_DECAY_H__
#define __TLSTL_TYPE_TRAITS_DECAY_H__

#include <tlstl/__type_traits/remove_reference.h>
#include <tlstl/__type_traits/remove_extent.h>
#include <tlstl/__type_traits/is_function.h>
#include <tlstl/__type_traits/add_pointer.h>
#include <tlstl/__type_traits/conditional.h>
#include <tlstl/__type_traits/remove_cv.h>
#include <tlstl/__type_traits/is_array.h>

_TL_BEGIN

template <typename T>
struct decay {
private:
	typedef typename remove_reference<T>::type U;
public:
	typedef typename conditional
		<
		is_array<U>::value,
		typename add_pointer<typename remove_extent<U>::type>::type,
		typename conditional
		<
			is_function<U>::value,
			typename add_pointer<U>::type,
			typename remove_cv<U>::type
		>::type
	>::type type;
};

_TL_DECLARE_CPP14_TYPE_VARIANT(decay);

_TL_END

#endif // __TLSTL_TYPE_TRAITS_DECAY_H__
