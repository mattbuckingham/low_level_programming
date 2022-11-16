#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a list of type list_t
 * Return: count of nodes in list
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
