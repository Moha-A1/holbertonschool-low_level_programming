#include <stdio.h>
#include <stdlib.h>


/**
 * main - Point d'entrée du programme.
 * @argc: Nombre d'arguments de la ligne de commande.
 * @argv: Tableau de chaînes de caractères des arguments.
 *
 * Return: 0 en cas de succès, 1 en cas d'erreur.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
