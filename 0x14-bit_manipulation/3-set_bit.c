#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given index
 * @n: int
 * @index: index to set value at
 *
 * Return: 1 on success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		if ((*n >> index & 1) == 0)
		{
			*n |= (1 << index);
			return (1);
		}
		else
		{
			return (1);
		}
	}
}
