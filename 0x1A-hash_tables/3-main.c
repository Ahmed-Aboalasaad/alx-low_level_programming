#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "1");
	hash_table_set(ht, "mentioner", "2");
	hash_table_set(ht, "heliotropes", "3");
	hash_table_set(ht, "neurospora", "4");
	hash_table_set(ht, "depravement", "5");
	hash_table_set(ht, "serafins", "6");
	hash_table_set(ht, "depravement", "500");
	hash_table_set(ht, "serafins", "600");
	printHT(ht);

	return (EXIT_SUCCESS);
}
