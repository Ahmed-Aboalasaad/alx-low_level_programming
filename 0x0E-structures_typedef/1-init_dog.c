#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the dog
 * @name: the name
 * @age: its age
 * @owner: its owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->age = age;
    d->name = name;
    d->owner = owner;
}
