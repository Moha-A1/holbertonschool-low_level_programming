# include "main.h"
# include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau et l'initialise à zéro.
 * @nmemb: Le nombre d'éléments.
 * @size: La taille de chaque élément.
 *
 * Return: Un pointeur vers la mémoire allouée, ou NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
