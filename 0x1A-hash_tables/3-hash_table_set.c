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
 * equal - check if the given string are identical
 *
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if they're identical, 0 otherwise
*/
int equal(const char *s1, const char *s2)
{
	int i, len1, len2;

	if (!s1 || !s2)
		return (0);

	/* Check Lengths */
	for (i = len1 = 0; s1[i]; i++)
		len1++;
	for (i = len2 = 0; s2[i]; i++)
		len2++;
	if (len2 != len1)
		return (0);

	/* Check Values */
	for (i = 0; i < len1; i++)
		if (s1[i] != s2[i])
			return (0);

	/* passed the tests */
	return (1);
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
	tmp = ht->array[index];
	if (!tmp) /* no nodes yet in this slot.. allocate one and add it */
	{
		new = malloc(sizeof(*new));
		if (!new)
			return (0);
		new->key = copyStr(key);
		new->value = copyStr(value);
		new->next = NULL;
		ht->array[index] = new;
		return (1);
	} /* There is at least one node */
	for (; tmp->next; tmp = tmp->next)
	{
		if (equal(tmp->key, key)) /* if it was added before, just update it */
		{
			tmp->value = copyStr(value);
			return (1);
		}
	} /* Now, I'm pointing to the last node in the list */

	if (equal(tmp->key, key)) /* Either update the if it has the same key */
		tmp->value = copyStr(value);
	else /* or add a new one */
	{
		new = malloc(sizeof(*new));
		if (!new)
			return (0);
		new->key = copyStr(key);
		new->value = copyStr(value);
		new->next = NULL;
		tmp->next = new;
	}
	return (1);
}
