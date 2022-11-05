#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter on an array.
 * @array: an array to perform a function on
 * @size: the size of the array
 * @action: a function to execute
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}
}
