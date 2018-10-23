_printf

The main task of this project is to recreate printf in C.

The purpose of _printf is to work exactly like the printf function from the stdio.h

The prototype we used is int _printf(const char *format, ...). Format is a string that takes in an infinite number of arguments as input It returns the number of characters printed. 

The program has to look for a '%' which tells when an additional value is going to be input. The letter after that acts as the conversion specifier.

%c is for a characer
%d and %i are for integers
%s is for a string

A sample out put would be to print a string with it's specified conversion specifiers.