#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: a pointer to the head pointer of the list
 * @str: a pointer to the string to be assigned to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	/* make a new node and fill its members */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = 0;
	for (; str[i]; i++)
		new->len++;
	new->next = *head;
	*head = new;
	return (new);
}
