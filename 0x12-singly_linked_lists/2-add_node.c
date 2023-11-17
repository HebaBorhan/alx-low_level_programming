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

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 *
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}

	if (first_node == NULL)
	{
		return (NULL);
	}

	first_node->str = strdup(str);

	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->len = _strlen(first_node->str);

	first_node->next = *head;

	*head = first_node;

	return (first_node);
}
