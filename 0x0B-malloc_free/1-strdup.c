#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to newly allocated space in memory,
 * which contains a copy of string given as a parameter
 * @str: string given in parameter
 *
 * Return: pointer to duplicated string, or NULL if failed
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *dup;

	if (str == NULL)
	{
		return ('\0');
	}

	while (str[size] != '\0')
	{
		size++;
	}

	dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			dup[i] = str[i];
		}
		return (dup);
	}
}
