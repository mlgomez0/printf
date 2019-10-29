#include "holberton.h"
/**
*print_char - prints a given char
*@list: char to be printed
*Return: Integer
*/

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}
/**
*print_str - prints a given string
*@list:string to be printed
*Return: Integer
*/
int print_str(va_list list)
{
	char *l;
	int i, j = 0;
	char x[] = {'(', 'n', 'u', 'l', 'l', ')'};

	i = 0;
	j = 0;
	l = va_arg(list, char *);
	if (l != NULL)
	{
		while (l[i] != '\0')
		{
			_putchar(l[i]);
			i++;
		}
		return (i);
	}
	else
	{
		while (j < 6)
		{
			_putchar(x[j]);
			j++;
		}
		return (6);
	}

}
/**
*print_dec - prints a given decimal base 10
*@list: int to be printed
*Return: Integer
*/
int print_dec(va_list list)
{
	int l;

	l = va_arg(list, int);
	print_number(l);
	return (0);
}

/**
*print_int - prints a given integer
*@list: int to be printed
*Return: Integer
*/
int print_int(va_list list)
{
	int m;

	m = va_arg(list, int);
	print_number(m);
	return (0);
}

/**
 *_reviews - select the right function
 *@s: Char to be compared
 *@list: va_list to be evaluated
 *Return: integer
 */

int _reviews(char s, va_list list)
{
	 om_t struc1[] = {
		 {'c', print_char},
		 {'s', print_str},
		 {'d', print_dec},
		 {'i', print_int},
	 };

	int j = 0;
	int rec = 0;

	while (j < 4)
	{
		if (s == struc1[j].ele)
		{
			rec = struc1[j].func(list);
		}
		j++;
	}
	return (rec);
}
