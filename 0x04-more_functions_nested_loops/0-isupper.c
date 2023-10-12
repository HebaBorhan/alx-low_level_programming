#include "main.h"

/**
 * _islower - checks for uppercase character
 *@c: The letter to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		/* letter is uppercase */
		return (1);
	}
	else
	{
		/* letter is lowercase */
		return (0);
	}
}
