#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: target array
 * @accept: the target substring
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, k;
	unsigned int n;

	i = 0;
	k = 0;
	n = 0;

	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				n = n + 1;
			}
			k = k + 1;
		}

		i = i + 1;
	}

	return (n);
}
