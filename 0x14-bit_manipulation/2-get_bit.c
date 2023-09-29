#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number to get the bit from
 * @index: the index starting fomr 0
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	return ((n & 1UL << index) == 0 ? 0 : 1);
}
