#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@i: The integer to be checked
 *
 * Return: i on success
 */

int _abs(int i)
{
	if (i < 0)
	i = -i;

	return (i);
}
