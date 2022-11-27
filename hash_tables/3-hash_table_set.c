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

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	addition = ht->array[index];

	while (addition != NULL)
	{
		if (strcmp(addition->key, key) == 0)
		{
			free(addition->value);
			addition->value = strdup(value);
			return (1);
		}
		addition = addition->next;
	}



	addition = malloc(sizeof(hash_node_t));
	if (addition == NULL)
	{
		return (0);
	}
	addition->key = strdup(key);
	addition->value = strdup(value);
	addition->next = ht->array[index];
	ht->array[index] = addition;
	return (1);
}

