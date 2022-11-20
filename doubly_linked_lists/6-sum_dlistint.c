#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: a list
 * Return - the sum of head
*/
int sum_dlistint(dlistint_t *head)
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
