#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

char isPalindrome(int x)
{
	dlistint_t *head;

	for (head = NULL; x > 0; x /= 10)
		add_dnodeint(&head, x % 10);

	int len = dlistint_len(head);
	while(len > 1 && head->n == get_dnodeint_at_index(head, len - 1)->n)
	{
		delete_dnodeint_at_index(&head, len - 1);
		delete_dnodeint_at_index(&head, 0);
		len -= 2;
	}
	free_dlistint(head);
	return ((len > 1) ? '\0' : '1');
}

int main()
{
	int max = 0;

	for (int i = 999; i >= 0; i--)
		for (int j = 999; j >= 0; j--)
			if (i * j > max)
				if (isPalindrome(i * j))
					max = i * j;
	printf("Max: %d\n", max);

	return (0);
}
