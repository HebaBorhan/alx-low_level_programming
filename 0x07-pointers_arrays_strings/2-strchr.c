#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to locate
 *
 * Return: pointer to first occurrence of character c in string s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
