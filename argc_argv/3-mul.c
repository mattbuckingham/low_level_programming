#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the product of two nunbers
 * @argc:argc
 * @argv: argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
