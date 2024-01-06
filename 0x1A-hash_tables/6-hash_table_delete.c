#include "hash_tables.h"

/**
 * freeNode - frees a hash table node
 *
 * @head: a pointer to the node head
 * Return: void
 */
void deleteNode(hash_node_t **head)
{
	hash_node_t *last, *beforeLast;

	if (!head)
		return;
	if (!(*head))
		return;

	while (head)
	{
		/* Go to the last 2 */
		for (last = beforeLast = *head; last->next; last = last->next)
			beforeLast = last;
		beforeLast->next = NULL;
		// printf("Freed key: %s & value: %s\n", last->key, last->value);
		free(last->key);
		free(last->value);
		free(last);
		if (beforeLast == last)
		{
			*head = NULL;
			return;
		}
	}
}

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		deleteNode(&(ht->array[i]));
	printf("Nodes finished\n");
	free(ht->array);
	free(ht);
	printf("Fninshed Deleting :)\n");
}
