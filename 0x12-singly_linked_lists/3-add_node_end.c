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
 * add_node_end - adds a new node at the beginning of a list
 * @head: head
 * @str: string
 *
 * Return: address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = malloc(sizeof(list_t));
	/**
	 * temp
	 */
	list_t *temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	if (last_node == NULL || head == NULL)
	{
		return (NULL);
	}
	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}
	last_node->len = _strlen(last_node->str);

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
	temp->next = last_node;
	}
	else
	{
		*head = last_node;
	}
	return (last_node);
}
