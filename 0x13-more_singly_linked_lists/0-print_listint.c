#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements in a listint_t list
 *
 * @h: the head of the list
 * Return: #nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 1;

	if (!h)
		return (0);

	printf("%d\n", h->n);
	while (h->next)
	{
		h = h->next;
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
