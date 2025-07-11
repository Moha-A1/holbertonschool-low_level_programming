#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(strlen(name) + 1);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	strcpy(new_d->name, name);

	new_d->owner = malloc(strlen(owner) + 1);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	strcpy(new_d->owner, owner);

	new_d->age = age;

	return (new_d);
}
