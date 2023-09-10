#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: path
 * @text_content: a NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (!text_content)
		return ((fd < 0) ? -1 : 1);
	for (length = 0; text_content[length];)
		length++;
	if (write(fd, text_content, length) == -1)
	{
		printf("couldn't write to %d\n", fd);
		return (-1);
	}
	return (1);
}
