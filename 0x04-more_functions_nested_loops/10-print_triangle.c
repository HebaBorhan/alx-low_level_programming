#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size: size of triangle
 *@#: character used to print the triangle
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
	{
		for (i = 0; i < size; i++)
		{
			/* nested loop for indentation */
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
}
