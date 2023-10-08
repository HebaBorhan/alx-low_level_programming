#include <stdio.h>

/**
 * main - printing alphabet using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring a character variable */
	char letterLower = 'a';
	char letterUpper = 'A';

	/* using for loop for the alphabet from a to z */
	for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
	{
		putchar(letterLower);
	}

	for (letterUpper = 'A'; letterUpper <= 'Z'; letterUpper++)
	{
		putchar(letter);
	}
		putchar ('\n');
		return (0);
}
