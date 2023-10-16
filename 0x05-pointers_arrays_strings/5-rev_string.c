#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	/* j the first character in the new reversed array */
	int j;
	/* to store character posiion */
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* move i to last charracter in the array */
	i--;

	j = 0;
	
	for (j = 0; j < i; i--; j++)
	{
		temp = s[i];
		s[j] = s[i];
		s[j] = temp;
	}
}
