#include <stdlib.h>
#include <stdio.h>

/**
*main - the main fn
*Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
