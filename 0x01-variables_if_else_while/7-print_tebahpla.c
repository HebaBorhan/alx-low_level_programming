#include <stdio.h>

/**
 * main - printing alphabet in reverse using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring a character variable */
	char letter = 'z';

	/* using for loop for the alphabet from z to a */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
		putchar ('\n');
		return (0);
}
