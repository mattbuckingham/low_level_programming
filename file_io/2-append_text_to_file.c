#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be inserted
 * Return: 1 on sucess, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, count;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	count = 0;
	while (text_content[count] != '\0')
	{
		count = count + 1;
	}
	wr = write(fd, text_content, count);
	if (wr < 1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}


