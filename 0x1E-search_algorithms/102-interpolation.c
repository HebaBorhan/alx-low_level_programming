#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - searches for a value in array
 * using interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first indevalue where value is located or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, pos;

if (array == NULL)
return (-1);

while (low <= high && value >= array[low] && value <= array[high])
{
pos = low + (
((double)(high - low) / (
array[high] - array[low])) * (value - array[low]));

printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);

if (array[pos] < value)
low = pos + 1;

else
high = pos - 1;
}

pos = low + (
((double)(high - low) / (
array[high] - array[low])) * (value - array[low]));

printf("Value checked array[%ld] is out of range\n", pos);

return (-1);
}
