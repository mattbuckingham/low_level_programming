#include "main.h"
/**
 *_strncat - a function to concatenate the first n chars of a string
 * @dest: the first and resultant string
 * @src: the secondary string to be apended
 * @n: the quantity of chars to be amended
 * Return: the destination address
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	i = 0;
	len = _strlen(dest);

	while (src[i] < n)
	{
		dest[len] = src[i];
		i = i + 1;
		len = len + 1;
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
