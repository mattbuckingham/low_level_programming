#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: a an array of chars to be printed
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, k;

	i = 0;
	while (i < 8)
	{
		k = 0;
		while (k < 8)
		{
			_putchar(a[i][k]);
			k = k + 1;
		}
		i = i + 1;
		_putchar('\n');
	}
}
