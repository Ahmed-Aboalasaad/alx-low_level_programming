#include "hash_tables.h"

/**
 * freeNode - frees a hash table node
 *
 * @head: a pointer to the node head
 * Return: void
 */
void deleteNode(hash_node_t *head)
{
	hash_node_t *last, *beforeLast;

	while (head)
	{
		/* position @last on the head and take steps to the last element */
		for (last = beforeLast = head; last->next; last = last->next)
			beforeLast = last;
		beforeLast->next = NULL;
		free(last->key);
		free(last->value);
		free(last);
		if (beforeLast == last)
			return;
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
		deleteNode(ht->array[i]);
	free(ht->array);
	free(ht);
}
