#include <stdio.h>
#include "main.h"
/**
 *main - see fizz buzz challenge
 *Return: zero
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if ((n % 5 != 0) && (n % 3 != 0))
		{
			printf("%d", n);
		}
		n = n + 1;
		if (n < 101)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
