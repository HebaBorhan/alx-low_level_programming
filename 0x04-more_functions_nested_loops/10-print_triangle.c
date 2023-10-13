#include "main.h"

/**
 * print_triangle - draws a triangle
 *@size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < size; i++)
		{
			/* nested loop for identation */
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}

			/* nested loop for repeating squares */
			for (s = 0; s <= i; s++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
}
