#include <stdio.h>

/**
 * main - prints frst 98 fibo numbers
 *
 * Return: int
 */
int main(void)
{
	int i, first = 1, second = 2, tmp = 0;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		tmp = first + second;
		printf("%d", tmp);
		if (i != 95)
			printf(", ");
		first = second;
		second = tmp;
	}
	printf("\n");

	return (0);
}
