#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in array of int using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1
 */

int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size);
size_t lower = 0, higher = 0, i = 0;

if (array == NULL)
return (-1);

while (lower < size && array[lower] < value)
{
higher = (lower + jump < size) ? lower + jump : size - 1;

printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);

if (value <= array[higher] || lower + jump >= size)
break;

lower += jump;
}

printf("Value found between indexes [%ld] and [%ld]\n", lower, higher);

i = lower;
while (i <= higher && i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}

return (-1);
}
