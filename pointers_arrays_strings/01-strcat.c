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
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0; /* Variable pour stocker la longueur actuelle de 'dest'. */
	int i = 0;        /* Index pour parcourir la chaîne 'src'. */

	/* Étape 1 : Trouver la longueur de la chaîne de destination ('dest').
	 * On parcourt 'dest' jusqu'à trouver son null byte ('\0').
	 * 'dest_len' contiendra l'index du null byte (donc la longueur).
	 */
	while (dest[dest_len] != '\0')
	{
		dest_len++; /* Incrémente la longueur. */
	}

	/* Étape 2 : Copier les caractères de 'src' à la fin de 'dest'.
	 * La copie commence à l'index 'dest_len' (qui était l'emplacement du null byte de 'dest').
	 * La boucle continue tant qu'on n'a pas atteint le null byte de 'src'.
	 * Le null byte de 'src' sera copié dans la dernière itération.
	 */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i]; /* Copie le caractère de 'src' à la suite de 'dest'. */
		i++;                         /* Incrémente l'index pour 'src'. */
	}

	/* Une fois que tous les caractères de 'src' (y compris son '\0') ont été copiés,
	 * la chaîne 'dest' est correctement terminée.
	 * La dernière itération de la boucle aura copié le '\0' de src à dest[dest_len + i].
	 * Il n'est donc pas nécessaire d'ajouter un '\0' explicitement ici.
	 * (dest_len + i) est maintenant la position du null byte final.
	 */
	dest[dest_len + i] = '\0'; /* S'assurer que le null byte est bien là,
                                 * car si src était vide, la deuxième boucle
                                 * ne s'exécuterait pas et dest_len ne changerait pas.
                                 * Cette ligne est une sécurité et est correcte même si le '\0'
                                 * de src a été copié. Elle est nécessaire si src est une chaîne vide.
                                 */

	/* La fonction doit retourner un pointeur vers la chaîne de destination modifiée.
	 * 'dest' pointe toujours vers le début du buffer de destination.
	 */
	return (dest);
}
