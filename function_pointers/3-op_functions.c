#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two numbers
 * @a: number
 * @b: number
 * Return: the result of a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: number
 * @b: number
 * Return: the result of a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numers
 * @a: number
 * @b: number
 * Return: the result of a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers
 * @a: number
 * @b: number
 * Return: the result of a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the modulus of two numbers
 * @a: number
 * @b: number
 * Return: the result of a % b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
