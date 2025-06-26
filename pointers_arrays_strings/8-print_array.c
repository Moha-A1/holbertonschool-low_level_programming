#include "main.h"
#include <stdio.h>
/**
 * print_array - Affiche 'n' éléments d'un tableau d'entiers,
 * séparés par une virgule et un espace, suivis d'un saut de ligne.
 * Les nombres sont affichés dans l'ordre où ils apparaissent
 * dans le tableau.
 * @a: Un pointeur vers le premier élément du tableau d'entiers.
 * @n: Le nombre d'éléments du tableau à afficher.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);


		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
