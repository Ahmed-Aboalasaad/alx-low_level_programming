#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list
 *
 * @h: the list head
 * Return: #nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int counter;

	if (!h)
		return (0);
	for (counter = 0; h; h = h->next, counter++)
		printf("%d\n", h->n);
	return (counter);
}
