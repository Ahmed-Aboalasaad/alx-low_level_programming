#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 *
 * @array: the array to search in
 * @size: its size
 * @cmp: pointer to the comparing fuction
 * Return: the index of the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
