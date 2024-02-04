#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds new node
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: pinter to new node or NULL
 */
hash_node_t *add_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return NULL;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (new_node->key == NULL || new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return NULL;
    }
    new_node->next = NULL;
    return (new_node);
}

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
    unsigned long int index;
    hash_node_t *tmp, *new_node;
    char *item;
    
    if (ht ==  NULL || key == NULL || value == NULL || ht->size == 0 || ht->array == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (0);

    tmp = ht->array[index];
    if (tmp == NULL)
    {
        new_node = ht->array[index];
        return (1);
    }
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            item = strdup(value);
            if (item == NULL)
                return (0);
            free(tmp->value);
            tmp->value = item;
            return (1);
        }
        tmp = tmp->next;
    }
    new_node = add_node(key, value);
    if (new_node == NULL)
        return (0);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
