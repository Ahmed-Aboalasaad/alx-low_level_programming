#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts #elements in the list
 *
 * @h: the list head
 * Return: #elements in the list
*/
size_t length(listint_t *h)
{
	int count = 1;

	if (!h)
		return (0);

	while (h->next)
		h = h->next, count++;
	return (count);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the list head
 * @idx: the index to insert at
 * @n: the node content to insert
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *previous;

	/* Input Validation */
	if (!head || idx > length(*head))
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0) /* 0 corner case */
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	previous = *head;
	for (i = 0; i < idx - 1; i++)
		previous = previous->next;
	new->next = previous->next;
	previous->next = new;
	return (new);
}
