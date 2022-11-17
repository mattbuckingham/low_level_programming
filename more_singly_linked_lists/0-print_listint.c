#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the first node
 * Return: count of nodes in list
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d/n", h->n);
		count = count + 1;
		h = h->next;
	}

	return (count);
}
