#include <stdlib.h>
#include <stdio.h>

/**
 *main - the main fn
 *Return: 0
 */
int main(void)
{
	int i, j;

	// the left number of the 2 2-digit numbers
	for (i = 0; i < 100; i++)
	{
		// the second number of the 2 2-digit numbers
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i == 98 && j == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
