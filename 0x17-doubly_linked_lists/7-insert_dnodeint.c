#include "lists.h"

/**
 * dlistint_len - returns #elements in a linked dlistint_t list
 *
 * @h: the list head
 * Return: #elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	if (!h)
		return (0);
	for (counter = 0; h; h = h->next)
		counter++;
	return (counter);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the head pointer of the list
 * @idx: the index to insert at (starts at 0)
 * @n: the number to reside in the newly inserted node
 * Return: The address of the new node and NULL if it fails
 * or if it's not possible to add a node at the given index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	size_t len;

	if (!h)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0) /* Insert it at the beginning */
	{
		if (!*h)
			new->next = new->prev = NULL;
		else
			new->next = *h, (*h)->prev = new;
		*h = new;
		return (new);
	}

	len = dlistint_len(*h);
	if (idx == len) /* Insert it at the end*/
	{
		for (tmp = *h; tmp->next; )
			tmp = tmp->next;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}

	if (idx > len) /* Index out of range */
		return (NULL);
	/* Insert it in between the head & tail */
	for (tmp = *h; idx > 1; idx--)
		tmp = tmp->next;
	new->next = tmp->next, tmp->next->prev = new;
	new->prev = tmp, tmp->next = new;
	return (new);
}
