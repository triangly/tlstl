#ifndef __TLSTL_INITIALIZER_LIST_H__
#define __TLSTL_INITIALIZER_LIST_H__

#include <tlstl/tlstldef.h>
#include <initializer_list>

_TL_BEGIN

// initializer list is compiler-specific and must be in std namespace, so use the one from the compiler's stl.
// we'll have a typedef for it in the tlstl namespace, though. which works.

template <typename T>
struct initializer_list : ::std::initializer_list<T> {};

_TL_END

#endif // __TLSTL_INITIALIZER_LIST_H__
