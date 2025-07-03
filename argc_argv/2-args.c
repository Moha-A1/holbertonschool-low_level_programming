#include <stdio.h>


/**
 * main - Point d'entrée du programme.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaînes de caractères des arguments.
 *
 * Description:
 * Ce programme affiche tous les arguments reçus, un par ligne.
 *
 * Return: Toujours 0 (Succès).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
