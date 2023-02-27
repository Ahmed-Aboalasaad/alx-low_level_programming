#include "main.h"

/**
 * print_sign - prints the sign of the given nubmer
 * @n: the number to check its sign
 *
 * prints + for positive, 0 for zero, and - for negative
 * Return: 1 for positive, 0 for zero, and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
