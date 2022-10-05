#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: a number to print the sign of
 *Return: 1 if the number is positiv, 0 if it is 0 and -1 if it is negative
 */

int print_sign(int n)
{
	int sign;

	sign = 0;

	if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	return (sign);
}
