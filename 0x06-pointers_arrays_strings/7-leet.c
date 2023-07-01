#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string pointer
 * Return: pointer to the encrypted string
 */
char *leet(char *s)
{
	int i, isA, isE, isO, isT, isL, isLeet;

	for (i = 0; s[i]; i++)
	{
		isA = s[i] == 'A' || s[i] == 'a';
		isE = s[i] == 'E' || s[i] == 'e';
		isO = s[i] == 'O' || s[i] == 'o';
		isT = s[i] == 'T' || s[i] == 't';
		isL = s[i] == 'L' || s[i] == 'l';
		isLeet = isA || isE || isO || isT || isL;

		if (isLeet)
			s[i] = isA * '4' + isE * '3' + isO * '0' + isT * '7' + isL * '1';
	}
	return (s);
}

