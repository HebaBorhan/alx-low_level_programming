#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *@b: integer
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	*ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
