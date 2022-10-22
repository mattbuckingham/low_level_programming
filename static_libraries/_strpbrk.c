#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: target array
 * @accept: the target substring
 * Return:he byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	i = 0;

	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[i])
			{
				return (&s[i]);
			}
			else
			{
				k = k + 1;
			}
		}
		i = i + 1;
	}
	return (0);
}
