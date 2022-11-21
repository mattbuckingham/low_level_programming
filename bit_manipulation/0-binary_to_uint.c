#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: a binary unumber
 * Return: an int
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	i = 0;
	result = 0;
	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			if (b[i] == '1')
			{
				result = result + 1;
			}
			i = i + 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
