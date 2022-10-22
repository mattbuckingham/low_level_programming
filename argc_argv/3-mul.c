#include <stdio.h>

/**
 *main - print the product of two nunbers
 * @argc:argc
 * @argv: argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		argc = 1;
	}
	printf("%s\n", (argv[1]) * argv[2]));
	return (0);
}
