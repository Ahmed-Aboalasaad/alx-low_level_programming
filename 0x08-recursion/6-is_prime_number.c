#include "main.h"

/**
 * isPrime - helper for is_prime_number
 *
 * @n: the number to check
 * @current: the current guess
 * Return: 1 for primes and 0 otherwise
 */
int isPrime(int n, int current)
{
	if (n < 2)
		return (0);
	if (n == current)
		return (1);
	if (n % current == 0)
		return (0);
	return (isPrime(n, current + 1));
}

/**
 * is_prime_number - returns 1 for primes and 0 otherwise
 *
 * @n: the number to be checked
 * Return: 1 if the input is a prime number, otherwise returns 0
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
