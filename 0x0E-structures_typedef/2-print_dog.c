#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a stuct dog
 *
 * @d: the dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\nOwner: %s\n", d->age, d->owner);
}
