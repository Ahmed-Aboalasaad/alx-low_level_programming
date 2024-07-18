#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - performs jump search on a sinlgy linked list
 *
 * @list: pointer to the list head
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump;
	char found;
	size_t i;
	listint_t *result;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	for (result = list; result->next; result = result->next)
	{
		/* start printing after the first jump*/
		if (result->index % jump == 0 && result->index != 0)
			printf("Value checked at index [%ld] = [%d]", result->index, result->n);
		if (result->n == value)
			break;
	}
	if (result->next)





	/* Find the suitable block */
	jump = sqrt(size);
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
