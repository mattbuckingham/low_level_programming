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

	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);
}

/**
 * str_concat - a function that concatenates two strings
 * @s1: a string
 * @s2: a string
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str_cat;
	int len;
	int i;

	/*we set this to 1 to allow space for the nullchar*/
	len = 1;
	if (s1 != NULL)
	{
		len = len + _strlen(s1);
	}
	if (s2 != NULL)
	{
		len = len + _strlen(s2);
	}

	/*allocate an adequate amount om memory*/
	str_cat = (char *)malloc(sizeof(str_cat) * (len -1));

	i = 0;

	while (i < (len - 1))
	{
		if (i < _strlen(s1))
		{
			str_cat[i] = (s1[i]);
		}
		else
		{
			str_cat[i] = s2[(i - _strlen(s1))];
		}
		i = i + 1;
	}
	/*insert nullchar to terminate string*/
	/*str_cat[len - 1] = '\0';*/
	return (str_cat);
}
