#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of elements in a linked listint_t list.
 * @head: pointer to the first element in the list
 * Return: sum of elements in list
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
