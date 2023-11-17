#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
	head = NULL;
}
