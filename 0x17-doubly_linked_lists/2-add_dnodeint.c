#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *first_node = malloc(sizeof(dlistint_t));

	if (first_node == NULL || head == NULL)
	{
		return (NULL);
	}

	first_node->n = n;

	first_node->next = *head;

	first_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = first_node;
	}

	*head = first_node;

	return (first_node);
}
