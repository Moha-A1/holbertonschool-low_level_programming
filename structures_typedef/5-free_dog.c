#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libère la mémoire d'un chien
 * @d: pointeur vers le chien à libérer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
