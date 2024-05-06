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
int jump = sqrt(size);
int prev = 0;
int i;

if (array == NULL)
return (-1);

printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
while (array[jump] < value && jump < (int)size)
{
prev = jump;
jump += sqrt(size);
if (jump < (int)size)
printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
}

printf("Value found between indexes [%d] and [%d]\n", prev, jump);

i = prev;
while (i <= jump && i < (int)size)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
i++;
}

return (-1);
}
