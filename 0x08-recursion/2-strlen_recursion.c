#include "main.h"

/**
 * _strlen_recursion - counts the string length
 *
 * @s: the string
 * Return: the length of the given string
 */
int _strlen_recursion(char *s)
{
	if (s[0])
		return (1 + _strlen_recursion(++s));
	return (0);
}
