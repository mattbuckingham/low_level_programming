#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabet 10 times
 * Return: void at all times
 */

void print_alphabet_x10(void)
{
	int x;
	int ch;

	x = 0;
	ch = 'a';
	while (x < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		x++;
		ch = 'a';
		_putchar('\n');
	}

}
