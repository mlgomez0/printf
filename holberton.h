#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
/**
 *struct _functions1- Struct of functions
 *@ele: char to be evaluate
 *@func: function associated
 **/
typedef struct _functions1
{
	char ele;
	int (*func)(va_list);

} om_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_dec(va_list list);
int print_int(va_list list);
void print_number(int n);

#endif
