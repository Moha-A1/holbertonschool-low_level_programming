#include "main.h"

/**
 * cap_string - Met en majuscule toutes les premières lettres des mots d'une chaîne.
 * Les mots sont séparés par un ensemble défini de caractères (espaces, ponctuation, etc.).
 * La modification est effectuée directement sur la chaîne d'origine (sur place).
 * @str: Un pointeur vers le premier caractère de la chaîne à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée (le même pointeur que 'str').
 */
char *cap_string(char *str)
{
	int i = 0; /* Index pour parcourir la chaîne. */
	/* Flag (indicateur) pour déterminer si le prochain caractère doit être capitalisé.
	 * Initialisé à 1 (vrai) car le tout premier mot de la chaîne doit toujours être capitalisé.
	 */
	int capitalize_next_char = 1;

	/* Boucle 'while' pour parcourir la chaîne jusqu'au null byte ('\0'). */
	while (str[i] != '\0')
	{
		/* Vérifie si le caractère actuel est l'un des séparateurs de mots. */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			/* Si c'est un séparateur, le prochain caractère rencontré
			 * qui n'est pas un séparateur devrait être capitalisé.
			 */
			capitalize_next_char = 1;
		}
		else /* Si le caractère actuel n'est PAS un séparateur */
		{
			/* Si nous devons capitaliser le prochain caractère */
			if (capitalize_next_char)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					/* Convertit la lettre minuscule en majuscule en soustrayant 32 (différence ASCII). */
					str[i] = str[i] - 32;
					/* Désactive le flag car le mot a commencé et la capitalisation a été appliquée. */
					capitalize_next_char = 0;
				}
				else if (str[i] >= 'A' && str[i] <= 'Z')
				{
					/* C'est déjà une majuscule, donc c'est le début d'un mot.
					 * On désactive le flag pour ne pas capitaliser le reste du mot.
					 */
					capitalize_next_char = 0;
				}
				else if (str[i] >= '0' && str[i] <= '9')
				{
					/* C'est un chiffre. Les chiffres ne sont pas des séparateurs,
					 * et une séquence de chiffres agit comme le début d'un segment
					 * qui ne doit pas être capitalisé. On désactive le flag pour
					 * empêcher la capitalisation de la lettre suivante (si elle n'est pas précédée
					 * par un vrai séparateur).
					 */
					capitalize_next_char = 0;
				}
				/* Si le caractère n'est ni lettre ni chiffre, et n'est pas un séparateur
				 * (par exemple, '#', '$', '&', etc.), le flag 'capitalize_next_char'
				 * reste '1' s'il était déjà '1'. Cela signifie que le prochain caractère alphabétique
				 * après ce symbole serait capitalisé, ce qui est généralement le comportement attendu.
				 */
			}
			/* Si capitalize_next_char est déjà 0 (nous sommes au milieu d'un mot, ou après
			 * un chiffre ou une majuscule), nous ne faisons rien, le caractère reste tel quel.
			 */
		}
		i++; /* Passe au caractère suivant. */
	}

	/* La fonction retourne un pointeur vers la chaîne modifiée. */
	return (str);
}
