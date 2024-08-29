#ifndef __TLSTL_CCTYPE_H__
#define __TLSTL_CCTYPE_H__

#include <tlstl/tlstldef.h>
#include <ctype.h>

_TL_BEGIN

#define _TL_REDECL_CTYPE_FN(name) int name(int c) { return ::name(c); }

_TL_REDECL_CTYPE_FN(isalnum);
_TL_REDECL_CTYPE_FN(isalpha);
_TL_REDECL_CTYPE_FN(islower);
_TL_REDECL_CTYPE_FN(isupper);
_TL_REDECL_CTYPE_FN(isdigit);
_TL_REDECL_CTYPE_FN(isxdigit);
_TL_REDECL_CTYPE_FN(iscntrl);
_TL_REDECL_CTYPE_FN(isgraph);
_TL_REDECL_CTYPE_FN(isspace);
_TL_REDECL_CTYPE_FN(isblank);
_TL_REDECL_CTYPE_FN(isprint);
_TL_REDECL_CTYPE_FN(ispunct);
_TL_REDECL_CTYPE_FN(tolower);
_TL_REDECL_CTYPE_FN(toupper);

_TL_END

#endif // __TLSTL_CCTYPE_H__
