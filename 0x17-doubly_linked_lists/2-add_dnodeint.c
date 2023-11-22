#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the list head pointer
 * @n: the data to reside in the new node
 * Return: the address of the new node or NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
