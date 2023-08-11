#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers in the given range
 *
 * @min: lower bound
 * @max: upper bound
 * Return: NULL if min>max or when it fails
 * Otherwise, a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	return (arr);
}
