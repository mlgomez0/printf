#include "holberton.h"
/**
 *_printf- prints element passed
 *@format: list that has the format
 *Return: Integer
*/
int _printf(const char *format, ...)
{
	om_t struc1[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'i', print_int},
	};
	int i = 0, j = 0, k = 0, a = 0;
	va_list list;

	va_start(list, format);

	while (format && format[i])
	{
		if ((format[i] != '%') && (format[i] != '\\'))
		{
			_putchar(format[i]);
		}
		else
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
					_putchar('%);
				else
				{
					while (j < 5)
					{
						if (format[i+1] == struc1[j].ele)
						{
							struc1[j].func(list);
							a = 1;
						}
						j++;
					}
					j = 0;
					if (a == 1)
					i++;
				}
			}/*Qué pasa sí no después de % no encuentra coincidencias */

		}
		i++;

	}
	return(i);
	va_end(list);
}
/**
 *print_char - prints a given char
 *@list: char to be printed
 */

void print_char(va_list list)
{

	_putchar(va_arg(list, int));
}

/**
 *print_str - prints a given str
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
 *print_int - prints a given integer
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
