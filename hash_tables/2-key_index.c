#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: a key
 * @size: the size of the array to index
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
