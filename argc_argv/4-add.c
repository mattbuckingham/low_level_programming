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
	int i;
	int k;
	int r;

	i = 0;

	/*error checking - checking for a non-digit char*/
	while (i < argc)
	{
		k = 0;
		while (k < argv[i][k])
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return(1);
			}
			k = k + 1;
		}
		i = i + 1;
	}

	/*addition*/
	i = 0;
	r = 0;
	while (i < argc)
	{
		r = r + atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
