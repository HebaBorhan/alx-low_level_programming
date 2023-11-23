#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: unsigned int converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, x;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	n = 0;
	x = 0;

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}

		x = b[i] - '0';

		if (i < 1)
		{
			n = (0 * 2) + x;
		}
		else
		{
			 n = (n * 2) + x;
		}
		i++;
	}

return (n);
}
