#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches linearly in array for value
 *
 * @array: pointer to the first element in the array to search in
 * @size: the array size
 * @value: the value to serach for
 *
 * Return: the index of the element if value was found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Input Validation */
	if (!array)
		return (-1);

	/* Linear Seach */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
