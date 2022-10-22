#include <stdio.h>

/**
 *main - print the number of arguments this function is passed
 * @argc:argc
 * @argv: argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argv[0][0] == 1)
	{
		;
	}
	printf("%d\n", (argc - 1));
	return (0);
}
