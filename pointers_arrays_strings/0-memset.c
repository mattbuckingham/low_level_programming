#include "main.h"
/*
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: target array
 * @b: byte to be written
 * @n: number of bytes to fill
 * Return: the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i = i + 1;
	}
	return (s);
}
