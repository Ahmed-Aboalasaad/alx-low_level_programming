#include "main.h"

/**
 * add - adds two integers
 * Return: returns the sum of the given integers
 */
int add(int x, int y)
{
	int sum = x + y;

	/* print the sum using _putchar() */
	_putchar(sum / 10);
	_putchar(sum % 10);

	return (sum);
}
