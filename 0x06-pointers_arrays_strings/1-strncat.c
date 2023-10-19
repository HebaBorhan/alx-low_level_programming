#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string that will append to it
 * @src: string that will be appended
 * @n: number of bytes from src
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] <= n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
