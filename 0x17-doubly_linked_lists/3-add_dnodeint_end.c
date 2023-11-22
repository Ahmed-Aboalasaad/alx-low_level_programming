#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: pointer to the head pointer
 * @n: the number to reside in the new node
 * Return: the address of the new element or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		for (tmp = *head; tmp->next; )
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
