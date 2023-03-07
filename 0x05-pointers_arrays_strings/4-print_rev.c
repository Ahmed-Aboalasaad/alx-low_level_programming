#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line to stdout
 * @s: the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	while (1)
	{
		if (!s[length]) /* when you encounter the null character */
			break;
		length++;
	}

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
}
