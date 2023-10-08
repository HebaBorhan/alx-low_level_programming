#include <stdio.h>

/**
 * main - printing alphabet both lowercase and uppercase using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring two character variables */
	char letterLower = 'a';
	char letterUpper = 'A';

	/* using for loop for the alphabet from a to z and from A to Z */
	for (letterLower = 'a'; letterLower <= 'z'; letterLower++)
	{
		putchar(letterLower);
	}

	for (letterUpper = 'A'; letterUpper <= 'Z'; letterUpper++)
	{
		putchar(letterUpper);
	}
		putchar ('\n');
		return (0);
}
