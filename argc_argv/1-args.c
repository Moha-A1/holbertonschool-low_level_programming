#include <stdio.h>


/**
 * main - Point d'entrée du programme.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaînes de caractères des arguments.
 *
 * Description:
 * Ce programme affiche le nombre d'arguments passés,
 * en excluant le nom du programme.
 *
 * Return: Toujours 0 (Succès).
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
