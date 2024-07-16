#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - performs the jump-search algorithm
 *
 * @array: the array to search in
 * @size: the array size
 * @value: the value to search for
 *
 * Return: the index if found, 0 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t low, high;

	/* Input Validation */
	if (!array)
		return (-1);

	/* Find the suitable block */
	jump = (size_t)sqrt(size);
	low = 0;
	high = jump;
	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (high >= size || value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			break;
		}
		low += jump, high += jump;
	}

	/* Linear Search in the block */
	for (; low <= high && low < size; low++)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
