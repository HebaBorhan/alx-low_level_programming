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
unsigned long int i, items_printed;
hash_node_t *node;

if (ht == NULL || ht->size == 0 || ht->array == NULL)
return;

i= 0, items_printed = 0;
printf("{");
while (i < ht->size)
{
node = ht->array[i];
while (node != NULL)
{
if (items_printed > 0)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
items_printed++;
node = node->next;
}
i++;
}
printf("}");
printf("\n");
}
