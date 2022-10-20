#include "main.h"

/**
 * _sqrt_rec - returns the natural square root of a number
 * @n: a number with a square root
 * @r: the square root of n
 * Return: the square root of n
 */
int _sqrt_rec(int n, int r)
{
	/*edge case for n being zero or negaive*/
	if (n < 1)
	{
		return (-1);
	}
/*break case for successfully finding the square root*/
	if (r * r == n)
	{
		return (r);
	}
	/*break case for no result */
	if (n == r)
	{
		return (-1);
	}
	return (_sqrt_rec(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:
 * @:
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}
