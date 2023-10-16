#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	i = ((i % 2) == 0);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
