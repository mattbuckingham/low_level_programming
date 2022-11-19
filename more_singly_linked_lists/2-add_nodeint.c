#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element of the current list
 * @n: int to be stored in the node being added
 * Return: a pointer to the new node at the start of the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new_node->n = (int)n;
	new_node->next = head;

	*head = new_node;

	return (head);
}
