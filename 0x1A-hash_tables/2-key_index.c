#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: pointer to the key
 * @size: size of hash table
 * 
 * Return - index at which key/value pair should be stored in array of hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (unsigned long int)(*key % size);
}
