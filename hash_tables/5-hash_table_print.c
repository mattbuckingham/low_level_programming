#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to a hash table to be printed
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, st;
	hash_node_t *data;

	i = 0;
	st = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	while (i < ht->size)
	{
		data = ht->array[i];
		while (data != NULL)
		{
			if (st == 1)

			{
				printf(", '%s': '%s'", data->key, data->value);
			}
			else
			{
				printf("'%s': '%s'", data->key, data->value);
				st = 1;
			}
			data = data->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
