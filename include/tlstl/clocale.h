#ifndef __TLSTL_CLOCALE_H__
#define __TLSTL_CLOCALE_H__

#include <tlstl/tlstldef.h>
#include <locale.h>

_TL_BEGIN

typedef ::lconv lconv;

char* setlocale(int category, const char* locale) {
	return ::setlocale(category, locale);
}

_TL lconv* localeconv() {
	return ::localeconv();
}

_TL_END

#endif // __TLSTL_CLOCALE_H__
