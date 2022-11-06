#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: numbers to be summend
 * Return - the total
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum;

	i = 0;
	sum = 0;

	va_start(numbers, n);
	while (i < n)
	{
		sum = sum + va_arg(numbers, int);
		i = i + 1;
	}
	va_end(numbers);

	return (sum);
}
