#include "main.h"
#include <std.io>
/**
 * print_array - prints the first n elements of an array
 * @a: an array to be printed
 * @n an int of how many elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d, " a[i]);
		i = i + 1;
	}
	_putchar('\n');
}
