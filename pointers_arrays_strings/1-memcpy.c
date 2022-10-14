#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the location to copy to
 * @src: the location to be copied
 * @n: number of bytes to be copied
 * Return: the destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
