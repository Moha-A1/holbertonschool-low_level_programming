#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Affiche des nombres entiers, suivis d'une nouvelle ligne.
 * @separator: La chaîne de caractères à utiliser comme séparateur
 * @n: Le nombre d'entiers passés à la fonction.
 * @...: Les entiers à afficher.
 *
 * Return: Rien (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	if (n == 0)
	{
		printf("\n");
		return;
	}


	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
