#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to the function used
 *
 * Return: index of first matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size > 0 && cmp != NULL)
	{
		int i;
		int elem = 1;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == elem)
			{
				return (i);
			}
		}
	}
	return (-1);
}
