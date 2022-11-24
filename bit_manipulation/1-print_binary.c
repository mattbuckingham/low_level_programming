#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: an int
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n >> 1 == 0)
	{
		putchar((n & 1u) + '0');
		return;
	}
	print_binary(n >> 1);
	putchar((n & 1u) + '0');
}
