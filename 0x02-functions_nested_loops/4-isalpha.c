#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		/* it is a letter */
		return (1);
	}
	else
	{
		/* it is not a letter */
		return (0);
	}
}
