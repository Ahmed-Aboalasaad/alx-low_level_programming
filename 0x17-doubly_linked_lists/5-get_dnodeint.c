#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t list
 *
 * @head: the list head
 * @index: the index to get the node at (starts from 0)
 * Return: pointer to the desired node or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	for (; index > 0; index--)
		if (head->next)
			head = head->next;
		else
			return (NULL);
	return (head);
}
