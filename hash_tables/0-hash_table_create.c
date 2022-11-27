#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 *
 *
 *
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;

	tbl = malloc(sizeof(hash_table_t));

	if (tbl == NULL)
	{
		return (NULL);
	}

	tbl->size = size;

	tbl->array = malloc(sizeof(tbl->array) * size);
	if (tbl->array == NULL)
	{
		free(tbl);
		return (NULL);
	}

	return (tbl);
}
