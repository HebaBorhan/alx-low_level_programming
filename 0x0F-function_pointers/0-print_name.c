#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 *@name: string to be printed
 *@f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
