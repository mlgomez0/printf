#include "holberton.h"

/**
 *print_number - print every number using _putchar function (by char)
 *@n:number to be evaluated
 *Return:void
 */
int print_number(int n)
{
	unsigned int a;
	int count;

	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		count = 1;
	}
	a = n;

	if (a / 10)
		print_number(a / 10);

	_putchar(a % 10 + '0');

	while (a > 9)
	{
		a = a / 10;
		count++;
	}
	count++;
	return (count);
}
