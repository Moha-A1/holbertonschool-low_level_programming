#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Point d'entrée du programme de calculatrice.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Un tableau de chaînes de caractères contenant les arguments.
 *
 * Return: 0 en cas de succès, ou un code d'erreur sinon.
 */
int main(int argc, char *argv[])
{
	int num1, num2, resultat;
	char *operateur;
	int (*func_ptr)(int, int);

	/* Vérifie si le nombre d'arguments est correct (calc num1 op num2) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Récupère les nombres et l'opérateur */
	num1 = atoi(argv[1]);
	operateur = argv[2];
	num2 = atoi(argv[3]);

	/* Récupère la fonction de calcul correspondante */
	func_ptr = get_op_func(operateur);

	/* Vérifie si l'opérateur est valide */
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Vérifie la division ou le modulo par zéro */
	if ((*operateur == '/' || *operateur == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Effectue le calcul et affiche le résultat */
	resultat = func_ptr(num1, num2);
	printf("%d\n", resultat);

	return (0);
}
