#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars initialized with a specific char
 *
 * @size: the size of this array
 * @c: the character
 * Return: Null if size = 0 or it fails
 * pointer to the array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	if (str == NULL) /* failed to allocate */
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
