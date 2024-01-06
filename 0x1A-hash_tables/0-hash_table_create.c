#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the table size
 * Return: a pointer to the created hash table,
 * or NULL if something wrong happened.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(*(ht->array)) * size);
	if (!(ht->array))
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
