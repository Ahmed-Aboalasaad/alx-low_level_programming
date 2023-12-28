#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 *
 * @key: the string key
 * @size: size of the hash table array
 *
 * Description: Uses the hash_djb2 hashing function
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue;

	if (size == 0 || !key)
		return (0);
	hashValue = hash_djb2(key);
	return (hashValue % size);
}
