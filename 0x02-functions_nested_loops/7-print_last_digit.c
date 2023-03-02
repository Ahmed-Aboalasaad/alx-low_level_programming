#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the digit
 * Return: the last digit of the given integer
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(48 + lastDigit);
	return (lastDigit);
}
