#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number
 *@n: The integer to be checked
 *
 * Return: a on success
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	_putchar(a + '0');
	return (a);
}

