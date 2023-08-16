#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 integers
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the sum of the integers given
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 integers
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the difference between the integers given
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the product of the integers given
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the division of a over b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of a / b
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the division remainder of a over b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
