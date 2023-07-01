#include "main.h"

/**
 * rot13 - encode a string using the rot13 cypher
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			s[i] += 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			s[i] -= 13;
	}

	return (s);
}
