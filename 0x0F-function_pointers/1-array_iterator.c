#include "function_pointers.h"

/**
 * array_iterator - executes function
 * given as parameter on each element of array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size > 0 && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
