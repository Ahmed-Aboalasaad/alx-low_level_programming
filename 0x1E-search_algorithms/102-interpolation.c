#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - performs interpolation search over an intger array
 *
 * @array: the array to search in
 * @size: the array size
 * @value: the value to search for
 *
 * Return: the index if value was found, or 0 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* Input Validation */
	if (!array)
		return (-1);

	size_t guess, low, high;

	for (low = 0, high = size - 1; low <= high;)
	{
		guess = low + (
			((double)(high - low) / (array[high] - array[low]))
			* (value - array[low])
			);

		/* Check the guess */
		if (guess < size)
			printf("Value checked array[%ld] = [%d]\n", guess, array[guess]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", guess);
			return (-1);
		}

		/* Check the value at guess */
		if (array[guess] < value)
			low = guess + 1;
		else if (array[guess] > value)
			high = guess - 1;
		else
			return (guess);
	}
	return (-1);
}
