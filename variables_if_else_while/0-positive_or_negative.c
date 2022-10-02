#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates a random number and prints a statement about wether the
 * number is positivve, negative or zero
 *
 * Return: zero at all times
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
		if (n > 0)
			printf(" is positive\n");
		else if (n == 0)
			printf(" is zero\n");
		else if (n < 0)
			printf(" is negative\n");
	return (0);
}
