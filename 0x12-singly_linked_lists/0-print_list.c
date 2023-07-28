#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of
 * a list_t list
 *
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long counter = 0;

	for (; h; h = h->next, counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (counter);
}
