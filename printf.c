#include "main.h"
/**
* _printf - prints a string with format specifiers if specified
* @format: format specifier
* Return: returns length of the string
*/
int _printf(const char *format, ...)
{
	convert_to s[] = {
		{"%s", string}, {"%c", character}, {"%%", _37},
		{"%i", integer}, {"%d", decimal}, {"%b", binary},
		{"%u", unsigned_int}
	};
	int i, len, j;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 6;
		while (j >= 0)
		{
			if (s[j].id[0] == format[i] && s[j].id[1] == format[i + 1])
			{
				len += s[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
