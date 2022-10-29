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
	int j;
	int **arr;
	int *arr2;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}

	while ( i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(arr));
		if (t[i] == NULL)
		{
			while (j < i)
			{
				free(arr[j]);
				j = j + 1;
			}
			free(arr);
		}
		j = 0;
		i = i + 1;
	}

	i = 0;
	while (i < height)
	{
		arr[i] = arr2 + i * width;
		i = i + 1;
	}

	return (arr2);
}
