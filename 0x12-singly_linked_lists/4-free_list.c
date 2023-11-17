#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list
 * @head: head
 */

void free_list(list_t *head)
{
	free(head);
}
