#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node to be returned
 * Return: the node at index of the linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	
	while( i < index && head->next != NULL)
	{
		head = head->next;
		i = i + 1;
	}
	if (head->next == NULL && i < index)
	{
		return (NULL);
	}
	else
	{
		return (head);
	}
}
