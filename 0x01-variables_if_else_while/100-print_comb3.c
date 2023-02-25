#include <stdlib.h>
#include <stdio.h>

/**
*main - the main fn
*Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{
			if (i == j || (i == 8 && j == 9))
				continue;
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
