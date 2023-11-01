#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - returns a pointer to newly allocated space in memory,
 * containing contents of s1, followed by contents of s2
 * @s1: string that will append to it
 * @s2: string that will be appended
 *
 * Return: pointer to concatenates strings, or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int lengths1 = 0;
	int lengths2 = 0;
	int i, j;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* to get length of s1 and s2 */
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}
	conc = malloc((lengths1 + lengths2 + 1) * sizeof(char));
	if (conc == NULL)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < lengths1; i++)
		{
			conc[i] = s1[i];
		}
		for (j = 0; j < lengths2; j++)
		{
			conc[i + j] = s2[j];
		}
	}
	conc[i + j] = '\0';
	return (conc);
}
