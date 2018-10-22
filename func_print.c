#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int func_print(char k, va_list *spec)
{
	int i;
x
	spec chars[] = {
		{"c", buff_i},
		{"s", buff_s},
		{'\0', NULL}
	};

	for(i = 0; chars[i].id != '\0'; i++)
	{
		if (chars[i].id == k)
		{
			return (chars[i].func(spec));
		}
	}
	if (k == '%')
	{
		putchar('%');
	}
}
