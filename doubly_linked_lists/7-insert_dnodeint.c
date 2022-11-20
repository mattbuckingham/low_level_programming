#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a list
 * @idx: the position to insert the node
 * @n: data
 * Return:the lostaion of the inserted node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i;

	tmp = *h;
	i = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (i < (idx - 1) && tmp)
	{
		tmp = tmp->next;
		i = i + 1;
	}

	if (i < idx - 1)
	{
		return (NULL);
	}

	if (i == idx - 1)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
