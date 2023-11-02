#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *@min: start of array
 *@max: end of array
 *
 * Return: pointer to the array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	ptr = malloc((max - min) * sizeof(int));

	if ((ptr == 0) || (min > max))
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i >= min && i <= max; i++)
		{
			ptr[i] = min++;
		}
		return (ptr);
	}
}
