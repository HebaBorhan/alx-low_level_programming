#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer
 * @to: character
 */

void set_string(char **s, char *to)
{
	*s = to;
}