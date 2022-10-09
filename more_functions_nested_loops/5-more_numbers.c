#include "main.h"
/**
 * print_numbers - function that prints all numbers between 0 and 14
 */

void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 15)
	{
		if (x > 9)
		{
			_putchar('0' + (x / 10));
		}
		_putchar('0' +(x % 10));
		x = x + 1;
	}
	_putchar('\n');
}
