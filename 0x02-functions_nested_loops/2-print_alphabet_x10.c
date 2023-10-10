#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - printing ten times the alphabet using putchar function
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
	/* declaring integer i */
	int i = 0;

	/* for loop 10 times */
	for (i = 0; i <= 10; i++)
	{
	/* nested loop */
	/* declaring a character variable */
	char letter = 'a';

	/* for loop for the alphabet from a to z */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	}
}
