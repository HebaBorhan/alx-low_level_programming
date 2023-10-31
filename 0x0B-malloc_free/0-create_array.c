#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *@size: size of array
 *@c: character to initialize
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = (char*)malloc(size * sizeof(char));

	if ((size == 0) || (ptr == NULL))
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
