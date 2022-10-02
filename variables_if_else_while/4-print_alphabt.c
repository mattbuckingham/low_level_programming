#include <stdio.h>

/**
 *main - pprints every letter of the alphabet except e and q using
 * only the function putchar
 *Return: zero at all times
 */

int main(void)
{
	char ch = 'a';

	for (; ch < 'e'; ch++)
		putchar(ch);
	for (ch = 'f'; ch < 'q'; ch++)
		putchar(ch);
	for (ch = 'r'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
