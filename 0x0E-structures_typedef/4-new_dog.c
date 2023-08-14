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
	int i, nameCharCount = 0, ownerCharCount = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	/* check nulls */
	if (name == NULL || name[0] == '\0' || owner == NULL || owner[0] == '\0')
		return (NULL);
	if (dog == NULL)
		return (NULL);

	/* Name */
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

	/* Owner */
	for (i = 0; owner[i]; i++)
		ownerCharCount++;
	dog->owner = malloc(sizeof(*(dog->owner)) * ownerCharCount);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner[ownerCharCount] = '\0';
	for (i = 0; i < ownerCharCount; i++)
		dog->owner[i] = owner[i];

	/* Age */
	dog->age = age;

	return (dog);
}
