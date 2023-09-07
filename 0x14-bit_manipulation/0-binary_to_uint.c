#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char valid(const char *str);
void setBit(unsigned int *n, int index);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, bitCount, i;

	if (!b || !valid(b))
		return (0);

	result = 0;
	bitCount = 0;
	for (i = 0; b[i]; i++)
		bitCount++;
	for (i = 0; i < bitCount; i++)
		if (b[i] == '1')
			setBit(&result, bitCount - i - 1);

	return (result);
}

/**
 * valid - checks if the given string consists of only 0s and 1s
 *
 * @str: the string
 * Return: 1 if it's valid, 0 otherwise
*/
char valid(const char *str)
{
	int i = 0;

	if (!str)
		exit(1);
	for (i = 0; str[i]; i++)
		if (str[i] != '1' && str[i] != '0')
			return (0);
	return (1);
}

/**
 * setBit - sets a bit in an unsigned number to 1
 *
 * @n: the unsigned number
 * @index: the index of the bit to bet set (starting from 0 on the right)
 * Return: nothing
*/
void setBit(unsigned int *n, int index)
{
	unsigned int setter;

	if (index < 0)
		exit(2);

	setter = 1 << index;
	if (index == 0)
		setter = 1;
	*n = *n | setter;
}
