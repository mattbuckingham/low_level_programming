#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: a square matrix of intergers
 * @size: the size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, k;
	int t1, t2;

	i = 0;
	k = 0;
	t1 = 0;
	t2 = 0;

	/* calculate the first diagonal, stored in t1*/
	while (i < size)
	{
		t1 = t1 + a[(i * size) + k];
		k = k + 1;
		i = i + 1;
	}
	/*set k = size to move in the opposite direction as we move down*/
	i = 0;
	k = size;
	/*calculate the second diagonal, stored in t2*/
	while (i < size)
	{
		t2 = t2 + a[(i * size) + k];
		i = i + 1;
		k = k - 1;
	}

	/*print our results*/
	printf("%d, %d\n", t1, t2)
}
