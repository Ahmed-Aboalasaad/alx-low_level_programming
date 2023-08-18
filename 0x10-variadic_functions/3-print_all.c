#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * no use of for, goto, else, do while
 * allowed: 2 if, 2 while loops, 9 variables
 *
 * @format: a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0, separate;
	char *str;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		j = i + 1, separate = 0;
		while (format[j])
		{
			if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's')
			{
				separate = 1;
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", ((str == NULL) ? "(nil)" : str));
			break;
		default:
			separate = 0;
		}
		i++;
		if (separate)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
