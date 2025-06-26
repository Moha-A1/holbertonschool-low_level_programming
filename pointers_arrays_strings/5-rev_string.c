#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères sur place (in-place).
 * Cela signifie que la chaîne originale est modifiée directement.
 * @s: Un pointeur vers le premier caractère de la chaîne à inverser.
 *
 * Return: Cette fonction ne retourne rien (void). Elle modifie la chaîne
 * directement en mémoire.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;
	char temp_char;

	/*
	 * Première phase : Trouver la longueur de la chaîne.
	 * On parcourt la chaîne en utilisant 'length' comme index jusqu'à
	 * atteindre le null byte ('\0'), qui marque la fin de la chaîne.
	 * Cette boucle ne modifie pas le pointeur 's' lui-même, il reste au début.
	 */
	while (s[length] != '\0')
	{
		length++;
	}

	/*
	 * Deuxième phase : Inverser la chaîne en échangeant les caractères.
	 * On utilise deux indices : 'i' qui commence  (0) et 'j' qui
	 * commence à la fin (length - 1).
	 * La boucle continue tant que 'i' est plus petit que 'j', ce qui assure
	 * que l'on ne parcourt que la moitié de la chaîne.
	 */
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp_char = s[i];

		s[i] = s[j];

		s[j] = temp_char;
	}
}
