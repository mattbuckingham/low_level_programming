#include <stdio.h>
#include "main.h"

/**
 * print_number - takes an interger and prints to stdout
 * @n: number to be printed
 * Return: void
*/
void print_number(int n)
{
	int p, mag;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	while (n != 0)
	{
		mag = 0;
		p = n;
		while (p >= 10)
		{
			p = p / 10;
			mag = mag + 1;
		}
		_putchar('0' + p);
		if (n > 9)
		{
		n = n - (p * (10 * mag));
		}
		else
		{
			n = 0;
		}
	}
}
