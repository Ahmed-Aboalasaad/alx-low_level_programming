#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * length - counts #elements in the list
 *
 * @h: the list head
 * Return: #elements in the list
*/
int length(listint_t *h)
{
	int count = 1;

	if (!h)
		return (0);

	while (h->next)
		h = h->next, count++;
	return (count);
}

/**
 * reverse_listint - reverses a listint_t linked list
 * only 1 loop and 2 variables are allowed
 * no malloc, free, or arrays
 * @head: the list head
 * Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
    int i;
    listint_t *delete;

    if (!head)
        return (NULL);
    
    for (i = 0; i < length(*head) / 2; i++)
    {
        add_nodeint_end(head, )
    }
        
}