#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: integer
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));
	/**
	 * temp
	 */
	listint_t *temp = *head;

	if (last_node == NULL || head == NULL)
	{
		return (NULL);
	}

	last_node->n = n;

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
	temp->next = last_node;
	}
	else
	{
		*head = last_node;
	}
	return (last_node);
}
