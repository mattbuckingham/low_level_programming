#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the header of the list
 * Return: count of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
