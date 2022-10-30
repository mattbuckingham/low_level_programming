#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *@nmemb: the size of the parrent array
 *@size: the size opf the sub arrays
 *Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);

	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		i = i + 1;
	}

	return (arr);
}
