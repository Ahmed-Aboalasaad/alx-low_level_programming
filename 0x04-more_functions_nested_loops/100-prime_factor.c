#include "main.h"
#include <stdio.h>

unsigned long int isPrime(unsigned long int num);
unsigned long int max(unsigned long int one, unsigned long int two);

/**
 * main - prints the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: always 0
*/
int main(void)
{
	unsigned long int i, largestFactor, x = 612852475143; /* of 12 digits */

	for (i = 1; i <= x; i++)
	{
		if (isPrime(i))
			largestFactor = max(i, largestFactor);
	}
	return (0);
}

unsigned long int isPrime(unsigned long int num)
{
	unsigned long int i;

	for (i = 2; i < num; i++)
		if (num % i == 0)
				return (0);
	return (1);
}

unsigned long int max(unsigned long int one, unsigned long int two)
{
	return (one > two ? one : two);
}
