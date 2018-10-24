#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct conv_spec
{
	char id;
	char *func;
} spec;

int _printf(const char *format, ...);
int func_print(char k, va_list valist);
int print_d(va_list valist);
int print_i(va_list valist);
int print_s(va_list valist);
void rev_buff(char *s);
void _putchar(char c);
int _itoa(int z);

#endif
