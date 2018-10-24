#include "holberton.h"

/**
 * _itoa - prints an integer to stdout
 * @z: integer to print
 *
 * Return: last number to print
 */

int _itoa(int z)
{
	int x, ind, zind;
	int *buff;

	buff = malloc(sizeof(z));

	if (z < 0)
	{
		_putchar('-');
		z = -(z);
	}
	for (zind = 0;z >= 10; zind++)
	{
		x = z % 10;
		buff[zind] = x + 48;
		z = z / 10;
		buff[zind]++;
	}
	buff[zind]++;
	buff[zind] = (z + 48);

	buff = rev_buff(buff);

	for (ind = 0; ind != '\0'; ind++)
		;

	return (z);
}

/**
 * print_d - prints a double
 * @valist: variable argument list created in _printf
 *
 * Return: number of chars printed
 */

int print_d(va_list valist)
{
	double k;
	int y, z, d_index = 0;

	k = va_arg(valist, double);
	z = _itoa(k);
	z++;
	_putchar('.');
	while (k * 10 >= 1)
	{
		y = z % 1;
		_putchar(y + 48);
		d_index++;
	}

	return (d_index);
}

/**
 * print_c - prints a character to stdout
 * @valist: variable argument list from _printf
 *
 * Return: 1 on success
 */

int print_c(va_list valist)
{
	_putchar(va_arg(valist, char));
	return (1);
}

/**
 * print_i - prints an integer to stdout
 * @valist: variable argument list from _printf
 *
 * Return: number of characters printed
 */

int print_i(va_list valist)
{
	int x = 0;
	x = _itoa(va_arg(valist, int));

	return (x);
}

/**
 * print_s - prints a string to stdout
 * @valist: variable argument list from _printf
 *
 * Return: number of characters printed
 */

int print_s(va_list valist)
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
