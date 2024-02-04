#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to table
 * @key: pointer to the key
 *
 * Return: value associated with key, or NULL if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_item;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		return (NULL);
	}
	while (current_item->next != NULL)
	{

		current_item = current_item->next;
	}

	return (current_item->value);
}
