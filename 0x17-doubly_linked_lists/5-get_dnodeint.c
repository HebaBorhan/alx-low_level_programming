#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head
 * @index: index of the node
 *
 * Return: int nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	if (current_node == NULL || head == NULL)
	{
		return (NULL);
	}

	while (i < index && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node);
}
