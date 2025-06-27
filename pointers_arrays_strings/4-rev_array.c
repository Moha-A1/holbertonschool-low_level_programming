#include "main.h" /* Inclut le fichier d'en-tête principal. */

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * La fonction inverse les éléments du tableau 'a' sur place.
 * Le premier élément est échangé avec le dernier, le deuxième avec
 * l'avant-dernier, etc.
 * @a: Un pointeur vers le premier élément du tableau d'entiers.
 * @n: Le nombre d'éléments dans le tableau.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void reverse_array(int *a, int n)
{
	int i;        /* Index pour parcourir le début du tableau. */
	int j;        /* Index pour parcourir la fin du tableau. */
	int temp_val; /* Variable temporaire pour l'échange de valeurs. */

	/*
	 * La logique est d'utiliser deux pointeurs (ou indices) :
	 * - 'i' commence au début du tableau (index 0).
	 * - 'j' commence à la fin du tableau (index n - 1).
	 *
	 * La boucle continue tant que 'i' est strictement inférieur à 'j'.
	 * Cela garantit que nous échangeons seulement les paires d'éléments
	 * une seule fois et que le ou les éléments du milieu (pour les tableaux
	 * de longueur impaire) ne sont pas touchés inutilement.
	 */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		/*
		 * Étape d'échange :
		 * 1. Stocke la valeur de l'élément au début (a[i]) dans 'temp_val'.
		 * 2. Remplace la valeur de l'élément au début (a[i]) par la valeur de
		 *    l'élément à la fin (a[j]).
		 * 3. Remplace la valeur de l'élément à la fin (a[j]) par la valeur
		 *    stockée dans 'temp_val'.
		 */
		temp_val = a[i]; /* Stocke la valeur de l'élément actuel à gauche. */
		a[i] = a[j];     /* Remplace la valeur de l'élément à gauche
						  * par celle de droite.
						  */
		a[j] = temp_val; /* Remplace la valeur de l'élément à droite par
						  * l'original de gauche.
						  */
	}
}
