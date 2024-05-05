#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in array of int using Binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t lower = 0;
size_t middle, i;
size_t higher = size - 1;
if (array == NULL)
return (-1);
while (lower <= higher)
{
middle = lower + (higher - lower) / 2;
printf("Searching in array: ");
for (i = lower; i <= higher; i++)
{
printf("%d", array[i]);
if (i < higher)
printf(", ");
else
printf("\n");
}
/*
 * Check if vaue is present at middle
*/
if (array[middle] == value)
{
return (middle);
}
/*
 * If value greater than middle, ignore left half
*/
if (array[middle] < value)
{
lower = middle + 1;
}
/*
 * If value smaller than middle, ignore right half
*/
else
{
higher = middle - 1;
}
}
return (-1);
}
