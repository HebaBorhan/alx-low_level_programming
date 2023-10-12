#include "main.h"

/**
 * print_numbers - printing numbers from 0 to 9
 *
 * Return: 0 for success
 */

void print_numbers(void)
{
	/* declaring an integer variable */
	int i = 0;

	/* for loop for numbers from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		/* converting the integer into numeral ASCII character */
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
