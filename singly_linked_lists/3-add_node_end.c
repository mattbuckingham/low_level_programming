#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: a string to measure
 * @
 * Return: void
 */
unsigned int _strlen(char *s)
{
	unsigned int c;

	c = 0;
	if (*s != '\0')
	{
		c = 1 + _strlen(s + 1);
		return (c);
	}
	else
	{
		return (0);
	}

}

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: a pointer to the head of the first element of the current list
 * @str: data to be inserted at the start of the list
 * Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addition;
	list_t *rehead;

	addition = malloc(sizeof(list_t));
	if (addition == NULL)
	{
		return (NULL);
	}

	addition->len = _strlen((char *)str);
	addition->next = NULL;
	addition->str = strdup((char *)str);
	if (addition->str == NULL)
	{
		free(addition);
		return(NULL);
	}

	if (*head == NULL)
	{
		*head = addition;
		return (addition);
	}

	rehead = *head;
	while (rehead->next != NULL)
	{
		rehead = rehead->next;
	}
	rehead->next = addition;

	return (rehead);
}
