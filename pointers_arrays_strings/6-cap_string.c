#include "main.h" /* Inclut le fichier d'en-tête principal. */

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
			/* Si nous devons capitaliser le prochain caractère ET que le caractère actuel
			 * est une lettre minuscule, alors convertissons-la.
			 */
			if (capitalize_next_char && (str[i] >= 'a' && str[i] <= 'z'))
			{
				/* Convertit la lettre minuscule en majuscule en soustrayant 32 (différence ASCII). */
				str[i] = str[i] - 32;
				/* Puisque nous avons capitalisé le début d'un mot,
				 * les caractères suivants dans ce même mot ne doivent pas être capitalisés.
				 */
				capitalize_next_char = 0;
			}
			/* Si 'capitalize_next_char' était vrai mais que le caractère actuel n'était pas
			 * une minuscule (par exemple, c'était une majuscule ou un chiffre), cela signifie
			 * que le mot a commencé et qu'il n'y a plus besoin de capitaliser la suite du mot.
			 */
			else if (capitalize_next_char && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				/* C'est déjà une majuscule, donc c'est le début d'un mot.
				 * On désactive le flag pour ne pas capitaliser le reste du mot.
				 */
				capitalize_next_char = 0;
			}
			/* Note: Si capitalize_next_char est déjà 0 (nous sommes au milieu d'un mot)
			 * et que ce n'est pas un séparateur, nous ne faisons rien, le caractère reste tel quel.
			 */
		}
		i++; /* Passe au caractère suivant. */
	}

	/* La fonction retourne un pointeur vers la chaîne modifiée. */
	return (str);
}
