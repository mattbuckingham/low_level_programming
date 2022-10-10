 #include "main.h"
/**
 * print_rev - prints a string to output
 * @s: a string to be printed backwards
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	/** this loop finds the length of the string, which is where the pointer will now point*/
	while (*s != '\0')
	{
		s = s + 1;
	}

	/** increment back off the null char */
	s = s - 1;

	/* print the string from last to first */
	i = s;
	while (i > 0)
	{
		_putchar(*s);
		s = s - 1;
		i = i - 1;
	}


	_putchar('\n');
}
