#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int row;
	int column;
	int mult;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			mult = row * column;

			if (column > 0)
			{
				_putchar(',');

				if (mult < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
				}
			}
			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
