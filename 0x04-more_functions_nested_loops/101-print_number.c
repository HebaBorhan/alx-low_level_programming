#include "main.h"

/**
 * print_number - prints an integer
 *@n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}

	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
