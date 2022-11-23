#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a number
 * @index: the index of the required bit
 * Return: the value of the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	n = n >> (index) ;

	return ((n & 1u));
}
