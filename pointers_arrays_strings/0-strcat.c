#include "main.h"
/**
 *_strcat - a function to concatenate two srings togeather
 * @dest: the first and resultant string
 * @src: the secondary string to be apended
 * Return: the destination address
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = _strlen(dest);

	while (src[i] != '\0')
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
