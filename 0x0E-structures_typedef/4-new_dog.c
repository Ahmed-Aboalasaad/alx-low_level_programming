#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: a dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nameCharCount = 0, ownerCharCount = 0, failure;
	dog_t *dog = malloc(sizeof(dog_t));

	failure = (name == NULL || owner == NULL);
	failure = failure || (dog == NULL);
	if (failure)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;

	for (i = 0; name[i]; i++)
		nameCharCount++;
	dog->name = malloc(sizeof(*(dog->name)) * nameCharCount + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name[nameCharCount] = '\0';
	for (i = 0; i < nameCharCount; i++)
		dog->name[i] = name[i];

	for (i = 0; owner[i]; i++)
		ownerCharCount++;
	dog->owner = malloc(sizeof(*(dog->owner)) * ownerCharCount + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner[ownerCharCount] = '\0';
	for (i = 0; i < ownerCharCount; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
