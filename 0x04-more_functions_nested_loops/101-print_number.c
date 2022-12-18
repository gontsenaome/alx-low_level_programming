#include "main.h"

/**
 * print_number - printsan integer n
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int nl;
	{
		nl = -n;
		_putchar('-');
	} else
	{
		nl = n;
	}

	if (nl / 10)
	{
		print_number(nl / 10);
	}

	_putchar((nl % 10) + '0');
}
