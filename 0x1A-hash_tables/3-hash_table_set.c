#include "hash_tables.h"

/**
 * copyStr - copies a string into another one
 *
 * @source: the string to be copied
 * Return: a pointer to the newly made string
*/
char *copyStr(const char *source)
{
	int i, length;
	char *result;

	if (!source)
		return (NULL);

	for (i = length = 0; source[i]; i++)
		length++;
	result = malloc(sizeof(*result) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	for (i = 0; i < length; i++)
		result[i] = source[i];
	return (result);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: pointer to the hash table to add to / update a key-value pair in it
 * @key: the key
 * @value: the value
 * Description: Incase of collision, it adds a new node to the list (chainging)
 * Return: 1 if succeeded & 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *tmp, *new;

	if (!ht || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	/* The new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = copyStr(key);
	new->value = copyStr(value);
	new->next = NULL;

	/* Get to the end of the list & add the new node */
	tmp = ht->array[index];
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		ht->array[index] = new;
	return (1);
}
