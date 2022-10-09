#include "main.h"
/**
 * print_diagonal - prints a diagonal line the length of n
 * Return: void
 * @n : the length of line to be printed
 */

void print_diagonal(int n)
{
	int i;
	int s;

	i = 1;
	s = 1;
	if (n > 0)
	{
		while (i < n)
		{
			while (s < i)
			{
				_putchar(' ');
				s = s + 1;
			}
			s = 1;
			_putchar(92);
			_putchar('\n');
			i = i + 1;
		}
		s = 1;
	}
	_putchar('\n');
}
