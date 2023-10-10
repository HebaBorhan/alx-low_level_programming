#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@i: The integer to be checked
 *
 * Return: 0 on success
 */

int _abs(int i)
{
	if (i < 0)
	{
	i = i * (-1);
	_putchar(i);
	}
	else
	{
	_putchar(i);
	}
	return (0);
}
