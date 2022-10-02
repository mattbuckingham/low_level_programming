#include <stdio.h>

/**
 *main - pprints every letter of the alphabet except e and q using
 * only the function putchar
 *Return: zero at all times
 */

int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		if (ch != 'e')
		{
			if (ch != 'q')
			{
			putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}
