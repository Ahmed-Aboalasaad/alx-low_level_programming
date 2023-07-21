#include <stdarg.h>

/**
 * sum_them_all - sums the given integers except the first one
 *
 * @n: the number of the parameters to be given
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	/* make a variable of va_list type to hold the list of arguments */
	va_list args;

	/* Start iterating them */
	va_start(args, n);

	for (i = 0; i < n; i++)
		/* va_arg(args, int) -> the next argument */
		sum += va_arg(args, int);

	/* free the arguments list */
	va_end(args);

	return (sum);
}
