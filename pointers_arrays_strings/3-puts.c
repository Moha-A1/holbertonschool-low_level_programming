#include "main.h"

/**
 * _puts - Affiche une chaîne de caractères, suivie d'un saut de ligne,
 * sur la sortie standard (stdout).
 * @str: Un pointeur vers le premier caractère de la chaîne à afficher.
 *
 * Return: Cette fonction ne retourne rien (void), car son rôle est d'afficher
 * directement des caractères.
 */
void _puts(char *str)
{
	/**
	 * Boucle tant que le caractère actuel pointé par 'str' n'est PAS
	 * le null byte ('\0'). Le null byte marque la fin de la chaîne en C.
	 */
	while (*str != '\0')
	{
		/*
		 * Affiche le caractère actuel. L'opérateur '*' déréférence le pointeur
		 * 'str' pour obtenir la VALEUR (le caractère) à cette adresse.
		 * _putchar prend un seul caractère entre apostrophes simples.
		 */
		_putchar(*str);

		/*
		 * Avance le pointeur 'str' au caractère suivant dans la chaîne.
		 * C'est comme déplacer ta "carte" au wagon suivant du train.
		 */
		str++;
	}

	/*
	 * Après avoir affiché tous les caractères de la chaîne (c'est-à-dire
	 * après avoir atteint le null byte et être sorti de la boucle),
	 * affiche un saut de ligne.
	 */
	_putchar('\n');
}
