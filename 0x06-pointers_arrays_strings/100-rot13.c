#include "main.h"

/**
 * rot13 - encode a string using the rot13 cypher
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, increase, decrease;

	for (i = 0; s[i]; i++)
	{
		increase = (s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm');
		decrease = (s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z');
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] + increase * 13 - decrease * 13;
	}

	return (s);
}
