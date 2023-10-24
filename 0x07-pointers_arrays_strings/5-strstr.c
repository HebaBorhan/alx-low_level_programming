#include "main.h"

/**
 * *_strstr - locates a substring
 *@haystack: the initial string to be scanned
 *@needle: the string containing the characters to match in s
 *
 * Return: pointer to the beginning of the located substring
 *or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
