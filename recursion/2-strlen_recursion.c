#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string to measure
 * @
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int c;

	c = 0;

	if (*s = '\0')
	{
		return(c);
	}
	else
	{
		c = _strlen_recursion(s + 1)
	}
}