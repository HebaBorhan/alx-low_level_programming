#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: given position
 * @n: int data
 *
 * Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp = *h;
	unsigned int i = 0;

	if (new_node == NULL || h == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;
	} else
	{
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
		{
			temp->next->prev = new_node;
		}
		temp->next = new_node;
	}
	return (new_node);
}
