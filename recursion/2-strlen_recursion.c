#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string to measure
 * @
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int *i;

	i = s;
	if (*s == '\0')
	{
		return(s - i);
	}
	else
	{
		_strlen_recursion(s - 1);
	}
}
