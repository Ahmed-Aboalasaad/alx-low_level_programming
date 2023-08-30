#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * length - counts #elements in the list
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
 * delete_nodeint_at_index - deletes the node at index index of a list
 *
 * @head: the list head
 * @index: the indes to delete from
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i, idx;
	listint_t *before, *after, *delete;

	if (!head || index >= length(*head))
		return (-1);

	if (index == 0) /* Remove the first node */
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}

	/* Remove middle / last node */
	idx = index;
	before = *head;
	for (i = 0; i < idx - 1; i++)
		before = before->next;
	after = before->next->next;
	free(before->next);
	before->next = after;
	return (1);
}
