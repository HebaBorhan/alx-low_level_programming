#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: int
 * @index: index to set value at
 *
 * Return: 1 on success or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		if ((*n >> index & 1) == 0)
		{
			return (1);
		}
		else
		{
			*n &= ~(1 << index);
			return (1);
		}
	}
}
