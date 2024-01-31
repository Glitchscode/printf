#include "main.h"
/**
 * binary - converts decimal to binary
 * @val: value to convert
 * Return: returns 1
 */
int binary(va_list val)
{
	int decimal_num;
	int bin_num, i, mod;

	decimal_num = va_arg(val, int);
	bin_num = 0;
	i = 1;
	while (decimal_num != 0)
	{
		mod = decimal_num % 2;
		decimal_num /= 2;
		bin_num += mod * i;
		i *= 10;
	}
	_printf("%d", bin_num);
	return (1);
}
