#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: a pointer to the head of a linked list to be freed
*/
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
	else
	{
		return;
	}
}

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a pointer to the head of a linked list to be freed
*/
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		free_listint(*head);
		*head = NULL;
	}
}
