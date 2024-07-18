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
	size_t jump;
	listint_t *result, *low, *high;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	printf("== Searching for %d ==\n", value);

	/* Search the first block */
	result = NULL;
	for (low = high = list; high->index < jump; high = high->next)
		if (value == high->n)
			result = high;
	if (result)
	{
		printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);
		printf("Value found between indexes [%ld] and [%ld]\n", low->index, high->index);
		
		for (; low->index <= result->index; low = low->next)
			printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		return (result);
	}
	

	/* Find the block*/
	printf("No result was found in the first block\n");
	for (; high->next; high = high->next, low = low->next)
	{
		if (high->index % jump == 0) /* print at block edges */
			printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);
		if (high->n == value)
		{
			result = high;
			break;
		}
	}
	for (; high->next && high->index % jump != 0; low = low->next)
		high = high->next;
	printf("Value checked at index [%ld] = [%d]\n", high->index, high->n);
	printf("Value found between indexes [%ld] and [%ld]\n", low->index, high->index);

	
	/* No need for Linear Search as we found the value already.. Just mimic */
	for (; low->index <= result->index; low = low->next)
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
	return (result);
}
