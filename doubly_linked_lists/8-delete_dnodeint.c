#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: a list
 * @index: the index of the node
 * Return: 1 on success and -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = *head;
	i = 0;
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i = i + 1;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
	}
	else
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
