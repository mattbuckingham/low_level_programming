#include <stdio.h>

/**
 *main - prints size of data types
 *
 *Return: 0 at all time
 */

int main(void)
{
	char sChar;
	int sInt;
	long int sLongInt;
	long long int sLongLongInt;
	float sFloat;

	printf("Size of a char: %d byte(s)/n", sizeof(sChar));
	printf("Size of an int: %d byte(s)/n", sizeof(sInt));
	printf("Size of a long int: %d byte(s)/n", sizeof(sLongInt));
	printf("Size of a long long inr: %d byte(s)/n", sizeof(sLongLongInt));
	printf("Size of a float: %d byte(s)/n", sizeof(sFloat));
	return (0);
}
