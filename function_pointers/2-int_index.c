#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array to be searched
 * @size: the size of the array
 * @cmp: function to be used to compare values
 * Return: the index of the first element that contains an interger
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
