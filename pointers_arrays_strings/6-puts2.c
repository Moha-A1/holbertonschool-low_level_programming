#include "main.h"

/**
 * puts2 - Affiche chaque deuxième caractère d'une chaîne,
 * en commençant par le premier caractère (index 0),
 * suivie d'un saut de ligne.
 * @str: Un pointeur vers le premier caractère de la chaîne à afficher.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{

		_putchar(str[i]);

	}
	_putchar('\n');
}
