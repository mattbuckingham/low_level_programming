#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars, initializes it with a specific char
 * @size: the size of array to be made
 * @c: a char to fill the array with
 * Return: the arrary
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;
	/*check that the value of size is valid*/
	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size * 1);
	/*check is malloc call was successful */
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
