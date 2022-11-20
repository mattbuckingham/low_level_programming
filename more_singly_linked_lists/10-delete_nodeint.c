#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: a list
 * @index: the index of the node
 * Return: 1 on success and -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *node;

	tmp = *head;
	i = 0;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index && tmp-> != NULL)
	{
		node = tmp;
		tmp = tmp->next;
		i = i + 1;
	}
	if (i < index)
	{
		return (-1);
	}
	node->next = tmp->next;
	free(tmp);
	return (1);
}
