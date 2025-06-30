#include "main.h"
/**
 * _memcpy - Copie 'n' octets de la mémoire source vers la mémoire
 * destination.
 * @dest: Pointeur vers la zone mémoire de destination.
 * @src: Pointeur vers la zone mémoire source.
 * @n: Le nombre d'octets à copier.
 *
 * Return: Un pointeur vers la zone mémoire de destination (dest).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i; /* Index pour parcourir la mémoire. */
/* Boucle pour copier 'n' octets de 'src' vers 'dest'. */
	for (i = 0; i < n; i++)
	{
	dest[i] = src[i]; /* Copie l'octet de 'src' vers 'dest'. */
	}
/* Retourne le pointeur vers la zone mémoire de destination. */
return (dest);
}
