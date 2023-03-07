#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line to stdout
 * @s: the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, length;

	length = _strlen(s);

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		_putchar(length);
	}
	_putchar('\n');
}
