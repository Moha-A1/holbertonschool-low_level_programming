#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * La comparaison se fait caractère par caractère.
 * @s1: Le pointeur vers la première chaîne à comparer.
 * @s2: Le pointeur vers la deuxième chaîne à comparer.
 *
 * Return:
 * - 0 si les chaînes sont identiques.
 * - Une valeur négative si s1 est inférieure à s2.
 * - Une valeur positive si s1 est supérieure à s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0; /* Index pour parcourir les chaînes. */

	/*
	 * Boucle 'while' pour comparer les caractères.
	 * La boucle continue tant que les caractères aux positions correspondantes
	 * dans s1 et s2 sont identiques ET que le null byte n'est pas atteint
	 * dans s1 (ce qui implique aussi que s2 n'a pas non plus atteint son
	 * null byte si les caractères sont identiques).
	 */
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++; /* Passe au caractère suivant. */
	}

	/*
	 * Une fois la boucle terminée, cela signifie soit :
	 * 1. Une différence a été trouvée (s1[i] != s2[i]).
	 * 2. La fin des deux chaînes a été atteinte simultanément
	 *    (s1[i] == '\0' et s2[i] == '\0').
	 *
	 * Le résultat est la différence des valeurs ASCII des premiers caractères
	 * qui ne correspondent pas, ou 0 si les deux sont '\0' (chaînes identiques).
	 */
	return (s1[i] - s2[i]);
}
