#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	printf("dog size: %lu\n", sizeof(float) + 2 * sizeof(char *));

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	printf("freee in main\n");
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
