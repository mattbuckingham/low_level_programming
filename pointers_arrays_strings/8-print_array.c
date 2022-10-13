#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the first n elements of an array
 * @a: an array to be printed
 * @n: an int of how many elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
/* this statement is to stop printing a comma on the last output*/
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			printf("\n");
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i = i + 1;

	}
}
