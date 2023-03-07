#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, indicator, breaker;

	indicator = 0;
	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (!s1[i] && !s2[i])
		{
			indicator = 0;
			breaker = i;
			break;
		}

		if (!s1[i])
		{
			indicator = -1;
			breaker = i;
			break;
		}

		if (!s2[i])
		{
			indicator = 1;
			breaker = i;
			break;
		}

		if (*s1 == *s2)
			continue;
		else
			return (*s1 - *s2);
	}

	if (indicator == 1)
		return (s1[breaker]);
	else if (indicator == 0)
		return (0);
	else
		return (0 - s2[breaker]);	
}
