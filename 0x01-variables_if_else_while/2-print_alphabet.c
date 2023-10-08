#include <stdio.h>

/**
 * main - printing alphabet using putchar function
 *
 * Return: 0 for success
 */

int main(void)
{
	char letter = 'a';
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
		putchar ('\n');
		return (0);
}
