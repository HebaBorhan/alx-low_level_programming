#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints binary representation of a number
 * @n: int to be converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		if ((n & 1) == 0)
		{
			_putchar('0');
			n = n >> 1;
		}

		if ((n & 1) == 1)
		{
			_putchar('1');
			n = n >> 1;
		}
	}
}
