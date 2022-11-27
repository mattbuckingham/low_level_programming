#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash table
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nxt, *tmp;
	unsigned int i;

	i = 0;

	if (ht == NULL)
	{
		return;
	}

	while (i < ht->size)
	{
		nxt = ht->array[i];
		while (nxt != NULL)
		{
			tmp = nxt;
			nxt = nxt->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
