#include <stdio.h>

/**
 *main - print the name of the executable that this program is run from
 * @argc:argc
 * @argv: argv
 * Return: zero 
 */

int main (char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
