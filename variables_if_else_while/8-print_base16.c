#include <stdio.h>

/**
 *main - pprints every letter of the alphabet using only the function putchar
 *Return: zero at all times
 */

int main(void)
{
	char ch = '0';

	for (; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'F'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
