#ifndef __TLSTL_CSTDIO_H__
#define __TLSTL_CSTDIO_H__

#include <tlstl/tlstldef.h>
#include <tlstl/cstdarg.h>

#include <stdio.h>

_TL_BEGIN

typedef ::FILE   FILE;
typedef ::fpos_t fpos_t;
typedef ::size_t size_t;

_TL FILE* fopen(const char* fname, const char* mode) {
	return ::fopen(fname, mode);
}

_TL FILE* freopen(const char* fname, const char* mode, _TL FILE* stream) {
	return ::freopen(fname, mode, stream);
}

int fclose(_TL FILE* stream) {
	return ::fclose(stream);
}

int fflush(_TL FILE* stream) {
	return ::fflush(stream);
}

void setbuf(_TL FILE* stream, char* buf) {
	::setbuf(stream, buf);
}

void setvbuf(_TL FILE* stream, char* buf, int mode, _TL size_t sz) {
	::setvbuf(stream, buf, mode, sz);
}

_TL size_t fread(void* buf, _TL size_t bytes_per_element, size_t number_of_elements, _TL FILE* stream) {
	return ::fread(buf, bytes_per_element, number_of_elements, stream);
}

_TL size_t fwrite(const void* buf, _TL size_t bytes_per_element, size_t number_of_elements, _TL FILE* stream) {
	return ::fwrite(buf, bytes_per_element, number_of_elements, stream);
}

int fgetc(_TL FILE* stream) {
	return ::fgetc(stream);
}

int getc(_TL FILE* stream) {
	return ::getc(stream);
}

char* fgets(char* s, int n, _TL FILE* stream) {
	return ::fgets(s, n, stream);
}

int fputc(int c, _TL FILE* stream) {
	return ::fputc(c, stream);
}

int putc(int c, _TL FILE* stream) {
	return ::putc(c, stream);
}

int fputs(const char* s, _TL FILE* stream) {
	return ::fputs(s, stream);
}

int getchar() {
	return ::getchar();
}

#if !_TL_HAS_CPP14
char* gets(char* str) {
	return ::gets(str);
}
#endif

int putchar(int c) {
	return ::putchar(c);
}

int puts(const char* s) {
	return ::puts(s);
}

int ungetc(int c, _TL FILE* stream) {
	return ::ungetc(c, stream);
}

int scanf(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vscanf(fmt, args);
	va_end(args);
}

int fscanf(_TL FILE* stream, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vfscanf(stream, fmt, args);
	va_end(args);
}

int sscanf(const char* buf, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vsscanf(buf, fmt, args);
	va_end(args);
}

int vscanf(const char* fmt, _TL va_list args) {
	return ::vscanf(fmt, args);
}

int vfscanf(_TL FILE* stream, const char* fmt, _TL va_list args) {
	return ::vfscanf(stream, fmt, args);
}

int vsscanf(const char* buf, const char* fmt, _TL  va_list args) {
	return ::vsscanf(buf, fmt, args);
}

int printf(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vprintf(fmt, args);
	va_end(args);
}

int fprintf(_TL FILE* stream, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vfprintf(stream, fmt, args);
	va_end(args);
}

int sprintf(char* buf, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vsprintf(buf, fmt, args);
	va_end(args);
}

int snprintf(char* buf, _TL size_t bufsz, const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);
	_TL vsnprintf(buf, bufsz, fmt, args);
	va_end(args);
}

int vprintf(const char* fmt, _TL va_list args) {
	return ::vprintf(fmt, args);
}

int vfprintf(_TL FILE* stream, const char* fmt, _TL va_list args) {
	return ::vfprintf(stream, fmt, args);
}

int vsprintf(char* buf, const char* fmt, _TL va_list args) {
	return ::vsprintf(buf, fmt, args);
}

int vsnprintf(char* buf, _TL size_t bufsz, const char* fmt, _TL va_list args) {
	return ::vsnprintf(buf, bufsz, fmt, args);
}

long ftell(_TL FILE* stream) {
	return ::ftell(stream);
}

int fgetpos(_TL FILE* stream, _TL fpos_t* pos) {
	return ::fgetpos(stream, pos);
}

int fseek(_TL FILE* stream, long off, int origin) {
	return ::fseek(stream, off, origin);
}

int fsetpos(_TL FILE* stream, const _TL fpos_t* pos) {
	return ::fsetpos(stream, pos);
}

void rewind(_TL FILE* stream) {
	::rewind(stream);
}

void clearerr(_TL FILE* stream) {
	::clearerr(stream);
}

int feof(_TL FILE* stream) {
	return ::feof(stream);
}

int ferror(_TL FILE* stream) {
	return ::ferror(stream);
}

void perror(const char* s) {
	::perror(s);
}

int remove(const char* path) {
	return ::remove(path);
}

int rename(const char* cur_name, const char* new_name) {
	return ::rename(cur_name, new_name);
}

_TL FILE* tmpfile() {
	return ::tmpfile();
}

char* tmpnam(char* fname) {
	return ::tmpnam(fname);
}

_TL_END

#endif // __TLSTL_CSTDIO_H__
