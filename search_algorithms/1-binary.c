#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: an array to be searched
 * @size: the size of the array
 * @value: a value to be found
 * Return: the index of the desired value, -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int i, place, low, high;

	i = 0;
	place = 0;
	low = 0;
	high = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while (high >= low)
	{
		printf("Searching in array: ");
		i = low;

		while (i < high)
		{
			printf("%d, ", array[i]);
			i = i + 1;
		}
		printf("%d\n", array[i]);

		place = low + (high - low) / 2;

		if (value == array[place])
		{
			return (place);
		}

		if (array[place] < value)
		{
			low = place + 1;
		}
		else
		{
			high = place - 1;
		}
	}
	return (-1);
}
