#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in array of int using Linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
