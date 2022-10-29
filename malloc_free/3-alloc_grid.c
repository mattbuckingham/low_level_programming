#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to an array of ints
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	i = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(arr));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
		}
		i = i + 1;
	}
	i = 0;
	j = 0;
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j] = 0;
			j = j + 1;
		}
		i = i + 1;
	}
	return (arr);
}
