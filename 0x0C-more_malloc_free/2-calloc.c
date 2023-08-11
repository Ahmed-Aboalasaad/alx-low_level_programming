#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * Description: It sets the bytes to zero
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: NULL when nmemb or size is zero or when it fails
 * Otherwise, a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *resetter;
	unsigned int i;

	/* input validation */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocation & failure check */
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	/* set to zeroes */
	resetter = ptr;
	for (i = 0; i < nmemb * size; i++)
		resetter[i] = 0;
	return (ptr);
}
