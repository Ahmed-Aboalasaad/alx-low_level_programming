#include "lists.h"

/**
 * dlistint_len - returns #elements in a linked dlistint_t list
 *
 * @h: the list head
 * Return: #elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	if (!h)
		return (0);
	for (counter = 0; h; h = h->next)
		counter++;
	return (counter);
}
