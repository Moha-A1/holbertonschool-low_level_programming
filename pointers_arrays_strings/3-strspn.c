#include "main.h"

/**
 * _strchr - Localise un caractère dans une chaîne de caractères.
 * @s: La chaîne de caractères dans laquelle chercher.
 * @c: Le caractère à localiser.
 *
 * Return: Un pointeur vers la première occurrence du caractère c
 * dans la chaîne s,
 *
 */
char *_strchr(char *s, char c)
{

	while (1)
	{
		/*
		 * 1. Vérifie si le caractère actuel (pointé par *s) est celui que tu
		 * cherches (c).
		 */
		if (*s == c)
		{
			/* Si oui ! Retourne l'adresse actuelle du pointeur 's'. */
			return (s);
		}

		/* 2. Si le caractère actuel n'est PAS 'c', vérifie si c'est le '\0' */
		if (*s == '\0')
		{
			/*
			 * Si oui, tu as atteint la fin de la chaîne et 'c' n'a pas été trouvé.
			 */

			return ((char *)0); /* Retourne un pointeur nul. */
		}

		/* 3. Si ce n'est ni 'c' ni '\0', passe au caractère suivant. */
		s++;
	}
}
