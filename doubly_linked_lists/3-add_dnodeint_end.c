#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head : pointer to the list
 * @n: data to be stored
 * Return: address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while ((*head)->next != null)
		{
			*head = (*head)->next;
		}
		new_node->prev = *head;
		(*head)->next = new_node;
	}
	new_node->next = NULL;
	
	return (new_node);
}
