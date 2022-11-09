#include <stdio.h>
#include "main.h"

/**
 * print_number - takes an interger and prints to stdout
 * @n: number to be printed
 * Return: void
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_s(n, 0);
	}
}


/**
 * print_s - takes an interger and prints to stdout
 * @n: number to be printed
 * @count: a count of chars printed
 * Return: the quantity of chars printed
*/
int print_s(int n, int count)
{
	if (n != 0)
	{
		count = 1 + print_s((n / 10), 0);
		_putchar('0' + (n % 10));
		return (count);
	}
	else
	{
		return (count);
	}
}
