#include <stdio.h>
#include "main.h"

/**
 * main - starting point
 *
 * @argc: counts arguments
 * @argv: arguments vector
 * Return: 0 when succeeds
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
