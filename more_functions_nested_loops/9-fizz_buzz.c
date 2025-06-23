#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description :
 * Affiche les nombres de 1 à 100, séparés par un espace.
 * - Si le nombre est un multiple de 3, affiche "Fizz"
 * - Si le nombre est un multiple de 5, affiche "Buzz"
 * - Si le nombre est un multiple de 3 ET de 5, affiche "FizzBuzz"
 * - Sinon, affiche simplement le nombre
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++) /* boucle de 1 à 100 */
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			/* Si i est multiple de 3 et 5 */
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			/* Si i est seulement multiple de 3 */
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			/* Si i est seulement multiple de 5 */
			printf("Buzz");
		}
		else
		{
			/* Sinon, afficher simplement le nombre */
			printf("%d", i);
		}

		if (i < 100)
		{
			/* Ne pas mettre d’espace après le dernier élément */
			printf(" ");
		}
	}

	printf("\n"); /* Nouvelle ligne à la fin */
	return (0);
}
