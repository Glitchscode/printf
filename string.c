#include "main.h"
/**
 * string - prints the string
 * @val: the value string
 * Return: returns 1
 */
int string(va_list val)
{
	int k, len;
	char *str;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (k = 0; k < len; k++)
			_putchar(str[k]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (k = 0; k < len; k++)
		{
			_putchar(str[k]);
		}
		return (len);
	}
}
