#include "main.h"

/**
 * print_most_numbers - printing the numbers except 2 and 4
 */

void print_most_numbers(void)
{
	/* declaring an integer variable */
	int i = 0;

	/* for loop for numbers from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			/* converting the integer into numeral ASCII character */
			_putchar(i + '0');
		}
	}
}
