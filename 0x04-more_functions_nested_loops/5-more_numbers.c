#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	/* for loop for the 10 times */
	for (i = 0; i < 10; i++)
	{
		/* nested loop */
		int n = 0;

		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
