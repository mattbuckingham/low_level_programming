#include <string.h>
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
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the first element of the current list
 * @str: data to be inserted at the start of the list
 * Return: the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *addition = malloc(sizeof(list_t));

	addition->str = strdup((char *)str);
	addition->len = _strlen(str);
	addition->next = *head;
	*head = addition;

	return (addition);
}
