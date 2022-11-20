#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node at the nth index
 * @head: the head of the linked list
 * @idx: the index of the node to be inserted
 * @n: data to be stored in the node
 * Return: the new node at index of the linked list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *tmp;

	i = 0;
	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = tmp;
		tmp = new_node;
		return (new_node);
	}
	
	while (i < idx && tmp->next != NULL)
	{
		tmp = tmp->next;
		i = i + 1;
	}

	if (tmp->next == NULL && i != idx)
	{
		return (NULL);
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);

}
