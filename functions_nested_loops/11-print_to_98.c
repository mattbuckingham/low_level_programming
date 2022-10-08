#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print all numbers from n to 98
 * @n: a number to print to 98 from
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
			n = n - 1;
		}
	}

	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n = n + 1;
		}
	}
	if (n == 98)
	{
	_putchar('\n');
	}
}
