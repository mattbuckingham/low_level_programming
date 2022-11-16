#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - that prints all the elements of a list_t list. 
 * @h: pointer to a list_t
 * Return - count of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i = i + 1;
	}
	return (i);
}
