#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node = malloc(sizeof(dlistint_t));

	if (first_node == NULL || head == NULL)
	{
		return (NULL);
	}

	first_node->n = n;

	first_node->next = *head;

	*head = first_node;

	return (first_node);
}
