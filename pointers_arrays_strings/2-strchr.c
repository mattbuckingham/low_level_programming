#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s:an array to be searched
 * @c: a char to search for
 * Return: a pointer to the result
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c)
	{
		i = i + 1;
	}
	return (s[i]);
}
