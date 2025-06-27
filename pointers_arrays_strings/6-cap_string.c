#include "main.h"

/**
 * cap_string - Met en majuscule toutes les premières lettres des mots.
 * @str: Pointeur vers la chaîne à modifier.
 *
 * Return: Pointeur vers la chaîne modifiée (str).
 */
char *cap_string(char *str)
{
	int i = 0; /* Index pour parcourir la chaîne. */
	/*
	 * Flag pour déterminer si le prochain caractère doit être capitalisé.
	 * Initialisé à 1 car le premier mot doit toujours être capitalisé.
	 */
	int capitalize_next_char = 1;

	/* Boucle pour parcourir la chaîne jusqu'au null byte. */
	while (str[i] != '\0')
	{
		/* Vérifie si le caractère actuel est un séparateur de mot. */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			/* Si c'est un séparateur, le prochain non-séparateur
			 * devrait être capitalisé.
			 */
			capitalize_next_char = 1;
		}
		else /* Si le caractère n'est PAS un séparateur. */
		{
			/* Si le flag de capitalisation est actif. */
			if (capitalize_next_char)
			{
				/* Si c'est une minuscule, la convertir en majuscule. */
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32; /* Convertit minuscule en majuscule. */
					capitalize_next_char = 0; /* Désactive le flag. */
				}
				/* Si c'est déjà une majuscule. */
				else if (str[i] >= 'A' && str[i] <= 'Z')
				{
					capitalize_next_char = 0; /* Désactive le flag. */
				}
				/* Si c'est un chiffre. */
				else if (str[i] >= '0' && str[i] <= '9')
				{
					capitalize_next_char = 0; /* Désactive le flag. */
				}
			}
		}
		i++; /* Passe au caractère suivant. */
	}

	/* Retourne le pointeur vers la chaîne modifiée. */
	return (str);
}
