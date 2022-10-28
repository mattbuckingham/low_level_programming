#include <stdio.h>
#include <stdlib.h>

/**
 * alloc grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to an array of ints
 */
int **alloc_grid(int width, int height)
{
	int i;
	int *arr;
	int **arr2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(4 * height * width);
	if (arr == NULL)
	{
		return (NULL);
	}
	arr2 = malloc(8 * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		arr2[i] = arr + i * width;
		i = i + 1;
	}

	return (arr2);
}
