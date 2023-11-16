#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: the string to be checked
 *
 * Return: len which is the length of the string
 */

int _strlen(char *str)
{
	int len;

	len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * print_list - prints all the elements of a list
 * @h: head
 *
 * Return: int number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", _strlen(h->str), ("(nil)"));
		}
		else
		{
		printf("[%d] %s\n", _strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
