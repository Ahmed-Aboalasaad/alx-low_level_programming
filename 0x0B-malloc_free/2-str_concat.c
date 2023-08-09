#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * Null passed strings are treated as an empty string
 *
 * @s1: string 1
 * @s2: string 2
 * Return: Null on failure. Otherwise:
 * a pointer to a newly allocated space in memory with
 * the concatenated strings 1 followed by 2 and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1 = 0, size2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find sizes */
	for (i = 0; s1[i]; i++)
		size1++;
	for (i = 0; s2[i]; i++)
		size2++;

	/* allocate memory */
	str = malloc((size1 + size2) * sizeof(char) + 1);
	if (str == NULL) /* on failure */
		return (NULL);

	/* Concatenate */
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (i = size1; i < size1 + size2; i++)
		str[i] = s2[i - size1];
	str[size1 + size2] = '\0';

	return (str);
}
