 #include "main.h"
/**
 * print_rev - prints a string to output
 * @s: a string to be printed backwards
 */
void print_rev(char *s)
{
	int c;
	char *i;

	i = s;
	/** this loop finds the length of the string, which is now c*/
	while (*i != '\0')
	{
		c = c + 1;
		i = i + 1;
	}

	while (c > 0)
	{
		_putchar(*(s + c));
		c = c - 1;
	}


	_putchar('\n');
}
