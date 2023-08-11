#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * exits with status 98 when it fails
 *
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *tmp = malloc(b * sizeof(char));

	if (tmp == NULL)
		exit(1);

	return (tmp);
}
