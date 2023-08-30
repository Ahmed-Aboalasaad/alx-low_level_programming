#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: the list head
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *last, *before_last;

	if (!head)
		return;

	while (*head)
	{
		last = *head;
		while (last->next)
		{
			before_last = last;
			last = last->next;
		}
		before_last->next = NULL;
		free(last);
		if (last == before_last)
			*head = NULL;
	}
}
