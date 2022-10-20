#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: a prime number
 * @i: initial recursion var
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number_fact(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_fact(n, i + 1));
}

/**
 * is_prime_number - identifies if n is a prime number
 * @n: a prime number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_fact(n, 2));
}
