
#include "main.h"
/**
 * _strstr -finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: a string to be searched
 * @needle: a substring to be found
 * Return:a pointer to the start of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i,k;

	i = 0;

	while (haystack[i] != '\0')
	{
		k = 0;
		while (needle[k] != '\0')
		{
			if ( needle[k] == haystack[i])
			{
				k = k + 1;
			}
		}
		if (needle[k] == '\0')
		{
			return (haystack[i]);
		}
		i = i + 1;
	}
	return (0);
}
