#include <stdlib.h>
#include "main.h"

/**
 * array_range - Crée un tableau d'entiers contenant une plage de valeurs.
 * @min: La première valeur à inclure dans le tableau.
 * @max: La dernière valeur à inclure dans le tableau.
 *
 * Return: Un pointeur vers le nouveau tableau, ou NULL en cas d'échec.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
