#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms of Fibonacci
 * Sequence followed by a new line
 * Return: always zero
 */
int main(void)
{
	unsigned long sum = 2,
				  last = 2,
				  beforeLast = 1,
				  new;

	while (1)
	{
		new = last + beforeLast; /* keep the new number */
		beforeLast = last; /* update the beforeLast number */
		last = new; /* update the last number */

		if (new > 4000000)
			break;
		if (new % 2 == 0)
			sum += new;
	}
	printf("%ld\n", sum);

	return (0);
}
