#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: number of times the characters ' ' and '\' should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			/* nested loop for identation */
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
