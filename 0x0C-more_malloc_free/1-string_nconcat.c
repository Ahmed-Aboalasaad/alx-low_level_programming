#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * Description: the concatenated string consists of the first one
 * followed by the first n bytes of s2, and null terminated
 *
 * @s1: string 1
 * @s2: string 2
 * @n: #bytes to concatenate from s2
 * Return: a pointer to the concatenated string.
 * returns NULL when it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1 = 0, size2 = 0;
	char *str;

	/* validate s1 & s2 */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* find the size */
	for (i = 0; s1[i]; i++)
		size1++;
	for (i = 0; s2[i]; i++)
		size2++;

	/* validate right n */
	if (n > size2)
		n = size2;

	/* Allocation & failure check */
	str = malloc((size1 + n + 1) * sizeof(char));
	if (!str)
		return (NULL);

	/* Concatenation */
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (i = size1; i < size1 + n; i++)
		str[i] = s2[i - size1];
	str[size1 + n] = '\0';

	return (str);
}
