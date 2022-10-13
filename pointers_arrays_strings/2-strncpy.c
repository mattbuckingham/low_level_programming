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

	while (i < n && src[i] != '\0')
		{
		dest[i] = src[i];
		i = i + 1;
		}

	while (i < n)
	{
		dest[i] = '\0';
		i = i + 1;
	}

	return (dest);
}
