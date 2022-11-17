#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the first element in the list
 * Return: count of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
