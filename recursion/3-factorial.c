#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: an int
 * @:
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
