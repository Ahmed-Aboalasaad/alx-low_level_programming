#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * strlen - get string length
 *
 * @s: the string
 * Return: its length
*/
size_t strlen(const char *s)
{
	size_t i;

	for (i = 0; s[i];)
		i++;
	return (i);
}

/**
 * errorMessage - print an error message on the screen, concatenated
 * with the file name, and followed with a new line
 *
 * @msg: the message
 * @fileName: the file name
 * @exitCode: the error code to exit the program with
 * Return: nothing
*/
void errorMessage(char *msg, char *fileName, int exitCode)
{
	write(STDERR_FILENO, msg, strlen(msg));
	if (fileName)
		write(STDERR_FILENO, fileName, strlen(fileName));
	write(STDERR_FILENO, "\n", 1);
	exit(exitCode);
}

/**
 * intToStr - convert integer to string
 *
 * @x: the integer to be converted
 * Return: the converted string
*/
char *intToStr(int x)
{
	int length, xCopy;
	char *result;

	for (length = 0; xCopy > 0; length++)
		xCopy /= 10;
	result = malloc(sizeof(*result) * length + 1);
	if (!result)
		return (NULL);
	result[length] = '\0';
	for (length--; x > 0; length--, x /= 10)
		result[length] = x % 10;
	return (result);
}

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
*/
int main(int argc, char **argv)
{
	int fdFrom, fdTo, readBytesCount;
	char *buffer;

	/* Input Validation */
	if (argc != 3)
		errorMessage("Usage: cp file_from file_to", NULL, 97);

	/* Get The Files Ready */
	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
		errorMessage("Error: Can't read from file ", argv[1], 98);

	fdTo = creat(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdTo == -1)
		errorMessage("Error: Can't write to ", argv[2], 99);

	/* Copy Content*/
	buffer = malloc(sizeof(*buffer) * BUFFER_SIZE);
	if (!buffer)
		return (1);
	for (readBytesCount = 1; readBytesCount > 0;)
	{
		readBytesCount = read(fdFrom, buffer, BUFFER_SIZE);
		if (readBytesCount == -1)
			errorMessage("Error: Can't read from file ", argv[1], 98);
		if (write(fdTo, buffer, readBytesCount) == -1)
			errorMessage("Error: Can't write to ", argv[2], 99);
	}

	/* Close */
	if (close(fdFrom) == -1)
		errorMessage("Error: Can't close fd ", intToStr(fdFrom), 100);
	if (close(fdTo) == -1)
		errorMessage("Error: Can't close fd ", intToStr(fdTo), 100);
	return (0);
}
