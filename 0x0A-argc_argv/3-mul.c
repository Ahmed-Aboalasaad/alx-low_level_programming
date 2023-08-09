#include <stdlib.h>
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
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
