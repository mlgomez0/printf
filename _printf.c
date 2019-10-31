#include "holberton.h"
/**
 *_printf- prints element passed
 *@format: list that has the format
 *Return: Integer
*/
int _printf(const char *format, ...)
{
	int i = 0, rec = 0, m = 0, cont = 0;
	char s;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		cont++;
		rec = 0;
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar('%');
			else
			{
				s = format[i + 1];
				rec = _reviews(s, list);
				if (rec == 0)
				{
					_putchar('%');
					_putchar(s);
					cont++;
				}
				if (rec > 0 || rec == -1)
					cont = cont - 1;
				if (rec == -1)
					rec = 0;
			}
			m = m + rec;
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (cont + m);
}
