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
	int i = 0, separate;
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		separate = (i != 0) && (format[i + 1] != '\0') && (format[i - 1] == 'c' ||
		format[i - 1] == 'i' || format[i - 1] == 'f' || format[i - 1] == 's');
		if (separate)
			printf(", ");
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
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
