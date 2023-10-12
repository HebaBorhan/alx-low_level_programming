#include "main.h"

/**
 * print_square - prints a square
 *@size: number of times the character # should be printed
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{
			/* nested loop for repeating squares */
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
