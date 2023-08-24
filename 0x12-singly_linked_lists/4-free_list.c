#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: a pointer to the list head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last, *before_last;

	if (!head) /* if no nodes exist */
		return;

	last = head;
	while (head)
	{
		last = head;
		while (last->next)
		{
			before_last = last;
			last = last->next;
		}
		before_last->next = NULL;
		free(last->str);
		free(last);
		if (before_last == last)
			head = NULL;
	}
}
