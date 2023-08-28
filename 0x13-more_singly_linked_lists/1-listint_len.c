#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts #elements in the list
 *
 * @h: the list head
 * Return: #elements in the list
*/
size_t listint_len(const listint_t *h)
{
    int count = 1;

	if (!h)
		return (0);

	while (h->next)
		h = h->next, count++;
	return (count);
}
