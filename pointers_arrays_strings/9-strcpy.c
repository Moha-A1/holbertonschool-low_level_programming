#include "main.h"

/**
 * _strcpy - Copie la chaîne pointée par src, y compris le null byte,
 * dans le buffer pointé par dest.
 * @dest: Le pointeur vers le buffer de destination où la chaîne sera
 * copiée.
 * @src: Le pointeur vers la chaîne source à copier.
 *
 * Return: Le pointeur vers dest.
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
