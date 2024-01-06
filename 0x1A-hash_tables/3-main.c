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

	ht = hash_table_create(30);
	hash_table_set(ht, "Germany", "Berlin");
	hash_table_set(ht, "China", "Geijing");

	printHT(ht);
	printf("FINISHED SETTING\n");
	return (EXIT_SUCCESS);
}
