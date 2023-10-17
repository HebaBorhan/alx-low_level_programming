#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	/* j counter in the new reversed array */
	int j;
	/* to store character posiion */
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* move i to last charracter in the array */
	i--;

	for (j = 0; j < (i / 2); j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
