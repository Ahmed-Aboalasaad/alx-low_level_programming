#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * min - minimum
 *
 * @x: first
 * @y: second
 * Return: the minimum of them
 */
unsigned int min(unsigned int x, unsigned int y)
{
	return ((x > y) ? x : y);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * The contents will be copied to the newly allocated space, in the range
 * from the start of ptr up to the minimum of the old and new sizes
 *
 * @ptr: a pointer to the memory previously allocated with malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: and new_size is
 * Return: NULL when new_size=0 and ptr != NULL (acting as free)
 * and when it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	/* Act as malloc */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Act as free */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate & copy contents */
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < min(old_size, new_size); i++)
		*((char *)new + i) = *((char *)ptr + i);
	free(ptr);
	return (new);
}
