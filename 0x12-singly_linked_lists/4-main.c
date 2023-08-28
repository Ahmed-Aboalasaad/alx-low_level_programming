#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	printf("freeing\n");
	free_list(head);
	printf("freed\n");
	head = NULL;
	return (0);
}
