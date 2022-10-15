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
	while (s[i] != c && s[i] != '\0')
	{
		i = i + 1;
	}
/*return null if we found nothing*/
	if (s[i] == '\0' || s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
}
