#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of int passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, numb;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(ptr, int);
		printf("%d", numb);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ptr);

	printf("\n");
}
