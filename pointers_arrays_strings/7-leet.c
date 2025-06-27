#include "main.h" 
/**
 * leet - Encode une chaîne de caractères en "1337speak" (Leet Speak).
 * Remplace certaines lettres par des chiffres correspondants.
 * La modification est effectuée directement sur la chaîne d'origine (sur place).
 * @str: Un pointeur vers le premier caractère de la chaîne à
 * encoder.
 *
 * Return: Un pointeur vers la chaîne modifiée (le même pointeur que 'str').
 */
char *leet(char *str)
{
	int i; /* Index pour parcourir la chaîne d'entrée 'str'. */
	int j; /* Index pour parcourir les tableaux de correspondance
			* (lookup tables).
			*/

	/* Tableaux de caractères à remplacer (minuscules et majuscules). */
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	/* Tableaux des caractères de remplacement correspondants (chiffres). */
	char leet_codes[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	/*
	 * Première boucle : Parcourir la chaîne d'entrée ('str') jusqu'au
	 * null byte.
	 */
	for (i = 0; str[i] != '\0'; i++)
	{
		/*
		 * Deuxième boucle : Parcourir les tableaux de correspondance.
		 * On vérifie si le caractère actuel de 'str' correspond à une lettre à
		 * remplacer.
		 * La boucle s'exécute 10 fois (pour les 10 caractères dans 'letters').
		 */
		for (j = 0; j < 10; j++)
		{
			/*
			 * C'est le SEUL 'if' autorisé.
			 * Vérifie si le caractère actuel de la chaîne correspond à une lettre à remplacer.
			 */
			if (str[i] == letters[j])
			{
				/* Si correspondance trouvée, remplace le caractère dans 'str'
				 * par le code leet correspondant.
				 */
				str[i] = leet_codes[j];
				break; /* Sort de la deuxième boucle (interne) car la substitution est faite
						 * et on passe au caractère suivant de la chaîne principale.
						 */
			}
		}
	}

	/* La fonction retourne un pointeur vers la chaîne modifiée. */
	return (str);
}
