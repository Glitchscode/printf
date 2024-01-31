#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_to;

int _printf(const char *format, ...);
int _putchar(char c);
int character(va_list val);
int string(va_list val);
int integer(va_list args);
int decimal(va_list args);
int _37(void);
int binary(va_list val);
int unsigned_int(va_list val);
int _strlen(char *s);
#endif
