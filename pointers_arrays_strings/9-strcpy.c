#include "main.h"
/**
 *_srtcpy - a function to copy a string from one location to another
 * @dest: a location to copy a string to
 * @src: a string to be copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = _strlen(src);

	while (i > 0)
	{
		dest[i] = src[i];
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
