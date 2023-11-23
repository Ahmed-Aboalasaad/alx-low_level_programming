#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index to a dlistint_t list
 *
 * @head: pointer to the head pointer of the list
 * @index: the index to remove the node at
 * Return: 1 if succeeded, -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!head) /* No head pointer */
		return (-1);
	if (!(*head)) /* No nodes */
		return (-1);

	if (index == 0) /* Delete the first node */
	{
		if (!(*head)->next) /* if it's the only one */
			*head = NULL;
		else
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		return (1);
	}

	for (tmp = *head; index > 0; index--)
		if (tmp->next)
			tmp = tmp->next;
		else
			return (-1);
	if (tmp->next == NULL) /* Delete the last node */
	{
		tmp->prev->next = NULL;
		free(tmp);
	}
	else /* Delete a node in the middle of the list */
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
