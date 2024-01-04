#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to the hash table
 * Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	char printedBefore;
	unsigned long i;
	hash_node_t *j;

	if (!ht)
		return;
	printf("{");
	for (i = 0, printedBefore = 0; i < ht->size; i++)
	{
		for (j = ht->array[i]; j; j = j->next)
		{
			if (printedBefore)
				printf(", ");
			printf("'%s': '%s'", j->key, j->value);
			printedBefore = 1;
		}
	}
	printf("}\n");
}
