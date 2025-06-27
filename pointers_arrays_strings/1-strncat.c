#include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractères, en utilisant au plus 'n' octets de 'src'.
 * Cette fonction ajoute la chaîne 'src' à la fin de la chaîne 'dest',
 * mais ne copie pas plus de 'n' octets de 'src'.
 * Le null byte final de 'dest' est écrasé, et un nouveau null byte
 * est ajouté à la fin de la chaîne concaténée.
 * @dest: Le pointeur vers la chaîne de destination.
 * @src: Le pointeur vers la chaîne source.
 * @n: Le nombre maximal d'octets (caractères) à copier de 'src'.
 *
 * Return: Un pointeur vers la chaîne résultante 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0; /* Variable pour stocker la longueur actuelle de 'dest'. */
	int i = 0;        /* Index pour parcourir la chaîne 'src' et */
					  /* compter les octets copiés. */

	/*
	 * Étape 1 : Trouver la longueur de la chaîne de destination ('dest').
	 * On parcourt 'dest' jusqu'à trouver son null byte ('\0').
	 * 'dest_len' contiendra l'index du null byte.
	 */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*
	 * Étape 2 : Copier les caractères de 'src' à la fin de 'dest',
	 * jusqu'à 'n' octets.
	 * La boucle continue tant que :
	 * 1. Le caractère actuel de 'src' n'est pas le null byte ('\0').
	 * 2. Le nombre de caractères copiés ('i') est inférieur à 'n'.
	 * La boucle s'arrête dès que l'une de ces conditions devient fausse.
	 */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i]; /* Copie le caractère. */
		i++; /* Incrémente l'index des caractères copiés. */
	}

	/*
	 * Étape 3 : Ajouter le null byte final à la chaîne de destination.
	 * C'est essentiel pour que la chaîne 'dest' soit correctement terminée.
	 * 'dest_len + i' est la position où le null byte doit être placé.
	 */
	dest[dest_len + i] = '\0';

	/* La fonction retourne un pointeur vers la chaîne de destination */
	/* modifiée. */
	return (dest);
}
