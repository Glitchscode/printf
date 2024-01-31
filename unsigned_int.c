#include "main.h"
/**
 * print_u - prints integer using the putchar function
 * @value: this parameter accepts the value to be printed
 */
void print_u(unsigned int value)
{
	unsigned int i = 0;

	if (value < i)
	{
		_putchar('-');
		value = -value;
	}
	if (value != i)
	{
		print_u(value / 10);
		_putchar((value % 10) + '0');
	}
}

/**
 * unsigned_int - converts form integer to unsigned int
 * @val: the value parameter that accepts the integer
 * Return: returns 1
 */
int unsigned_int(va_list val)
{
	unsigned int i;

	i = va_arg(val, unsigned int);
	print_u(i);
	return (1);
}
