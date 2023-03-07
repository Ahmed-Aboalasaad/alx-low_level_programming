#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int length, n, i;

	length = 0;
	while (1)
	{
		if (!str[length])
			break;
		length++;
	}

	n = (length % 2 == 0) ? (length / 2) : ((length - 1) / 2) + 1;

	_putchar(48 + n % 10); 
	for (i = n; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
