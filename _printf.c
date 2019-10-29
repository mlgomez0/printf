#include "holberton.h"
/**
 *_printf- prints element passed
 *@format: list that has the format
 *Return: Integer
*/
int _printf(const char *format, ...)
{
	om_t struc1[] = {{'c', print_char}, {'s', print_str},
		{'d', print_dec}, {'i', print_int}, };
	int i = 0, j = 0, a = 0, rec = 0, m = 0;

	va_list list;

	va_start(list, format);
	if (format == NULL || format[i] == '\0')
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else
			{
				while (j < 4)
				{
					if (format[i + 1] == struc1[j].ele)
					{
						rec = struc1[j].func(list);
						a = 1;
					}
					j++;
				}
				j = 0;
				m = m + rec;
				if (a == 1)
					i++;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (i + m);
	va_end(list);
}
