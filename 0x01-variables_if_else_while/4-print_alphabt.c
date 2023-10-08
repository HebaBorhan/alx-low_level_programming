#include <stdio.h>

/**
 * main - printing alphabet in lowercase except q and e using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	/* declaring a character variable */
	char letter = 'a';

	/* using for loop for the alphabet from a to z */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	}
		putchar ('\n');
		return (0);
}
