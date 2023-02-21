#include <stdio.h>

/**
* main - the main fucntion
* Return: returns an integer
*/
int main(void)
{
	char *one = "and that piece of art is us";
	char *two = "eful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%c%c", *one, *two);
	return (1);
}
