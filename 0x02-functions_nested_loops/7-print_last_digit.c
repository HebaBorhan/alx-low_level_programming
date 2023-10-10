#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *@n: The integer to be checked
 *
 * Return: a on success which is last digit value
 */

int print_last_digit(int n)
{
	/* variable for last digit */
	int a;

	if (n < 0)
	{
	a = -1 * (n % 10);
	}
	else
	{
	a = n % 10;
	}

	_putchar(a + '0');
	return (a);
}

