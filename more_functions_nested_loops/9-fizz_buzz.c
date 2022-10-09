#include <stdio.h>
#include "main.h"
/**
 *main - see fizz buzz challenge
 *
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
		printf(" ");
	}
	return (0);
}
