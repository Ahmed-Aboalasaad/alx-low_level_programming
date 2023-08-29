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

	while (head)
	{
		last = head;
		while (last->next)
		{
			before_last = last;
			last = last->next;
		}
		if (last == head)
			head = NULL;
		free(last);
		before_last->next = NULL;
	}
}
