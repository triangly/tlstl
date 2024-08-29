#ifndef __TLSTL_CINTTYPES_H__
#define __TLSTL_CINTTYPES_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstdint.h>
#include <inttypes.h>

_TL_BEGIN

struct imaxdiv_t {
	_TL intmax_t quot, rem;
};

_TL_CONSTEXPR23 imaxdiv_t div(_TL intmax_t quot, _TL intmax_t rem) {
	return { quot/rem, quot%rem }; // compiler will definitely optimize
}

_TL_CONSTEXPR23 _TL intmax_t abs(_TL intmax_t n) {
	return n < 0 ? -n : n;
}

// intmax_t isn't an extended type, so imaxdiv & imaxabs ain't defined/declared/implemented.

_TL intmax_t strtoimax(const char* nptr, char** end, int base) {
	return ::strtoimax(nptr, end, base);
}

_TL uintmax_t strtoumax(const char* nptr, char** end, int base) {
	return ::strtoumax(nptr, end, base);
}

_TL intmax_t wcstoimax(const wchar_t* nptr, wchar_t** end, int base) {
	return ::wcstoimax(nptr, end, base);
}

_TL uintmax_t wcstoumax(const wchar_t* nptr, wchar_t** end, int base) {
	return ::wcstoumax(nptr, end, base);
}

_TL_END

#endif // __TLSTL_CINTTYPES_H__
