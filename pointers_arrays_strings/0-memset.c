#include "main.h"
/**
 * _memset - Remplit les premiers 'n' octets de la zone mémoire pointée
 * par 's' avec le caractère constant 'b'.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: Le caractère constant à utiliser pour remplir la mémoire.
 * @n: Le nombre d'octets à remplir.
 *
 * Return: Un pointeur vers la zone mémoire remplie.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* Index pour parcourir la zone mémoire. */
	/* Boucle pour remplir les 'n' premiers octets de la zone mémoire. */
	for (i = 0; i < n; i++)
	{
		s[i] = b; /* Remplit l'octet actuel avec le caractère 'b'. */
	}
	/* Retourne le pointeur vers la zone mémoire remplie. */
	return (s);
}
