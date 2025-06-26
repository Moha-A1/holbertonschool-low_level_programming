#include "main.h"
/**
 * puts_half - Affiche la deuxième moitié d'une chaîne de caractères.
 * Si le nombre de caractères est impair, la fonction affiche les
 * (length - 1) / 2 derniers caractères.
 * @str: Un pointeur vers le premier caractère de la chaîne à afficher.
 *
 * Return: Cette fonction ne retourne rien (void).
 */
void puts_half(char *str)
{
	int length = 0;
	int n;


	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0) /* Si la longueur est paire */
	{
		n = length / 2;
	}
	else /* Si la longueur est impaire */
	{
		n = (length + 1) / 2; /* Pour que le milieu soit inclus */

	}


	while (str[n] != '\0')
	{
	_putchar(str[n]);
		n++;
	}


	_putchar('\n');
}
