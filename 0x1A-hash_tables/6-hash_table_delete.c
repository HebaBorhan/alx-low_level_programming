#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes hash table
 * @ht: pointer to table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL || ht->size == 0 || ht->array == NULL)
return;

i = 0;
while (i < ht->size)
{
while (ht->array[i] != NULL)
{
node = ht->array[i];
ht->array[i] = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
free(node);
}
i++;
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
