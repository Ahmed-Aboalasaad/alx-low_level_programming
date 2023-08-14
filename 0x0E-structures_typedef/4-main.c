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

	my_dog = new_dog("poppy", 3.5, "Bob");
	if (new_dog == NULL)
		printf("failed\n");
	else
	{
		printf("My name is %s, and I am %.1f for the owner %s:) - Woof!\n\n", my_dog->name, my_dog->age, my_dog->owner);

		printf("freee in main\n\n");
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
	}
	return (0);
}
