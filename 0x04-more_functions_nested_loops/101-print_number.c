#include "main.h"

int _pow(int n, int p);

/**
 * print_number - prints a number
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
    int digitsCount = 0;
	int toPrint, i;
	int nClone = n;
	/* print the negative sign for negative numbers */
	if (n < 0)
		_putchar('-');

    /* count the digits */
    while(nClone != 0)
    {
        nClone /= 10;
        digitsCount++;
    }

	/* print the digit */
	for (i = digitsCount; i > 0; i--)
	{
		toPrint = n / _pow(10, i + 1) - n % _pow(10, i - 1);
		if (toPrint < 0)
			toPrint *= -1;
		_putchar(toPrint + 48);
	}
}

int _pow(int n, int p)
{
	int i, result = n;

	for (i = p - 1; i > 0; i--)
		result *= n;
	return (result);
}
