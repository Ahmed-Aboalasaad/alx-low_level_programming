#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @s: the string pointer
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '\t')
			s[i] = ' ';
		for (j = 0; separators[j]; j++)
			/* if you found a separator followed by a small character */
			if (s[i] == separators[j] && s[i + 1] > 96 && s[i + 1] < 123)
			{
				/* capitalize this character and stop checking for separators */
				s[i + 1] -= 32;
				break;
			}
	}

	return (s);
}
