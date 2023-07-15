#include "main.h"

/**
 * _sqrt - helper for _sqrt_recursion (brute force)
 *
 * @num: the number under the root
 * @initial: the starting guess for the root
 * Return: the square root, -1 if it doesn't exist
 */
int _sqrt(int num, int initial)
{
	if (initial * initial == num)
		return (initial);
	if (initial > num)
		return (-1);
	return (_sqrt(num, initial + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the nuber under the square root
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
