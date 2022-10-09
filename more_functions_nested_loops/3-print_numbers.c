#include "main.h"
/**
 * _isdigit - checks to see if a char is a digit
 * @c: a char to check
 * Return: a 1 if digit or a 0 if not
 */

void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar(x);
		x = x + 1;
	}
}
