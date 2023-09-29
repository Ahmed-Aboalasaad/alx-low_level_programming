#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another. % and / are not allowed
 *
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip to
 * get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long i;
	char flipCount;

	for (i = flipCount = 0; i < sizeof(long int) * 8; i++)
		if (get_bit(n, i) != get_bit(m, i))
			flipCount++;
	return (flipCount);
}

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number to get the bit from
 * @index: the index starting from 0
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	return ((n & 1UL << index) == 0 ? 0 : 1);
}
