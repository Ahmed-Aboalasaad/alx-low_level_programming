#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when succeeds
 */
int main(void)
{
	if (__FILE__ != NULL)
		printf("%s\n", __FILE__);

	return (0);
}
