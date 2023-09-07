#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int test;
	char *reader;

	test = 1;
	reader = (char *)(&test);
	return (*reader ? 1 : 0);
}
