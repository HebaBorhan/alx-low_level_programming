#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: integer length of the string s
 *
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		n = 0;

		n += 1 + _strlen_recursion(s + 1);

		return (n);
	}
}
