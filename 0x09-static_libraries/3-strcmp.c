#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first dtring
 * @s2: second string
 *
 * Return: 0 if strings are the same or the difference result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
