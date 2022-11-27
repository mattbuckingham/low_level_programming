#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: the key corresponding to the value to be retrived
 * Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	element = ht->array[index];

	while (element != NULL)
	{
		if (strcmp(element->key, key) == 0)
		{
			return (element->value);
		}
		element = element->next;
	}
	return (NULL);
}
