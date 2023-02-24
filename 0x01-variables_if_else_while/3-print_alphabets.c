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
		putchar(i);
	}
	for (i = 65; i < 65 + 26; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
