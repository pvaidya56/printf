#include "holberton.h"
#include <unistd.h>

/**
 * _printf - prints a formatted string
 * @format: string to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, vacount = 0;
	const char *str = format;
	char c;
	va_list valist;

	if (format == NULL)
		return (0);

	va_start(valist, format);

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != '%')
		{
			_putchar(str[i]);
			i++;
		}
		c = str[i++];

		if (c == '\0' || c == '%')
		{
			_putchar('%');
		}

		func_print(c);
		i++;
		vacount++;
	}
	va_end(valist);

	return (i - vacount);
}
