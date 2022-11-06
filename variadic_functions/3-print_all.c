#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all things
 * @format: list of all types to be printed
 *
*/
void print_all(const char * const format, ...)
{
	va_list all;
	int i;
	char *str;
	char plc; 

	va_start(all, format);

	while (format != NULL && format[i])
	{
		str = ", ";
		if (format[i] == 'c')
		{
			printf("%c%s", va_arg(all, int), str);
		}
		else if (format[i] == 'i')
		{
			printf("%d%s", va_arg(all, int), str);
		}
		else if (format[i] == 'f')
		{
			printf("%f%s", va_arg(all, double), str);
		}
		else if (format[i] == 's')
		{
			plc = va_arg(all, char *);

			if (plc == NULL)
			{
				plc = "(nil)";
			}
			printf("%s%s", plc, str);
		}
		i = i + 1;
	}
	printf("\n");
	va_end(all);
}
