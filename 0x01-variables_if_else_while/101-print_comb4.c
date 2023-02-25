#include <stdlib.h>
#include <stdio.h>

/**
*main - the main fn
*Return: 0
*/
int main(void)
{
	int i, j, k;

	for (k = 48; k < 58; k++)
	{
		for (i = k; i < 58; i++)
		{
			if (k == i)
				continue;
			for (j = i; j < 58; j++)
			{
				if (i == j)
					continue;
				putchar(k);
				putchar(i);
				putchar(j);
				if (k != 55 || i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
