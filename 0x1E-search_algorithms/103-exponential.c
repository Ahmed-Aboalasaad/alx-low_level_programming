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

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	if (start == end)
		return ((array[start] == value) ? (long int)start : -1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (recursiveBinarySearch(array, start, mid - 1, value));
	else
		return (recursiveBinarySearch(array, mid + 1, end, value));
}

/**
 * exponential_search - performs exponential search
 *
 * @array: the array to search in
 * @size: the array size
 * @value: the value to search for
 *
 * Return: the index if value was found, or 0 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, end;

	/* Input Validation */
	if (!array)
		return (-1);

	/* Find the range */
	for (i = 1; ; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i * 2 >= size || value < array[i * 2])
		{
			end = (i * 2 >= size) ? size - 1 : i * 2;
			printf("Value found between indexes [%ld] and [%ld]\n", i, end);
			break;
		}
	}

	/* Binary Search in that ragne */
	return (recursiveBinarySearch(array, i, end, value));
}
