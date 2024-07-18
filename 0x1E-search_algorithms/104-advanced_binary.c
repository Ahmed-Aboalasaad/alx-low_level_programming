#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * recursiveBinarySearch - applies binary search recursively
 *
 * @array: the array to search in
 * @start: starting index
 * @end: the ending index
 * @value: the value to search for
 *
 * Return: the index if found, -1 otherwise
 */
int recursiveBinarySearch(int *array, size_t start, size_t end, int value)
{
	size_t i, mid = (start + end) / 2;

	/* Print the searched array */
	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	/* Base Case: Array of a single element*/
	if (start == end)
		return ((array[start] == value) ? (long int)start : -1);

	/* Found the value -> recurse until all the values are 'value' */
	if (array[mid] == value)
	{
		if (array[start] == array[end])
			return (start);

		/* There are element(s) on the left */
		if (array[mid - 1] == value) /* similar to value */
			return (recursiveBinarySearch(array, start, mid, value));
		else /* different from value*/
			return (mid);
	}
	else if (array[mid] > value)
		return (recursiveBinarySearch(array, start, mid, value));
	else
		return (recursiveBinarySearch(array, mid + 1, end, value));
}

/**
 * advanced_binary - performs advanced binary search.
 * Searches for the first occurrance of value in a sorted array
 *
 * @array: the array to search in
 * @size: the array size
 * @value: the value to search for
 *
 * Return: the index if value was found, or 0 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursiveBinarySearch(array, 0, size - 1, value));
}
