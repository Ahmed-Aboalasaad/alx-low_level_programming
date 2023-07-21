#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(args, char *));

	va_end(args);
}
