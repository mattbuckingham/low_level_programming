#include <stdio.h>
#include <stdlib.h>

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

/**
 * strdup - duplicates a string
 * @str: a string to be duplicated
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *str_dup;

	i = 0;
/*I'm not sure that this works*/
	if (str == NULL)
	{
		return (NULL);
	}

	len = (_strlen(str)) + 1;
	str_dup = malloc(len * sizeof(*str_dup));

/*check is malloc call was successful */
	if (str_dup == 0)
	{
		return (NULL);
	}
	/*assign each element of the duplicate string to that of the origional*/
	while (i < len)
	{
		str_dup[i] = str[i];
		i = i + 1;
	}
	return (str_dup);
}
