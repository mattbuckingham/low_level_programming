#include "main.h"

/**
 *print_alphabet - fuinction that prints the alphabet using _putchar
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
