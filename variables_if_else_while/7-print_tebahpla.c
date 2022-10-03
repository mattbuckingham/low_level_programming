#include <stdio.h>

/**
 *main - pprints every letter of the alphabet using only the function putchar
 *Return: zero at all times
 */

int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
