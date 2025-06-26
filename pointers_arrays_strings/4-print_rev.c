#include "main.h"


/**
 * print_rev - Affiche une chaîne de caractères en sens inverse,
 * suivie d'un saut de ligne.
 * @s: Un pointeur vers le premier caractère de la chaîne à inverser et à
 * afficher.
 *
 * Return: Cette fonction ne retourne rien (void), car son rôle est d'afficher
 * directement les caractères.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
