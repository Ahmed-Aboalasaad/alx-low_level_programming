#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: the list head
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	for (tmp = head; head->next; head = tmp)
	{
		tmp = head->next;
		free(head);
	}
	free(head);
}
