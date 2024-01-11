#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_dnodeint_at_index - delete node at a given position
 * @h: head
 * @idx: given position
 *
 * Return: 1 on success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
	}
	else
	{
		while (i < index  && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	return (1);
}
