#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @string: the string to be checked
 *
 * Return: len which is the length of the string
 */

int _strlen(char *str)
{
	int len;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	struct list_s *h = malloc(sizeof(struct list_s));
	h -> next = NULL;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}

	struct list_s *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		printf([%d] %s, _strlen(h -> str), h -> str);
		count++;
		ptr = ptr -> next;
	}
	return (count);
}
