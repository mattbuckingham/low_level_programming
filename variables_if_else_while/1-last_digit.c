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
	printf("Last digit of ");
	printf("%d", n);
	printf(" is");
	n = n % 10;
	printf("%d", n);
		if (n > 5)
			printf("and is greater than 5 \n");
		else if (n == 0)
			printf(" and is 0\n");
		else if (n < 0)
			printf(" and is less than 6 and not 0\n");
	return (0);
}
