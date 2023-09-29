#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: the number
 * @index: the index to set the bit at (starting from 0)
 * Return: 1 if it worked, -1 if it failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | 1UL << index;
	return (1);
}
