#include "main.h"
/**
 * print_triangle - prints a triangle the length of n
 * Return: void
 * @size : the length of triangle to be printed
 */

void print_triangle(int size)
{
	int h;
	int s;
	int sy;

	h = 1;
	s = 1;

	if (size > 0)
	{
		while (h <= size)
		{
			sy = size - h;
			while (s <= size)
			{

				if (s <= sy)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				s = s + 1;
			}
			s = 1;
			_putchar('\n');
			h = h + 1;
		}
	}
	else
	{
	_putchar('\n');
	}
}
