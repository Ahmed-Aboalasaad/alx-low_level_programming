#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * firstBlockHelper - Searches the first block for jump_list()
 *
 * @list: the list
 * @size: #elements in the list
 * @value: the value to search for
 * @low: pointer to the low pointer of jump_list()
 * @high: pointer ot the high pointer of jump_list()
 *
 * Return: pointer to the found node, NULL otherwise
 */
listint_t *firstBlockHelper(listint_t *list, size_t size, int value,
						listint_t **low, listint_t **high)
{
	size_t jump;
	listint_t *result;

	jump = sqrt(size);
	result = NULL;
	for ((*low) = (*high) = list; (*high)->index < jump;
								(*high) = (*high)->next)
		if (value == (*high)->n)
			result = (*high);
	if (!result)
		return (NULL);
	printf("Value checked at index [%ld] = [%d]\n",
			(*high)->index, (*high)->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
			(*low)->index, (*high)->index);

	for (; (*low)->index <= result->index; (*low) = (*low)->next)
		printf("Value checked at index [%ld] = [%d]\n", (*low)->index, (*low)->n);
	return (result);
}

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

	/* Search the first block */
	jump = sqrt(size);
	result = firstBlockHelper(list, size, value, &low, &high);
	if (result)
		return (result);

	/* Find the block*/
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
	for (; low->index % jump != 0; low = low->next)
		if (high->next)
			high = high->next;
	printf("Value checked at index [%ld] = [%d]\n",
							high->index, high->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
							low->index, high->index);
	if (!result)
		return (NULL);
	for (; low->index <= result->index; low = low->next)
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
	return (result);
}
