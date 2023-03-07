#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to the destination
 * @src: pointer to the src
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int destLength, srcLength, i;

	destLength = 0;
	while (1)
	{
		if (!dest[destLength])
			break;
		destLength++;
	}

	srcLength = 0;
	while (1)
	{
		if (!src[srcLength])
			break;
		srcLength++;
	}

	dest += destLength;
	for (i = 0; src[i]; i++)
	{
		*(dest + i) = src[i];
	}

	dest += srcLength;
	*dest = '\0';

	dest -= destLength;
	dest -= srcLength;

	return (dest);
}
