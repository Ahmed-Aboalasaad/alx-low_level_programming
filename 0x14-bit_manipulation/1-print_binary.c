#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * arrays & malloc & '%' & '/' are not allowed
 *
 * @n: the number to represent in binary
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int bits;
	unsigned long msb; /* most significant bit */
	char print; /* flag to allow printing */

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (bits = sizeof(long) * 8, print = 0; bits--;)
	{
		msb = n & 1UL << bits;
		if (msb)
			print = 1;
		if (print)
			_putchar(msb ? '1' : '0');
	}
}
