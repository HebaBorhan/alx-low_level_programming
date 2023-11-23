#include "main.h"

/**
 * flip_bits - bits to flip to get from n to m
 * @n: first number
 * @m: number to get to
 *
 * Return: int bits to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int result = (n ^ m);

	while (result != 0)
	{
		if ((result & 1) == 1)
		{
			count++;
		}

		result = result >> 1;
	}
	return (count);
}
