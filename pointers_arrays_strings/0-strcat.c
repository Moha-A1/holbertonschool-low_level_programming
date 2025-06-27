#include "main.h"
/**
 * _strcat - Concatène deux chaînes de caractères.
 * Cette fonction ajoute la chaîne 'src' à la fin de la chaîne 'dest'.
 * Le null byte final de 'dest' est écrasé, et un nouveau null byte
 * est ajouté à la fin de la chaîne concaténée.
 * @dest: Le pointeur vers la chaîne de destination (où 'src' sera ajoutée).
 * @src: Le pointeur vers la chaîne source (à ajouter).
 *
 * Return: Un pointeur vers la chaîne résultante 'dest'.
 *
 * Étape 1 : Trouver la longueur de la chaîne de destination ('dest').
 * Étape 2 : Copier les caractères de 'src' à la fin de 'dest'.
 * S'assurer que le null byte est bien là à la fin.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
