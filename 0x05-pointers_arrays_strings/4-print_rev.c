#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i= 0; s[i] != '\0'; i++)
	{
	}

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
