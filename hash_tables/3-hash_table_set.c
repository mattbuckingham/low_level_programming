#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set -adds an element to the hash table. 
 * @ht: The hashh table
 * @key: the key to use
 * @value: the value to be stored
 * Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *addition;

	index = key_index((const unsigned char *)key, ht->size);
	addition = ht->array[index];

	if (addition == NULL)
	{
		addition = malloc(sizeof(hash_node_t));
		addition->key = strdup(key);
		addition->value = strdup(value);
		addition->next = NULL;
		ht->array[index] = addition;
		return (1);
	}
	return (1);
}

