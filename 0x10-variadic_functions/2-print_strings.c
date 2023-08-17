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
	char *next = "ahmed";
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		printf("\n");
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		next = va_arg(args, char *);
		if (next == NULL)
			printf("(nil)");
		else
			printf("%s", next);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
