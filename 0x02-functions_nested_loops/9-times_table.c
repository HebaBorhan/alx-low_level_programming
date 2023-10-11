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
			if (mult < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			
			_putchar(mult + '0');
		       if (column < 9)
		       {
			       _putchar(',');
			       _putchar(' ');
		       }
		       }
		_putchar('\n');
	}
}
