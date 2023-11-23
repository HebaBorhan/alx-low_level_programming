#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: int
 * @index: index to find value at
 *
 * Return: int value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		if ((n >> index & 1) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
