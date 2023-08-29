#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 *
 * @head: the list head
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *last, *before_last;

	if (!head)
		return;

	while (1)
	{
		last = head;
		while (last->next)
		{
			before_last = last;
			last = last->next;
		}
		before_last->next = NULL;
		free(last);
		if (last == before_last)
			break;
	}
}
