#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element of the current list
 * @n: int to be stored in the node being added
 * Return: a pointer to the new node at the end of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		(*head)->next = new_node;
	}

	new_node->n = (int)n;
	new_node->next = NULL;

	return (*head);
}
