#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: th enumber of actual letters to print form the file
 * Return: number of letters printed
*/
 ssize_t read_textfile(const char *filename, size_t letters)
{
	 char *buffer;
	 int fd, rd, wr;

	 if (filename == NULL)
	 {
		 return (0);
	 }

	 buffer = malloc(sizeof((*buffer) * letters);

	 if (buffer == NULL)
	 {
		 return (0);
	 }

	 fd = open(filename, O_RDONLY);
	 if (fd == -1)
	 {
		 free(buffer);
		 return(0);
	 }

	 rd = read(fd, buffer, letters);
	 if (rd == -1)
	 {
		 free(buffer);
		 close(fd);
		 return (0);
	 }

	 wr = write(STDOUT_FILENO, buffer, rd);
	 if (wr == -1)
	 {
		 free(buffer);
		 close(fd);
		 return (0);
	 }

	 free(buffer);
	 close(fd);
	 return (wr);
}
