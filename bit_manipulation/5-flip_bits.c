#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: a starting number
 * @m: the desired destination number
 * Return: a count of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;

	count = 0;
	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count = count + 1;
		}
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
