#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file name to read from
 * @letters: #letters it should read and print
 * Return: the actual number of letters it could read and print,
 * 0 when the file cannot be opened, if filename is NULL, or
 * if write fails or does not write the expected amount of bytes
*/
size_t read_textfile(const char *filename, size_t letters)
{
	int readno, fd;
	size_t printed;
	char *buffer;

	/* Input Validation */
	if (!filename)
		return (0);

	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	/* Read from the file */
	buffer = calloc(letters, 1);
	readno = read(fd, buffer, letters);
	if (readno == -1) /* Error or signal interrupt */
		return (0);

	/* Close the file */
	close(fd);

	/* Write to the stdout */
	printed = (readno == 0) ? letters : (size_t)readno;
	return (write(STDOUT_FILENO, buffer, printed));
}
