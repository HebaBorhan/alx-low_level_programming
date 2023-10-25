#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

void _print_rev_recursion(char *s)
{
		if (*s != '\0')
				{
							_print_rev_recursion(s + 1);
									_putchar(*s);
										}
}
