#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure dog à initialiser
 * @name: nom à initialiser
 * @age: âge à initialiser
 * @owner: propriétaire à initialiser
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Vérification de sécurité : on s'assure que le pointeur n'est pas NULL */
	if (d != NULL)
	{
		/* On utilise la flèche (->) pour accéder aux membres de la structure */
		/* car 'd' est un POINTEUR vers la structure. */

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
