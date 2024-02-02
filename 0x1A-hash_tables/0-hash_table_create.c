#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_create - create a new hash table with given size
 * @size: int table size
 * Return: pointer to newly created hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = malloc(sizeof(hash_table_t));
unsigned long int i = 0;

if (ht == NULL || size == 0)
{
return (NULL);
}

ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);

if (ht->array == NULL)
{
free(ht);
return (NULL);
}

while (i < size)
{
ht->array[i] = NULL;
i++;
}

return (ht);
}
