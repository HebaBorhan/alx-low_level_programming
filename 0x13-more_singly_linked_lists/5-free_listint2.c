#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
