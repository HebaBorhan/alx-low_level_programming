#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: the initial string to be scanned
 *@accept: the string containing the characters to match in s
 *@n: number of bytes matching
 *
 * Return: number of bytes in s consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int i, j;

	n = 0;

	for (i = 0; s[i] != '\0';i++)
	{
		for (j=0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n = accept[j];
			}
		}
	}

	return (n);
}
