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

if (ht == NULL || ht->size == 0 || ht->array == NULL)
return;

i = 0;
printf("{");
while (i < ht->size)
{
if (ht->array[i] != NULL)
{
printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
}
i++;
}
printf("}");
printf("\n");
}
