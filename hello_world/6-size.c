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
	long long int sLongLongoInt;
	float sFloat;

	printf("Size of a char: %z byte(s)/n", sizeof(sChar));
	printf("Size of an int: %z byte(s)/n", sizeof(sInt);
	printf("Size of a long int: %z byte(s)/n", sizeof(sLongInt);
	printf("Size of a long long inr: %z byte(s)/n", sizeof(sLongLongInt);
	printf("Size of a float: %z byte(s)/n", sizeof(sFloat);
	return (0);
}
