#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * isDigits - checks if a string consists of only digits
 *
 * @s: the string
 * Return: 1 if it's only digits, 0 otherwise
 */
int isDigits(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		if (s[i] < 48 || s[i] > 57)
			return (0);
	return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc: counts arguments
 * @argv: arguments vector
 * Return: 0 when succeeds
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* no numbers passed */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* detect non-digits */
	for (i = 1; i < argc; i++)
	{
		if (!isDigits(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	/* sum */
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
