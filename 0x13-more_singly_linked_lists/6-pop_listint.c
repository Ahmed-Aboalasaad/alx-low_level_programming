#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *
 * @head: the list head
 * Return: the head node’s data (n), or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
    /* I need to validate the input but I don't know */
    /* what to return if it's not valid */

    listint_t *top;
    int n;

    if (!(*head)) /* empty list */
        return (0);

    top = *head;
    n = top->n;
    *head = ((*head)->next) ? (*head)->next : NULL;
    free(top);
    return (n);
}
