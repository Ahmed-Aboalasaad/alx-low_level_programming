#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * words are sparated by spaces
 *
 * @str: the given string
 * Return: NULL if str=NULL or "" or on failure
 * otherwise, a pointer to an array of strings (words)
 * whose last element is NULL
 */
char **strtow(char *str)
{
	int i, j, k, wordCount = 0, scanner = 0;
	char **words;

	/* input validation */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count Words */
	for (i = 0; str[i]; i++)
		if (str[i] == ' ')
			wordCount++;
	wordCount++; /* for the last word */

	/* Allocate array of strings (last one is NULL) & failure check */
	words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[wordCount] = NULL;

	/* fill the words[] array */
	for (i = 0; i < wordCount; i++)
	{
		/* Count this word's characters (j) */
		for (j = 0; str[scanner] != ' ' && str[scanner]; j++)
			scanner++;
		scanner++;

		/* allocate space for this word (characters & terminator) & check failure */
		words[i] = (char *)malloc((j + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i = 0; words[i]; i++) /* ?? */
				free(words[i]);
			free(words);
			return (NULL);
		}
		words[i][j] = '\0';

		/* Copy the contents of this word */
		for (k = 0; words[i][k]; k++)
			words[i][k] = str[scanner - 1 - j + k];
	}
	return (words);
}
