#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: a string to measure
 * @
 * Return: void
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	if (*s != '\0')
	{
		c = 1 + _strlen_recursion(s + 1);
		return (c);
	}
	else
	{
		return (0);
	}

}

/**
 *string_nconcat - concatenates two strings.
 * @s1: a string
 * @s2: a string
 * @n: a qty of bytes of s2 to be concatenated
 * Return: a pointer the the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len;
	int s1len;
	int i, k;

	if (s1 == NULL)
	{
		s1 = "":
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = _strlen(s1) + _strlen(s2);
	str = malloc(sizeof(str) * len + 1);
	if (str == NULL)
	{
		return(NULL);
	}

	s1len = _strlen(s1);
	while (i < (len - 1))
	{
		if (i < _strlen(s1))
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[(i -s1len)];
		}
		i = i + 1;
	}
	str[(len - 1)] = '\0';
	return (str);
}
