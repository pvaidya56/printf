#include "holberton.h"

/**
 * _itoa - prints an integer to stdout
 * @z: integer to print
 *
 * Return: last number to print
 */

int _itoa(int z)
{
	int x;
	if (z < 0)
	{
		putchar('-');
		z = -(z);
	}
	while (z >= 10)
	{
		x = z % 10;
		_putchar(x + 48);
		z = z / 10;
		i++;
	}
	i++;
	_putchar(z + 48);

	return (z);
}

/**
 * buff_d - prints a double
 * @valist: variable argument list created in _printf
 *
 * Return: number of chars printed
 */

int buff_d(va_list valist)
{
	double k;
	int y, z, d_index = 0;

	k = va_arg(valist, double);
	z = _itoa(k);
	z++;
	_putchar('.')
	while (k * 10 >= 1)
	{
		y = z % 1;
		putchar(y + 48);
		d_index++;
	}

	return (d_index);
}

/**
 * buff_c - prints a character to stdout
 * @valist: variable argument list from _printf
 *
 * Return: 1 on success
 */

int buff_c(va_list valist)
{
	_putchar(va_arg(valist, char));
	return (1);
}

/**
 * buff_i - prints an integer to stdout
 * @valist: variable argument list from _printf
 *
 * Return: number of characters printed
 */

int buff_i(va_list valist)
{
	int x = 0;
	x = _itoa(va_arg(valist, int));

	return (x);
}

/**
 * buff_s - prints a string to stdout
 * @valist: variable argument list from _printf
 *
 * Return: number of characters printed
 */

int buff_s(va_list valist)
{
	int i_s = 0;
	char *st = va_arg(valist, char *);

	while (*st != '\0')
	{
		_putchar(*st);
		st++;
		i_s++;
	}

	return(i_s);
}
