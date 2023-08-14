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
		exit(1);
	wordCount = countWords(str);

	/* Allocate array of strings (last one is NULL) & failure check */
	words = malloc(sizeof(*words) * (wordCount + 1));
	if (words == NULL)
		return (NULL);
	words[wordCount] = NULL;

	/* fill the words[] array */
	for (i = 0; i < wordCount; i++)
	{
		/* Count this word's characters (j) */
		for (j = 0; str[scanner] && str[scanner] != ' '; j++)
			scanner++;
		scanner++;
		printf("Word #%d:\nchar count: %d\n\n", i, j);

		/* allocate space for this word (characters & terminator) & check failure */
		words[i] = malloc(sizeof(*words[i]) * (j + 1)); /* SUS */
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

/**
 * countWords - counts the space-separated words in a string
 *
 * @str: the string
 * Return: number of words
 */
int countWords(char *str)
{
	int i, count = 0, leadingSpaces = 1;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			leadingSpaces = 0;
		if (!leadingSpaces && str[i] == ' ' && str[i + 1] != ' ')
			count++;
	}
	printf("Counted %u woreds\n", count);
	return (count);
}

/**
 * cleanLeadingSpaces - cleans the leading spaces of a string
 *
 * @str: the string
 * Return: nothing
 */
void cleanLeadingSpaces(char *str)
{
	int i, leadingSpaces = 1, newSize = 0;
	char *result;

	if (str == NULL)
		exit(1);

	/* count characters (without leading spaces) */
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			leadingSpaces = 0;
		if (!leadingSpaces)
			newSize++;
	}

	/* Allocation */
	result = malloc(sizeof(*result) * newSize + 1);
	if (result == NULL)
		exit(1);
	result[newSize] = '\0';

	/* copy the rest of the string */
	for (i = leadingSpaces; i < newSize; i++)
		result[i - leadingSpaces] = str[i];
	free(str);
	str = result;
	result = NULL;
}
