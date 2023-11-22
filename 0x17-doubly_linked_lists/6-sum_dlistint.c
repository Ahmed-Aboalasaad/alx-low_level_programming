#include "lists.h"

/**
 * sum_dlistint - sums the data in a dlistint_t list
 *
 * @head: the list head
 * Return: the sum (0 if the list is empty)
*/
int sum_dlistint(dlistint_t *head)
{
	long sum;

	if (!head)
		return (0);
	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
