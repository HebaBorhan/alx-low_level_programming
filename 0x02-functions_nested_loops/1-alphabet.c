#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphabet using putchar function
 * Return: 0 for success
 */

void print_alphabet(void)
{
	/* declaring a character variable */
	char letter = 'a';
	
	/* using for loop for the alphabet from a to z */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	}
