#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - minimum number of coins to give change
 *
 * @argc: counts arguments
 * @argv: arguments vector
 * Return: 0 when succeeds
 */
int main(int argc, char *argv[])
{
	int coinsCount = 0, change, i, categories[] = {25, 10, 5, 2, 1};
	/* worng number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* negative argument */
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate #coins */
	for (i = 0; i < 5; i++)
	{
		for (; change >= categories[i]; change -= categories[i])
			coinsCount++;
		if (change == 0)
			break;
	}

	printf("%d\n", coinsCount);
	return (0);
}
