#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; 1; i++)
	{
		/* there are still characters in both the strings */
		if (s1[i] && s2[i])
		{
			if (s1[i] == s2[i])
				continue;
			else
				return (s1[i] - s2[i]);
		}

		/* the first string is done (first is shorter) */
		else if (!s1[i] && s2[i])
			return (-s2[i]);

		/* the second string is done (second is shorter) */
		else if (s1[i] && !s2[i])
			return (s1[i]);

		/* both of the strings is done (they're equal) */
		else
			return (0);
	}
}
