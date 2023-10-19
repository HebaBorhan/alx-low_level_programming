#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string to copy on
 * @src: string to be copied
 * n: maximum number of characters to be copied
 *
 * Return: new copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
