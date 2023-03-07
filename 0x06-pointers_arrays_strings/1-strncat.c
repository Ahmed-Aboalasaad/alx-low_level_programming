#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of characters to concatenate
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
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
	for (i = 0; i < n; i++)
	{
		if (!src[i])
			break;

		*(dest + i) = src[i];
	}

	dest += srcLength;
	*dest = '\0';

	dest -= destLength;
	dest -= srcLength;

	return (dest);
}
