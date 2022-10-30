#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers.
 *@min: start of the rang
 *@max: end of the range
 *Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(4 * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	while ( min <= max)
	{
		arr[i] = min;
		i = i + 1;
		min = min + 1;
	}
	return (arr);
}
