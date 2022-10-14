#include "main.h"
/**
 * reverse_array - reverses the first n elements of an array
 * @a : an array to be reversed
 * @n : the length of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[((n - i) - 1)];
		a[((n - i) - 1)] = tmp;
		i = i + 1;
	}
}
