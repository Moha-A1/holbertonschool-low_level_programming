#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Exécute une fonction sur chaque élément d'un tableau.
 * @array: Le tableau à parcourir.
 * @size: La taille du tableau.
 * @action: Un pointeur sur la fonction à exécuter.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
