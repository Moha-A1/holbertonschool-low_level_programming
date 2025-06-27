#include "main.h"

/**
 * string_toupper - Change toutes les lettres minuscules d'une chaîne
 * en majuscules.
 * La conversion se fait directement sur la chaîne d'origine (sur place).
 * @str: Un pointeur vers le premier caractère de la chaîne à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée (le même pointeur que 'str').
 */
char *string_toupper(char *str)
{
	int i = 0; /* Index pour parcourir la chaîne. */

	/* Boucle 'while' pour parcourir la chaîne jusqu'au null byte ('\0'). */
	while (str[i] != '\0')
	{
		/*
		 * Vérifie si le caractère actuel est une lettre minuscule.
		 * Les lettres minuscules en ASCII sont comprises entre 'a' et 'z'.
		 */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/*
			 * Convertit la lettre minuscule en majuscule.
			 * La différence entre une lettre minuscule et sa majuscule correspondante
			 * en ASCII est une valeur constante (par exemple, 'a' - 'A' = 32).
			 * Pour convertir minuscule -> majuscule, on soustrait cette différence.
			 * Ou, plus simplement, on peut soustraire la valeur ASCII de 'a' et
			 * ajouter la valeur ASCII de 'A'.
			 * Exemple: 'a' (97) -> 'A' (65) = 97 - 32 = 65
			 */
			str[i] = str[i] - 32; /* La différence entre 'a' et 'A' est 32. */
		}
		i++; /* Passe au caractère suivant. */
	}

	/* La fonction doit retourner un pointeur vers la chaîne modifiée. */
	return (str);
}
