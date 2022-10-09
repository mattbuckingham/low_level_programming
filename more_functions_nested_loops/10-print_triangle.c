#include "main.h"
/**
 * print_triangle - prints a triangle the length of n
 * Return: void
 * @size : the length of triangle to be printed
 */

void print_diagonal(int size)
{
	int h;
	int s;

	h = 1;
	s = 1;

	if ( size > 0)
	{
		while (h <= size)
		{
			while (s <= size)
			{
				if (s <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				s = s + 1;
			}
			_putchar('\n');
			h = h + 1;
		}
	}
	else
	{
	_putchar('\n');
	}
}
