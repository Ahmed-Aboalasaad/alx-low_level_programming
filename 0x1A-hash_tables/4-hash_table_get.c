#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: the key you're looking for
 * Return: the value associated with teh key, or NULL if it wasn't found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *j;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (j = ht->array[index]; j; j = j->next)
		if (equal(j->key, key))
			return (j->value);
	return (NULL);
}
