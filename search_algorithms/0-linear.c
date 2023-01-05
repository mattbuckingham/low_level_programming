#include "search_algos.h"

/**
 * linear-search - searches for a value in an array of integers
 * @array: an array to be searched
 * @size: the size of the array
 * @value: a value to be found
 * Return: the index of the desired value, -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size && array[i] != value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		i = i + 1;
	}

	if (i == size)
	{
		return (-1);
	}
	else
	{
		return (i);
	}
}
