#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(strings, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && seperator != NULL)
		{
			printf("%s", separator);
		}

		i = i + 1;
	}

	printf("\n");
	va_end(strings);
}
