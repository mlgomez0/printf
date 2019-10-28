#include "holberton.h"
/**
*print_char - prints a given char
*@list: char to be printed
*/

void print_char(va_list list)
{
	_putchar(va_arg(list, int));
}
/**
*print_str - prints a given string
*@list:string to be printed
*/
void print_str(va_list list)
{
	char *l;
	int i;

	i = 0;
	l = va_arg(list, char *);
	if (l != NULL)
	{
		while (l[i] != '\0')
		{
			_putchar(l[i]);
			i++;
		}
	}
	return;
}
/**
*print_dec - prints a given decimal base 10
*@list: int to be printed
*/
void print_dec(va_list list)
{
	int l;
	l = va_arg(list, int);
	print_number(l);
}
/**
*print_int - prints a given integer
*@list: int to be printed
*/
void print_int(va_list list)
{
	int m;

	m = va_arg(list, int);
	print_number(m);
}
