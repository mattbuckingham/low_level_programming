#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the first element to be freed
 *
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
