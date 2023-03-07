#include "main.h"

/**
 * _strcpy - copies a string including the null bit
 * @dest: destination
 * @src: source
 * Return: a character pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (1)
	{
		if (!src[length])
			break;
		length++;
	}

	for (i = 0; i < length + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
