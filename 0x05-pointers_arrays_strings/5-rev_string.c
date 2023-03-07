#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int length, i, j;

	length = 0;
	while (1)
	{
		if (!s[length]) /* break when you encounter the null character */
			break;
		length++;
	}

	/* I'm using the same metod of substituting 2 integers without third one */

	/* add the corresponding form right side to the left side */
	for (i = 0; i < length / 2; i++)
		s[i] += s[length - 1 - i];

	/*
	 * replace corresponding right with (left - right)
	 * different in odd than even
	 */
	if (length % 2 == 0)
		for (i = length / 2, j = (length / 2) - 1; i < length; i++, j--)
			s[i] = s[j] - s[i];
	else
		for (i = (length / 2) + 1, j = (length / 2) - 1; i < length; i++, j--)
			s[i] = s[j] - s[i];

	/* replace corresponding left with (left - right) */
	for (i = 0; i < length / 2; i++)
		s[i] -= s[length - 1 - i];
}


