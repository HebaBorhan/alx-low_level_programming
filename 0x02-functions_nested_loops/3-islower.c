#include <stdio.h>
#include "main.h"

/**
 * int _islower - determine if a letter is lowercase or no
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122) {
	/* letter is lowercase */
	return 1;
	} 
	else
	{
	/* letter is uppercase */
	return 0;
	}
}
