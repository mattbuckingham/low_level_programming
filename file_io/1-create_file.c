#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - 
 *
 *
*/
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	wr = write (fd, text_content, strlen(text_content));
	if (wr == -1)
	{
		close (fd);
		return (1);
	}
	close (fd);
	return (1);
}


