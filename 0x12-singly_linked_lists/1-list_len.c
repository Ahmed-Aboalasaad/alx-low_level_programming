#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to the head node
 * Return: #elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	unsigned long counter = 0;

	for (; h; h = h->next, counter++)
	{
	}
	return (counter);
}
