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
unsigned long int index = key_index((const unsigned char *)key, ht->size);
hash_node_t *item = ht->array[index];

if (ht ==  NULL || key == NULL || ht->size == 0 || ht->array == NULL)
return (NULL);

while (item != NULL)
{
if (strcmp(item->key, key) == 0)
{
return (item->value);
}
}

return (NULL);
}
