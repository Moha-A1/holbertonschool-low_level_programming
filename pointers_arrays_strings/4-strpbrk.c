#include "main.h"

/**
 * _strpbrk - Recherche la première occurrence dans une chaîne 's'
 * de n'importe quel octet de la chaîne 'accept'.
 * @s: La chaîne de caractères principale à parcourir.
 * @accept: La chaîne de caractères contenant les octets à rechercher.
 *
 * Return: Un pointeur vers l'octet dans 's' qui correspond à l'un des octets
 * dans 'accept', ou (char *)0 si aucun tel octet n'est trouvé.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a_ptr;


	while (*s != '\0')
	{
		a_ptr = accept;

		while (*a_ptr != '\0')
		{
			if (*s == *a_ptr)
			{
				return (s);
			}
			a_ptr++;
		}


		s++;
	}


	return ((char *)0); /* Retourne un pointeur nul (équivalent de NULL). */
}
