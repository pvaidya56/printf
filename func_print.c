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

int func_print(char k, va_list *spec)
{
	int i;

	spec chars[] {
		{"c", buff_i},
		{"s", buff_s},
		{"d", buff_d},
		{"i", buff_i},
		{'\0', NULL}
	};

	if (k == '%')
        {
                putchar('%');
        }

	for (i = 0; chars[i].func != '\0'; i++)
	{
		if (chars[i].id == k)
		{

			return (chars[i].func(spec));
		}
	}

}
