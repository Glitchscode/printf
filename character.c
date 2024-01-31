#include "main.h"
/**
 * character - print a single character
 * @val: value to be printed
 * Return: returns 1
 */
int character(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
