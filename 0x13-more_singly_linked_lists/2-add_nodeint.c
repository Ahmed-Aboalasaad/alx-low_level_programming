#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * 
 * @head: the list head
 * @n: int to be saved in the new node
 * Return: the address of the new element, or null if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    /* Input Validation */
    if (!head)
        return (NULL);
    
    new = malloc(sizeof(*new));
    if (!new)
        return (NULL);

    new->n = n;
    if (head)
        new->next = *head;
    *head = new;
    return (new);
}
