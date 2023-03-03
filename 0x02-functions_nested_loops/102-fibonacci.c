#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: zero when success
 */
int main(void)
{
	int i;
	unsigned long last = 2,
	beforeLast = 1,
	new;

	printf("1 2 ");
	for (i = 0; i < 48; i++)
	{
		new = last + beforeLast; /* the new value */
		beforeLast = last;
		last = new;
		if (i == 47)
		{
			printf("%ld\n", new);
			break;
		}
		printf("%ld, ", new);
	}
	return (0);
}
