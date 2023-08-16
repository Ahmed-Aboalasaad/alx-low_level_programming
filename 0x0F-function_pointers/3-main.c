#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: arguments counter
 * @argv: argumetns vector
 * Return: 0 when succedds.
*/
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
