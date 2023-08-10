#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the given arguments
 * separated by newline characters between arguments
 *
 * @ac: argumet count
 * @av: argument vector
 * Return - Null if ac = 0 or av = Null or failure
 * otherwise, returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, put = 0;
	char *str;

	/* validate correct input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate memory size */
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;
	size += ac; /* for new lines */
	size++;		/* for null terminating */

	/* Allocation & failure check */
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Build string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[put++] = av[i][j];
		}
		str[put++] = '\n';
	}
	str[put++] = '\0';
	return (str);
}
