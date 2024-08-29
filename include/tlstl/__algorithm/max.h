#ifndef __TLSTL_ALGORITHM_MAX_H__
#define __TLSTL_ALGORITHM_MAX_H__

#include <tlstl/tlstldef.h>
#include <tlstl/initializer_list.h>

_TL_BEGIN

template <typename T, typename Compare>
_TL_CONSTEXPR14 const T& max(const T& l, const T& r, Compare f) {
	return f(l, r) ? r : l;
}

template <typename T>
_TL_CONSTEXPR14 const T& max(const T& l, const T& r) {
	return l < r ? r : l;
}

template <typename T>
_TL_CONSTEXPR14 T max(initializer_list<T> ls) {
	const T* largest = ls.begin();
	for (const T* elem : ls) {
		if (*largest < *elem) {
			largest = elem;
		}
	}
	return *largest;
}

template <typename T, typename Compare>
_TL_CONSTEXPR14 T max(initializer_list<T> ls, Compare f) {
	const T* largest = ls.begin();
	for (const T* elem : ls) {
		if (f(*largest, *elem)) {
			largest = elem;
		}
	}
	return *largest;
}

_TL_END

#endif // __TLSTL_ALGORITHM_MAX_H__
