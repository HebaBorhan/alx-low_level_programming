#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* move i to last charracter in the array */
	i--;

	int j;

	/* j the first character in the new reversed array */
	j = 0;

	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
