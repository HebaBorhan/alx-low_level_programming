#include "main.h"

/**
 * print_triangle - draws a triangle
 *@size: number of times the characters # should be printed
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			/* nested loop for identation */
			for (j = 1; j <= size; j++)
			{
				_putchar(' ');
			}

			/* nested loop for repeating squares */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
