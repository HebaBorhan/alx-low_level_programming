#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints stings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ptr);

	printf("\n");
}
