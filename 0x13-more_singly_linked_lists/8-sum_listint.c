#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 *
 * @head: the list head
 * Return: the sum, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	sum = 0;
	while (head->next)
		sum += head->n, head = head->next;
	sum += head->n;
	return (sum);
}
