#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string pointer
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		else
			continue;
	}
	return (s);
}
