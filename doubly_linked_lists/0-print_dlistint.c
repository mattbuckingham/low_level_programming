#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the header of the list
 * Return: count of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
