#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: an int
 * @y: an int
 * Return: the result of x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, (y - 1));
		return (x);
	}
}
