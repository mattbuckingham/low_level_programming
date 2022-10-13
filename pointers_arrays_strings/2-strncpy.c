#include "main.h"
/**
 *_strncpy - copy the first N elements of one string to another
 * @dest: the first and resultant string
 * @src: the source string
 * @n: the quantity of chars to be copied
 * Return: the destination address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i <= n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i = i + 1;
	}
	return (dest);
}

/**
 * _strlen - a function to return the length of a string
 * @s: a string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);
}
