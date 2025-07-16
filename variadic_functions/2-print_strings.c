#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Affiche des chaînes de caractères
 * @separator: La chaîne de caractères à utiliser comme séparateur
 * @n: Le nombre de chaînes passées à la fonction.
 * @...: Les arguments variables (les chaînes de caractères à afficher).
 *
 * Return: Rien (void).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
