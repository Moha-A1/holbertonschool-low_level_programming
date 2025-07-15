#include "function_pointers.h"

/**
 * int_index - Cherche un entier dans un tableau.
 * @array: Le tableau dans lequel chercher.
 * @size: Le nombre d'éléments dans le tableau.
 * @cmp: Un pointeur sur la fonction de comparaison à utiliser.
 *
 * Return: L'index du premier élément pour lequel cmp ne retourne pas 0,
 * ou -1 si aucune correspondance n'est trouvée ou si size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Vérification de sécurité pour les pointeurs et la taille */
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	/* Boucle pour parcourir chaque élément du tableau */
	for (i = 0; i < size; i++)
	{
		/* Si la fonction de comparaison retourne une valeur non nulle (vrai) */
		if (cmp(array[i]) != 0)
		{
			/* On retourne l'index actuel */
			return (i);
		}
	}

	/* Si la boucle se termine sans trouver de correspondance, on retourne -1 */
	return (-1);
}
