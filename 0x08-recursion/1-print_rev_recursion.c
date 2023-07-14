#include "main.h"

/**
 * length - finds the length of the given string
 *
 * @s: the string
 * Return: the length (#characters)
 */
int length(char *s)
{
	if (s[0])
		return (1 + length(++s));
	return (0);
}

/**
 * print_reversed - prints the given string in reverse
 *
 * @s: the string
 * @length: the length of the string
 * Return: void
 */
void print_reversed(char *s, int length)
{
	if (length > 0)
	{
		_putchar(s[length - 1]);
		print_reversed(s, length - 1);
	}
}

/**
 * _print_rev_recursion - prints a string in reverse
 *
 *
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	print_reversed(s, length(s));
}
