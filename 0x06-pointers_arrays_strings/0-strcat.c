#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @src: string that will be appended
 * @dest: string that will append to it
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j]; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
