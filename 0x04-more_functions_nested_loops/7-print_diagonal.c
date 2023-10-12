#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: number of times the characters ' ' and '\' should be printed
 */

void print_diagonal(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
