#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the given string
 *
 * @str: the string
 * Return: a pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	/* count the characters */
	for (i = 0; str[i]; i++)
		size++;

	duplicate = malloc(sizeof(char) * size + 1);

	if (duplicate != NULL)
	{
		for (i = 0; i < size; i++)
			duplicate[i] = str[i];
		duplicate[size] = '\0';
	}

	return (duplicate);
}
