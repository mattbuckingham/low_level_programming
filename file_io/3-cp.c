#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * main - copies a file
 * @argc: count of args
 * @argv: arr of args
*/
int main(int argc, char *argv[])
{
	int f1, f2, i, i2;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (f2 < 0)
		f2 = open(argv[2], O_TRUNC | O_WRONLY);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	i2 = read(f1, buff, 1024);
	i = write(f2, buff, i2);
	if (i == -1)
		exit(99);
	close(f1);
	close (f2);
	return (i2);
}
