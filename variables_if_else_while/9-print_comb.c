#include <stdio.h>

/**
 *main - function to print all numbers between 0 and 9
 *Return: zero at all times
 */

int main(void)
{
	int ch = 48;

	for (; ch <= 57; ch++)
	{
		putchar(ch);
		putchar(39);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
