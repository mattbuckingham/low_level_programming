#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - unction that prints numbers, followed by a new line.
 * @separator: a string to be used to separate the numbers
 * @n: the number of intergers passed to the function
 * 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	i = 0;
	while (1 < n)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf ("\n");

	va_end(numbers);
}
