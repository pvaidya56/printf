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
	unsigned int i, buff_i;
	char *buff;
	const char *str = format;
	char c;
	va_list valist;

	if (format == NULL)
		return;

	va_start(valist, format);

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] != '%')
		{
			buff[buff_i] = str[i];
			buff_i++;
			i++;
		}
		i++;

		c = str[i];
		if (c == '\0' || c == '%')
			buff[buff_i] = ('%');
		func_print(c);
	}
	va_end(valist);

	write(1, buff, buff_i);

	return (buff_i);
}
