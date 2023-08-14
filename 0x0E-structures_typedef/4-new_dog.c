#include "dog.h"
#include <stdlib.h>

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
	dog_t dog;
	dog_t *dogy = &dog;

	for (i = 0; name[i]; i++)
		nameCharCount++;
	dogy->name = malloc(sizeof(char) * nameCharCount);
	if (dogy->name == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nameCharCount; i++)
		dogy->name[i] = name[i];

	for (i = 0; owner[i]; i++)
		ownerCharCount++;
	dogy->owner = malloc(sizeof(char) * ownerCharCount);
	if (dogy->owner == NULL)
	{
		free(dogy->name);
		return (NULL);
	}
	for (i = 0; i < ownerCharCount; i++)
		dogy->owner[i] = owner[i];

	dogy->age = age;

	return (dogy);
}
