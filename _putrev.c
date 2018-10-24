#include "holberton.h"
#include <unistd.h>

/**
 * rev_buff - reverses a string
 * @s: string being reversed
 */

void rev_buff(char *s)
{
	int i, x, y, c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
