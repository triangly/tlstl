#ifndef __TLSTL_CFENV_H__
#define __TLSTL_CFENV_H__

#include <tlstl/tlstldef.h>
#include <fenv.h>

_TL_BEGIN

typedef ::fenv_t    fenv_t;
typedef ::fexcept_t fexcept_t;

int feclearexcept(int e) {
	return ::feclearexcept(e);
}

int fetestexcept(int e) {
	return ::fetestexcept(e);
}

int feraiseexcept(int e) {
	return ::feraiseexcept(e);
}

int fegetexceptflag(_TL fexcept_t* flag, int e) {
	return ::fegetexceptflag(flag, e);
}

int fesetexceptflag(const _TL fexcept_t* flag, int e) {
	return ::fesetexceptflag(flag, e);
}

int fesetround(int r) {
	return ::fesetround(r);
}

int fegetround() {
	return ::fegetround();
}

int fegetenv(_TL fenv_t* env) {
	return ::fegetenv(env);
}

int fesetenv(const _TL fenv_t* env) {
	return ::fesetenv(env);
}

int feholdexcept(_TL fenv_t* env) {
	return ::feholdexcept(env);
}

int feupdateenv(const _TL fenv_t* env) {
	return ::feupdateenv(env);
}

_TL_END

#endif // __TLSTL_CFENV_H__
