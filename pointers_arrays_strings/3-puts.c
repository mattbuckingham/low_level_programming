#include "main.h"
/**
 * _puts - prints a string to output
 * @str: a string to be printed
 */
void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
}
