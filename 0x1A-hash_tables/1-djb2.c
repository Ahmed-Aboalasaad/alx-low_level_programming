#include "hash_tables.h"

/**
 * hash_djb2 - the djb2 algorithm hashing function
 *
 * @str: the string to be hashed
 * Return: the hash value of @str
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	if (!str)
		return (0);
	hash = 5381;
	for (; *str; str++)
		hash = hash * 33 + (*str);
	return (hash);
}
