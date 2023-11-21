#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a linked list
 * @head: head
 *
 * Return: int head node’s data n or 0 if empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int n;

	if (head == NULL || *head == NULL)
	{
		return ('\0');
	}
	else
	{
		head_node = *head;
		n = head_node->n;

		*head =(*head)->next;
		free(head_node);
		head_node = NULL;
	}
	return (n);
}

