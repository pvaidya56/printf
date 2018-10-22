#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct conv_spec = {
	char id;
	char *func;
} spec;

int _printf(const char *format, ...);
int buff_d(double dou);
int buff_i(int in);
int buff_c(char ch);
int buff_s(char *str);
int buff_b(int binary);

#endif
