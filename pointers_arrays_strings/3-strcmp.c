#include "main.h"
/**
 *_strncpy - copy the first N elements of one string to another
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: the result of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;

	/*iterare until the element prior to the first nullchar of either string*/
	while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i = i + 1;
	}

	return (res);
}
