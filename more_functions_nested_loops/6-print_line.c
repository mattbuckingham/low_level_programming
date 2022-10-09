#include "main.h"
/**
 * print_line - prints a line the length of n
 * Return: void
 * @n : the length of line to be printed
 */

void print_line(int n)
{
	while (n < 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}
