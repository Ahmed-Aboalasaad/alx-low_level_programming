#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 *
 * @head: the list head
 * @index: the index at which the node to be returned lies
 * Return: the nth node of a listint_t linked list, or NULL if it
 * doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/* Input Validation */
	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (!(head->next))
			return (NULL);
		head = head->next;
	}
	return (head);
}
