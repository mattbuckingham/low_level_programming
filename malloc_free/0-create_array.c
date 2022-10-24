#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

/**
 * create_array - creates an array of chars, initializes it with a specific char
 * @size: the size of array to be made
 * @c: a char to fill the array with
 * Return: the arrary
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	/*error check, I think I can just check the value that malloc(0) returnns tho*/
	if (size <= 0)s
	{
		return (NULL);
	}

	arr = malloc(size * 1);

	if (arr == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i = i + 1;
	}
	return (arr);

}
