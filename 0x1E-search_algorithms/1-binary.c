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
 * binary_search - performs binary search for value in arrary
 *
 * @array: the array to search in
 * @size: the array size
 * @value: the value to search for
 *
 * Return: the index if it was found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	/* Input Validation */
	if (!array)
		return (-1);

	return (recursiveBinarySearch(array, 0, size - 1, value));
}
