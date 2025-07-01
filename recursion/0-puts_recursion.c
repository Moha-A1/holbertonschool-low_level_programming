#include "main.h"
/**
 * _puts_recursion - Imprime une chaîne de caractères suivie d'un retour
 * à la ligne.
 * @s: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Cette fonction utilise la récursion pour imprimer chaque caractère de la
 * chaîne jusqu'à ce qu'elle atteigne le caractère nul ('\0').
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);

	_puts_recursion(s + 1);
}
