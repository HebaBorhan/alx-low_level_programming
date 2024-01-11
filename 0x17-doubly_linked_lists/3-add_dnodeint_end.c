#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = malloc(sizeof(dlistint_t));
	/**
	 * temp
	 * dlistint_t *temp = *head;
	*/

	if (last_node == NULL || head == NULL)
	{
		return (NULL);
	}

	last_node->n = n;

	last_node->next = NULL;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
	}

	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
		temp = temp->next;
		}

		temp->next = last_node;
		last_node->prev = temp;
	}

	return (last_node);
}
