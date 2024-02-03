#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to table
 * @key: pointer to the key
 * @value: pointer to value
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    hash_node_t *tmp, *new_node;

    if (ht == NULL || key == NULL || value == NULL || ht->array == NULL || ht->size == 0 || strlen(key) == 0)
        return (0);

    tmp = ht->array[index];
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (0);
            free(tmp->value);
            return (1);
        }
        tmp = tmp->next;
    }
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
