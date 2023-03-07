#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int length, i, j;
	char *clone = "";

	length = 0;
	while (1)
	{
		if (!s[length]) /* when you encounter the null character */
			break;
		length++;
	}

	/* load the clone string with the reversed text */
	for (i = 0, j = length; i < length ; i++, j--)
		clone[i] = s[j];

	/* put the reversed text back in the string */
	for (i = 0; i < length; i++)
		s[i] = clone[i];
}
