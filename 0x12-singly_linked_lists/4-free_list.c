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
	list_t *tmp;

	if (!head) /* if no nodes exist */
		return;

	while (head)
	{
		tmp = head;
		/* go to the last node */
		while (tmp->next)
			tmp = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
