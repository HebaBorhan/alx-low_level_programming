#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_dlistint - sum of all data (n) of a linked list
 * @head: head
 *
 * Return: sum of n or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0, sum = 0;

	while (head != NULL)
	{
		sum += head-> n;
		head = head->next;
		count++;
	}

	return (sum);
}
