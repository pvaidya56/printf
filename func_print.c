#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * func_print - Matches the conversion specifier with it's function
 * @k: conversion specifier
 * @spec: function for each specifier
 * Return:gcc The function
 */

int func_print(char k, va_list valist)
{
	int i, u;
	void *fnc = va_arg(valist, void *);

	spec chars[] = {
		{'c', print_i},
		{'s', print_s},
		{'d', print_d},
		{'i', print_i},
		{'\0', NULL},
	};

	if (fnc == NULL)
		return (0);

	if (k == '%')
	{
		putchar('%');
	}

	for (i = 0; chars[i].func != '\0'; i++)
	{
		if (chars[i].id == k)
		{
			u = (chars[i].func(fnc));
		}
	}
	return (u);
}
