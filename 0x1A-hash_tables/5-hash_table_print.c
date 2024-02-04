#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints hash table
 * @ht: pointer to table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL || ht->size == 0 || ht->array == NULL)
return;

i = 0;
printf("{");
while (i < ht->size)
{
node = ht->array[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
if (node->next != NULL && i < ht->size - 1)
printf(", ");
node = node->next;
}
i++;
}
printf("}");
printf("\n");
}
