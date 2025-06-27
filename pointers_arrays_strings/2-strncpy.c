#include "main.h"
/**
 * _strncpy - Copie une chaîne de caractères, en utilisant au plus 'n'
 * octets.
 * Cette fonction copie les caractères de 'src' vers 'dest'.
 * Si 'src' est plus courte que 'n', le reste de 'dest' (jusqu'à 'n' octets)
 * est rempli avec des null bytes ('\0').
 * Si 'src' est plus longue ou égale à 'n', le null byte de 'src' peut ne pas
 * être copié, ce qui signifie que 'dest' pourrait ne pas être terminée
 * par un null byte par cette fonction.
 * @dest: Le pointeur vers le buffer de destination.
 * @src: Le pointeur vers la chaîne source.
 * @n: Le nombre maximal d'octets (caractères) à copier.
 *
 * Return: Un pointeur vers la chaîne résultante 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /* Index pour parcourir les chaînes et compter les octets copiés. */

	/*
	 * Boucle 'for' pour copier au plus 'n' caractères de 'src' vers 'dest'.
	 * La boucle continue tant que :
	 * 1. L'index 'i' est inférieur à 'n' (le nombre maximal de caractères à
	 *    copier).
	 * 2. Le caractère actuel de 'src' n'est pas le null byte ('\0').
	 *
	 * Cette boucle copie les caractères tant que 'src' a des caractères et que
	 * la limite 'n' n'est pas atteinte.
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* Copie le caractère de 'src' à 'dest'. */
	}

	/*
	 * Après la boucle, si 'i' est inférieur à 'n', cela signifie que :
	 * 1. La chaîne 'src' était plus courte que 'n'.
	 * 2. La boucle s'est arrêtée parce qu'elle a rencontré le '\0' de 'src'.
	 *
	 * Dans ce cas, les octets restants de 'dest' (de l'index 'i' jusqu'à 'n-1')
	 * doivent être remplis avec des null bytes ('\0') pour correspondre au
	 * comportement de la fonction standard .
	 */
	for (; i < n; i++)
	{
		dest[i] = '\0'; /* Remplit les octets restants avec des null bytes. */
	}

	/*
	 * La fonction retourne un pointeur vers la chaîne de destination
	 * modifiée.
	 */
	return (dest);
}
