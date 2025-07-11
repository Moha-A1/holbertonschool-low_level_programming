#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @s: la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copie une chaîne de caractères
 * @dest: la destination
 * @src: la source
 *
 * Return: le pointeur vers la destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers le nouveau chien, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);

	new_d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	_strcpy(new_d->name, name);

	new_d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	_strcpy(new_d->owner, owner);

	new_d->age = age;

	return (new_d);
}
