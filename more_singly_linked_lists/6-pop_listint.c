#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the current head of the listint_t list
 * Return: the head node’s data (n). 
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old_head;
	if ( head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	old_head = (*head);
	*head = (*head)->next;
	free(old_head);
	return (n);
}
