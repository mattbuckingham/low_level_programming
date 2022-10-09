#include "main.h"
/**
 * print_numbers - function that prints all numbers between 0 and 9
 */

void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar('0' + x);
		x = x + 1;
	}
	_putchar('\n');
}
