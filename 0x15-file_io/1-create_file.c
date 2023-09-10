#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: file name / path
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, length;

	/* Input Validation */
	if (!filename)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (!text_content)
		return (1);
	for (length = 0; text_content[length];)
		length++;
	if (write(fd, text_content, length) < 0)
		return (-1);
	return (1);
}
