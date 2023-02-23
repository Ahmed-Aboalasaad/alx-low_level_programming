#include <stdio.h>

/**
* main - the main fucntion
* Return: returns an integer
*/
int main(void)
{
	char str[] = "and that piece of art is "
			"useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s", str);
	return (1);
}
