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
	int i = 0, j = 0, a = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		if ((format[i] != '%') && (format[i] != '\\'))
			_putchar(format[i]);
		else
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
					_putchar('%');
				else
				{
					while (j < 4)
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
			}
		}
		i++;
	}
	return(i);
	va_end(list);
}
